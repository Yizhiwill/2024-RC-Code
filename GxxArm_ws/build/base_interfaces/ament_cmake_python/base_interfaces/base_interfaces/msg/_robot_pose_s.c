// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces:msg/RobotPose.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "base_interfaces/msg/detail/robot_pose__struct.h"
#include "base_interfaces/msg/detail/robot_pose__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__msg__robot_pose__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("base_interfaces.msg._robot_pose.RobotPose", full_classname_dest, 41) == 0);
  }
  base_interfaces__msg__RobotPose * ros_message = _ros_message;
  {  // temp_arm_angle1
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_arm_angle1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_arm_angle1 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_arm_angle2
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_arm_angle2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_arm_angle2 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_arm_angle3
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_arm_angle3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_arm_angle3 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_arm_angle4
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_arm_angle4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_arm_angle4 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_arm_angle5
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_arm_angle5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_arm_angle5 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // temp_arm_angle6
    PyObject * field = PyObject_GetAttrString(_pymsg, "temp_arm_angle6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->temp_arm_angle6 = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__msg__robot_pose__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RobotPose */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.msg._robot_pose");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RobotPose");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__msg__RobotPose * ros_message = (base_interfaces__msg__RobotPose *)raw_ros_message;
  {  // temp_arm_angle1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_arm_angle1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_arm_angle1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_arm_angle2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_arm_angle2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_arm_angle2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_arm_angle3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_arm_angle3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_arm_angle3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_arm_angle4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_arm_angle4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_arm_angle4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_arm_angle5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_arm_angle5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_arm_angle5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // temp_arm_angle6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->temp_arm_angle6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "temp_arm_angle6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
