import socket


def server_program():
    # get the hostname
    host = socket.gethostname()
    port = 5000  # initiate port no above 1024
    server_socket = socket.socket()  # get instance
    # look closely. The bind() function takes tuple as argument  server_socket.bind((host, port)) # bind host address and port together
    # configure how many client the server can listen simultaneously  server_socket.listen(2)
    # accept new connection  print("Connection from: " + str(address))
    conn, address = server_socket.accept()
    print("Client connected ")

    conn.close()  # close the connection


if __name__ == '__main__':
    server_program()
