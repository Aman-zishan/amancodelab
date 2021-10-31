import 'package:flutter/material.dart';
import 'package:tasker/screens/todo_list_screen.dart';

void main() {
  runApp(MyApp());
}

class MyApp extends StatelessWidget {
  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      debugShowCheckedModeBanner: false,
      title: 'Tasker',
      theme: ThemeData(
        primarySwatch: Colors.indigo,
      ),
      home: TodoListScreen(),
    );
  }
}
