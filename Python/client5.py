import socket


def client_program():
    port=5000
    # as both code is running on same pc  port = 5000 # socket server port number
    host = socket.gethostname()
    client_socket = socket.socket()  # instantiate
    # connect to the server  print('server connected ')# + data) # show in terminal  client_socket.close() # close the connection
    client_socket.connect((host, port))


if __name__ == '__main__':
    client_program()
