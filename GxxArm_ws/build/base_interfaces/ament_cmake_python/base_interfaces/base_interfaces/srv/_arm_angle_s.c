// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from base_interfaces:srv/ArmAngle.idl
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
#include "base_interfaces/srv/detail/arm_angle__struct.h"
#include "base_interfaces/srv/detail/arm_angle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__srv__arm_angle__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("base_interfaces.srv._arm_angle.ArmAngle_Request", full_classname_dest, 47) == 0);
  }
  base_interfaces__srv__ArmAngle_Request * ros_message = _ros_message;
  {  // x
    PyObject * field = PyObject_GetAttrString(_pymsg, "x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->x = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // y
    PyObject * field = PyObject_GetAttrString(_pymsg, "y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->y = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // z
    PyObject * field = PyObject_GetAttrString(_pymsg, "z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->z = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // roll
    PyObject * field = PyObject_GetAttrString(_pymsg, "roll");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->roll = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // pit
    PyObject * field = PyObject_GetAttrString(_pymsg, "pit");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->pit = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // yaw
    PyObject * field = PyObject_GetAttrString(_pymsg, "yaw");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->yaw = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__srv__arm_angle__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArmAngle_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.srv._arm_angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArmAngle_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__srv__ArmAngle_Request * ros_message = (base_interfaces__srv__ArmAngle_Request *)raw_ros_message;
  {  // x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // roll
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->roll);
    {
      int rc = PyObject_SetAttrString(_pymessage, "roll", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // pit
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->pit);
    {
      int rc = PyObject_SetAttrString(_pymessage, "pit", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // yaw
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->yaw);
    {
      int rc = PyObject_SetAttrString(_pymessage, "yaw", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "base_interfaces/srv/detail/arm_angle__struct.h"
// already included above
// #include "base_interfaces/srv/detail/arm_angle__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool base_interfaces__srv__arm_angle__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[49];
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
    assert(strncmp("base_interfaces.srv._arm_angle.ArmAngle_Response", full_classname_dest, 48) == 0);
  }
  base_interfaces__srv__ArmAngle_Response * ros_message = _ros_message;
  {  // success
    PyObject * field = PyObject_GetAttrString(_pymsg, "success");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->success = (Py_True == field);
    Py_DECREF(field);
  }
  {  // target_arm_angle1
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_arm_angle1");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_arm_angle1 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_arm_angle2
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_arm_angle2");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_arm_angle2 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_arm_angle3
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_arm_angle3");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_arm_angle3 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_arm_angle4
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_arm_angle4");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_arm_angle4 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_arm_angle5
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_arm_angle5");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_arm_angle5 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // target_arm_angle6
    PyObject * field = PyObject_GetAttrString(_pymsg, "target_arm_angle6");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->target_arm_angle6 = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * base_interfaces__srv__arm_angle__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ArmAngle_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("base_interfaces.srv._arm_angle");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ArmAngle_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  base_interfaces__srv__ArmAngle_Response * ros_message = (base_interfaces__srv__ArmAngle_Response *)raw_ros_message;
  {  // success
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->success ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "success", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_arm_angle1
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_arm_angle1);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_arm_angle1", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_arm_angle2
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_arm_angle2);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_arm_angle2", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_arm_angle3
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_arm_angle3);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_arm_angle3", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_arm_angle4
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_arm_angle4);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_arm_angle4", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_arm_angle5
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_arm_angle5);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_arm_angle5", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // target_arm_angle6
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->target_arm_angle6);
    {
      int rc = PyObject_SetAttrString(_pymessage, "target_arm_angle6", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
