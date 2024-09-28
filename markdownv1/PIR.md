## What is a PIR Sensor? 
<hr>

<img src="/imagesv1/full.jpg" alt="complete-PIR-Sensor" width="800px">
<p>
  A Passive Infrared (PIR) sensor is a device used to detect infrared radiation, which is essentially heat emitted by objects. In simple terms, anything that produces heat—like humans, animals, and even plants—     emits infrared radiation. Understanding infrared radiation is important across various fields. For example, engineers use infrared technology to ensure safety and structural integrity, while doctors rely on       infrared imaging to analyze heat patterns in the body, helping them make more informed diagnoses.
</p>
<br>

## Top Parts 
<hr>

<img src="/imagesv1/topart.jpg" alt="top-part-of-arduino" width="800px">
<p>
  The component on the left side is a <b> Pyroelectric sensor, </b> the main component that detects infrared radiation. Inside the sensor are <b> 2 electrodes </b> connected to the pyroelectric material. Once an object with IR radiation hits the first one it says "this got a lil heat" then once it hits the second one it says "oh this is real, i got to notify this to someone". That "someone" can be a relay that controls a motor or a microcontroller on a arduino which is essentially the brain to process information.   
</p>
<p>
  The component on the right side is called a <b> Fresnel Lens. </b> It's job is to focus the incoming IR radiation from a wide view around it and focus it onto the pyroelectric sensor beneath it. As you can see, there are little hexagons on it which are tiny lenses, allowing it to capture IR radiation from multiple points and concentrate it onto the sensor.
</p>

## Side Parts
<hr>

<img src="/imagesv1/potentiometers.jpg" alt="time-delay-+-range" width="800px">
<p>
  A <b> Potentiometer </b> is essentially an adjustable resistor. But what even is a resistor? A resistor is a device used to limit the flow of electrical current in a circuit. This is important because many components in a circuit might receive too much current, which could lead to their failure. By using resistors to balance the load, you can efficiently control and achieve the desired performance of various components in the circuit.
</p> 
<p>
  Now that we have this in mind, some resistors are <b> fixed </b> and some are <b> variable </b> and in this case, we are using a potentiometer which is a variable resistor.
</p>
<p>
  The <b> left </b> is used to adjust how long you want the sensor to stay on. If you turn it counter-clockwise, it decreases time delay and if you turn it clockwise, it increases time delay. 
</p>
<p>
   The <b> right </b> one is used to adjust the range sensitivity. This means that if you turn the potentiometer counter-clockwise, it will detect closer: limiting the range. If you turn it clockwise, it will    detect further: increasing the range. 
</p>
