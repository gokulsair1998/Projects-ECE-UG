C0NCEPT OF PROJECT:
1. Read the photograph or image: If image’s dimensions are on higher side, you
might prefer to scale it down for faster processing and to resize it in current
window.
2. Identify the edges: To do this we might have to convert it to gray to reduce any
colour noise. To remove any high frequency noise, we will blur the image a bit.
This will help in detecting contours.
3. Detect document edges in the image: This will outline the region-of-interest in
image. We would be able to see the outline of our document in this step.
4. Identify and extract document boundary/edges: In this most code intensive part,
we will classify each of the coordinate as per its corner and will calculate
document dimensions.
5. Apply perspective transform: To obtain a top-down, “bird-eye-view” of the
document, we will transform the extracted region-of-interest into required
perspective.
6. Final steps: Here we will prepare image for final display. This step might be
optional and it totally depends how you wish to see your document or want to
apply any transformation such as black-and-white or increase contrast etc