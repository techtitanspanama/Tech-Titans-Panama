
import cv2 as cv
import mediapipe as mp
import serial
import pyglet
import time

#Variables
displayMessage = ""
ser = serial.Serial('COM23', 9600) #'COM23' should be changed to match where your arduino is connected.
mp_drawing = mp.solutions.drawing_utils
mp_drawing_styles = mp.solutions.drawing_styles
mp_hands = mp.solutions.hands

ser.close()
ser.open()


#Functions:

def getY(joint):
    yval = round(hand_landmarks.landmark[getattr(mp_hands.HandLandmark, joint)].y * image_height)
    return (yval)

def getX(joint):
    xval = round(hand_landmarks.landmark[getattr(mp_hands.HandLandmark, joint)].x * image_height)
    return (xval)

def getHand():
    #Returns the current status of each finger that is visible as a boolean to represent whether it they are up or down.
    pinky = getY('PINKY_PIP') < getY('PINKY_TIP')
    ring = getY('RING_FINGER_PIP') < getY('RING_FINGER_TIP')
    middle = getY('MIDDLE_FINGER_PIP') < getY('MIDDLE_FINGER_TIP')
    index = getY('INDEX_FINGER_PIP') < getY('INDEX_FINGER_TIP')
    thumb = getX('THUMB_MCP') > getX('THUMB_TIP')
    return[thumb, index, middle, ring, pinky]

def drawHands():
    mp_drawing.draw_landmarks(
    frame,
    hand_landmarks,
    mp_hands.HAND_CONNECTIONS,
    mp_drawing_styles.get_default_hand_landmarks_style(),
    mp_drawing_styles.get_default_hand_connections_style()
    )

#Main hand tracking
video = cv.VideoCapture(0)
with mp_hands.Hands(
    model_complexity=0,
    min_detection_confidence=0.5,
    min_tracking_confidence=0.5,
    max_num_hands=1
    ) as hands:

    while video.isOpened():
        success, frame = video.read()
        image_height, image_width, _ = frame.shape
        #Converts to RGB before processing.
        frame.flags.writeable = False
        frame = cv.cvtColor(frame, cv.COLOR_RGB2BGR)
        results = hands.process(frame)

        #Converts back to BGR.
        frame.flags.writeable = True
        frame = cv.cvtColor(frame, cv.COLOR_RGB2BGR)

        if results.multi_hand_landmarks:
            for hand_landmarks in results.multi_hand_landmarks:
                drawHands()

            #Checks  hand 
            if getHand() == [True, False, True, True, False]:
                ser.write(str.encode('C'))
                
        
    
                    
            if getHand() == [False, True, True, True, True]:
                 ser.write(str.encode('G'))       
    
            if getHand() == [False, False, False, False, False]:
                ser.write(str.encode('O'))
                
            if getHand() == [True, False, False, True, True]:
                 ser.write(str.encode('A'))   
                 time.sleep(0.3)
            
            if getHand() == [True, False, True, True, True]:
                ser.write(str.encode('B')) 
                time.sleep(0.3)
                sound1 = pyglet.resource.media('listo.wav', streaming=False)
                sound1.play()
                time.sleep(0.3)
        #Shows the frame, also inverts the frame to make it appear as it should.
        frame = cv.flip(frame, 11)
        cv.putText(frame, displayMessage, (50,450), cv.FONT_HERSHEY_SIMPLEX, .5, (160, 0, 0), 2)
        cv.imshow('Hand Track', frame)
        
        #Ends the loop.
        if cv.waitKey(10) & 0xFF ==ord('d'):
            break

        

video.release()
cv.destroyAllWindows
