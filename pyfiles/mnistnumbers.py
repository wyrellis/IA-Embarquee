import imread

def create_files(images,numbers):
	for i in range(len(images)):
		imread.imsave('numbers/'+str(i)+'-'+str(numbers[i])+'.tif',images[i])
