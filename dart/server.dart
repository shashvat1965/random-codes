import 'dart:io';

Future<void> main() async {
  // Bind the server to the localhost interface on port 8080
  final server = await HttpServer.bind(InternetAddress.loopbackIPv4, 8080);

  // Print a message when the server starts listening
  print('Listening on localhost:${server.port}');

  // Listen for incoming HTTP requests
  await for (final request in server) {
    // Send a response to the client
    request.response
      ..headers.contentType = ContentType.text
      ..write('Hello, world!')
      ..close();
  }
}
