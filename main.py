import time
import serial
import cv2
import matplotlib.pyplot as plt
import cvlib as cv
from cvlib.object_detection import draw_bbox

arduino = serial.Serial(port='COM6', baudrate=115200, timeout=.1)

def write_read(x):
    arduino.write(bytes(x, 'utf-8'))
    time.sleep(0.05)
    data = arduino.readline()
    return data

while (True):

    camera = cv2.VideoCapture(1) #make it "1" when you are using a webcam
    
    return_value, image = camera.read()
    cv2.imwrite('cars.png', image)
    del(camera)

    im = cv2.imread('cars.png')
    bbox, label, conf = cv.detect_common_objects(im)
    output_image = draw_bbox(im, bbox, label, conf)
    print('Number of cars in the image is '+ str(label.count('car')))
    plt.imshow(output_image)
    plt.show()
    #print('Number of cars in the image is '+ str(label.count('car')))

    car_val = label.count('car')
    print(car_val)

    if (car_val >= 1):
        value = write_read(str(10))
        print(value)
    else:
        value = write_read(str(1001))


    time.sleep(35)
