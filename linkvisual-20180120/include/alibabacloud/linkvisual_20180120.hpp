// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LINKVISUAL20180120_H_
#define ALIBABACLOUD_LINKVISUAL20180120_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Linkvisual20180120 {
class AddEventRecordPlanDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> planId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> streamType{};

  AddEventRecordPlanDeviceRequest() {}

  explicit AddEventRecordPlanDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~AddEventRecordPlanDeviceRequest() = default;
};
class AddEventRecordPlanDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddEventRecordPlanDeviceResponseBody() {}

  explicit AddEventRecordPlanDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddEventRecordPlanDeviceResponseBody() = default;
};
class AddEventRecordPlanDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddEventRecordPlanDeviceResponseBody> body{};

  AddEventRecordPlanDeviceResponse() {}

  explicit AddEventRecordPlanDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddEventRecordPlanDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEventRecordPlanDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~AddEventRecordPlanDeviceResponse() = default;
};
class AddFaceDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceGroupName{};
  shared_ptr<string> isolationId{};

  AddFaceDeviceGroupRequest() {}

  explicit AddFaceDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupName) {
      res["DeviceGroupName"] = boost::any(*deviceGroupName);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupName") != m.end() && !m["DeviceGroupName"].empty()) {
      deviceGroupName = make_shared<string>(boost::any_cast<string>(m["DeviceGroupName"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
  }


  virtual ~AddFaceDeviceGroupRequest() = default;
};
class AddFaceDeviceGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> deviceGroupName{};
  shared_ptr<string> modifiedTime{};

  AddFaceDeviceGroupResponseBodyData() {}

  explicit AddFaceDeviceGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (deviceGroupName) {
      res["DeviceGroupName"] = boost::any(*deviceGroupName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("DeviceGroupName") != m.end() && !m["DeviceGroupName"].empty()) {
      deviceGroupName = make_shared<string>(boost::any_cast<string>(m["DeviceGroupName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
  }


  virtual ~AddFaceDeviceGroupResponseBodyData() = default;
};
class AddFaceDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddFaceDeviceGroupResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddFaceDeviceGroupResponseBody() {}

  explicit AddFaceDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddFaceDeviceGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddFaceDeviceGroupResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddFaceDeviceGroupResponseBody() = default;
};
class AddFaceDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFaceDeviceGroupResponseBody> body{};

  AddFaceDeviceGroupResponse() {}

  explicit AddFaceDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddFaceDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceDeviceGroupResponse() = default;
};
class AddFaceDeviceToDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> productKey{};

  AddFaceDeviceToDeviceGroupRequest() {}

  explicit AddFaceDeviceToDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~AddFaceDeviceToDeviceGroupRequest() = default;
};
class AddFaceDeviceToDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddFaceDeviceToDeviceGroupResponseBody() {}

  explicit AddFaceDeviceToDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddFaceDeviceToDeviceGroupResponseBody() = default;
};
class AddFaceDeviceToDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFaceDeviceToDeviceGroupResponseBody> body{};

  AddFaceDeviceToDeviceGroupResponse() {}

  explicit AddFaceDeviceToDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddFaceDeviceToDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceDeviceToDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceDeviceToDeviceGroupResponse() = default;
};
class AddFaceUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> customUserId{};
  shared_ptr<string> facePicUrl{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};

  AddFaceUserRequest() {}

  explicit AddFaceUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (facePicUrl) {
      res["FacePicUrl"] = boost::any(*facePicUrl);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("FacePicUrl") != m.end() && !m["FacePicUrl"].empty()) {
      facePicUrl = make_shared<string>(boost::any_cast<string>(m["FacePicUrl"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~AddFaceUserRequest() = default;
};
class AddFaceUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> customUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<string> userId{};

  AddFaceUserResponseBodyData() {}

  explicit AddFaceUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddFaceUserResponseBodyData() = default;
};
class AddFaceUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddFaceUserResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddFaceUserResponseBody() {}

  explicit AddFaceUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddFaceUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddFaceUserResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddFaceUserResponseBody() = default;
};
class AddFaceUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFaceUserResponseBody> body{};

  AddFaceUserResponse() {}

  explicit AddFaceUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddFaceUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceUserResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceUserResponse() = default;
};
class AddFaceUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<string> userGroupName{};

  AddFaceUserGroupRequest() {}

  explicit AddFaceUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
  }


  virtual ~AddFaceUserGroupRequest() = default;
};
class AddFaceUserGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userGroupName{};

  AddFaceUserGroupResponseBodyData() {}

  explicit AddFaceUserGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
  }


  virtual ~AddFaceUserGroupResponseBodyData() = default;
};
class AddFaceUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddFaceUserGroupResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddFaceUserGroupResponseBody() {}

  explicit AddFaceUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddFaceUserGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddFaceUserGroupResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddFaceUserGroupResponseBody() = default;
};
class AddFaceUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFaceUserGroupResponseBody> body{};

  AddFaceUserGroupResponse() {}

  explicit AddFaceUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddFaceUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceUserGroupResponse() = default;
};
class AddFaceUserGroupAndDeviceGroupRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> relation{};
  shared_ptr<string> userGroupId{};

  AddFaceUserGroupAndDeviceGroupRelationRequest() {}

  explicit AddFaceUserGroupAndDeviceGroupRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~AddFaceUserGroupAndDeviceGroupRelationRequest() = default;
};
class AddFaceUserGroupAndDeviceGroupRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> controlId{};
  shared_ptr<string> modifiedTime{};

  AddFaceUserGroupAndDeviceGroupRelationResponseBodyData() {}

  explicit AddFaceUserGroupAndDeviceGroupRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlId) {
      res["ControlId"] = boost::any(*controlId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlId") != m.end() && !m["ControlId"].empty()) {
      controlId = make_shared<string>(boost::any_cast<string>(m["ControlId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
  }


  virtual ~AddFaceUserGroupAndDeviceGroupRelationResponseBodyData() = default;
};
class AddFaceUserGroupAndDeviceGroupRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<AddFaceUserGroupAndDeviceGroupRelationResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddFaceUserGroupAndDeviceGroupRelationResponseBody() {}

  explicit AddFaceUserGroupAndDeviceGroupRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        AddFaceUserGroupAndDeviceGroupRelationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddFaceUserGroupAndDeviceGroupRelationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddFaceUserGroupAndDeviceGroupRelationResponseBody() = default;
};
class AddFaceUserGroupAndDeviceGroupRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFaceUserGroupAndDeviceGroupRelationResponseBody> body{};

  AddFaceUserGroupAndDeviceGroupRelationResponse() {}

  explicit AddFaceUserGroupAndDeviceGroupRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddFaceUserGroupAndDeviceGroupRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceUserGroupAndDeviceGroupRelationResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceUserGroupAndDeviceGroupRelationResponse() = default;
};
class AddFaceUserPictureRequest : public Darabonba::Model {
public:
  shared_ptr<string> facePicUrl{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> userId{};

  AddFaceUserPictureRequest() {}

  explicit AddFaceUserPictureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (facePicUrl) {
      res["FacePicUrl"] = boost::any(*facePicUrl);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FacePicUrl") != m.end() && !m["FacePicUrl"].empty()) {
      facePicUrl = make_shared<string>(boost::any_cast<string>(m["FacePicUrl"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddFaceUserPictureRequest() = default;
};
class AddFaceUserPictureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddFaceUserPictureResponseBody() {}

  explicit AddFaceUserPictureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddFaceUserPictureResponseBody() = default;
};
class AddFaceUserPictureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFaceUserPictureResponseBody> body{};

  AddFaceUserPictureResponse() {}

  explicit AddFaceUserPictureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddFaceUserPictureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceUserPictureResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceUserPictureResponse() = default;
};
class AddFaceUserToUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userId{};

  AddFaceUserToUserGroupRequest() {}

  explicit AddFaceUserToUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~AddFaceUserToUserGroupRequest() = default;
};
class AddFaceUserToUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddFaceUserToUserGroupResponseBody() {}

  explicit AddFaceUserToUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddFaceUserToUserGroupResponseBody() = default;
};
class AddFaceUserToUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddFaceUserToUserGroupResponseBody> body{};

  AddFaceUserToUserGroupResponse() {}

  explicit AddFaceUserToUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddFaceUserToUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddFaceUserToUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~AddFaceUserToUserGroupResponse() = default;
};
class AddRecordPlanDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> planId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> streamType{};

  AddRecordPlanDeviceRequest() {}

  explicit AddRecordPlanDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~AddRecordPlanDeviceRequest() = default;
};
class AddRecordPlanDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddRecordPlanDeviceResponseBody() {}

  explicit AddRecordPlanDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~AddRecordPlanDeviceResponseBody() = default;
};
class AddRecordPlanDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddRecordPlanDeviceResponseBody> body{};

  AddRecordPlanDeviceResponse() {}

  explicit AddRecordPlanDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        AddRecordPlanDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddRecordPlanDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~AddRecordPlanDeviceResponse() = default;
};
class BatchQueryVisionDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> deviceNameList{};
  shared_ptr<vector<string>> iotIdList{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  BatchQueryVisionDeviceInfoRequest() {}

  explicit BatchQueryVisionDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceNameList) {
      res["DeviceNameList"] = boost::any(*deviceNameList);
    }
    if (iotIdList) {
      res["IotIdList"] = boost::any(*iotIdList);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceNameList") != m.end() && !m["DeviceNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IotIdList") != m.end() && !m["IotIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["IotIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["IotIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      iotIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~BatchQueryVisionDeviceInfoRequest() = default;
};
class BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListGbDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<long> deviceProtocol{};
  shared_ptr<string> gbId{};
  shared_ptr<long> netProtocol{};
  shared_ptr<string> nickName{};
  shared_ptr<string> password{};
  shared_ptr<string> subProductKey{};

  BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListGbDeviceInfo() {}

  explicit BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListGbDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceProtocol) {
      res["DeviceProtocol"] = boost::any(*deviceProtocol);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (netProtocol) {
      res["NetProtocol"] = boost::any(*netProtocol);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (subProductKey) {
      res["SubProductKey"] = boost::any(*subProductKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceProtocol") != m.end() && !m["DeviceProtocol"].empty()) {
      deviceProtocol = make_shared<long>(boost::any_cast<long>(m["DeviceProtocol"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("NetProtocol") != m.end() && !m["NetProtocol"].empty()) {
      netProtocol = make_shared<long>(boost::any_cast<long>(m["NetProtocol"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("SubProductKey") != m.end() && !m["SubProductKey"].empty()) {
      subProductKey = make_shared<string>(boost::any_cast<string>(m["SubProductKey"]));
    }
  }


  virtual ~BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListGbDeviceInfo() = default;
};
class BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListRtmpDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> pullAuthKey{};
  shared_ptr<long> pullKeyExpireTime{};
  shared_ptr<string> pushAuthKey{};
  shared_ptr<long> pushKeyExpireTime{};
  shared_ptr<string> pushUrlSample{};
  shared_ptr<string> streamName{};
  shared_ptr<long> streamStatus{};

  BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListRtmpDeviceInfo() {}

  explicit BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListRtmpDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pullAuthKey) {
      res["PullAuthKey"] = boost::any(*pullAuthKey);
    }
    if (pullKeyExpireTime) {
      res["PullKeyExpireTime"] = boost::any(*pullKeyExpireTime);
    }
    if (pushAuthKey) {
      res["PushAuthKey"] = boost::any(*pushAuthKey);
    }
    if (pushKeyExpireTime) {
      res["PushKeyExpireTime"] = boost::any(*pushKeyExpireTime);
    }
    if (pushUrlSample) {
      res["PushUrlSample"] = boost::any(*pushUrlSample);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (streamStatus) {
      res["StreamStatus"] = boost::any(*streamStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PullAuthKey") != m.end() && !m["PullAuthKey"].empty()) {
      pullAuthKey = make_shared<string>(boost::any_cast<string>(m["PullAuthKey"]));
    }
    if (m.find("PullKeyExpireTime") != m.end() && !m["PullKeyExpireTime"].empty()) {
      pullKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PullKeyExpireTime"]));
    }
    if (m.find("PushAuthKey") != m.end() && !m["PushAuthKey"].empty()) {
      pushAuthKey = make_shared<string>(boost::any_cast<string>(m["PushAuthKey"]));
    }
    if (m.find("PushKeyExpireTime") != m.end() && !m["PushKeyExpireTime"].empty()) {
      pushKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PushKeyExpireTime"]));
    }
    if (m.find("PushUrlSample") != m.end() && !m["PushUrlSample"].empty()) {
      pushUrlSample = make_shared<string>(boost::any_cast<string>(m["PushUrlSample"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("StreamStatus") != m.end() && !m["StreamStatus"].empty()) {
      streamStatus = make_shared<long>(boost::any_cast<long>(m["StreamStatus"]));
    }
  }


  virtual ~BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListRtmpDeviceInfo() = default;
};
class BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoList : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> deviceType{};
  shared_ptr<BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListGbDeviceInfo> gbDeviceInfo{};
  shared_ptr<string> iotId{};
  shared_ptr<BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListRtmpDeviceInfo> rtmpDeviceInfo{};

  BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoList() {}

  explicit BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (gbDeviceInfo) {
      res["GbDeviceInfo"] = gbDeviceInfo ? boost::any(gbDeviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (rtmpDeviceInfo) {
      res["RtmpDeviceInfo"] = rtmpDeviceInfo ? boost::any(rtmpDeviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<long>(boost::any_cast<long>(m["DeviceType"]));
    }
    if (m.find("GbDeviceInfo") != m.end() && !m["GbDeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["GbDeviceInfo"].type()) {
        BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListGbDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GbDeviceInfo"]));
        gbDeviceInfo = make_shared<BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListGbDeviceInfo>(model1);
      }
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("RtmpDeviceInfo") != m.end() && !m["RtmpDeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["RtmpDeviceInfo"].type()) {
        BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListRtmpDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RtmpDeviceInfo"]));
        rtmpDeviceInfo = make_shared<BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoListRtmpDeviceInfo>(model1);
      }
    }
  }


  virtual ~BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoList() = default;
};
class BatchQueryVisionDeviceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoList>> deviceInfoList{};

  BatchQueryVisionDeviceInfoResponseBodyData() {}

  explicit BatchQueryVisionDeviceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*deviceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceInfoList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceInfoList") != m.end() && !m["DeviceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceInfoList"].type()) {
        vector<BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceInfoList = make_shared<vector<BatchQueryVisionDeviceInfoResponseBodyDataDeviceInfoList>>(expect1);
      }
    }
  }


  virtual ~BatchQueryVisionDeviceInfoResponseBodyData() = default;
};
class BatchQueryVisionDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BatchQueryVisionDeviceInfoResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchQueryVisionDeviceInfoResponseBody() {}

  explicit BatchQueryVisionDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BatchQueryVisionDeviceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchQueryVisionDeviceInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchQueryVisionDeviceInfoResponseBody() = default;
};
class BatchQueryVisionDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchQueryVisionDeviceInfoResponseBody> body{};

  BatchQueryVisionDeviceInfoResponse() {}

  explicit BatchQueryVisionDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BatchQueryVisionDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchQueryVisionDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~BatchQueryVisionDeviceInfoResponse() = default;
};
class BindPictureSearchAppWithDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<vector<string>> deviceIotIds{};
  shared_ptr<string> iotInstanceId{};

  BindPictureSearchAppWithDevicesRequest() {}

  explicit BindPictureSearchAppWithDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (deviceIotIds) {
      res["DeviceIotIds"] = boost::any(*deviceIotIds);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("DeviceIotIds") != m.end() && !m["DeviceIotIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceIotIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceIotIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceIotIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
  }


  virtual ~BindPictureSearchAppWithDevicesRequest() = default;
};
class BindPictureSearchAppWithDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BindPictureSearchAppWithDevicesResponseBody() {}

  explicit BindPictureSearchAppWithDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BindPictureSearchAppWithDevicesResponseBody() = default;
};
class BindPictureSearchAppWithDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindPictureSearchAppWithDevicesResponseBody> body{};

  BindPictureSearchAppWithDevicesResponse() {}

  explicit BindPictureSearchAppWithDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        BindPictureSearchAppWithDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindPictureSearchAppWithDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~BindPictureSearchAppWithDevicesResponse() = default;
};
class CheckFaceUserDoExistOnDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> productKey{};
  shared_ptr<string> userId{};

  CheckFaceUserDoExistOnDeviceRequest() {}

  explicit CheckFaceUserDoExistOnDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CheckFaceUserDoExistOnDeviceRequest() = default;
};
class CheckFaceUserDoExistOnDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<bool> doExist{};

  CheckFaceUserDoExistOnDeviceResponseBodyData() {}

  explicit CheckFaceUserDoExistOnDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (doExist) {
      res["DoExist"] = boost::any(*doExist);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DoExist") != m.end() && !m["DoExist"].empty()) {
      doExist = make_shared<bool>(boost::any_cast<bool>(m["DoExist"]));
    }
  }


  virtual ~CheckFaceUserDoExistOnDeviceResponseBodyData() = default;
};
class CheckFaceUserDoExistOnDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CheckFaceUserDoExistOnDeviceResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckFaceUserDoExistOnDeviceResponseBody() {}

  explicit CheckFaceUserDoExistOnDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CheckFaceUserDoExistOnDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckFaceUserDoExistOnDeviceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckFaceUserDoExistOnDeviceResponseBody() = default;
};
class CheckFaceUserDoExistOnDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckFaceUserDoExistOnDeviceResponseBody> body{};

  CheckFaceUserDoExistOnDeviceResponse() {}

  explicit CheckFaceUserDoExistOnDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CheckFaceUserDoExistOnDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckFaceUserDoExistOnDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~CheckFaceUserDoExistOnDeviceResponse() = default;
};
class ClearFaceDeviceDBRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> productKey{};

  ClearFaceDeviceDBRequest() {}

  explicit ClearFaceDeviceDBRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~ClearFaceDeviceDBRequest() = default;
};
class ClearFaceDeviceDBResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ClearFaceDeviceDBResponseBody() {}

  explicit ClearFaceDeviceDBResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ClearFaceDeviceDBResponseBody() = default;
};
class ClearFaceDeviceDBResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ClearFaceDeviceDBResponseBody> body{};

  ClearFaceDeviceDBResponse() {}

  explicit ClearFaceDeviceDBResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ClearFaceDeviceDBResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ClearFaceDeviceDBResponseBody>(model1);
      }
    }
  }


  virtual ~ClearFaceDeviceDBResponse() = default;
};
class CreateEventRecordPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventTypes{};
  shared_ptr<string> name{};
  shared_ptr<long> preRecordDuration{};
  shared_ptr<long> recordDuration{};
  shared_ptr<string> templateId{};

  CreateEventRecordPlanRequest() {}

  explicit CreateEventRecordPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventTypes) {
      res["EventTypes"] = boost::any(*eventTypes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (preRecordDuration) {
      res["PreRecordDuration"] = boost::any(*preRecordDuration);
    }
    if (recordDuration) {
      res["RecordDuration"] = boost::any(*recordDuration);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventTypes") != m.end() && !m["EventTypes"].empty()) {
      eventTypes = make_shared<string>(boost::any_cast<string>(m["EventTypes"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PreRecordDuration") != m.end() && !m["PreRecordDuration"].empty()) {
      preRecordDuration = make_shared<long>(boost::any_cast<long>(m["PreRecordDuration"]));
    }
    if (m.find("RecordDuration") != m.end() && !m["RecordDuration"].empty()) {
      recordDuration = make_shared<long>(boost::any_cast<long>(m["RecordDuration"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateEventRecordPlanRequest() = default;
};
class CreateEventRecordPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateEventRecordPlanResponseBody() {}

  explicit CreateEventRecordPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateEventRecordPlanResponseBody() = default;
};
class CreateEventRecordPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateEventRecordPlanResponseBody> body{};

  CreateEventRecordPlanResponse() {}

  explicit CreateEventRecordPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateEventRecordPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEventRecordPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEventRecordPlanResponse() = default;
};
class CreateGbDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> deviceType{};
  shared_ptr<string> gbId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> mediaNetProtocol{};
  shared_ptr<string> password{};
  shared_ptr<string> productKey{};
  shared_ptr<string> subProductKey{};

  CreateGbDeviceRequest() {}

  explicit CreateGbDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (mediaNetProtocol) {
      res["MediaNetProtocol"] = boost::any(*mediaNetProtocol);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (subProductKey) {
      res["SubProductKey"] = boost::any(*subProductKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<long>(boost::any_cast<long>(m["DeviceType"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("MediaNetProtocol") != m.end() && !m["MediaNetProtocol"].empty()) {
      mediaNetProtocol = make_shared<string>(boost::any_cast<string>(m["MediaNetProtocol"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("SubProductKey") != m.end() && !m["SubProductKey"].empty()) {
      subProductKey = make_shared<string>(boost::any_cast<string>(m["SubProductKey"]));
    }
  }


  virtual ~CreateGbDeviceRequest() = default;
};
class CreateGbDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};

  CreateGbDeviceResponseBodyData() {}

  explicit CreateGbDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
  }


  virtual ~CreateGbDeviceResponseBodyData() = default;
};
class CreateGbDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateGbDeviceResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateGbDeviceResponseBody() {}

  explicit CreateGbDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateGbDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateGbDeviceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateGbDeviceResponseBody() = default;
};
class CreateGbDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGbDeviceResponseBody> body{};

  CreateGbDeviceResponse() {}

  explicit CreateGbDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateGbDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGbDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGbDeviceResponse() = default;
};
class CreateLocalFileUploadJobRequestTimeSlot : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> iotId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> startTime{};

  CreateLocalFileUploadJobRequestTimeSlot() {}

  explicit CreateLocalFileUploadJobRequestTimeSlot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~CreateLocalFileUploadJobRequestTimeSlot() = default;
};
class CreateLocalFileUploadJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> iotInstanceId{};
  shared_ptr<vector<CreateLocalFileUploadJobRequestTimeSlot>> timeSlot{};

  CreateLocalFileUploadJobRequest() {}

  explicit CreateLocalFileUploadJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (timeSlot) {
      vector<boost::any> temp1;
      for(auto item1:*timeSlot){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeSlot"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("TimeSlot") != m.end() && !m["TimeSlot"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeSlot"].type()) {
        vector<CreateLocalFileUploadJobRequestTimeSlot> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeSlot"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateLocalFileUploadJobRequestTimeSlot model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeSlot = make_shared<vector<CreateLocalFileUploadJobRequestTimeSlot>>(expect1);
      }
    }
  }


  virtual ~CreateLocalFileUploadJobRequest() = default;
};
class CreateLocalFileUploadJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  CreateLocalFileUploadJobResponseBodyData() {}

  explicit CreateLocalFileUploadJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~CreateLocalFileUploadJobResponseBodyData() = default;
};
class CreateLocalFileUploadJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateLocalFileUploadJobResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateLocalFileUploadJobResponseBody() {}

  explicit CreateLocalFileUploadJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateLocalFileUploadJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateLocalFileUploadJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateLocalFileUploadJobResponseBody() = default;
};
class CreateLocalFileUploadJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLocalFileUploadJobResponseBody> body{};

  CreateLocalFileUploadJobResponse() {}

  explicit CreateLocalFileUploadJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateLocalFileUploadJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLocalFileUploadJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLocalFileUploadJobResponse() = default;
};
class CreateLocalRecordDownloadByTimeJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<double> speed{};

  CreateLocalRecordDownloadByTimeJobRequest() {}

  explicit CreateLocalRecordDownloadByTimeJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (speed) {
      res["Speed"] = boost::any(*speed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Speed") != m.end() && !m["Speed"].empty()) {
      speed = make_shared<double>(boost::any_cast<double>(m["Speed"]));
    }
  }


  virtual ~CreateLocalRecordDownloadByTimeJobRequest() = default;
};
class CreateLocalRecordDownloadByTimeJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  CreateLocalRecordDownloadByTimeJobResponseBodyData() {}

  explicit CreateLocalRecordDownloadByTimeJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~CreateLocalRecordDownloadByTimeJobResponseBodyData() = default;
};
class CreateLocalRecordDownloadByTimeJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateLocalRecordDownloadByTimeJobResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateLocalRecordDownloadByTimeJobResponseBody() {}

  explicit CreateLocalRecordDownloadByTimeJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateLocalRecordDownloadByTimeJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateLocalRecordDownloadByTimeJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateLocalRecordDownloadByTimeJobResponseBody() = default;
};
class CreateLocalRecordDownloadByTimeJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLocalRecordDownloadByTimeJobResponseBody> body{};

  CreateLocalRecordDownloadByTimeJobResponse() {}

  explicit CreateLocalRecordDownloadByTimeJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateLocalRecordDownloadByTimeJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLocalRecordDownloadByTimeJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLocalRecordDownloadByTimeJobResponse() = default;
};
class CreatePictureSearchAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> name{};

  CreatePictureSearchAppRequest() {}

  explicit CreatePictureSearchAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreatePictureSearchAppRequest() = default;
};
class CreatePictureSearchAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePictureSearchAppResponseBody() {}

  explicit CreatePictureSearchAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePictureSearchAppResponseBody() = default;
};
class CreatePictureSearchAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePictureSearchAppResponseBody> body{};

  CreatePictureSearchAppResponse() {}

  explicit CreatePictureSearchAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePictureSearchAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePictureSearchAppResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePictureSearchAppResponse() = default;
};
class CreatePictureSearchJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<double> bodyThreshold{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pictureSearchType{};
  shared_ptr<string> searchPicUrl{};
  shared_ptr<long> startTime{};
  shared_ptr<double> threshold{};

  CreatePictureSearchJobRequest() {}

  explicit CreatePictureSearchJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (bodyThreshold) {
      res["BodyThreshold"] = boost::any(*bodyThreshold);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pictureSearchType) {
      res["PictureSearchType"] = boost::any(*pictureSearchType);
    }
    if (searchPicUrl) {
      res["SearchPicUrl"] = boost::any(*searchPicUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("BodyThreshold") != m.end() && !m["BodyThreshold"].empty()) {
      bodyThreshold = make_shared<double>(boost::any_cast<double>(m["BodyThreshold"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PictureSearchType") != m.end() && !m["PictureSearchType"].empty()) {
      pictureSearchType = make_shared<long>(boost::any_cast<long>(m["PictureSearchType"]));
    }
    if (m.find("SearchPicUrl") != m.end() && !m["SearchPicUrl"].empty()) {
      searchPicUrl = make_shared<string>(boost::any_cast<string>(m["SearchPicUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~CreatePictureSearchJobRequest() = default;
};
class CreatePictureSearchJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreatePictureSearchJobResponseBody() {}

  explicit CreatePictureSearchJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreatePictureSearchJobResponseBody() = default;
};
class CreatePictureSearchJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePictureSearchJobResponseBody> body{};

  CreatePictureSearchJobResponse() {}

  explicit CreatePictureSearchJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreatePictureSearchJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePictureSearchJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePictureSearchJobResponse() = default;
};
class CreateRecordDownloadByTimeJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> recordType{};
  shared_ptr<long> streamType{};

  CreateRecordDownloadByTimeJobRequest() {}

  explicit CreateRecordDownloadByTimeJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<long>(boost::any_cast<long>(m["RecordType"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~CreateRecordDownloadByTimeJobRequest() = default;
};
class CreateRecordDownloadByTimeJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};

  CreateRecordDownloadByTimeJobResponseBodyData() {}

  explicit CreateRecordDownloadByTimeJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~CreateRecordDownloadByTimeJobResponseBodyData() = default;
};
class CreateRecordDownloadByTimeJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateRecordDownloadByTimeJobResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateRecordDownloadByTimeJobResponseBody() {}

  explicit CreateRecordDownloadByTimeJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateRecordDownloadByTimeJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateRecordDownloadByTimeJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateRecordDownloadByTimeJobResponseBody() = default;
};
class CreateRecordDownloadByTimeJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRecordDownloadByTimeJobResponseBody> body{};

  CreateRecordDownloadByTimeJobResponse() {}

  explicit CreateRecordDownloadByTimeJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRecordDownloadByTimeJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRecordDownloadByTimeJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRecordDownloadByTimeJobResponse() = default;
};
class CreateRecordPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};

  CreateRecordPlanRequest() {}

  explicit CreateRecordPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~CreateRecordPlanRequest() = default;
};
class CreateRecordPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateRecordPlanResponseBody() {}

  explicit CreateRecordPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateRecordPlanResponseBody() = default;
};
class CreateRecordPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRecordPlanResponseBody> body{};

  CreateRecordPlanResponse() {}

  explicit CreateRecordPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRecordPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRecordPlanResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRecordPlanResponse() = default;
};
class CreateRtmpDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<string> pullAuthKey{};
  shared_ptr<long> pullKeyExpireTime{};
  shared_ptr<string> pushAuthKey{};
  shared_ptr<long> pushKeyExpireTime{};
  shared_ptr<string> subStreamName{};

  CreateRtmpDeviceRequest() {}

  explicit CreateRtmpDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (pullAuthKey) {
      res["PullAuthKey"] = boost::any(*pullAuthKey);
    }
    if (pullKeyExpireTime) {
      res["PullKeyExpireTime"] = boost::any(*pullKeyExpireTime);
    }
    if (pushAuthKey) {
      res["PushAuthKey"] = boost::any(*pushAuthKey);
    }
    if (pushKeyExpireTime) {
      res["PushKeyExpireTime"] = boost::any(*pushKeyExpireTime);
    }
    if (subStreamName) {
      res["SubStreamName"] = boost::any(*subStreamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("PullAuthKey") != m.end() && !m["PullAuthKey"].empty()) {
      pullAuthKey = make_shared<string>(boost::any_cast<string>(m["PullAuthKey"]));
    }
    if (m.find("PullKeyExpireTime") != m.end() && !m["PullKeyExpireTime"].empty()) {
      pullKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PullKeyExpireTime"]));
    }
    if (m.find("PushAuthKey") != m.end() && !m["PushAuthKey"].empty()) {
      pushAuthKey = make_shared<string>(boost::any_cast<string>(m["PushAuthKey"]));
    }
    if (m.find("PushKeyExpireTime") != m.end() && !m["PushKeyExpireTime"].empty()) {
      pushKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PushKeyExpireTime"]));
    }
    if (m.find("SubStreamName") != m.end() && !m["SubStreamName"].empty()) {
      subStreamName = make_shared<string>(boost::any_cast<string>(m["SubStreamName"]));
    }
  }


  virtual ~CreateRtmpDeviceRequest() = default;
};
class CreateRtmpDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> streamName{};

  CreateRtmpDeviceResponseBodyData() {}

  explicit CreateRtmpDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
  }


  virtual ~CreateRtmpDeviceResponseBodyData() = default;
};
class CreateRtmpDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateRtmpDeviceResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateRtmpDeviceResponseBody() {}

  explicit CreateRtmpDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateRtmpDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateRtmpDeviceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateRtmpDeviceResponseBody() = default;
};
class CreateRtmpDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRtmpDeviceResponseBody> body{};

  CreateRtmpDeviceResponse() {}

  explicit CreateRtmpDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateRtmpDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRtmpDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRtmpDeviceResponse() = default;
};
class CreateTimeTemplateRequestTimeSections : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> dayOfWeek{};
  shared_ptr<long> end{};

  CreateTimeTemplateRequestTimeSections() {}

  explicit CreateTimeTemplateRequestTimeSections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (dayOfWeek) {
      res["DayOfWeek"] = boost::any(*dayOfWeek);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("DayOfWeek") != m.end() && !m["DayOfWeek"].empty()) {
      dayOfWeek = make_shared<long>(boost::any_cast<long>(m["DayOfWeek"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~CreateTimeTemplateRequestTimeSections() = default;
};
class CreateTimeTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> allDay{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateTimeTemplateRequestTimeSections>> timeSections{};

  CreateTimeTemplateRequest() {}

  explicit CreateTimeTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allDay) {
      res["AllDay"] = boost::any(*allDay);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (timeSections) {
      vector<boost::any> temp1;
      for(auto item1:*timeSections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeSections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllDay") != m.end() && !m["AllDay"].empty()) {
      allDay = make_shared<long>(boost::any_cast<long>(m["AllDay"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TimeSections") != m.end() && !m["TimeSections"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeSections"].type()) {
        vector<CreateTimeTemplateRequestTimeSections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeSections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTimeTemplateRequestTimeSections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeSections = make_shared<vector<CreateTimeTemplateRequestTimeSections>>(expect1);
      }
    }
  }


  virtual ~CreateTimeTemplateRequest() = default;
};
class CreateTimeTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTimeTemplateResponseBody() {}

  explicit CreateTimeTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateTimeTemplateResponseBody() = default;
};
class CreateTimeTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTimeTemplateResponseBody> body{};

  CreateTimeTemplateResponse() {}

  explicit CreateTimeTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateTimeTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTimeTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTimeTemplateResponse() = default;
};
class DeleteEventRecordPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};

  DeleteEventRecordPlanRequest() {}

  explicit DeleteEventRecordPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~DeleteEventRecordPlanRequest() = default;
};
class DeleteEventRecordPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteEventRecordPlanResponseBody() {}

  explicit DeleteEventRecordPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteEventRecordPlanResponseBody() = default;
};
class DeleteEventRecordPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEventRecordPlanResponseBody> body{};

  DeleteEventRecordPlanResponse() {}

  explicit DeleteEventRecordPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEventRecordPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEventRecordPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEventRecordPlanResponse() = default;
};
class DeleteEventRecordPlanDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> streamType{};

  DeleteEventRecordPlanDeviceRequest() {}

  explicit DeleteEventRecordPlanDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~DeleteEventRecordPlanDeviceRequest() = default;
};
class DeleteEventRecordPlanDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteEventRecordPlanDeviceResponseBody() {}

  explicit DeleteEventRecordPlanDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteEventRecordPlanDeviceResponseBody() = default;
};
class DeleteEventRecordPlanDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEventRecordPlanDeviceResponseBody> body{};

  DeleteEventRecordPlanDeviceResponse() {}

  explicit DeleteEventRecordPlanDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteEventRecordPlanDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEventRecordPlanDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEventRecordPlanDeviceResponse() = default;
};
class DeleteFaceDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> isolationId{};

  DeleteFaceDeviceGroupRequest() {}

  explicit DeleteFaceDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
  }


  virtual ~DeleteFaceDeviceGroupRequest() = default;
};
class DeleteFaceDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFaceDeviceGroupResponseBody() {}

  explicit DeleteFaceDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFaceDeviceGroupResponseBody() = default;
};
class DeleteFaceDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFaceDeviceGroupResponseBody> body{};

  DeleteFaceDeviceGroupResponse() {}

  explicit DeleteFaceDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFaceDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceDeviceGroupResponse() = default;
};
class DeleteFaceUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<string> userId{};

  DeleteFaceUserRequest() {}

  explicit DeleteFaceUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteFaceUserRequest() = default;
};
class DeleteFaceUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFaceUserResponseBody() {}

  explicit DeleteFaceUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFaceUserResponseBody() = default;
};
class DeleteFaceUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFaceUserResponseBody> body{};

  DeleteFaceUserResponse() {}

  explicit DeleteFaceUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFaceUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceUserResponse() = default;
};
class DeleteFaceUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<string> userGroupId{};

  DeleteFaceUserGroupRequest() {}

  explicit DeleteFaceUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~DeleteFaceUserGroupRequest() = default;
};
class DeleteFaceUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFaceUserGroupResponseBody() {}

  explicit DeleteFaceUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFaceUserGroupResponseBody() = default;
};
class DeleteFaceUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFaceUserGroupResponseBody> body{};

  DeleteFaceUserGroupResponse() {}

  explicit DeleteFaceUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFaceUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceUserGroupResponse() = default;
};
class DeleteFaceUserGroupAndDeviceGroupRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> controlId{};
  shared_ptr<string> isolationId{};

  DeleteFaceUserGroupAndDeviceGroupRelationRequest() {}

  explicit DeleteFaceUserGroupAndDeviceGroupRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlId) {
      res["ControlId"] = boost::any(*controlId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlId") != m.end() && !m["ControlId"].empty()) {
      controlId = make_shared<string>(boost::any_cast<string>(m["ControlId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
  }


  virtual ~DeleteFaceUserGroupAndDeviceGroupRelationRequest() = default;
};
class DeleteFaceUserGroupAndDeviceGroupRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFaceUserGroupAndDeviceGroupRelationResponseBody() {}

  explicit DeleteFaceUserGroupAndDeviceGroupRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFaceUserGroupAndDeviceGroupRelationResponseBody() = default;
};
class DeleteFaceUserGroupAndDeviceGroupRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFaceUserGroupAndDeviceGroupRelationResponseBody> body{};

  DeleteFaceUserGroupAndDeviceGroupRelationResponse() {}

  explicit DeleteFaceUserGroupAndDeviceGroupRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFaceUserGroupAndDeviceGroupRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceUserGroupAndDeviceGroupRelationResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceUserGroupAndDeviceGroupRelationResponse() = default;
};
class DeleteFaceUserPictureRequest : public Darabonba::Model {
public:
  shared_ptr<string> facePicMd5{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> userId{};

  DeleteFaceUserPictureRequest() {}

  explicit DeleteFaceUserPictureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (facePicMd5) {
      res["FacePicMd5"] = boost::any(*facePicMd5);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FacePicMd5") != m.end() && !m["FacePicMd5"].empty()) {
      facePicMd5 = make_shared<string>(boost::any_cast<string>(m["FacePicMd5"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteFaceUserPictureRequest() = default;
};
class DeleteFaceUserPictureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFaceUserPictureResponseBody() {}

  explicit DeleteFaceUserPictureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFaceUserPictureResponseBody() = default;
};
class DeleteFaceUserPictureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFaceUserPictureResponseBody> body{};

  DeleteFaceUserPictureResponse() {}

  explicit DeleteFaceUserPictureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteFaceUserPictureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceUserPictureResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceUserPictureResponse() = default;
};
class DeleteLocalFileUploadJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> jobId{};

  DeleteLocalFileUploadJobRequest() {}

  explicit DeleteLocalFileUploadJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~DeleteLocalFileUploadJobRequest() = default;
};
class DeleteLocalFileUploadJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteLocalFileUploadJobResponseBody() {}

  explicit DeleteLocalFileUploadJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteLocalFileUploadJobResponseBody() = default;
};
class DeleteLocalFileUploadJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLocalFileUploadJobResponseBody> body{};

  DeleteLocalFileUploadJobResponse() {}

  explicit DeleteLocalFileUploadJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteLocalFileUploadJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLocalFileUploadJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLocalFileUploadJobResponse() = default;
};
class DeletePictureRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<vector<string>> pictureIdList{};
  shared_ptr<string> productKey{};

  DeletePictureRequest() {}

  explicit DeletePictureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (pictureIdList) {
      res["PictureIdList"] = boost::any(*pictureIdList);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PictureIdList") != m.end() && !m["PictureIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PictureIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PictureIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      pictureIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~DeletePictureRequest() = default;
};
class DeletePictureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> deletedCount{};

  DeletePictureResponseBodyData() {}

  explicit DeletePictureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletedCount) {
      res["DeletedCount"] = boost::any(*deletedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletedCount") != m.end() && !m["DeletedCount"].empty()) {
      deletedCount = make_shared<long>(boost::any_cast<long>(m["DeletedCount"]));
    }
  }


  virtual ~DeletePictureResponseBodyData() = default;
};
class DeletePictureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeletePictureResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeletePictureResponseBody() {}

  explicit DeletePictureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeletePictureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeletePictureResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeletePictureResponseBody() = default;
};
class DeletePictureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePictureResponseBody> body{};

  DeletePictureResponse() {}

  explicit DeletePictureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeletePictureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePictureResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePictureResponse() = default;
};
class DeleteRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<vector<string>> fileNameList{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  DeleteRecordRequest() {}

  explicit DeleteRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (fileNameList) {
      res["FileNameList"] = boost::any(*fileNameList);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("FileNameList") != m.end() && !m["FileNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FileNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FileNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      fileNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~DeleteRecordRequest() = default;
};
class DeleteRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> deletedCount{};

  DeleteRecordResponseBodyData() {}

  explicit DeleteRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deletedCount) {
      res["DeletedCount"] = boost::any(*deletedCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeletedCount") != m.end() && !m["DeletedCount"].empty()) {
      deletedCount = make_shared<long>(boost::any_cast<long>(m["DeletedCount"]));
    }
  }


  virtual ~DeleteRecordResponseBodyData() = default;
};
class DeleteRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DeleteRecordResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteRecordResponseBody() {}

  explicit DeleteRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DeleteRecordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DeleteRecordResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteRecordResponseBody() = default;
};
class DeleteRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRecordResponseBody> body{};

  DeleteRecordResponse() {}

  explicit DeleteRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRecordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRecordResponse() = default;
};
class DeleteRecordPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};

  DeleteRecordPlanRequest() {}

  explicit DeleteRecordPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~DeleteRecordPlanRequest() = default;
};
class DeleteRecordPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteRecordPlanResponseBody() {}

  explicit DeleteRecordPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteRecordPlanResponseBody() = default;
};
class DeleteRecordPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRecordPlanResponseBody> body{};

  DeleteRecordPlanResponse() {}

  explicit DeleteRecordPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRecordPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRecordPlanResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRecordPlanResponse() = default;
};
class DeleteRecordPlanDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> streamType{};

  DeleteRecordPlanDeviceRequest() {}

  explicit DeleteRecordPlanDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~DeleteRecordPlanDeviceRequest() = default;
};
class DeleteRecordPlanDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteRecordPlanDeviceResponseBody() {}

  explicit DeleteRecordPlanDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteRecordPlanDeviceResponseBody() = default;
};
class DeleteRecordPlanDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRecordPlanDeviceResponseBody> body{};

  DeleteRecordPlanDeviceResponse() {}

  explicit DeleteRecordPlanDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRecordPlanDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRecordPlanDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRecordPlanDeviceResponse() = default;
};
class DeleteRtmpDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  DeleteRtmpDeviceRequest() {}

  explicit DeleteRtmpDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~DeleteRtmpDeviceRequest() = default;
};
class DeleteRtmpDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteRtmpDeviceResponseBody() {}

  explicit DeleteRtmpDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteRtmpDeviceResponseBody() = default;
};
class DeleteRtmpDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRtmpDeviceResponseBody> body{};

  DeleteRtmpDeviceResponse() {}

  explicit DeleteRtmpDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRtmpDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRtmpDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRtmpDeviceResponse() = default;
};
class DeleteRtmpKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> type{};

  DeleteRtmpKeyRequest() {}

  explicit DeleteRtmpKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
  }


  virtual ~DeleteRtmpKeyRequest() = default;
};
class DeleteRtmpKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteRtmpKeyResponseBody() {}

  explicit DeleteRtmpKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteRtmpKeyResponseBody() = default;
};
class DeleteRtmpKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteRtmpKeyResponseBody> body{};

  DeleteRtmpKeyResponse() {}

  explicit DeleteRtmpKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteRtmpKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteRtmpKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteRtmpKeyResponse() = default;
};
class DeleteTimeTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  DeleteTimeTemplateRequest() {}

  explicit DeleteTimeTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteTimeTemplateRequest() = default;
};
class DeleteTimeTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteTimeTemplateResponseBody() {}

  explicit DeleteTimeTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteTimeTemplateResponseBody() = default;
};
class DeleteTimeTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteTimeTemplateResponseBody> body{};

  DeleteTimeTemplateResponse() {}

  explicit DeleteTimeTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DeleteTimeTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteTimeTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteTimeTemplateResponse() = default;
};
class DetectUserFaceByUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> facePicUrl{};

  DetectUserFaceByUrlRequest() {}

  explicit DetectUserFaceByUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (facePicUrl) {
      res["FacePicUrl"] = boost::any(*facePicUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FacePicUrl") != m.end() && !m["FacePicUrl"].empty()) {
      facePicUrl = make_shared<string>(boost::any_cast<string>(m["FacePicUrl"]));
    }
  }


  virtual ~DetectUserFaceByUrlRequest() = default;
};
class DetectUserFaceByUrlResponseBodyDataDataFaceRects : public Darabonba::Model {
public:
  shared_ptr<vector<string>> faceRectsData{};

  DetectUserFaceByUrlResponseBodyDataDataFaceRects() {}

  explicit DetectUserFaceByUrlResponseBodyDataDataFaceRects(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceRectsData) {
      res["FaceRectsData"] = boost::any(*faceRectsData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceRectsData") != m.end() && !m["FaceRectsData"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["FaceRectsData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["FaceRectsData"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      faceRectsData = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DetectUserFaceByUrlResponseBodyDataDataFaceRects() = default;
};
class DetectUserFaceByUrlResponseBodyDataDataLandmarks : public Darabonba::Model {
public:
  shared_ptr<vector<string>> landmarksData{};

  DetectUserFaceByUrlResponseBodyDataDataLandmarks() {}

  explicit DetectUserFaceByUrlResponseBodyDataDataLandmarks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (landmarksData) {
      res["LandmarksData"] = boost::any(*landmarksData);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LandmarksData") != m.end() && !m["LandmarksData"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["LandmarksData"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["LandmarksData"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      landmarksData = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DetectUserFaceByUrlResponseBodyDataDataLandmarks() = default;
};
class DetectUserFaceByUrlResponseBodyDataData : public Darabonba::Model {
public:
  shared_ptr<long> age{};
  shared_ptr<double> blurScore{};
  shared_ptr<double> faceProbability{};
  shared_ptr<DetectUserFaceByUrlResponseBodyDataDataFaceRects> faceRects{};
  shared_ptr<long> gender{};
  shared_ptr<bool> goodForLibrary{};
  shared_ptr<bool> goodForRecognition{};
  shared_ptr<DetectUserFaceByUrlResponseBodyDataDataLandmarks> landmarks{};
  shared_ptr<double> occlusionScore{};
  shared_ptr<double> poseScore{};

  DetectUserFaceByUrlResponseBodyDataData() {}

  explicit DetectUserFaceByUrlResponseBodyDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (age) {
      res["Age"] = boost::any(*age);
    }
    if (blurScore) {
      res["BlurScore"] = boost::any(*blurScore);
    }
    if (faceProbability) {
      res["FaceProbability"] = boost::any(*faceProbability);
    }
    if (faceRects) {
      res["FaceRects"] = faceRects ? boost::any(faceRects->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (gender) {
      res["Gender"] = boost::any(*gender);
    }
    if (goodForLibrary) {
      res["GoodForLibrary"] = boost::any(*goodForLibrary);
    }
    if (goodForRecognition) {
      res["GoodForRecognition"] = boost::any(*goodForRecognition);
    }
    if (landmarks) {
      res["Landmarks"] = landmarks ? boost::any(landmarks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (occlusionScore) {
      res["OcclusionScore"] = boost::any(*occlusionScore);
    }
    if (poseScore) {
      res["PoseScore"] = boost::any(*poseScore);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Age") != m.end() && !m["Age"].empty()) {
      age = make_shared<long>(boost::any_cast<long>(m["Age"]));
    }
    if (m.find("BlurScore") != m.end() && !m["BlurScore"].empty()) {
      blurScore = make_shared<double>(boost::any_cast<double>(m["BlurScore"]));
    }
    if (m.find("FaceProbability") != m.end() && !m["FaceProbability"].empty()) {
      faceProbability = make_shared<double>(boost::any_cast<double>(m["FaceProbability"]));
    }
    if (m.find("FaceRects") != m.end() && !m["FaceRects"].empty()) {
      if (typeid(map<string, boost::any>) == m["FaceRects"].type()) {
        DetectUserFaceByUrlResponseBodyDataDataFaceRects model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FaceRects"]));
        faceRects = make_shared<DetectUserFaceByUrlResponseBodyDataDataFaceRects>(model1);
      }
    }
    if (m.find("Gender") != m.end() && !m["Gender"].empty()) {
      gender = make_shared<long>(boost::any_cast<long>(m["Gender"]));
    }
    if (m.find("GoodForLibrary") != m.end() && !m["GoodForLibrary"].empty()) {
      goodForLibrary = make_shared<bool>(boost::any_cast<bool>(m["GoodForLibrary"]));
    }
    if (m.find("GoodForRecognition") != m.end() && !m["GoodForRecognition"].empty()) {
      goodForRecognition = make_shared<bool>(boost::any_cast<bool>(m["GoodForRecognition"]));
    }
    if (m.find("Landmarks") != m.end() && !m["Landmarks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Landmarks"].type()) {
        DetectUserFaceByUrlResponseBodyDataDataLandmarks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Landmarks"]));
        landmarks = make_shared<DetectUserFaceByUrlResponseBodyDataDataLandmarks>(model1);
      }
    }
    if (m.find("OcclusionScore") != m.end() && !m["OcclusionScore"].empty()) {
      occlusionScore = make_shared<double>(boost::any_cast<double>(m["OcclusionScore"]));
    }
    if (m.find("PoseScore") != m.end() && !m["PoseScore"].empty()) {
      poseScore = make_shared<double>(boost::any_cast<double>(m["PoseScore"]));
    }
  }


  virtual ~DetectUserFaceByUrlResponseBodyDataData() = default;
};
class DetectUserFaceByUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<DetectUserFaceByUrlResponseBodyDataData>> data{};

  DetectUserFaceByUrlResponseBodyData() {}

  explicit DetectUserFaceByUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<DetectUserFaceByUrlResponseBodyDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DetectUserFaceByUrlResponseBodyDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<DetectUserFaceByUrlResponseBodyDataData>>(expect1);
      }
    }
  }


  virtual ~DetectUserFaceByUrlResponseBodyData() = default;
};
class DetectUserFaceByUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DetectUserFaceByUrlResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DetectUserFaceByUrlResponseBody() {}

  explicit DetectUserFaceByUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        DetectUserFaceByUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<DetectUserFaceByUrlResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DetectUserFaceByUrlResponseBody() = default;
};
class DetectUserFaceByUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DetectUserFaceByUrlResponseBody> body{};

  DetectUserFaceByUrlResponse() {}

  explicit DetectUserFaceByUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DetectUserFaceByUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DetectUserFaceByUrlResponseBody>(model1);
      }
    }
  }


  virtual ~DetectUserFaceByUrlResponse() = default;
};
class GetPictureSearchJobStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> jobId{};

  GetPictureSearchJobStatusRequest() {}

  explicit GetPictureSearchJobStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~GetPictureSearchJobStatusRequest() = default;
};
class GetPictureSearchJobStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> jobId{};
  shared_ptr<long> jobStatus{};
  shared_ptr<string> searchPicUrl{};
  shared_ptr<long> startTime{};
  shared_ptr<double> threshold{};

  GetPictureSearchJobStatusResponseBodyData() {}

  explicit GetPictureSearchJobStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (searchPicUrl) {
      res["SearchPicUrl"] = boost::any(*searchPicUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<long>(boost::any_cast<long>(m["JobStatus"]));
    }
    if (m.find("SearchPicUrl") != m.end() && !m["SearchPicUrl"].empty()) {
      searchPicUrl = make_shared<string>(boost::any_cast<string>(m["SearchPicUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~GetPictureSearchJobStatusResponseBodyData() = default;
};
class GetPictureSearchJobStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPictureSearchJobStatusResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPictureSearchJobStatusResponseBody() {}

  explicit GetPictureSearchJobStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetPictureSearchJobStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPictureSearchJobStatusResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetPictureSearchJobStatusResponseBody() = default;
};
class GetPictureSearchJobStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPictureSearchJobStatusResponseBody> body{};

  GetPictureSearchJobStatusResponse() {}

  explicit GetPictureSearchJobStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetPictureSearchJobStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPictureSearchJobStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetPictureSearchJobStatusResponse() = default;
};
class PictureSearchPictureRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<bool> containPicUrl{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pictureSearchType{};
  shared_ptr<string> searchPicUrl{};
  shared_ptr<long> startTime{};
  shared_ptr<double> threshold{};

  PictureSearchPictureRequest() {}

  explicit PictureSearchPictureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (containPicUrl) {
      res["ContainPicUrl"] = boost::any(*containPicUrl);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pictureSearchType) {
      res["PictureSearchType"] = boost::any(*pictureSearchType);
    }
    if (searchPicUrl) {
      res["SearchPicUrl"] = boost::any(*searchPicUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("ContainPicUrl") != m.end() && !m["ContainPicUrl"].empty()) {
      containPicUrl = make_shared<bool>(boost::any_cast<bool>(m["ContainPicUrl"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PictureSearchType") != m.end() && !m["PictureSearchType"].empty()) {
      pictureSearchType = make_shared<long>(boost::any_cast<long>(m["PictureSearchType"]));
    }
    if (m.find("SearchPicUrl") != m.end() && !m["SearchPicUrl"].empty()) {
      searchPicUrl = make_shared<string>(boost::any_cast<string>(m["SearchPicUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~PictureSearchPictureRequest() = default;
};
class PictureSearchPictureResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<long> eventTime{};
  shared_ptr<string> gatewayIotId{};
  shared_ptr<string> iotId{};
  shared_ptr<string> picUrl{};
  shared_ptr<double> threshold{};
  shared_ptr<string> vectorId{};
  shared_ptr<long> vectorType{};

  PictureSearchPictureResponseBodyDataPageData() {}

  explicit PictureSearchPictureResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (gatewayIotId) {
      res["GatewayIotId"] = boost::any(*gatewayIotId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (vectorId) {
      res["VectorId"] = boost::any(*vectorId);
    }
    if (vectorType) {
      res["VectorType"] = boost::any(*vectorType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<long>(boost::any_cast<long>(m["EventTime"]));
    }
    if (m.find("GatewayIotId") != m.end() && !m["GatewayIotId"].empty()) {
      gatewayIotId = make_shared<string>(boost::any_cast<string>(m["GatewayIotId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("VectorId") != m.end() && !m["VectorId"].empty()) {
      vectorId = make_shared<string>(boost::any_cast<string>(m["VectorId"]));
    }
    if (m.find("VectorType") != m.end() && !m["VectorType"].empty()) {
      vectorType = make_shared<long>(boost::any_cast<long>(m["VectorType"]));
    }
  }


  virtual ~PictureSearchPictureResponseBodyDataPageData() = default;
};
class PictureSearchPictureResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<PictureSearchPictureResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  PictureSearchPictureResponseBodyData() {}

  explicit PictureSearchPictureResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<PictureSearchPictureResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            PictureSearchPictureResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<PictureSearchPictureResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~PictureSearchPictureResponseBodyData() = default;
};
class PictureSearchPictureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<PictureSearchPictureResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PictureSearchPictureResponseBody() {}

  explicit PictureSearchPictureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        PictureSearchPictureResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<PictureSearchPictureResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~PictureSearchPictureResponseBody() = default;
};
class PictureSearchPictureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PictureSearchPictureResponseBody> body{};

  PictureSearchPictureResponse() {}

  explicit PictureSearchPictureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        PictureSearchPictureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PictureSearchPictureResponseBody>(model1);
      }
    }
  }


  virtual ~PictureSearchPictureResponse() = default;
};
class QueryCarProcessEventsRequest : public Darabonba::Model {
public:
  shared_ptr<long> actionType{};
  shared_ptr<long> areaIndex{};
  shared_ptr<long> beginTime{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> plateNo{};
  shared_ptr<string> subDeviceName{};
  shared_ptr<string> subIotId{};
  shared_ptr<string> subProductKey{};

  QueryCarProcessEventsRequest() {}

  explicit QueryCarProcessEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (areaIndex) {
      res["AreaIndex"] = boost::any(*areaIndex);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (plateNo) {
      res["PlateNo"] = boost::any(*plateNo);
    }
    if (subDeviceName) {
      res["SubDeviceName"] = boost::any(*subDeviceName);
    }
    if (subIotId) {
      res["SubIotId"] = boost::any(*subIotId);
    }
    if (subProductKey) {
      res["SubProductKey"] = boost::any(*subProductKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<long>(boost::any_cast<long>(m["ActionType"]));
    }
    if (m.find("AreaIndex") != m.end() && !m["AreaIndex"].empty()) {
      areaIndex = make_shared<long>(boost::any_cast<long>(m["AreaIndex"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlateNo") != m.end() && !m["PlateNo"].empty()) {
      plateNo = make_shared<string>(boost::any_cast<string>(m["PlateNo"]));
    }
    if (m.find("SubDeviceName") != m.end() && !m["SubDeviceName"].empty()) {
      subDeviceName = make_shared<string>(boost::any_cast<string>(m["SubDeviceName"]));
    }
    if (m.find("SubIotId") != m.end() && !m["SubIotId"].empty()) {
      subIotId = make_shared<string>(boost::any_cast<string>(m["SubIotId"]));
    }
    if (m.find("SubProductKey") != m.end() && !m["SubProductKey"].empty()) {
      subProductKey = make_shared<string>(boost::any_cast<string>(m["SubProductKey"]));
    }
  }


  virtual ~QueryCarProcessEventsRequest() = default;
};
class QueryCarProcessEventsResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<long> actionType{};
  shared_ptr<long> areaIndex{};
  shared_ptr<long> confidence{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventPicId{};
  shared_ptr<string> eventPicUrl{};
  shared_ptr<long> eventTime{};
  shared_ptr<long> eventType{};
  shared_ptr<string> iotId{};
  shared_ptr<string> plateNo{};
  shared_ptr<string> subDeviceName{};
  shared_ptr<string> subDeviceNickName{};
  shared_ptr<string> subIotId{};
  shared_ptr<string> subProductKey{};
  shared_ptr<string> taskId{};

  QueryCarProcessEventsResponseBodyDataPageData() {}

  explicit QueryCarProcessEventsResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (areaIndex) {
      res["AreaIndex"] = boost::any(*areaIndex);
    }
    if (confidence) {
      res["Confidence"] = boost::any(*confidence);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventPicId) {
      res["EventPicId"] = boost::any(*eventPicId);
    }
    if (eventPicUrl) {
      res["EventPicUrl"] = boost::any(*eventPicUrl);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (plateNo) {
      res["PlateNo"] = boost::any(*plateNo);
    }
    if (subDeviceName) {
      res["SubDeviceName"] = boost::any(*subDeviceName);
    }
    if (subDeviceNickName) {
      res["SubDeviceNickName"] = boost::any(*subDeviceNickName);
    }
    if (subIotId) {
      res["SubIotId"] = boost::any(*subIotId);
    }
    if (subProductKey) {
      res["SubProductKey"] = boost::any(*subProductKey);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<long>(boost::any_cast<long>(m["ActionType"]));
    }
    if (m.find("AreaIndex") != m.end() && !m["AreaIndex"].empty()) {
      areaIndex = make_shared<long>(boost::any_cast<long>(m["AreaIndex"]));
    }
    if (m.find("Confidence") != m.end() && !m["Confidence"].empty()) {
      confidence = make_shared<long>(boost::any_cast<long>(m["Confidence"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventPicId") != m.end() && !m["EventPicId"].empty()) {
      eventPicId = make_shared<string>(boost::any_cast<string>(m["EventPicId"]));
    }
    if (m.find("EventPicUrl") != m.end() && !m["EventPicUrl"].empty()) {
      eventPicUrl = make_shared<string>(boost::any_cast<string>(m["EventPicUrl"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<long>(boost::any_cast<long>(m["EventTime"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<long>(boost::any_cast<long>(m["EventType"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("PlateNo") != m.end() && !m["PlateNo"].empty()) {
      plateNo = make_shared<string>(boost::any_cast<string>(m["PlateNo"]));
    }
    if (m.find("SubDeviceName") != m.end() && !m["SubDeviceName"].empty()) {
      subDeviceName = make_shared<string>(boost::any_cast<string>(m["SubDeviceName"]));
    }
    if (m.find("SubDeviceNickName") != m.end() && !m["SubDeviceNickName"].empty()) {
      subDeviceNickName = make_shared<string>(boost::any_cast<string>(m["SubDeviceNickName"]));
    }
    if (m.find("SubIotId") != m.end() && !m["SubIotId"].empty()) {
      subIotId = make_shared<string>(boost::any_cast<string>(m["SubIotId"]));
    }
    if (m.find("SubProductKey") != m.end() && !m["SubProductKey"].empty()) {
      subProductKey = make_shared<string>(boost::any_cast<string>(m["SubProductKey"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~QueryCarProcessEventsResponseBodyDataPageData() = default;
};
class QueryCarProcessEventsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<QueryCarProcessEventsResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryCarProcessEventsResponseBodyData() {}

  explicit QueryCarProcessEventsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<QueryCarProcessEventsResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryCarProcessEventsResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<QueryCarProcessEventsResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryCarProcessEventsResponseBodyData() = default;
};
class QueryCarProcessEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryCarProcessEventsResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryCarProcessEventsResponseBody() {}

  explicit QueryCarProcessEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryCarProcessEventsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryCarProcessEventsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryCarProcessEventsResponseBody() = default;
};
class QueryCarProcessEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryCarProcessEventsResponseBody> body{};

  QueryCarProcessEventsResponse() {}

  explicit QueryCarProcessEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryCarProcessEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryCarProcessEventsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryCarProcessEventsResponse() = default;
};
class QueryDeviceEventRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> endTime{};
  shared_ptr<long> eventType{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productKey{};

  QueryDeviceEventRequest() {}

  explicit QueryDeviceEventRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<long>(boost::any_cast<long>(m["EventType"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryDeviceEventRequest() = default;
};
class QueryDeviceEventResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> eventData{};
  shared_ptr<string> eventDesc{};
  shared_ptr<string> eventId{};
  shared_ptr<string> eventPicId{};
  shared_ptr<string> eventTime{};
  shared_ptr<long> eventType{};

  QueryDeviceEventResponseBodyDataList() {}

  explicit QueryDeviceEventResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventData) {
      res["EventData"] = boost::any(*eventData);
    }
    if (eventDesc) {
      res["EventDesc"] = boost::any(*eventDesc);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (eventPicId) {
      res["EventPicId"] = boost::any(*eventPicId);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventData") != m.end() && !m["EventData"].empty()) {
      eventData = make_shared<string>(boost::any_cast<string>(m["EventData"]));
    }
    if (m.find("EventDesc") != m.end() && !m["EventDesc"].empty()) {
      eventDesc = make_shared<string>(boost::any_cast<string>(m["EventDesc"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("EventPicId") != m.end() && !m["EventPicId"].empty()) {
      eventPicId = make_shared<string>(boost::any_cast<string>(m["EventPicId"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<string>(boost::any_cast<string>(m["EventTime"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<long>(boost::any_cast<long>(m["EventType"]));
    }
  }


  virtual ~QueryDeviceEventResponseBodyDataList() = default;
};
class QueryDeviceEventResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDeviceEventResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryDeviceEventResponseBodyData() {}

  explicit QueryDeviceEventResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryDeviceEventResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDeviceEventResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryDeviceEventResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryDeviceEventResponseBodyData() = default;
};
class QueryDeviceEventResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryDeviceEventResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDeviceEventResponseBody() {}

  explicit QueryDeviceEventResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryDeviceEventResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryDeviceEventResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDeviceEventResponseBody() = default;
};
class QueryDeviceEventResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceEventResponseBody> body{};

  QueryDeviceEventResponse() {}

  explicit QueryDeviceEventResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDeviceEventResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceEventResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceEventResponse() = default;
};
class QueryDeviceEventPictureRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> eventId{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  QueryDeviceEventPictureRequest() {}

  explicit QueryDeviceEventPictureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryDeviceEventPictureRequest() = default;
};
class QueryDeviceEventPictureResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDeviceEventPictureResponseBody() {}

  explicit QueryDeviceEventPictureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDeviceEventPictureResponseBody() = default;
};
class QueryDeviceEventPictureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceEventPictureResponseBody> body{};

  QueryDeviceEventPictureResponse() {}

  explicit QueryDeviceEventPictureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDeviceEventPictureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceEventPictureResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceEventPictureResponse() = default;
};
class QueryDeviceEventRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> eventId{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  QueryDeviceEventRecordRequest() {}

  explicit QueryDeviceEventRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (eventId) {
      res["EventId"] = boost::any(*eventId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EventId") != m.end() && !m["EventId"].empty()) {
      eventId = make_shared<string>(boost::any_cast<string>(m["EventId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryDeviceEventRecordRequest() = default;
};
class QueryDeviceEventRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> vodUrl{};

  QueryDeviceEventRecordResponseBodyData() {}

  explicit QueryDeviceEventRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (vodUrl) {
      res["VodUrl"] = boost::any(*vodUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("VodUrl") != m.end() && !m["VodUrl"].empty()) {
      vodUrl = make_shared<string>(boost::any_cast<string>(m["VodUrl"]));
    }
  }


  virtual ~QueryDeviceEventRecordResponseBodyData() = default;
};
class QueryDeviceEventRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QueryDeviceEventRecordResponseBodyData>> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDeviceEventRecordResponseBody() {}

  explicit QueryDeviceEventRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryDeviceEventRecordResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDeviceEventRecordResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryDeviceEventRecordResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDeviceEventRecordResponseBody() = default;
};
class QueryDeviceEventRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceEventRecordResponseBody> body{};

  QueryDeviceEventRecordResponse() {}

  explicit QueryDeviceEventRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDeviceEventRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceEventRecordResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceEventRecordResponse() = default;
};
class QueryDevicePictureByListRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<vector<string>> pictureIdList{};
  shared_ptr<long> pictureType{};
  shared_ptr<string> productKey{};
  shared_ptr<long> thumbWidth{};

  QueryDevicePictureByListRequest() {}

  explicit QueryDevicePictureByListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (pictureIdList) {
      res["PictureIdList"] = boost::any(*pictureIdList);
    }
    if (pictureType) {
      res["PictureType"] = boost::any(*pictureType);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (thumbWidth) {
      res["ThumbWidth"] = boost::any(*thumbWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PictureIdList") != m.end() && !m["PictureIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PictureIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PictureIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      pictureIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PictureType") != m.end() && !m["PictureType"].empty()) {
      pictureType = make_shared<long>(boost::any_cast<long>(m["PictureType"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("ThumbWidth") != m.end() && !m["ThumbWidth"].empty()) {
      thumbWidth = make_shared<long>(boost::any_cast<long>(m["ThumbWidth"]));
    }
  }


  virtual ~QueryDevicePictureByListRequest() = default;
};
class QueryDevicePictureByListResponseBodyDataPicData : public Darabonba::Model {
public:
  shared_ptr<string> iotId{};
  shared_ptr<long> picCreateTime{};
  shared_ptr<string> picId{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> thumbUrl{};

  QueryDevicePictureByListResponseBodyDataPicData() {}

  explicit QueryDevicePictureByListResponseBodyDataPicData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (picCreateTime) {
      res["PicCreateTime"] = boost::any(*picCreateTime);
    }
    if (picId) {
      res["PicId"] = boost::any(*picId);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (thumbUrl) {
      res["ThumbUrl"] = boost::any(*thumbUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("PicCreateTime") != m.end() && !m["PicCreateTime"].empty()) {
      picCreateTime = make_shared<long>(boost::any_cast<long>(m["PicCreateTime"]));
    }
    if (m.find("PicId") != m.end() && !m["PicId"].empty()) {
      picId = make_shared<string>(boost::any_cast<string>(m["PicId"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("ThumbUrl") != m.end() && !m["ThumbUrl"].empty()) {
      thumbUrl = make_shared<string>(boost::any_cast<string>(m["ThumbUrl"]));
    }
  }


  virtual ~QueryDevicePictureByListResponseBodyDataPicData() = default;
};
class QueryDevicePictureByListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryDevicePictureByListResponseBodyDataPicData>> picData{};

  QueryDevicePictureByListResponseBodyData() {}

  explicit QueryDevicePictureByListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (picData) {
      vector<boost::any> temp1;
      for(auto item1:*picData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["picData"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("picData") != m.end() && !m["picData"].empty()) {
      if (typeid(vector<boost::any>) == m["picData"].type()) {
        vector<QueryDevicePictureByListResponseBodyDataPicData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["picData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDevicePictureByListResponseBodyDataPicData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        picData = make_shared<vector<QueryDevicePictureByListResponseBodyDataPicData>>(expect1);
      }
    }
  }


  virtual ~QueryDevicePictureByListResponseBodyData() = default;
};
class QueryDevicePictureByListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryDevicePictureByListResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDevicePictureByListResponseBody() {}

  explicit QueryDevicePictureByListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryDevicePictureByListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryDevicePictureByListResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDevicePictureByListResponseBody() = default;
};
class QueryDevicePictureByListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDevicePictureByListResponseBody> body{};

  QueryDevicePictureByListResponse() {}

  explicit QueryDevicePictureByListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDevicePictureByListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDevicePictureByListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDevicePictureByListResponse() = default;
};
class QueryDevicePictureFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> captureId{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<long> pictureType{};
  shared_ptr<string> productKey{};
  shared_ptr<long> thumbWidth{};

  QueryDevicePictureFileRequest() {}

  explicit QueryDevicePictureFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (captureId) {
      res["CaptureId"] = boost::any(*captureId);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (pictureType) {
      res["PictureType"] = boost::any(*pictureType);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (thumbWidth) {
      res["ThumbWidth"] = boost::any(*thumbWidth);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaptureId") != m.end() && !m["CaptureId"].empty()) {
      captureId = make_shared<string>(boost::any_cast<string>(m["CaptureId"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PictureType") != m.end() && !m["PictureType"].empty()) {
      pictureType = make_shared<long>(boost::any_cast<long>(m["PictureType"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("ThumbWidth") != m.end() && !m["ThumbWidth"].empty()) {
      thumbWidth = make_shared<long>(boost::any_cast<long>(m["ThumbWidth"]));
    }
  }


  virtual ~QueryDevicePictureFileRequest() = default;
};
class QueryDevicePictureFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> iotId{};
  shared_ptr<long> picCreateTime{};
  shared_ptr<string> picId{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> thumbUrl{};

  QueryDevicePictureFileResponseBodyData() {}

  explicit QueryDevicePictureFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (picCreateTime) {
      res["PicCreateTime"] = boost::any(*picCreateTime);
    }
    if (picId) {
      res["PicId"] = boost::any(*picId);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (thumbUrl) {
      res["ThumbUrl"] = boost::any(*thumbUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("PicCreateTime") != m.end() && !m["PicCreateTime"].empty()) {
      picCreateTime = make_shared<long>(boost::any_cast<long>(m["PicCreateTime"]));
    }
    if (m.find("PicId") != m.end() && !m["PicId"].empty()) {
      picId = make_shared<string>(boost::any_cast<string>(m["PicId"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("ThumbUrl") != m.end() && !m["ThumbUrl"].empty()) {
      thumbUrl = make_shared<string>(boost::any_cast<string>(m["ThumbUrl"]));
    }
  }


  virtual ~QueryDevicePictureFileResponseBodyData() = default;
};
class QueryDevicePictureFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryDevicePictureFileResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDevicePictureFileResponseBody() {}

  explicit QueryDevicePictureFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryDevicePictureFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryDevicePictureFileResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDevicePictureFileResponseBody() = default;
};
class QueryDevicePictureFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDevicePictureFileResponseBody> body{};

  QueryDevicePictureFileResponse() {}

  explicit QueryDevicePictureFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDevicePictureFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDevicePictureFileResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDevicePictureFileResponse() = default;
};
class QueryDevicePictureLifeCycleRequest : public Darabonba::Model {
public:
  shared_ptr<string> iotId{};

  QueryDevicePictureLifeCycleRequest() {}

  explicit QueryDevicePictureLifeCycleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
  }


  virtual ~QueryDevicePictureLifeCycleRequest() = default;
};
class QueryDevicePictureLifeCycleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<string> iotId{};

  QueryDevicePictureLifeCycleResponseBodyData() {}

  explicit QueryDevicePictureLifeCycleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
  }


  virtual ~QueryDevicePictureLifeCycleResponseBodyData() = default;
};
class QueryDevicePictureLifeCycleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryDevicePictureLifeCycleResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDevicePictureLifeCycleResponseBody() {}

  explicit QueryDevicePictureLifeCycleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryDevicePictureLifeCycleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryDevicePictureLifeCycleResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDevicePictureLifeCycleResponseBody() = default;
};
class QueryDevicePictureLifeCycleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDevicePictureLifeCycleResponseBody> body{};

  QueryDevicePictureLifeCycleResponse() {}

  explicit QueryDevicePictureLifeCycleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDevicePictureLifeCycleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDevicePictureLifeCycleResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDevicePictureLifeCycleResponse() = default;
};
class QueryDeviceRecordLifeCycleRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> deviceList{};

  QueryDeviceRecordLifeCycleRequest() {}

  explicit QueryDeviceRecordLifeCycleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceList) {
      res["DeviceList"] = boost::any(*deviceList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceList") != m.end() && !m["DeviceList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryDeviceRecordLifeCycleRequest() = default;
};
class QueryDeviceRecordLifeCycleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<string> iotId{};

  QueryDeviceRecordLifeCycleResponseBodyData() {}

  explicit QueryDeviceRecordLifeCycleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
  }


  virtual ~QueryDeviceRecordLifeCycleResponseBodyData() = default;
};
class QueryDeviceRecordLifeCycleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QueryDeviceRecordLifeCycleResponseBodyData>> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDeviceRecordLifeCycleResponseBody() {}

  explicit QueryDeviceRecordLifeCycleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryDeviceRecordLifeCycleResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDeviceRecordLifeCycleResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryDeviceRecordLifeCycleResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDeviceRecordLifeCycleResponseBody() = default;
};
class QueryDeviceRecordLifeCycleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceRecordLifeCycleResponseBody> body{};

  QueryDeviceRecordLifeCycleResponse() {}

  explicit QueryDeviceRecordLifeCycleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDeviceRecordLifeCycleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceRecordLifeCycleResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceRecordLifeCycleResponse() = default;
};
class QueryDeviceVodUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<bool> enableStun{};
  shared_ptr<long> encryptType{};
  shared_ptr<string> fileName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<bool> playUnLimited{};
  shared_ptr<string> productKey{};
  shared_ptr<string> scheme{};
  shared_ptr<long> seekTime{};
  shared_ptr<bool> shouldEncrypt{};
  shared_ptr<long> urlValidDuration{};

  QueryDeviceVodUrlRequest() {}

  explicit QueryDeviceVodUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (enableStun) {
      res["EnableStun"] = boost::any(*enableStun);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (playUnLimited) {
      res["PlayUnLimited"] = boost::any(*playUnLimited);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    if (seekTime) {
      res["SeekTime"] = boost::any(*seekTime);
    }
    if (shouldEncrypt) {
      res["ShouldEncrypt"] = boost::any(*shouldEncrypt);
    }
    if (urlValidDuration) {
      res["UrlValidDuration"] = boost::any(*urlValidDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EnableStun") != m.end() && !m["EnableStun"].empty()) {
      enableStun = make_shared<bool>(boost::any_cast<bool>(m["EnableStun"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PlayUnLimited") != m.end() && !m["PlayUnLimited"].empty()) {
      playUnLimited = make_shared<bool>(boost::any_cast<bool>(m["PlayUnLimited"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
    if (m.find("SeekTime") != m.end() && !m["SeekTime"].empty()) {
      seekTime = make_shared<long>(boost::any_cast<long>(m["SeekTime"]));
    }
    if (m.find("ShouldEncrypt") != m.end() && !m["ShouldEncrypt"].empty()) {
      shouldEncrypt = make_shared<bool>(boost::any_cast<bool>(m["ShouldEncrypt"]));
    }
    if (m.find("UrlValidDuration") != m.end() && !m["UrlValidDuration"].empty()) {
      urlValidDuration = make_shared<long>(boost::any_cast<long>(m["UrlValidDuration"]));
    }
  }


  virtual ~QueryDeviceVodUrlRequest() = default;
};
class QueryDeviceVodUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> decryptKey{};
  shared_ptr<string> stunInfo{};
  shared_ptr<string> vodUrl{};

  QueryDeviceVodUrlResponseBodyData() {}

  explicit QueryDeviceVodUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (decryptKey) {
      res["DecryptKey"] = boost::any(*decryptKey);
    }
    if (stunInfo) {
      res["StunInfo"] = boost::any(*stunInfo);
    }
    if (vodUrl) {
      res["VodUrl"] = boost::any(*vodUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DecryptKey") != m.end() && !m["DecryptKey"].empty()) {
      decryptKey = make_shared<string>(boost::any_cast<string>(m["DecryptKey"]));
    }
    if (m.find("StunInfo") != m.end() && !m["StunInfo"].empty()) {
      stunInfo = make_shared<string>(boost::any_cast<string>(m["StunInfo"]));
    }
    if (m.find("VodUrl") != m.end() && !m["VodUrl"].empty()) {
      vodUrl = make_shared<string>(boost::any_cast<string>(m["VodUrl"]));
    }
  }


  virtual ~QueryDeviceVodUrlResponseBodyData() = default;
};
class QueryDeviceVodUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryDeviceVodUrlResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDeviceVodUrlResponseBody() {}

  explicit QueryDeviceVodUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryDeviceVodUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryDeviceVodUrlResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDeviceVodUrlResponseBody() = default;
};
class QueryDeviceVodUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceVodUrlResponseBody> body{};

  QueryDeviceVodUrlResponse() {}

  explicit QueryDeviceVodUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDeviceVodUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceVodUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceVodUrlResponse() = default;
};
class QueryDeviceVodUrlByTimeRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> deviceName{};
  shared_ptr<bool> enableStun{};
  shared_ptr<long> encryptType{};
  shared_ptr<long> endTime{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<bool> playUnLimited{};
  shared_ptr<string> productKey{};
  shared_ptr<string> scheme{};
  shared_ptr<long> seekTime{};
  shared_ptr<bool> shouldEncrypt{};
  shared_ptr<long> urlValidDuration{};

  QueryDeviceVodUrlByTimeRequest() {}

  explicit QueryDeviceVodUrlByTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (enableStun) {
      res["EnableStun"] = boost::any(*enableStun);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (playUnLimited) {
      res["PlayUnLimited"] = boost::any(*playUnLimited);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    if (seekTime) {
      res["SeekTime"] = boost::any(*seekTime);
    }
    if (shouldEncrypt) {
      res["ShouldEncrypt"] = boost::any(*shouldEncrypt);
    }
    if (urlValidDuration) {
      res["UrlValidDuration"] = boost::any(*urlValidDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EnableStun") != m.end() && !m["EnableStun"].empty()) {
      enableStun = make_shared<bool>(boost::any_cast<bool>(m["EnableStun"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PlayUnLimited") != m.end() && !m["PlayUnLimited"].empty()) {
      playUnLimited = make_shared<bool>(boost::any_cast<bool>(m["PlayUnLimited"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
    if (m.find("SeekTime") != m.end() && !m["SeekTime"].empty()) {
      seekTime = make_shared<long>(boost::any_cast<long>(m["SeekTime"]));
    }
    if (m.find("ShouldEncrypt") != m.end() && !m["ShouldEncrypt"].empty()) {
      shouldEncrypt = make_shared<bool>(boost::any_cast<bool>(m["ShouldEncrypt"]));
    }
    if (m.find("UrlValidDuration") != m.end() && !m["UrlValidDuration"].empty()) {
      urlValidDuration = make_shared<long>(boost::any_cast<long>(m["UrlValidDuration"]));
    }
  }


  virtual ~QueryDeviceVodUrlByTimeRequest() = default;
};
class QueryDeviceVodUrlByTimeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> decryptKey{};
  shared_ptr<string> stunInfo{};
  shared_ptr<string> vodUrl{};

  QueryDeviceVodUrlByTimeResponseBodyData() {}

  explicit QueryDeviceVodUrlByTimeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (decryptKey) {
      res["DecryptKey"] = boost::any(*decryptKey);
    }
    if (stunInfo) {
      res["StunInfo"] = boost::any(*stunInfo);
    }
    if (vodUrl) {
      res["VodUrl"] = boost::any(*vodUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DecryptKey") != m.end() && !m["DecryptKey"].empty()) {
      decryptKey = make_shared<string>(boost::any_cast<string>(m["DecryptKey"]));
    }
    if (m.find("StunInfo") != m.end() && !m["StunInfo"].empty()) {
      stunInfo = make_shared<string>(boost::any_cast<string>(m["StunInfo"]));
    }
    if (m.find("VodUrl") != m.end() && !m["VodUrl"].empty()) {
      vodUrl = make_shared<string>(boost::any_cast<string>(m["VodUrl"]));
    }
  }


  virtual ~QueryDeviceVodUrlByTimeResponseBodyData() = default;
};
class QueryDeviceVodUrlByTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryDeviceVodUrlByTimeResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryDeviceVodUrlByTimeResponseBody() {}

  explicit QueryDeviceVodUrlByTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryDeviceVodUrlByTimeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryDeviceVodUrlByTimeResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryDeviceVodUrlByTimeResponseBody() = default;
};
class QueryDeviceVodUrlByTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryDeviceVodUrlByTimeResponseBody> body{};

  QueryDeviceVodUrlByTimeResponse() {}

  explicit QueryDeviceVodUrlByTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryDeviceVodUrlByTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDeviceVodUrlByTimeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDeviceVodUrlByTimeResponse() = default;
};
class QueryEventRecordPlanDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};

  QueryEventRecordPlanDetailRequest() {}

  explicit QueryEventRecordPlanDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~QueryEventRecordPlanDetailRequest() = default;
};
class QueryEventRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> dayOfWeek{};
  shared_ptr<long> end{};

  QueryEventRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList() {}

  explicit QueryEventRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (dayOfWeek) {
      res["DayOfWeek"] = boost::any(*dayOfWeek);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("DayOfWeek") != m.end() && !m["DayOfWeek"].empty()) {
      dayOfWeek = make_shared<long>(boost::any_cast<long>(m["DayOfWeek"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~QueryEventRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList() = default;
};
class QueryEventRecordPlanDetailResponseBodyDataTemplateInfo : public Darabonba::Model {
public:
  shared_ptr<long> allDay{};
  shared_ptr<long> default_{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<QueryEventRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList>> timeSectionList{};

  QueryEventRecordPlanDetailResponseBodyDataTemplateInfo() {}

  explicit QueryEventRecordPlanDetailResponseBodyDataTemplateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allDay) {
      res["AllDay"] = boost::any(*allDay);
    }
    if (default_) {
      res["Default"] = boost::any(*default_);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeSectionList) {
      vector<boost::any> temp1;
      for(auto item1:*timeSectionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeSectionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllDay") != m.end() && !m["AllDay"].empty()) {
      allDay = make_shared<long>(boost::any_cast<long>(m["AllDay"]));
    }
    if (m.find("Default") != m.end() && !m["Default"].empty()) {
      default_ = make_shared<long>(boost::any_cast<long>(m["Default"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TimeSectionList") != m.end() && !m["TimeSectionList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeSectionList"].type()) {
        vector<QueryEventRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeSectionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEventRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeSectionList = make_shared<vector<QueryEventRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList>>(expect1);
      }
    }
  }


  virtual ~QueryEventRecordPlanDetailResponseBodyDataTemplateInfo() = default;
};
class QueryEventRecordPlanDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> planId{};
  shared_ptr<long> preRecordDuration{};
  shared_ptr<long> recordDuration{};
  shared_ptr<string> templateId{};
  shared_ptr<QueryEventRecordPlanDetailResponseBodyDataTemplateInfo> templateInfo{};

  QueryEventRecordPlanDetailResponseBodyData() {}

  explicit QueryEventRecordPlanDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (preRecordDuration) {
      res["PreRecordDuration"] = boost::any(*preRecordDuration);
    }
    if (recordDuration) {
      res["RecordDuration"] = boost::any(*recordDuration);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateInfo) {
      res["TemplateInfo"] = templateInfo ? boost::any(templateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PreRecordDuration") != m.end() && !m["PreRecordDuration"].empty()) {
      preRecordDuration = make_shared<long>(boost::any_cast<long>(m["PreRecordDuration"]));
    }
    if (m.find("RecordDuration") != m.end() && !m["RecordDuration"].empty()) {
      recordDuration = make_shared<long>(boost::any_cast<long>(m["RecordDuration"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateInfo") != m.end() && !m["TemplateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TemplateInfo"].type()) {
        QueryEventRecordPlanDetailResponseBodyDataTemplateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TemplateInfo"]));
        templateInfo = make_shared<QueryEventRecordPlanDetailResponseBodyDataTemplateInfo>(model1);
      }
    }
  }


  virtual ~QueryEventRecordPlanDetailResponseBodyData() = default;
};
class QueryEventRecordPlanDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryEventRecordPlanDetailResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEventRecordPlanDetailResponseBody() {}

  explicit QueryEventRecordPlanDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryEventRecordPlanDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryEventRecordPlanDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryEventRecordPlanDetailResponseBody() = default;
};
class QueryEventRecordPlanDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEventRecordPlanDetailResponseBody> body{};

  QueryEventRecordPlanDetailResponse() {}

  explicit QueryEventRecordPlanDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryEventRecordPlanDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEventRecordPlanDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEventRecordPlanDetailResponse() = default;
};
class QueryEventRecordPlanDeviceByDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> streamType{};

  QueryEventRecordPlanDeviceByDeviceRequest() {}

  explicit QueryEventRecordPlanDeviceByDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~QueryEventRecordPlanDeviceByDeviceRequest() = default;
};
class QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> dayOfWeek{};
  shared_ptr<long> end{};

  QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList() {}

  explicit QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (dayOfWeek) {
      res["DayOfWeek"] = boost::any(*dayOfWeek);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("DayOfWeek") != m.end() && !m["DayOfWeek"].empty()) {
      dayOfWeek = make_shared<long>(boost::any_cast<long>(m["DayOfWeek"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList() = default;
};
class QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo : public Darabonba::Model {
public:
  shared_ptr<long> allDay{};
  shared_ptr<long> default_{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList>> timeSectionList{};

  QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo() {}

  explicit QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allDay) {
      res["AllDay"] = boost::any(*allDay);
    }
    if (default_) {
      res["Default"] = boost::any(*default_);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeSectionList) {
      vector<boost::any> temp1;
      for(auto item1:*timeSectionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeSectionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllDay") != m.end() && !m["AllDay"].empty()) {
      allDay = make_shared<long>(boost::any_cast<long>(m["AllDay"]));
    }
    if (m.find("Default") != m.end() && !m["Default"].empty()) {
      default_ = make_shared<long>(boost::any_cast<long>(m["Default"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TimeSectionList") != m.end() && !m["TimeSectionList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeSectionList"].type()) {
        vector<QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeSectionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeSectionList = make_shared<vector<QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList>>(expect1);
      }
    }
  }


  virtual ~QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo() = default;
};
class QueryEventRecordPlanDeviceByDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> planId{};
  shared_ptr<long> preRecordDuration{};
  shared_ptr<long> recordDuration{};
  shared_ptr<string> templateId{};
  shared_ptr<QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo> templateInfo{};

  QueryEventRecordPlanDeviceByDeviceResponseBodyData() {}

  explicit QueryEventRecordPlanDeviceByDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (preRecordDuration) {
      res["PreRecordDuration"] = boost::any(*preRecordDuration);
    }
    if (recordDuration) {
      res["RecordDuration"] = boost::any(*recordDuration);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateInfo) {
      res["TemplateInfo"] = templateInfo ? boost::any(templateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PreRecordDuration") != m.end() && !m["PreRecordDuration"].empty()) {
      preRecordDuration = make_shared<long>(boost::any_cast<long>(m["PreRecordDuration"]));
    }
    if (m.find("RecordDuration") != m.end() && !m["RecordDuration"].empty()) {
      recordDuration = make_shared<long>(boost::any_cast<long>(m["RecordDuration"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateInfo") != m.end() && !m["TemplateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TemplateInfo"].type()) {
        QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TemplateInfo"]));
        templateInfo = make_shared<QueryEventRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo>(model1);
      }
    }
  }


  virtual ~QueryEventRecordPlanDeviceByDeviceResponseBodyData() = default;
};
class QueryEventRecordPlanDeviceByDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryEventRecordPlanDeviceByDeviceResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEventRecordPlanDeviceByDeviceResponseBody() {}

  explicit QueryEventRecordPlanDeviceByDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryEventRecordPlanDeviceByDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryEventRecordPlanDeviceByDeviceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryEventRecordPlanDeviceByDeviceResponseBody() = default;
};
class QueryEventRecordPlanDeviceByDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEventRecordPlanDeviceByDeviceResponseBody> body{};

  QueryEventRecordPlanDeviceByDeviceResponse() {}

  explicit QueryEventRecordPlanDeviceByDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryEventRecordPlanDeviceByDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEventRecordPlanDeviceByDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEventRecordPlanDeviceByDeviceResponse() = default;
};
class QueryEventRecordPlanDeviceByPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> planId{};

  QueryEventRecordPlanDeviceByPlanRequest() {}

  explicit QueryEventRecordPlanDeviceByPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~QueryEventRecordPlanDeviceByPlanRequest() = default;
};
class QueryEventRecordPlanDeviceByPlanResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> iotId{};
  shared_ptr<long> streamType{};

  QueryEventRecordPlanDeviceByPlanResponseBodyDataList() {}

  explicit QueryEventRecordPlanDeviceByPlanResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~QueryEventRecordPlanDeviceByPlanResponseBodyDataList() = default;
};
class QueryEventRecordPlanDeviceByPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryEventRecordPlanDeviceByPlanResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryEventRecordPlanDeviceByPlanResponseBodyData() {}

  explicit QueryEventRecordPlanDeviceByPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryEventRecordPlanDeviceByPlanResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEventRecordPlanDeviceByPlanResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryEventRecordPlanDeviceByPlanResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryEventRecordPlanDeviceByPlanResponseBodyData() = default;
};
class QueryEventRecordPlanDeviceByPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryEventRecordPlanDeviceByPlanResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEventRecordPlanDeviceByPlanResponseBody() {}

  explicit QueryEventRecordPlanDeviceByPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryEventRecordPlanDeviceByPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryEventRecordPlanDeviceByPlanResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryEventRecordPlanDeviceByPlanResponseBody() = default;
};
class QueryEventRecordPlanDeviceByPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEventRecordPlanDeviceByPlanResponseBody> body{};

  QueryEventRecordPlanDeviceByPlanResponse() {}

  explicit QueryEventRecordPlanDeviceByPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryEventRecordPlanDeviceByPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEventRecordPlanDeviceByPlanResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEventRecordPlanDeviceByPlanResponse() = default;
};
class QueryEventRecordPlansRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  QueryEventRecordPlansRequest() {}

  explicit QueryEventRecordPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryEventRecordPlansRequest() = default;
};
class QueryEventRecordPlansResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> eventType{};
  shared_ptr<string> name{};
  shared_ptr<string> planId{};
  shared_ptr<long> preRecordDuration{};
  shared_ptr<long> recordDuration{};
  shared_ptr<string> templateId{};

  QueryEventRecordPlansResponseBodyDataList() {}

  explicit QueryEventRecordPlansResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (preRecordDuration) {
      res["PreRecordDuration"] = boost::any(*preRecordDuration);
    }
    if (recordDuration) {
      res["RecordDuration"] = boost::any(*recordDuration);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PreRecordDuration") != m.end() && !m["PreRecordDuration"].empty()) {
      preRecordDuration = make_shared<long>(boost::any_cast<long>(m["PreRecordDuration"]));
    }
    if (m.find("RecordDuration") != m.end() && !m["RecordDuration"].empty()) {
      recordDuration = make_shared<long>(boost::any_cast<long>(m["RecordDuration"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~QueryEventRecordPlansResponseBodyDataList() = default;
};
class QueryEventRecordPlansResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryEventRecordPlansResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryEventRecordPlansResponseBodyData() {}

  explicit QueryEventRecordPlansResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryEventRecordPlansResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEventRecordPlansResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryEventRecordPlansResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryEventRecordPlansResponseBodyData() = default;
};
class QueryEventRecordPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryEventRecordPlansResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEventRecordPlansResponseBody() {}

  explicit QueryEventRecordPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryEventRecordPlansResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryEventRecordPlansResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryEventRecordPlansResponseBody() = default;
};
class QueryEventRecordPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEventRecordPlansResponseBody> body{};

  QueryEventRecordPlansResponse() {}

  explicit QueryEventRecordPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryEventRecordPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEventRecordPlansResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEventRecordPlansResponse() = default;
};
class QueryFaceAllDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> isolationId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  QueryFaceAllDeviceGroupRequest() {}

  explicit QueryFaceAllDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryFaceAllDeviceGroupRequest() = default;
};
class QueryFaceAllDeviceGroupResponseBodyDataDeviceGroupList : public Darabonba::Model {
public:
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> deviceGroupName{};
  shared_ptr<string> modifiedTime{};

  QueryFaceAllDeviceGroupResponseBodyDataDeviceGroupList() {}

  explicit QueryFaceAllDeviceGroupResponseBodyDataDeviceGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (deviceGroupName) {
      res["DeviceGroupName"] = boost::any(*deviceGroupName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("DeviceGroupName") != m.end() && !m["DeviceGroupName"].empty()) {
      deviceGroupName = make_shared<string>(boost::any_cast<string>(m["DeviceGroupName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
  }


  virtual ~QueryFaceAllDeviceGroupResponseBodyDataDeviceGroupList() = default;
};
class QueryFaceAllDeviceGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFaceAllDeviceGroupResponseBodyDataDeviceGroupList>> deviceGroupList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryFaceAllDeviceGroupResponseBodyData() {}

  explicit QueryFaceAllDeviceGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*deviceGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceGroupList"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupList") != m.end() && !m["DeviceGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceGroupList"].type()) {
        vector<QueryFaceAllDeviceGroupResponseBodyDataDeviceGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceAllDeviceGroupResponseBodyDataDeviceGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceGroupList = make_shared<vector<QueryFaceAllDeviceGroupResponseBodyDataDeviceGroupList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryFaceAllDeviceGroupResponseBodyData() = default;
};
class QueryFaceAllDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceAllDeviceGroupResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceAllDeviceGroupResponseBody() {}

  explicit QueryFaceAllDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceAllDeviceGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceAllDeviceGroupResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceAllDeviceGroupResponseBody() = default;
};
class QueryFaceAllDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceAllDeviceGroupResponseBody> body{};

  QueryFaceAllDeviceGroupResponse() {}

  explicit QueryFaceAllDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceAllDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceAllDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceAllDeviceGroupResponse() = default;
};
class QueryFaceAllUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  QueryFaceAllUserGroupRequest() {}

  explicit QueryFaceAllUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryFaceAllUserGroupRequest() = default;
};
class QueryFaceAllUserGroupResponseBodyDataUserGroupList : public Darabonba::Model {
public:
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userGroupName{};

  QueryFaceAllUserGroupResponseBodyDataUserGroupList() {}

  explicit QueryFaceAllUserGroupResponseBodyDataUserGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
  }


  virtual ~QueryFaceAllUserGroupResponseBodyDataUserGroupList() = default;
};
class QueryFaceAllUserGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<QueryFaceAllUserGroupResponseBodyDataUserGroupList>> userGroupList{};

  QueryFaceAllUserGroupResponseBodyData() {}

  explicit QueryFaceAllUserGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (userGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*userGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroupList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("UserGroupList") != m.end() && !m["UserGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroupList"].type()) {
        vector<QueryFaceAllUserGroupResponseBodyDataUserGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceAllUserGroupResponseBodyDataUserGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroupList = make_shared<vector<QueryFaceAllUserGroupResponseBodyDataUserGroupList>>(expect1);
      }
    }
  }


  virtual ~QueryFaceAllUserGroupResponseBodyData() = default;
};
class QueryFaceAllUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceAllUserGroupResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceAllUserGroupResponseBody() {}

  explicit QueryFaceAllUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceAllUserGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceAllUserGroupResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceAllUserGroupResponseBody() = default;
};
class QueryFaceAllUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceAllUserGroupResponseBody> body{};

  QueryFaceAllUserGroupResponse() {}

  explicit QueryFaceAllUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceAllUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceAllUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceAllUserGroupResponse() = default;
};
class QueryFaceAllUserGroupAndDeviceGroupRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  QueryFaceAllUserGroupAndDeviceGroupRelationRequest() {}

  explicit QueryFaceAllUserGroupAndDeviceGroupRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryFaceAllUserGroupAndDeviceGroupRelationRequest() = default;
};
class QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> controlId{};
  shared_ptr<string> controlType{};
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> userGroupId{};

  QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyDataList() {}

  explicit QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlId) {
      res["ControlId"] = boost::any(*controlId);
    }
    if (controlType) {
      res["ControlType"] = boost::any(*controlType);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlId") != m.end() && !m["ControlId"].empty()) {
      controlId = make_shared<string>(boost::any_cast<string>(m["ControlId"]));
    }
    if (m.find("ControlType") != m.end() && !m["ControlType"].empty()) {
      controlType = make_shared<string>(boost::any_cast<string>(m["ControlType"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyDataList() = default;
};
class QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyData() {}

  explicit QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyData() = default;
};
class QueryFaceAllUserGroupAndDeviceGroupRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceAllUserGroupAndDeviceGroupRelationResponseBody() {}

  explicit QueryFaceAllUserGroupAndDeviceGroupRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceAllUserGroupAndDeviceGroupRelationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceAllUserGroupAndDeviceGroupRelationResponseBody() = default;
};
class QueryFaceAllUserGroupAndDeviceGroupRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceAllUserGroupAndDeviceGroupRelationResponseBody> body{};

  QueryFaceAllUserGroupAndDeviceGroupRelationResponse() {}

  explicit QueryFaceAllUserGroupAndDeviceGroupRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceAllUserGroupAndDeviceGroupRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceAllUserGroupAndDeviceGroupRelationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceAllUserGroupAndDeviceGroupRelationResponse() = default;
};
class QueryFaceAllUserIdsByGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userGroupId{};

  QueryFaceAllUserIdsByGroupIdRequest() {}

  explicit QueryFaceAllUserIdsByGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~QueryFaceAllUserIdsByGroupIdRequest() = default;
};
class QueryFaceAllUserIdsByGroupIdResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> customUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<string> userId{};

  QueryFaceAllUserIdsByGroupIdResponseBodyDataList() {}

  explicit QueryFaceAllUserIdsByGroupIdResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceAllUserIdsByGroupIdResponseBodyDataList() = default;
};
class QueryFaceAllUserIdsByGroupIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFaceAllUserIdsByGroupIdResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryFaceAllUserIdsByGroupIdResponseBodyData() {}

  explicit QueryFaceAllUserIdsByGroupIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryFaceAllUserIdsByGroupIdResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceAllUserIdsByGroupIdResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryFaceAllUserIdsByGroupIdResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryFaceAllUserIdsByGroupIdResponseBodyData() = default;
};
class QueryFaceAllUserIdsByGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceAllUserIdsByGroupIdResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceAllUserIdsByGroupIdResponseBody() {}

  explicit QueryFaceAllUserIdsByGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceAllUserIdsByGroupIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceAllUserIdsByGroupIdResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceAllUserIdsByGroupIdResponseBody() = default;
};
class QueryFaceAllUserIdsByGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceAllUserIdsByGroupIdResponseBody> body{};

  QueryFaceAllUserIdsByGroupIdResponse() {}

  explicit QueryFaceAllUserIdsByGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceAllUserIdsByGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceAllUserIdsByGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceAllUserIdsByGroupIdResponse() = default;
};
class QueryFaceCustomUserIdByUserIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<string> userId{};

  QueryFaceCustomUserIdByUserIdRequest() {}

  explicit QueryFaceCustomUserIdByUserIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceCustomUserIdByUserIdRequest() = default;
};
class QueryFaceCustomUserIdByUserIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceCustomUserIdByUserIdResponseBody() {}

  explicit QueryFaceCustomUserIdByUserIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceCustomUserIdByUserIdResponseBody() = default;
};
class QueryFaceCustomUserIdByUserIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceCustomUserIdByUserIdResponseBody> body{};

  QueryFaceCustomUserIdByUserIdResponse() {}

  explicit QueryFaceCustomUserIdByUserIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceCustomUserIdByUserIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceCustomUserIdByUserIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceCustomUserIdByUserIdResponse() = default;
};
class QueryFaceDeviceGroupsByDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> isolationId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productKey{};

  QueryFaceDeviceGroupsByDeviceRequest() {}

  explicit QueryFaceDeviceGroupsByDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryFaceDeviceGroupsByDeviceRequest() = default;
};
class QueryFaceDeviceGroupsByDeviceResponseBodyDataDeviceGroupList : public Darabonba::Model {
public:
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> deviceGroupName{};
  shared_ptr<string> modifiedTime{};

  QueryFaceDeviceGroupsByDeviceResponseBodyDataDeviceGroupList() {}

  explicit QueryFaceDeviceGroupsByDeviceResponseBodyDataDeviceGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (deviceGroupName) {
      res["DeviceGroupName"] = boost::any(*deviceGroupName);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("DeviceGroupName") != m.end() && !m["DeviceGroupName"].empty()) {
      deviceGroupName = make_shared<string>(boost::any_cast<string>(m["DeviceGroupName"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
  }


  virtual ~QueryFaceDeviceGroupsByDeviceResponseBodyDataDeviceGroupList() = default;
};
class QueryFaceDeviceGroupsByDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFaceDeviceGroupsByDeviceResponseBodyDataDeviceGroupList>> deviceGroupList{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryFaceDeviceGroupsByDeviceResponseBodyData() {}

  explicit QueryFaceDeviceGroupsByDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*deviceGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceGroupList"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupList") != m.end() && !m["DeviceGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceGroupList"].type()) {
        vector<QueryFaceDeviceGroupsByDeviceResponseBodyDataDeviceGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceDeviceGroupsByDeviceResponseBodyDataDeviceGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceGroupList = make_shared<vector<QueryFaceDeviceGroupsByDeviceResponseBodyDataDeviceGroupList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryFaceDeviceGroupsByDeviceResponseBodyData() = default;
};
class QueryFaceDeviceGroupsByDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceDeviceGroupsByDeviceResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceDeviceGroupsByDeviceResponseBody() {}

  explicit QueryFaceDeviceGroupsByDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceDeviceGroupsByDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceDeviceGroupsByDeviceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceDeviceGroupsByDeviceResponseBody() = default;
};
class QueryFaceDeviceGroupsByDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceDeviceGroupsByDeviceResponseBody> body{};

  QueryFaceDeviceGroupsByDeviceResponse() {}

  explicit QueryFaceDeviceGroupsByDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceDeviceGroupsByDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceDeviceGroupsByDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceDeviceGroupsByDeviceResponse() = default;
};
class QueryFaceUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<string> userId{};

  QueryFaceUserRequest() {}

  explicit QueryFaceUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceUserRequest() = default;
};
class QueryFaceUserResponseBodyDataFacePicListFeatureDTOList : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<string> algorithmVersion{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> faceMd5{};

  QueryFaceUserResponseBodyDataFacePicListFeatureDTOList() {}

  explicit QueryFaceUserResponseBodyDataFacePicListFeatureDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (faceMd5) {
      res["FaceMd5"] = boost::any(*faceMd5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FaceMd5") != m.end() && !m["FaceMd5"].empty()) {
      faceMd5 = make_shared<string>(boost::any_cast<string>(m["FaceMd5"]));
    }
  }


  virtual ~QueryFaceUserResponseBodyDataFacePicListFeatureDTOList() = default;
};
class QueryFaceUserResponseBodyDataFacePicList : public Darabonba::Model {
public:
  shared_ptr<string> faceMd5{};
  shared_ptr<string> faceUrl{};
  shared_ptr<vector<QueryFaceUserResponseBodyDataFacePicListFeatureDTOList>> featureDTOList{};

  QueryFaceUserResponseBodyDataFacePicList() {}

  explicit QueryFaceUserResponseBodyDataFacePicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceMd5) {
      res["FaceMd5"] = boost::any(*faceMd5);
    }
    if (faceUrl) {
      res["FaceUrl"] = boost::any(*faceUrl);
    }
    if (featureDTOList) {
      vector<boost::any> temp1;
      for(auto item1:*featureDTOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeatureDTOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceMd5") != m.end() && !m["FaceMd5"].empty()) {
      faceMd5 = make_shared<string>(boost::any_cast<string>(m["FaceMd5"]));
    }
    if (m.find("FaceUrl") != m.end() && !m["FaceUrl"].empty()) {
      faceUrl = make_shared<string>(boost::any_cast<string>(m["FaceUrl"]));
    }
    if (m.find("FeatureDTOList") != m.end() && !m["FeatureDTOList"].empty()) {
      if (typeid(vector<boost::any>) == m["FeatureDTOList"].type()) {
        vector<QueryFaceUserResponseBodyDataFacePicListFeatureDTOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeatureDTOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceUserResponseBodyDataFacePicListFeatureDTOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        featureDTOList = make_shared<vector<QueryFaceUserResponseBodyDataFacePicListFeatureDTOList>>(expect1);
      }
    }
  }


  virtual ~QueryFaceUserResponseBodyDataFacePicList() = default;
};
class QueryFaceUserResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> customUserId{};
  shared_ptr<vector<QueryFaceUserResponseBodyDataFacePicList>> facePicList{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<string> userId{};

  QueryFaceUserResponseBodyData() {}

  explicit QueryFaceUserResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (facePicList) {
      vector<boost::any> temp1;
      for(auto item1:*facePicList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FacePicList"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("FacePicList") != m.end() && !m["FacePicList"].empty()) {
      if (typeid(vector<boost::any>) == m["FacePicList"].type()) {
        vector<QueryFaceUserResponseBodyDataFacePicList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FacePicList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceUserResponseBodyDataFacePicList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        facePicList = make_shared<vector<QueryFaceUserResponseBodyDataFacePicList>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceUserResponseBodyData() = default;
};
class QueryFaceUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceUserResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceUserResponseBody() {}

  explicit QueryFaceUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceUserResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceUserResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceUserResponseBody() = default;
};
class QueryFaceUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceUserResponseBody> body{};

  QueryFaceUserResponse() {}

  explicit QueryFaceUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceUserResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceUserResponse() = default;
};
class QueryFaceUserBatchRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<vector<string>> userIdList{};

  QueryFaceUserBatchRequest() {}

  explicit QueryFaceUserBatchRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userIdList) {
      res["UserIdList"] = boost::any(*userIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserIdList") != m.end() && !m["UserIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["UserIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["UserIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      userIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryFaceUserBatchRequest() = default;
};
class QueryFaceUserBatchResponseBodyDataFacePicListFeatureDTOList : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<string> algorithmVersion{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> faceMd5{};

  QueryFaceUserBatchResponseBodyDataFacePicListFeatureDTOList() {}

  explicit QueryFaceUserBatchResponseBodyDataFacePicListFeatureDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (faceMd5) {
      res["FaceMd5"] = boost::any(*faceMd5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FaceMd5") != m.end() && !m["FaceMd5"].empty()) {
      faceMd5 = make_shared<string>(boost::any_cast<string>(m["FaceMd5"]));
    }
  }


  virtual ~QueryFaceUserBatchResponseBodyDataFacePicListFeatureDTOList() = default;
};
class QueryFaceUserBatchResponseBodyDataFacePicList : public Darabonba::Model {
public:
  shared_ptr<string> faceMd5{};
  shared_ptr<string> faceUrl{};
  shared_ptr<vector<QueryFaceUserBatchResponseBodyDataFacePicListFeatureDTOList>> featureDTOList{};

  QueryFaceUserBatchResponseBodyDataFacePicList() {}

  explicit QueryFaceUserBatchResponseBodyDataFacePicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceMd5) {
      res["FaceMd5"] = boost::any(*faceMd5);
    }
    if (faceUrl) {
      res["FaceUrl"] = boost::any(*faceUrl);
    }
    if (featureDTOList) {
      vector<boost::any> temp1;
      for(auto item1:*featureDTOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeatureDTOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceMd5") != m.end() && !m["FaceMd5"].empty()) {
      faceMd5 = make_shared<string>(boost::any_cast<string>(m["FaceMd5"]));
    }
    if (m.find("FaceUrl") != m.end() && !m["FaceUrl"].empty()) {
      faceUrl = make_shared<string>(boost::any_cast<string>(m["FaceUrl"]));
    }
    if (m.find("FeatureDTOList") != m.end() && !m["FeatureDTOList"].empty()) {
      if (typeid(vector<boost::any>) == m["FeatureDTOList"].type()) {
        vector<QueryFaceUserBatchResponseBodyDataFacePicListFeatureDTOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeatureDTOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceUserBatchResponseBodyDataFacePicListFeatureDTOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        featureDTOList = make_shared<vector<QueryFaceUserBatchResponseBodyDataFacePicListFeatureDTOList>>(expect1);
      }
    }
  }


  virtual ~QueryFaceUserBatchResponseBodyDataFacePicList() = default;
};
class QueryFaceUserBatchResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> customUserId{};
  shared_ptr<vector<QueryFaceUserBatchResponseBodyDataFacePicList>> facePicList{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<string> userId{};

  QueryFaceUserBatchResponseBodyData() {}

  explicit QueryFaceUserBatchResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (facePicList) {
      vector<boost::any> temp1;
      for(auto item1:*facePicList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FacePicList"] = boost::any(temp1);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("FacePicList") != m.end() && !m["FacePicList"].empty()) {
      if (typeid(vector<boost::any>) == m["FacePicList"].type()) {
        vector<QueryFaceUserBatchResponseBodyDataFacePicList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FacePicList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceUserBatchResponseBodyDataFacePicList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        facePicList = make_shared<vector<QueryFaceUserBatchResponseBodyDataFacePicList>>(expect1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceUserBatchResponseBodyData() = default;
};
class QueryFaceUserBatchResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryFaceUserBatchResponseBodyData>> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceUserBatchResponseBody() {}

  explicit QueryFaceUserBatchResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryFaceUserBatchResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceUserBatchResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryFaceUserBatchResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceUserBatchResponseBody() = default;
};
class QueryFaceUserBatchResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceUserBatchResponseBody> body{};

  QueryFaceUserBatchResponse() {}

  explicit QueryFaceUserBatchResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceUserBatchResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceUserBatchResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceUserBatchResponse() = default;
};
class QueryFaceUserByNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> params{};

  QueryFaceUserByNameRequest() {}

  explicit QueryFaceUserByNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
  }


  virtual ~QueryFaceUserByNameRequest() = default;
};
class QueryFaceUserByNameResponseBodyDataListFacePicListFeatureDTOList : public Darabonba::Model {
public:
  shared_ptr<string> algorithmName{};
  shared_ptr<string> algorithmProvider{};
  shared_ptr<string> algorithmVersion{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> faceMd5{};

  QueryFaceUserByNameResponseBodyDataListFacePicListFeatureDTOList() {}

  explicit QueryFaceUserByNameResponseBodyDataListFacePicListFeatureDTOList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (algorithmName) {
      res["AlgorithmName"] = boost::any(*algorithmName);
    }
    if (algorithmProvider) {
      res["AlgorithmProvider"] = boost::any(*algorithmProvider);
    }
    if (algorithmVersion) {
      res["AlgorithmVersion"] = boost::any(*algorithmVersion);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (faceMd5) {
      res["FaceMd5"] = boost::any(*faceMd5);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlgorithmName") != m.end() && !m["AlgorithmName"].empty()) {
      algorithmName = make_shared<string>(boost::any_cast<string>(m["AlgorithmName"]));
    }
    if (m.find("AlgorithmProvider") != m.end() && !m["AlgorithmProvider"].empty()) {
      algorithmProvider = make_shared<string>(boost::any_cast<string>(m["AlgorithmProvider"]));
    }
    if (m.find("AlgorithmVersion") != m.end() && !m["AlgorithmVersion"].empty()) {
      algorithmVersion = make_shared<string>(boost::any_cast<string>(m["AlgorithmVersion"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FaceMd5") != m.end() && !m["FaceMd5"].empty()) {
      faceMd5 = make_shared<string>(boost::any_cast<string>(m["FaceMd5"]));
    }
  }


  virtual ~QueryFaceUserByNameResponseBodyDataListFacePicListFeatureDTOList() = default;
};
class QueryFaceUserByNameResponseBodyDataListFacePicList : public Darabonba::Model {
public:
  shared_ptr<string> faceMd5{};
  shared_ptr<string> faceUrl{};
  shared_ptr<vector<QueryFaceUserByNameResponseBodyDataListFacePicListFeatureDTOList>> featureDTOList{};

  QueryFaceUserByNameResponseBodyDataListFacePicList() {}

  explicit QueryFaceUserByNameResponseBodyDataListFacePicList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faceMd5) {
      res["FaceMd5"] = boost::any(*faceMd5);
    }
    if (faceUrl) {
      res["FaceUrl"] = boost::any(*faceUrl);
    }
    if (featureDTOList) {
      vector<boost::any> temp1;
      for(auto item1:*featureDTOList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FeatureDTOList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaceMd5") != m.end() && !m["FaceMd5"].empty()) {
      faceMd5 = make_shared<string>(boost::any_cast<string>(m["FaceMd5"]));
    }
    if (m.find("FaceUrl") != m.end() && !m["FaceUrl"].empty()) {
      faceUrl = make_shared<string>(boost::any_cast<string>(m["FaceUrl"]));
    }
    if (m.find("FeatureDTOList") != m.end() && !m["FeatureDTOList"].empty()) {
      if (typeid(vector<boost::any>) == m["FeatureDTOList"].type()) {
        vector<QueryFaceUserByNameResponseBodyDataListFacePicListFeatureDTOList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FeatureDTOList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceUserByNameResponseBodyDataListFacePicListFeatureDTOList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        featureDTOList = make_shared<vector<QueryFaceUserByNameResponseBodyDataListFacePicListFeatureDTOList>>(expect1);
      }
    }
  }


  virtual ~QueryFaceUserByNameResponseBodyDataListFacePicList() = default;
};
class QueryFaceUserByNameResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> customUserId{};
  shared_ptr<vector<QueryFaceUserByNameResponseBodyDataListFacePicList>> facePicList{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<string> userId{};

  QueryFaceUserByNameResponseBodyDataList() {}

  explicit QueryFaceUserByNameResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (facePicList) {
      vector<boost::any> temp1;
      for(auto item1:*facePicList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FacePicList"] = boost::any(temp1);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("FacePicList") != m.end() && !m["FacePicList"].empty()) {
      if (typeid(vector<boost::any>) == m["FacePicList"].type()) {
        vector<QueryFaceUserByNameResponseBodyDataListFacePicList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FacePicList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceUserByNameResponseBodyDataListFacePicList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        facePicList = make_shared<vector<QueryFaceUserByNameResponseBodyDataListFacePicList>>(expect1);
      }
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceUserByNameResponseBodyDataList() = default;
};
class QueryFaceUserByNameResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryFaceUserByNameResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryFaceUserByNameResponseBodyData() {}

  explicit QueryFaceUserByNameResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryFaceUserByNameResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceUserByNameResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryFaceUserByNameResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryFaceUserByNameResponseBodyData() = default;
};
class QueryFaceUserByNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceUserByNameResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceUserByNameResponseBody() {}

  explicit QueryFaceUserByNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceUserByNameResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceUserByNameResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceUserByNameResponseBody() = default;
};
class QueryFaceUserByNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceUserByNameResponseBody> body{};

  QueryFaceUserByNameResponse() {}

  explicit QueryFaceUserByNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceUserByNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceUserByNameResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceUserByNameResponse() = default;
};
class QueryFaceUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userId{};

  QueryFaceUserGroupRequest() {}

  explicit QueryFaceUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceUserGroupRequest() = default;
};
class QueryFaceUserGroupResponseBodyDataUserGroupList : public Darabonba::Model {
public:
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userGroupName{};

  QueryFaceUserGroupResponseBodyDataUserGroupList() {}

  explicit QueryFaceUserGroupResponseBodyDataUserGroupList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userGroupName) {
      res["UserGroupName"] = boost::any(*userGroupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserGroupName") != m.end() && !m["UserGroupName"].empty()) {
      userGroupName = make_shared<string>(boost::any_cast<string>(m["UserGroupName"]));
    }
  }


  virtual ~QueryFaceUserGroupResponseBodyDataUserGroupList() = default;
};
class QueryFaceUserGroupResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};
  shared_ptr<vector<QueryFaceUserGroupResponseBodyDataUserGroupList>> userGroupList{};

  QueryFaceUserGroupResponseBodyData() {}

  explicit QueryFaceUserGroupResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    if (userGroupList) {
      vector<boost::any> temp1;
      for(auto item1:*userGroupList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserGroupList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
    if (m.find("UserGroupList") != m.end() && !m["UserGroupList"].empty()) {
      if (typeid(vector<boost::any>) == m["UserGroupList"].type()) {
        vector<QueryFaceUserGroupResponseBodyDataUserGroupList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserGroupList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceUserGroupResponseBodyDataUserGroupList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userGroupList = make_shared<vector<QueryFaceUserGroupResponseBodyDataUserGroupList>>(expect1);
      }
    }
  }


  virtual ~QueryFaceUserGroupResponseBodyData() = default;
};
class QueryFaceUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceUserGroupResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceUserGroupResponseBody() {}

  explicit QueryFaceUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceUserGroupResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceUserGroupResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceUserGroupResponseBody() = default;
};
class QueryFaceUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceUserGroupResponseBody> body{};

  QueryFaceUserGroupResponse() {}

  explicit QueryFaceUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceUserGroupResponse() = default;
};
class QueryFaceUserGroupAndDeviceGroupRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> controlId{};
  shared_ptr<string> isolationId{};

  QueryFaceUserGroupAndDeviceGroupRelationRequest() {}

  explicit QueryFaceUserGroupAndDeviceGroupRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlId) {
      res["ControlId"] = boost::any(*controlId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlId") != m.end() && !m["ControlId"].empty()) {
      controlId = make_shared<string>(boost::any_cast<string>(m["ControlId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
  }


  virtual ~QueryFaceUserGroupAndDeviceGroupRelationRequest() = default;
};
class QueryFaceUserGroupAndDeviceGroupRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> controlId{};
  shared_ptr<string> controlType{};
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> userGroupId{};

  QueryFaceUserGroupAndDeviceGroupRelationResponseBodyData() {}

  explicit QueryFaceUserGroupAndDeviceGroupRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlId) {
      res["ControlId"] = boost::any(*controlId);
    }
    if (controlType) {
      res["ControlType"] = boost::any(*controlType);
    }
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlId") != m.end() && !m["ControlId"].empty()) {
      controlId = make_shared<string>(boost::any_cast<string>(m["ControlId"]));
    }
    if (m.find("ControlType") != m.end() && !m["ControlType"].empty()) {
      controlType = make_shared<string>(boost::any_cast<string>(m["ControlType"]));
    }
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
  }


  virtual ~QueryFaceUserGroupAndDeviceGroupRelationResponseBodyData() = default;
};
class QueryFaceUserGroupAndDeviceGroupRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceUserGroupAndDeviceGroupRelationResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceUserGroupAndDeviceGroupRelationResponseBody() {}

  explicit QueryFaceUserGroupAndDeviceGroupRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceUserGroupAndDeviceGroupRelationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceUserGroupAndDeviceGroupRelationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceUserGroupAndDeviceGroupRelationResponseBody() = default;
};
class QueryFaceUserGroupAndDeviceGroupRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceUserGroupAndDeviceGroupRelationResponseBody> body{};

  QueryFaceUserGroupAndDeviceGroupRelationResponse() {}

  explicit QueryFaceUserGroupAndDeviceGroupRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceUserGroupAndDeviceGroupRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceUserGroupAndDeviceGroupRelationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceUserGroupAndDeviceGroupRelationResponse() = default;
};
class QueryFaceUserIdByCustomUserIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> customUserId{};
  shared_ptr<string> isolationId{};

  QueryFaceUserIdByCustomUserIdRequest() {}

  explicit QueryFaceUserIdByCustomUserIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
  }


  virtual ~QueryFaceUserIdByCustomUserIdRequest() = default;
};
class QueryFaceUserIdByCustomUserIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> customUserId{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<string> userId{};

  QueryFaceUserIdByCustomUserIdResponseBodyData() {}

  explicit QueryFaceUserIdByCustomUserIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceUserIdByCustomUserIdResponseBodyData() = default;
};
class QueryFaceUserIdByCustomUserIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryFaceUserIdByCustomUserIdResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceUserIdByCustomUserIdResponseBody() {}

  explicit QueryFaceUserIdByCustomUserIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceUserIdByCustomUserIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceUserIdByCustomUserIdResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceUserIdByCustomUserIdResponseBody() = default;
};
class QueryFaceUserIdByCustomUserIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceUserIdByCustomUserIdResponseBody> body{};

  QueryFaceUserIdByCustomUserIdResponse() {}

  explicit QueryFaceUserIdByCustomUserIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryFaceUserIdByCustomUserIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceUserIdByCustomUserIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceUserIdByCustomUserIdResponse() = default;
};
class QueryLiveStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<long> cacheDuration{};
  shared_ptr<string> deviceName{};
  shared_ptr<bool> enableStun{};
  shared_ptr<long> encryptType{};
  shared_ptr<bool> forceIFrame{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<bool> playUnLimited{};
  shared_ptr<string> productKey{};
  shared_ptr<string> scheme{};
  shared_ptr<bool> shouldEncrypt{};
  shared_ptr<long> streamType{};
  shared_ptr<long> urlValidDuration{};

  QueryLiveStreamingRequest() {}

  explicit QueryLiveStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheDuration) {
      res["CacheDuration"] = boost::any(*cacheDuration);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (enableStun) {
      res["EnableStun"] = boost::any(*enableStun);
    }
    if (encryptType) {
      res["EncryptType"] = boost::any(*encryptType);
    }
    if (forceIFrame) {
      res["ForceIFrame"] = boost::any(*forceIFrame);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (playUnLimited) {
      res["PlayUnLimited"] = boost::any(*playUnLimited);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    if (shouldEncrypt) {
      res["ShouldEncrypt"] = boost::any(*shouldEncrypt);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (urlValidDuration) {
      res["UrlValidDuration"] = boost::any(*urlValidDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheDuration") != m.end() && !m["CacheDuration"].empty()) {
      cacheDuration = make_shared<long>(boost::any_cast<long>(m["CacheDuration"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EnableStun") != m.end() && !m["EnableStun"].empty()) {
      enableStun = make_shared<bool>(boost::any_cast<bool>(m["EnableStun"]));
    }
    if (m.find("EncryptType") != m.end() && !m["EncryptType"].empty()) {
      encryptType = make_shared<long>(boost::any_cast<long>(m["EncryptType"]));
    }
    if (m.find("ForceIFrame") != m.end() && !m["ForceIFrame"].empty()) {
      forceIFrame = make_shared<bool>(boost::any_cast<bool>(m["ForceIFrame"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PlayUnLimited") != m.end() && !m["PlayUnLimited"].empty()) {
      playUnLimited = make_shared<bool>(boost::any_cast<bool>(m["PlayUnLimited"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
    if (m.find("ShouldEncrypt") != m.end() && !m["ShouldEncrypt"].empty()) {
      shouldEncrypt = make_shared<bool>(boost::any_cast<bool>(m["ShouldEncrypt"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("UrlValidDuration") != m.end() && !m["UrlValidDuration"].empty()) {
      urlValidDuration = make_shared<long>(boost::any_cast<long>(m["UrlValidDuration"]));
    }
  }


  virtual ~QueryLiveStreamingRequest() = default;
};
class QueryLiveStreamingResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> path{};
  shared_ptr<string> relayDecryptKey{};
  shared_ptr<string> stunInfo{};

  QueryLiveStreamingResponseBodyData() {}

  explicit QueryLiveStreamingResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (relayDecryptKey) {
      res["RelayDecryptKey"] = boost::any(*relayDecryptKey);
    }
    if (stunInfo) {
      res["StunInfo"] = boost::any(*stunInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("RelayDecryptKey") != m.end() && !m["RelayDecryptKey"].empty()) {
      relayDecryptKey = make_shared<string>(boost::any_cast<string>(m["RelayDecryptKey"]));
    }
    if (m.find("StunInfo") != m.end() && !m["StunInfo"].empty()) {
      stunInfo = make_shared<string>(boost::any_cast<string>(m["StunInfo"]));
    }
  }


  virtual ~QueryLiveStreamingResponseBodyData() = default;
};
class QueryLiveStreamingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryLiveStreamingResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryLiveStreamingResponseBody() {}

  explicit QueryLiveStreamingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryLiveStreamingResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryLiveStreamingResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryLiveStreamingResponseBody() = default;
};
class QueryLiveStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryLiveStreamingResponseBody> body{};

  QueryLiveStreamingResponse() {}

  explicit QueryLiveStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryLiveStreamingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryLiveStreamingResponseBody>(model1);
      }
    }
  }


  virtual ~QueryLiveStreamingResponse() = default;
};
class QueryLocalFileUploadJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> jobId{};

  QueryLocalFileUploadJobRequest() {}

  explicit QueryLocalFileUploadJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~QueryLocalFileUploadJobRequest() = default;
};
class QueryLocalFileUploadJobResponseBodyDataResultListFileList : public Darabonba::Model {
public:
  shared_ptr<long> fileEndTime{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileStartTime{};

  QueryLocalFileUploadJobResponseBodyDataResultListFileList() {}

  explicit QueryLocalFileUploadJobResponseBodyDataResultListFileList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileEndTime) {
      res["FileEndTime"] = boost::any(*fileEndTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileStartTime) {
      res["FileStartTime"] = boost::any(*fileStartTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileEndTime") != m.end() && !m["FileEndTime"].empty()) {
      fileEndTime = make_shared<long>(boost::any_cast<long>(m["FileEndTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileStartTime") != m.end() && !m["FileStartTime"].empty()) {
      fileStartTime = make_shared<long>(boost::any_cast<long>(m["FileStartTime"]));
    }
  }


  virtual ~QueryLocalFileUploadJobResponseBodyDataResultListFileList() = default;
};
class QueryLocalFileUploadJobResponseBodyDataResultList : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> deviceName{};
  shared_ptr<vector<QueryLocalFileUploadJobResponseBodyDataResultListFileList>> fileList{};
  shared_ptr<string> iotId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> slotEndTime{};
  shared_ptr<long> slotStartTime{};
  shared_ptr<long> slotStatus{};

  QueryLocalFileUploadJobResponseBodyDataResultList() {}

  explicit QueryLocalFileUploadJobResponseBodyDataResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (fileList) {
      vector<boost::any> temp1;
      for(auto item1:*fileList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileList"] = boost::any(temp1);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (slotEndTime) {
      res["SlotEndTime"] = boost::any(*slotEndTime);
    }
    if (slotStartTime) {
      res["SlotStartTime"] = boost::any(*slotStartTime);
    }
    if (slotStatus) {
      res["SlotStatus"] = boost::any(*slotStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("FileList") != m.end() && !m["FileList"].empty()) {
      if (typeid(vector<boost::any>) == m["FileList"].type()) {
        vector<QueryLocalFileUploadJobResponseBodyDataResultListFileList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryLocalFileUploadJobResponseBodyDataResultListFileList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileList = make_shared<vector<QueryLocalFileUploadJobResponseBodyDataResultListFileList>>(expect1);
      }
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("SlotEndTime") != m.end() && !m["SlotEndTime"].empty()) {
      slotEndTime = make_shared<long>(boost::any_cast<long>(m["SlotEndTime"]));
    }
    if (m.find("SlotStartTime") != m.end() && !m["SlotStartTime"].empty()) {
      slotStartTime = make_shared<long>(boost::any_cast<long>(m["SlotStartTime"]));
    }
    if (m.find("SlotStatus") != m.end() && !m["SlotStatus"].empty()) {
      slotStatus = make_shared<long>(boost::any_cast<long>(m["SlotStatus"]));
    }
  }


  virtual ~QueryLocalFileUploadJobResponseBodyDataResultList() = default;
};
class QueryLocalFileUploadJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryLocalFileUploadJobResponseBodyDataResultList>> resultList{};
  shared_ptr<long> status{};

  QueryLocalFileUploadJobResponseBodyData() {}

  explicit QueryLocalFileUploadJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resultList) {
      vector<boost::any> temp1;
      for(auto item1:*resultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ResultList"] = boost::any(temp1);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResultList") != m.end() && !m["ResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["ResultList"].type()) {
        vector<QueryLocalFileUploadJobResponseBodyDataResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryLocalFileUploadJobResponseBodyDataResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        resultList = make_shared<vector<QueryLocalFileUploadJobResponseBodyDataResultList>>(expect1);
      }
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryLocalFileUploadJobResponseBodyData() = default;
};
class QueryLocalFileUploadJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryLocalFileUploadJobResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryLocalFileUploadJobResponseBody() {}

  explicit QueryLocalFileUploadJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryLocalFileUploadJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryLocalFileUploadJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryLocalFileUploadJobResponseBody() = default;
};
class QueryLocalFileUploadJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryLocalFileUploadJobResponseBody> body{};

  QueryLocalFileUploadJobResponse() {}

  explicit QueryLocalFileUploadJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryLocalFileUploadJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryLocalFileUploadJobResponseBody>(model1);
      }
    }
  }


  virtual ~QueryLocalFileUploadJobResponse() = default;
};
class QueryMonthRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> month{};
  shared_ptr<string> productKey{};

  QueryMonthRecordRequest() {}

  explicit QueryMonthRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (month) {
      res["Month"] = boost::any(*month);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("Month") != m.end() && !m["Month"].empty()) {
      month = make_shared<string>(boost::any_cast<string>(m["Month"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryMonthRecordRequest() = default;
};
class QueryMonthRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryMonthRecordResponseBody() {}

  explicit QueryMonthRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryMonthRecordResponseBody() = default;
};
class QueryMonthRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMonthRecordResponseBody> body{};

  QueryMonthRecordResponse() {}

  explicit QueryMonthRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryMonthRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMonthRecordResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMonthRecordResponse() = default;
};
class QueryPictureFilesRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pictureSource{};
  shared_ptr<long> pictureType{};
  shared_ptr<string> productKey{};

  QueryPictureFilesRequest() {}

  explicit QueryPictureFilesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pictureSource) {
      res["PictureSource"] = boost::any(*pictureSource);
    }
    if (pictureType) {
      res["PictureType"] = boost::any(*pictureType);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PictureSource") != m.end() && !m["PictureSource"].empty()) {
      pictureSource = make_shared<long>(boost::any_cast<long>(m["PictureSource"]));
    }
    if (m.find("PictureType") != m.end() && !m["PictureType"].empty()) {
      pictureType = make_shared<long>(boost::any_cast<long>(m["PictureType"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryPictureFilesRequest() = default;
};
class QueryPictureFilesResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> iotId{};
  shared_ptr<long> picCreateTime{};
  shared_ptr<string> picId{};
  shared_ptr<string> picUrl{};
  shared_ptr<string> thumbUrl{};

  QueryPictureFilesResponseBodyDataList() {}

  explicit QueryPictureFilesResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (picCreateTime) {
      res["PicCreateTime"] = boost::any(*picCreateTime);
    }
    if (picId) {
      res["PicId"] = boost::any(*picId);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (thumbUrl) {
      res["ThumbUrl"] = boost::any(*thumbUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("PicCreateTime") != m.end() && !m["PicCreateTime"].empty()) {
      picCreateTime = make_shared<long>(boost::any_cast<long>(m["PicCreateTime"]));
    }
    if (m.find("PicId") != m.end() && !m["PicId"].empty()) {
      picId = make_shared<string>(boost::any_cast<string>(m["PicId"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("ThumbUrl") != m.end() && !m["ThumbUrl"].empty()) {
      thumbUrl = make_shared<string>(boost::any_cast<string>(m["ThumbUrl"]));
    }
  }


  virtual ~QueryPictureFilesResponseBodyDataList() = default;
};
class QueryPictureFilesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryPictureFilesResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  QueryPictureFilesResponseBodyData() {}

  explicit QueryPictureFilesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryPictureFilesResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPictureFilesResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryPictureFilesResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryPictureFilesResponseBodyData() = default;
};
class QueryPictureFilesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryPictureFilesResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryPictureFilesResponseBody() {}

  explicit QueryPictureFilesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPictureFilesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPictureFilesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryPictureFilesResponseBody() = default;
};
class QueryPictureFilesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPictureFilesResponseBody> body{};

  QueryPictureFilesResponse() {}

  explicit QueryPictureFilesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPictureFilesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPictureFilesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPictureFilesResponse() = default;
};
class QueryPictureSearchAiboxesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<long> pageSize{};

  QueryPictureSearchAiboxesRequest() {}

  explicit QueryPictureSearchAiboxesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryPictureSearchAiboxesRequest() = default;
};
class QueryPictureSearchAiboxesResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> iotId{};
  shared_ptr<string> nickName{};

  QueryPictureSearchAiboxesResponseBodyDataPageData() {}

  explicit QueryPictureSearchAiboxesResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
  }


  virtual ~QueryPictureSearchAiboxesResponseBodyDataPageData() = default;
};
class QueryPictureSearchAiboxesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<QueryPictureSearchAiboxesResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryPictureSearchAiboxesResponseBodyData() {}

  explicit QueryPictureSearchAiboxesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<QueryPictureSearchAiboxesResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPictureSearchAiboxesResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<QueryPictureSearchAiboxesResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryPictureSearchAiboxesResponseBodyData() = default;
};
class QueryPictureSearchAiboxesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryPictureSearchAiboxesResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryPictureSearchAiboxesResponseBody() {}

  explicit QueryPictureSearchAiboxesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPictureSearchAiboxesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPictureSearchAiboxesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryPictureSearchAiboxesResponseBody() = default;
};
class QueryPictureSearchAiboxesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPictureSearchAiboxesResponseBody> body{};

  QueryPictureSearchAiboxesResponse() {}

  explicit QueryPictureSearchAiboxesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPictureSearchAiboxesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPictureSearchAiboxesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPictureSearchAiboxesResponse() = default;
};
class QueryPictureSearchAppsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<long> pageSize{};

  QueryPictureSearchAppsRequest() {}

  explicit QueryPictureSearchAppsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryPictureSearchAppsRequest() = default;
};
class QueryPictureSearchAppsResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> appTemplateId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<long> modifiedTime{};
  shared_ptr<string> name{};
  shared_ptr<string> version{};

  QueryPictureSearchAppsResponseBodyDataPageData() {}

  explicit QueryPictureSearchAppsResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (appTemplateId) {
      res["AppTemplateId"] = boost::any(*appTemplateId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("AppTemplateId") != m.end() && !m["AppTemplateId"].empty()) {
      appTemplateId = make_shared<string>(boost::any_cast<string>(m["AppTemplateId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<long>(boost::any_cast<long>(m["ModifiedTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~QueryPictureSearchAppsResponseBodyDataPageData() = default;
};
class QueryPictureSearchAppsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<QueryPictureSearchAppsResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryPictureSearchAppsResponseBodyData() {}

  explicit QueryPictureSearchAppsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<QueryPictureSearchAppsResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPictureSearchAppsResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<QueryPictureSearchAppsResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryPictureSearchAppsResponseBodyData() = default;
};
class QueryPictureSearchAppsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryPictureSearchAppsResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryPictureSearchAppsResponseBody() {}

  explicit QueryPictureSearchAppsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPictureSearchAppsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPictureSearchAppsResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryPictureSearchAppsResponseBody() = default;
};
class QueryPictureSearchAppsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPictureSearchAppsResponseBody> body{};

  QueryPictureSearchAppsResponse() {}

  explicit QueryPictureSearchAppsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPictureSearchAppsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPictureSearchAppsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPictureSearchAppsResponse() = default;
};
class QueryPictureSearchDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  QueryPictureSearchDevicesRequest() {}

  explicit QueryPictureSearchDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryPictureSearchDevicesRequest() = default;
};
class QueryPictureSearchDevicesResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> iotId{};
  shared_ptr<string> nickName{};

  QueryPictureSearchDevicesResponseBodyDataPageData() {}

  explicit QueryPictureSearchDevicesResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
  }


  virtual ~QueryPictureSearchDevicesResponseBodyDataPageData() = default;
};
class QueryPictureSearchDevicesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<QueryPictureSearchDevicesResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryPictureSearchDevicesResponseBodyData() {}

  explicit QueryPictureSearchDevicesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<QueryPictureSearchDevicesResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPictureSearchDevicesResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<QueryPictureSearchDevicesResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryPictureSearchDevicesResponseBodyData() = default;
};
class QueryPictureSearchDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryPictureSearchDevicesResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryPictureSearchDevicesResponseBody() {}

  explicit QueryPictureSearchDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPictureSearchDevicesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPictureSearchDevicesResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryPictureSearchDevicesResponseBody() = default;
};
class QueryPictureSearchDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPictureSearchDevicesResponseBody> body{};

  QueryPictureSearchDevicesResponse() {}

  explicit QueryPictureSearchDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPictureSearchDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPictureSearchDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPictureSearchDevicesResponse() = default;
};
class QueryPictureSearchJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> jobStatus{};
  shared_ptr<long> pageSize{};

  QueryPictureSearchJobRequest() {}

  explicit QueryPictureSearchJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<long>(boost::any_cast<long>(m["JobStatus"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryPictureSearchJobRequest() = default;
};
class QueryPictureSearchJobResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> jobId{};
  shared_ptr<long> jobStatus{};
  shared_ptr<string> searchPicUrl{};
  shared_ptr<long> startTime{};
  shared_ptr<double> threshold{};

  QueryPictureSearchJobResponseBodyDataPageData() {}

  explicit QueryPictureSearchJobResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (searchPicUrl) {
      res["SearchPicUrl"] = boost::any(*searchPicUrl);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<long>(boost::any_cast<long>(m["JobStatus"]));
    }
    if (m.find("SearchPicUrl") != m.end() && !m["SearchPicUrl"].empty()) {
      searchPicUrl = make_shared<string>(boost::any_cast<string>(m["SearchPicUrl"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
  }


  virtual ~QueryPictureSearchJobResponseBodyDataPageData() = default;
};
class QueryPictureSearchJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<QueryPictureSearchJobResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryPictureSearchJobResponseBodyData() {}

  explicit QueryPictureSearchJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<QueryPictureSearchJobResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPictureSearchJobResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<QueryPictureSearchJobResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryPictureSearchJobResponseBodyData() = default;
};
class QueryPictureSearchJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryPictureSearchJobResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryPictureSearchJobResponseBody() {}

  explicit QueryPictureSearchJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPictureSearchJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPictureSearchJobResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryPictureSearchJobResponseBody() = default;
};
class QueryPictureSearchJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPictureSearchJobResponseBody> body{};

  QueryPictureSearchJobResponse() {}

  explicit QueryPictureSearchJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPictureSearchJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPictureSearchJobResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPictureSearchJobResponse() = default;
};
class QueryPictureSearchJobResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> jobId{};
  shared_ptr<long> pageSize{};

  QueryPictureSearchJobResultRequest() {}

  explicit QueryPictureSearchJobResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryPictureSearchJobResultRequest() = default;
};
class QueryPictureSearchJobResultResponseBodyDataPageData : public Darabonba::Model {
public:
  shared_ptr<string> deviceNickName{};
  shared_ptr<long> eventTime{};
  shared_ptr<string> gatewayIotId{};
  shared_ptr<string> iotId{};
  shared_ptr<string> picUrl{};
  shared_ptr<double> threshold{};
  shared_ptr<string> vectorId{};

  QueryPictureSearchJobResultResponseBodyDataPageData() {}

  explicit QueryPictureSearchJobResultResponseBodyDataPageData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceNickName) {
      res["DeviceNickName"] = boost::any(*deviceNickName);
    }
    if (eventTime) {
      res["EventTime"] = boost::any(*eventTime);
    }
    if (gatewayIotId) {
      res["GatewayIotId"] = boost::any(*gatewayIotId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (picUrl) {
      res["PicUrl"] = boost::any(*picUrl);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (vectorId) {
      res["VectorId"] = boost::any(*vectorId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceNickName") != m.end() && !m["DeviceNickName"].empty()) {
      deviceNickName = make_shared<string>(boost::any_cast<string>(m["DeviceNickName"]));
    }
    if (m.find("EventTime") != m.end() && !m["EventTime"].empty()) {
      eventTime = make_shared<long>(boost::any_cast<long>(m["EventTime"]));
    }
    if (m.find("GatewayIotId") != m.end() && !m["GatewayIotId"].empty()) {
      gatewayIotId = make_shared<string>(boost::any_cast<string>(m["GatewayIotId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("PicUrl") != m.end() && !m["PicUrl"].empty()) {
      picUrl = make_shared<string>(boost::any_cast<string>(m["PicUrl"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<double>(boost::any_cast<double>(m["Threshold"]));
    }
    if (m.find("VectorId") != m.end() && !m["VectorId"].empty()) {
      vectorId = make_shared<string>(boost::any_cast<string>(m["VectorId"]));
    }
  }


  virtual ~QueryPictureSearchJobResultResponseBodyDataPageData() = default;
};
class QueryPictureSearchJobResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageCount{};
  shared_ptr<vector<QueryPictureSearchJobResultResponseBodyDataPageData>> pageData{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryPictureSearchJobResultResponseBodyData() {}

  explicit QueryPictureSearchJobResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageData) {
      vector<boost::any> temp1;
      for(auto item1:*pageData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PageData"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageData") != m.end() && !m["PageData"].empty()) {
      if (typeid(vector<boost::any>) == m["PageData"].type()) {
        vector<QueryPictureSearchJobResultResponseBodyDataPageData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PageData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPictureSearchJobResultResponseBodyDataPageData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        pageData = make_shared<vector<QueryPictureSearchJobResultResponseBodyDataPageData>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryPictureSearchJobResultResponseBodyData() = default;
};
class QueryPictureSearchJobResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryPictureSearchJobResultResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryPictureSearchJobResultResponseBody() {}

  explicit QueryPictureSearchJobResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPictureSearchJobResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPictureSearchJobResultResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryPictureSearchJobResultResponseBody() = default;
};
class QueryPictureSearchJobResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPictureSearchJobResultResponseBody> body{};

  QueryPictureSearchJobResultResponse() {}

  explicit QueryPictureSearchJobResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryPictureSearchJobResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPictureSearchJobResultResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPictureSearchJobResultResponse() = default;
};
class QueryRecordRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> currentPage{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<bool> needSnapshot{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productKey{};
  shared_ptr<long> recordType{};
  shared_ptr<long> streamType{};

  QueryRecordRequest() {}

  explicit QueryRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (needSnapshot) {
      res["NeedSnapshot"] = boost::any(*needSnapshot);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("NeedSnapshot") != m.end() && !m["NeedSnapshot"].empty()) {
      needSnapshot = make_shared<bool>(boost::any_cast<bool>(m["NeedSnapshot"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<long>(boost::any_cast<long>(m["RecordType"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~QueryRecordRequest() = default;
};
class QueryRecordResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> endTime{};
  shared_ptr<long> eventType{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileSize{};
  shared_ptr<long> recordType{};
  shared_ptr<string> snapshotUrl{};
  shared_ptr<long> streamType{};
  shared_ptr<long> videoFrameNumber{};

  QueryRecordResponseBodyDataList() {}

  explicit QueryRecordResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileSize) {
      res["FileSize"] = boost::any(*fileSize);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (snapshotUrl) {
      res["SnapshotUrl"] = boost::any(*snapshotUrl);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (videoFrameNumber) {
      res["VideoFrameNumber"] = boost::any(*videoFrameNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<long>(boost::any_cast<long>(m["EventType"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileSize") != m.end() && !m["FileSize"].empty()) {
      fileSize = make_shared<long>(boost::any_cast<long>(m["FileSize"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<long>(boost::any_cast<long>(m["RecordType"]));
    }
    if (m.find("SnapshotUrl") != m.end() && !m["SnapshotUrl"].empty()) {
      snapshotUrl = make_shared<string>(boost::any_cast<string>(m["SnapshotUrl"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("VideoFrameNumber") != m.end() && !m["VideoFrameNumber"].empty()) {
      videoFrameNumber = make_shared<long>(boost::any_cast<long>(m["VideoFrameNumber"]));
    }
  }


  virtual ~QueryRecordResponseBodyDataList() = default;
};
class QueryRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryRecordResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageSize{};

  QueryRecordResponseBodyData() {}

  explicit QueryRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryRecordResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRecordResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryRecordResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryRecordResponseBodyData() = default;
};
class QueryRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryRecordResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordResponseBody() {}

  explicit QueryRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRecordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRecordResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordResponseBody() = default;
};
class QueryRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordResponseBody> body{};

  QueryRecordResponse() {}

  explicit QueryRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordResponse() = default;
};
class QueryRecordByRecordIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<string> recordId{};

  QueryRecordByRecordIdRequest() {}

  explicit QueryRecordByRecordIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~QueryRecordByRecordIdRequest() = default;
};
class QueryRecordByRecordIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> vodUrl{};

  QueryRecordByRecordIdResponseBodyData() {}

  explicit QueryRecordByRecordIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (vodUrl) {
      res["VodUrl"] = boost::any(*vodUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("VodUrl") != m.end() && !m["VodUrl"].empty()) {
      vodUrl = make_shared<string>(boost::any_cast<string>(m["VodUrl"]));
    }
  }


  virtual ~QueryRecordByRecordIdResponseBodyData() = default;
};
class QueryRecordByRecordIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<QueryRecordByRecordIdResponseBodyData>> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordByRecordIdResponseBody() {}

  explicit QueryRecordByRecordIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryRecordByRecordIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRecordByRecordIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryRecordByRecordIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordByRecordIdResponseBody() = default;
};
class QueryRecordByRecordIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordByRecordIdResponseBody> body{};

  QueryRecordByRecordIdResponse() {}

  explicit QueryRecordByRecordIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordByRecordIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordByRecordIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordByRecordIdResponse() = default;
};
class QueryRecordDownloadJobByIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> jobId{};

  QueryRecordDownloadJobByIdRequest() {}

  explicit QueryRecordDownloadJobByIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~QueryRecordDownloadJobByIdRequest() = default;
};
class QueryRecordDownloadJobByIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> iotId{};
  shared_ptr<long> jobErrorCode{};
  shared_ptr<long> progress{};
  shared_ptr<long> recordType{};
  shared_ptr<long> status{};
  shared_ptr<long> streamType{};
  shared_ptr<long> type{};
  shared_ptr<string> url{};

  QueryRecordDownloadJobByIdResponseBodyData() {}

  explicit QueryRecordDownloadJobByIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (jobErrorCode) {
      res["JobErrorCode"] = boost::any(*jobErrorCode);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("JobErrorCode") != m.end() && !m["JobErrorCode"].empty()) {
      jobErrorCode = make_shared<long>(boost::any_cast<long>(m["JobErrorCode"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<long>(boost::any_cast<long>(m["RecordType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryRecordDownloadJobByIdResponseBodyData() = default;
};
class QueryRecordDownloadJobByIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryRecordDownloadJobByIdResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordDownloadJobByIdResponseBody() {}

  explicit QueryRecordDownloadJobByIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRecordDownloadJobByIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRecordDownloadJobByIdResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordDownloadJobByIdResponseBody() = default;
};
class QueryRecordDownloadJobByIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordDownloadJobByIdResponseBody> body{};

  QueryRecordDownloadJobByIdResponse() {}

  explicit QueryRecordDownloadJobByIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordDownloadJobByIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordDownloadJobByIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordDownloadJobByIdResponse() = default;
};
class QueryRecordDownloadJobListRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productKey{};

  QueryRecordDownloadJobListRequest() {}

  explicit QueryRecordDownloadJobListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryRecordDownloadJobListRequest() = default;
};
class QueryRecordDownloadJobListResponseBodyDataJobList : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> fileName{};
  shared_ptr<string> iotId{};
  shared_ptr<long> jobErrorCode{};
  shared_ptr<string> jobId{};
  shared_ptr<long> progress{};
  shared_ptr<long> recordType{};
  shared_ptr<long> status{};
  shared_ptr<long> streamType{};
  shared_ptr<long> type{};
  shared_ptr<string> url{};

  QueryRecordDownloadJobListResponseBodyDataJobList() {}

  explicit QueryRecordDownloadJobListResponseBodyDataJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (jobErrorCode) {
      res["JobErrorCode"] = boost::any(*jobErrorCode);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (recordType) {
      res["RecordType"] = boost::any(*recordType);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("JobErrorCode") != m.end() && !m["JobErrorCode"].empty()) {
      jobErrorCode = make_shared<long>(boost::any_cast<long>(m["JobErrorCode"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RecordType") != m.end() && !m["RecordType"].empty()) {
      recordType = make_shared<long>(boost::any_cast<long>(m["RecordType"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryRecordDownloadJobListResponseBodyDataJobList() = default;
};
class QueryRecordDownloadJobListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryRecordDownloadJobListResponseBodyDataJobList>> jobList{};
  shared_ptr<long> total{};

  QueryRecordDownloadJobListResponseBodyData() {}

  explicit QueryRecordDownloadJobListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobList) {
      vector<boost::any> temp1;
      for(auto item1:*jobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["JobList"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobList") != m.end() && !m["JobList"].empty()) {
      if (typeid(vector<boost::any>) == m["JobList"].type()) {
        vector<QueryRecordDownloadJobListResponseBodyDataJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["JobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRecordDownloadJobListResponseBodyDataJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobList = make_shared<vector<QueryRecordDownloadJobListResponseBodyDataJobList>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryRecordDownloadJobListResponseBodyData() = default;
};
class QueryRecordDownloadJobListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryRecordDownloadJobListResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordDownloadJobListResponseBody() {}

  explicit QueryRecordDownloadJobListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRecordDownloadJobListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRecordDownloadJobListResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordDownloadJobListResponseBody() = default;
};
class QueryRecordDownloadJobListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordDownloadJobListResponseBody> body{};

  QueryRecordDownloadJobListResponse() {}

  explicit QueryRecordDownloadJobListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordDownloadJobListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordDownloadJobListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordDownloadJobListResponse() = default;
};
class QueryRecordDownloadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> fileName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  QueryRecordDownloadUrlRequest() {}

  explicit QueryRecordDownloadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryRecordDownloadUrlRequest() = default;
};
class QueryRecordDownloadUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> progress{};
  shared_ptr<long> status{};
  shared_ptr<string> url{};

  QueryRecordDownloadUrlResponseBodyData() {}

  explicit QueryRecordDownloadUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryRecordDownloadUrlResponseBodyData() = default;
};
class QueryRecordDownloadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryRecordDownloadUrlResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordDownloadUrlResponseBody() {}

  explicit QueryRecordDownloadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRecordDownloadUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRecordDownloadUrlResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordDownloadUrlResponseBody() = default;
};
class QueryRecordDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordDownloadUrlResponseBody> body{};

  QueryRecordDownloadUrlResponse() {}

  explicit QueryRecordDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordDownloadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordDownloadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordDownloadUrlResponse() = default;
};
class QueryRecordPlanDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> planId{};

  QueryRecordPlanDetailRequest() {}

  explicit QueryRecordPlanDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~QueryRecordPlanDetailRequest() = default;
};
class QueryRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> dayOfWeek{};
  shared_ptr<long> end{};

  QueryRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList() {}

  explicit QueryRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (dayOfWeek) {
      res["DayOfWeek"] = boost::any(*dayOfWeek);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("DayOfWeek") != m.end() && !m["DayOfWeek"].empty()) {
      dayOfWeek = make_shared<long>(boost::any_cast<long>(m["DayOfWeek"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~QueryRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList() = default;
};
class QueryRecordPlanDetailResponseBodyDataTemplateInfo : public Darabonba::Model {
public:
  shared_ptr<long> allDay{};
  shared_ptr<long> default_{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<QueryRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList>> timeSectionList{};

  QueryRecordPlanDetailResponseBodyDataTemplateInfo() {}

  explicit QueryRecordPlanDetailResponseBodyDataTemplateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allDay) {
      res["AllDay"] = boost::any(*allDay);
    }
    if (default_) {
      res["Default"] = boost::any(*default_);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeSectionList) {
      vector<boost::any> temp1;
      for(auto item1:*timeSectionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeSectionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllDay") != m.end() && !m["AllDay"].empty()) {
      allDay = make_shared<long>(boost::any_cast<long>(m["AllDay"]));
    }
    if (m.find("Default") != m.end() && !m["Default"].empty()) {
      default_ = make_shared<long>(boost::any_cast<long>(m["Default"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TimeSectionList") != m.end() && !m["TimeSectionList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeSectionList"].type()) {
        vector<QueryRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeSectionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeSectionList = make_shared<vector<QueryRecordPlanDetailResponseBodyDataTemplateInfoTimeSectionList>>(expect1);
      }
    }
  }


  virtual ~QueryRecordPlanDetailResponseBodyDataTemplateInfo() = default;
};
class QueryRecordPlanDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> planId{};
  shared_ptr<string> templateId{};
  shared_ptr<QueryRecordPlanDetailResponseBodyDataTemplateInfo> templateInfo{};

  QueryRecordPlanDetailResponseBodyData() {}

  explicit QueryRecordPlanDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateInfo) {
      res["TemplateInfo"] = templateInfo ? boost::any(templateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateInfo") != m.end() && !m["TemplateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TemplateInfo"].type()) {
        QueryRecordPlanDetailResponseBodyDataTemplateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TemplateInfo"]));
        templateInfo = make_shared<QueryRecordPlanDetailResponseBodyDataTemplateInfo>(model1);
      }
    }
  }


  virtual ~QueryRecordPlanDetailResponseBodyData() = default;
};
class QueryRecordPlanDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryRecordPlanDetailResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordPlanDetailResponseBody() {}

  explicit QueryRecordPlanDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRecordPlanDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRecordPlanDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordPlanDetailResponseBody() = default;
};
class QueryRecordPlanDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordPlanDetailResponseBody> body{};

  QueryRecordPlanDetailResponse() {}

  explicit QueryRecordPlanDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordPlanDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordPlanDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordPlanDetailResponse() = default;
};
class QueryRecordPlanDeviceByDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> streamType{};

  QueryRecordPlanDeviceByDeviceRequest() {}

  explicit QueryRecordPlanDeviceByDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~QueryRecordPlanDeviceByDeviceRequest() = default;
};
class QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> dayOfWeek{};
  shared_ptr<long> end{};

  QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList() {}

  explicit QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (dayOfWeek) {
      res["DayOfWeek"] = boost::any(*dayOfWeek);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("DayOfWeek") != m.end() && !m["DayOfWeek"].empty()) {
      dayOfWeek = make_shared<long>(boost::any_cast<long>(m["DayOfWeek"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList() = default;
};
class QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo : public Darabonba::Model {
public:
  shared_ptr<long> allDay{};
  shared_ptr<long> default_{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList>> timeSectionList{};

  QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo() {}

  explicit QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allDay) {
      res["AllDay"] = boost::any(*allDay);
    }
    if (default_) {
      res["Default"] = boost::any(*default_);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeSectionList) {
      vector<boost::any> temp1;
      for(auto item1:*timeSectionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeSectionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllDay") != m.end() && !m["AllDay"].empty()) {
      allDay = make_shared<long>(boost::any_cast<long>(m["AllDay"]));
    }
    if (m.find("Default") != m.end() && !m["Default"].empty()) {
      default_ = make_shared<long>(boost::any_cast<long>(m["Default"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TimeSectionList") != m.end() && !m["TimeSectionList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeSectionList"].type()) {
        vector<QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeSectionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeSectionList = make_shared<vector<QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfoTimeSectionList>>(expect1);
      }
    }
  }


  virtual ~QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo() = default;
};
class QueryRecordPlanDeviceByDeviceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> planId{};
  shared_ptr<string> templateId{};
  shared_ptr<QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo> templateInfo{};

  QueryRecordPlanDeviceByDeviceResponseBodyData() {}

  explicit QueryRecordPlanDeviceByDeviceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateInfo) {
      res["TemplateInfo"] = templateInfo ? boost::any(templateInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateInfo") != m.end() && !m["TemplateInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TemplateInfo"].type()) {
        QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TemplateInfo"]));
        templateInfo = make_shared<QueryRecordPlanDeviceByDeviceResponseBodyDataTemplateInfo>(model1);
      }
    }
  }


  virtual ~QueryRecordPlanDeviceByDeviceResponseBodyData() = default;
};
class QueryRecordPlanDeviceByDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryRecordPlanDeviceByDeviceResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordPlanDeviceByDeviceResponseBody() {}

  explicit QueryRecordPlanDeviceByDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRecordPlanDeviceByDeviceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRecordPlanDeviceByDeviceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordPlanDeviceByDeviceResponseBody() = default;
};
class QueryRecordPlanDeviceByDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordPlanDeviceByDeviceResponseBody> body{};

  QueryRecordPlanDeviceByDeviceResponse() {}

  explicit QueryRecordPlanDeviceByDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordPlanDeviceByDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordPlanDeviceByDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordPlanDeviceByDeviceResponse() = default;
};
class QueryRecordPlanDeviceByPlanRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> planId{};

  QueryRecordPlanDeviceByPlanRequest() {}

  explicit QueryRecordPlanDeviceByPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
  }


  virtual ~QueryRecordPlanDeviceByPlanRequest() = default;
};
class QueryRecordPlanDeviceByPlanResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> iotId{};
  shared_ptr<long> streamType{};

  QueryRecordPlanDeviceByPlanResponseBodyDataList() {}

  explicit QueryRecordPlanDeviceByPlanResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~QueryRecordPlanDeviceByPlanResponseBodyDataList() = default;
};
class QueryRecordPlanDeviceByPlanResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryRecordPlanDeviceByPlanResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryRecordPlanDeviceByPlanResponseBodyData() {}

  explicit QueryRecordPlanDeviceByPlanResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryRecordPlanDeviceByPlanResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRecordPlanDeviceByPlanResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryRecordPlanDeviceByPlanResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryRecordPlanDeviceByPlanResponseBodyData() = default;
};
class QueryRecordPlanDeviceByPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryRecordPlanDeviceByPlanResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordPlanDeviceByPlanResponseBody() {}

  explicit QueryRecordPlanDeviceByPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRecordPlanDeviceByPlanResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRecordPlanDeviceByPlanResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordPlanDeviceByPlanResponseBody() = default;
};
class QueryRecordPlanDeviceByPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordPlanDeviceByPlanResponseBody> body{};

  QueryRecordPlanDeviceByPlanResponse() {}

  explicit QueryRecordPlanDeviceByPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordPlanDeviceByPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordPlanDeviceByPlanResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordPlanDeviceByPlanResponse() = default;
};
class QueryRecordPlansRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  QueryRecordPlansRequest() {}

  explicit QueryRecordPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryRecordPlansRequest() = default;
};
class QueryRecordPlansResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> planId{};
  shared_ptr<string> templateId{};

  QueryRecordPlansResponseBodyDataList() {}

  explicit QueryRecordPlansResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~QueryRecordPlansResponseBodyDataList() = default;
};
class QueryRecordPlansResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryRecordPlansResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryRecordPlansResponseBodyData() {}

  explicit QueryRecordPlansResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryRecordPlansResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryRecordPlansResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryRecordPlansResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryRecordPlansResponseBodyData() = default;
};
class QueryRecordPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryRecordPlansResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordPlansResponseBody() {}

  explicit QueryRecordPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRecordPlansResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRecordPlansResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordPlansResponseBody() = default;
};
class QueryRecordPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordPlansResponseBody> body{};

  QueryRecordPlansResponse() {}

  explicit QueryRecordPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordPlansResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordPlansResponse() = default;
};
class QueryRecordUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> fileName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> seekTime{};
  shared_ptr<long> urlValidDuration{};

  QueryRecordUrlRequest() {}

  explicit QueryRecordUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (seekTime) {
      res["SeekTime"] = boost::any(*seekTime);
    }
    if (urlValidDuration) {
      res["UrlValidDuration"] = boost::any(*urlValidDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("SeekTime") != m.end() && !m["SeekTime"].empty()) {
      seekTime = make_shared<long>(boost::any_cast<long>(m["SeekTime"]));
    }
    if (m.find("UrlValidDuration") != m.end() && !m["UrlValidDuration"].empty()) {
      urlValidDuration = make_shared<long>(boost::any_cast<long>(m["UrlValidDuration"]));
    }
  }


  virtual ~QueryRecordUrlRequest() = default;
};
class QueryRecordUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordUrlResponseBody() {}

  explicit QueryRecordUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordUrlResponseBody() = default;
};
class QueryRecordUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordUrlResponseBody> body{};

  QueryRecordUrlResponse() {}

  explicit QueryRecordUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordUrlResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordUrlResponse() = default;
};
class QueryRecordUrlByTimeRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> deviceName{};
  shared_ptr<long> endTime{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> streamType{};
  shared_ptr<long> urlValidDuration{};

  QueryRecordUrlByTimeRequest() {}

  explicit QueryRecordUrlByTimeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    if (urlValidDuration) {
      res["UrlValidDuration"] = boost::any(*urlValidDuration);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
    if (m.find("UrlValidDuration") != m.end() && !m["UrlValidDuration"].empty()) {
      urlValidDuration = make_shared<long>(boost::any_cast<long>(m["UrlValidDuration"]));
    }
  }


  virtual ~QueryRecordUrlByTimeRequest() = default;
};
class QueryRecordUrlByTimeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRecordUrlByTimeResponseBody() {}

  explicit QueryRecordUrlByTimeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRecordUrlByTimeResponseBody() = default;
};
class QueryRecordUrlByTimeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRecordUrlByTimeResponseBody> body{};

  QueryRecordUrlByTimeResponse() {}

  explicit QueryRecordUrlByTimeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRecordUrlByTimeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRecordUrlByTimeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRecordUrlByTimeResponse() = default;
};
class QueryRtmpKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  QueryRtmpKeyRequest() {}

  explicit QueryRtmpKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryRtmpKeyRequest() = default;
};
class QueryRtmpKeyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> pullAuthKey{};
  shared_ptr<long> pullKeyExpireTime{};
  shared_ptr<string> pushAuthKey{};
  shared_ptr<long> pushKeyExpireTime{};
  shared_ptr<string> streamName{};

  QueryRtmpKeyResponseBodyData() {}

  explicit QueryRtmpKeyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pullAuthKey) {
      res["PullAuthKey"] = boost::any(*pullAuthKey);
    }
    if (pullKeyExpireTime) {
      res["PullKeyExpireTime"] = boost::any(*pullKeyExpireTime);
    }
    if (pushAuthKey) {
      res["PushAuthKey"] = boost::any(*pushAuthKey);
    }
    if (pushKeyExpireTime) {
      res["PushKeyExpireTime"] = boost::any(*pushKeyExpireTime);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PullAuthKey") != m.end() && !m["PullAuthKey"].empty()) {
      pullAuthKey = make_shared<string>(boost::any_cast<string>(m["PullAuthKey"]));
    }
    if (m.find("PullKeyExpireTime") != m.end() && !m["PullKeyExpireTime"].empty()) {
      pullKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PullKeyExpireTime"]));
    }
    if (m.find("PushAuthKey") != m.end() && !m["PushAuthKey"].empty()) {
      pushAuthKey = make_shared<string>(boost::any_cast<string>(m["PushAuthKey"]));
    }
    if (m.find("PushKeyExpireTime") != m.end() && !m["PushKeyExpireTime"].empty()) {
      pushKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PushKeyExpireTime"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
  }


  virtual ~QueryRtmpKeyResponseBodyData() = default;
};
class QueryRtmpKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryRtmpKeyResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryRtmpKeyResponseBody() {}

  explicit QueryRtmpKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryRtmpKeyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryRtmpKeyResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryRtmpKeyResponseBody() = default;
};
class QueryRtmpKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryRtmpKeyResponseBody> body{};

  QueryRtmpKeyResponse() {}

  explicit QueryRtmpKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryRtmpKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryRtmpKeyResponseBody>(model1);
      }
    }
  }


  virtual ~QueryRtmpKeyResponse() = default;
};
class QueryTimeTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  QueryTimeTemplateRequest() {}

  explicit QueryTimeTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryTimeTemplateRequest() = default;
};
class QueryTimeTemplateResponseBodyDataListTimeSectionList : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> dayOfWeek{};
  shared_ptr<long> end{};

  QueryTimeTemplateResponseBodyDataListTimeSectionList() {}

  explicit QueryTimeTemplateResponseBodyDataListTimeSectionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (dayOfWeek) {
      res["DayOfWeek"] = boost::any(*dayOfWeek);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("DayOfWeek") != m.end() && !m["DayOfWeek"].empty()) {
      dayOfWeek = make_shared<long>(boost::any_cast<long>(m["DayOfWeek"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~QueryTimeTemplateResponseBodyDataListTimeSectionList() = default;
};
class QueryTimeTemplateResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> allDay{};
  shared_ptr<long> default_{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<QueryTimeTemplateResponseBodyDataListTimeSectionList>> timeSectionList{};

  QueryTimeTemplateResponseBodyDataList() {}

  explicit QueryTimeTemplateResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allDay) {
      res["AllDay"] = boost::any(*allDay);
    }
    if (default_) {
      res["Default"] = boost::any(*default_);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeSectionList) {
      vector<boost::any> temp1;
      for(auto item1:*timeSectionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeSectionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllDay") != m.end() && !m["AllDay"].empty()) {
      allDay = make_shared<long>(boost::any_cast<long>(m["AllDay"]));
    }
    if (m.find("Default") != m.end() && !m["Default"].empty()) {
      default_ = make_shared<long>(boost::any_cast<long>(m["Default"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TimeSectionList") != m.end() && !m["TimeSectionList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeSectionList"].type()) {
        vector<QueryTimeTemplateResponseBodyDataListTimeSectionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeSectionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTimeTemplateResponseBodyDataListTimeSectionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeSectionList = make_shared<vector<QueryTimeTemplateResponseBodyDataListTimeSectionList>>(expect1);
      }
    }
  }


  virtual ~QueryTimeTemplateResponseBodyDataList() = default;
};
class QueryTimeTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryTimeTemplateResponseBodyDataList>> list{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryTimeTemplateResponseBodyData() {}

  explicit QueryTimeTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (page) {
      res["Page"] = boost::any(*page);
    }
    if (pageCount) {
      res["PageCount"] = boost::any(*pageCount);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryTimeTemplateResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTimeTemplateResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryTimeTemplateResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      page = make_shared<long>(boost::any_cast<long>(m["Page"]));
    }
    if (m.find("PageCount") != m.end() && !m["PageCount"].empty()) {
      pageCount = make_shared<long>(boost::any_cast<long>(m["PageCount"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryTimeTemplateResponseBodyData() = default;
};
class QueryTimeTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryTimeTemplateResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryTimeTemplateResponseBody() {}

  explicit QueryTimeTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTimeTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTimeTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTimeTemplateResponseBody() = default;
};
class QueryTimeTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTimeTemplateResponseBody> body{};

  QueryTimeTemplateResponse() {}

  explicit QueryTimeTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTimeTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTimeTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTimeTemplateResponse() = default;
};
class QueryTimeTemplateDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateId{};

  QueryTimeTemplateDetailRequest() {}

  explicit QueryTimeTemplateDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~QueryTimeTemplateDetailRequest() = default;
};
class QueryTimeTemplateDetailResponseBodyDataTimeSectionList : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> dayOfWeek{};
  shared_ptr<long> end{};

  QueryTimeTemplateDetailResponseBodyDataTimeSectionList() {}

  explicit QueryTimeTemplateDetailResponseBodyDataTimeSectionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (dayOfWeek) {
      res["DayOfWeek"] = boost::any(*dayOfWeek);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("DayOfWeek") != m.end() && !m["DayOfWeek"].empty()) {
      dayOfWeek = make_shared<long>(boost::any_cast<long>(m["DayOfWeek"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~QueryTimeTemplateDetailResponseBodyDataTimeSectionList() = default;
};
class QueryTimeTemplateDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> allDay{};
  shared_ptr<long> default_{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<QueryTimeTemplateDetailResponseBodyDataTimeSectionList>> timeSectionList{};

  QueryTimeTemplateDetailResponseBodyData() {}

  explicit QueryTimeTemplateDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allDay) {
      res["AllDay"] = boost::any(*allDay);
    }
    if (default_) {
      res["Default"] = boost::any(*default_);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeSectionList) {
      vector<boost::any> temp1;
      for(auto item1:*timeSectionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeSectionList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllDay") != m.end() && !m["AllDay"].empty()) {
      allDay = make_shared<long>(boost::any_cast<long>(m["AllDay"]));
    }
    if (m.find("Default") != m.end() && !m["Default"].empty()) {
      default_ = make_shared<long>(boost::any_cast<long>(m["Default"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TimeSectionList") != m.end() && !m["TimeSectionList"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeSectionList"].type()) {
        vector<QueryTimeTemplateDetailResponseBodyDataTimeSectionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeSectionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTimeTemplateDetailResponseBodyDataTimeSectionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeSectionList = make_shared<vector<QueryTimeTemplateDetailResponseBodyDataTimeSectionList>>(expect1);
      }
    }
  }


  virtual ~QueryTimeTemplateDetailResponseBodyData() = default;
};
class QueryTimeTemplateDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryTimeTemplateDetailResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryTimeTemplateDetailResponseBody() {}

  explicit QueryTimeTemplateDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryTimeTemplateDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryTimeTemplateDetailResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryTimeTemplateDetailResponseBody() = default;
};
class QueryTimeTemplateDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTimeTemplateDetailResponseBody> body{};

  QueryTimeTemplateDetailResponse() {}

  explicit QueryTimeTemplateDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryTimeTemplateDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTimeTemplateDetailResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTimeTemplateDetailResponse() = default;
};
class QueryVisionDeviceInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  QueryVisionDeviceInfoRequest() {}

  explicit QueryVisionDeviceInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryVisionDeviceInfoRequest() = default;
};
class QueryVisionDeviceInfoResponseBodyDataGbDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<long> deviceProtocol{};
  shared_ptr<string> gbId{};
  shared_ptr<long> netProtocol{};
  shared_ptr<string> nickName{};
  shared_ptr<string> password{};
  shared_ptr<string> subProductKey{};

  QueryVisionDeviceInfoResponseBodyDataGbDeviceInfo() {}

  explicit QueryVisionDeviceInfoResponseBodyDataGbDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceProtocol) {
      res["DeviceProtocol"] = boost::any(*deviceProtocol);
    }
    if (gbId) {
      res["GbId"] = boost::any(*gbId);
    }
    if (netProtocol) {
      res["NetProtocol"] = boost::any(*netProtocol);
    }
    if (nickName) {
      res["NickName"] = boost::any(*nickName);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (subProductKey) {
      res["SubProductKey"] = boost::any(*subProductKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceProtocol") != m.end() && !m["DeviceProtocol"].empty()) {
      deviceProtocol = make_shared<long>(boost::any_cast<long>(m["DeviceProtocol"]));
    }
    if (m.find("GbId") != m.end() && !m["GbId"].empty()) {
      gbId = make_shared<string>(boost::any_cast<string>(m["GbId"]));
    }
    if (m.find("NetProtocol") != m.end() && !m["NetProtocol"].empty()) {
      netProtocol = make_shared<long>(boost::any_cast<long>(m["NetProtocol"]));
    }
    if (m.find("NickName") != m.end() && !m["NickName"].empty()) {
      nickName = make_shared<string>(boost::any_cast<string>(m["NickName"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("SubProductKey") != m.end() && !m["SubProductKey"].empty()) {
      subProductKey = make_shared<string>(boost::any_cast<string>(m["SubProductKey"]));
    }
  }


  virtual ~QueryVisionDeviceInfoResponseBodyDataGbDeviceInfo() = default;
};
class QueryVisionDeviceInfoResponseBodyDataRtmpDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<string> pullAuthKey{};
  shared_ptr<long> pullKeyExpireTime{};
  shared_ptr<string> pushAuthKey{};
  shared_ptr<long> pushKeyExpireTime{};
  shared_ptr<string> pushUrlSample{};
  shared_ptr<string> streamName{};
  shared_ptr<long> streamStatus{};

  QueryVisionDeviceInfoResponseBodyDataRtmpDeviceInfo() {}

  explicit QueryVisionDeviceInfoResponseBodyDataRtmpDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pullAuthKey) {
      res["PullAuthKey"] = boost::any(*pullAuthKey);
    }
    if (pullKeyExpireTime) {
      res["PullKeyExpireTime"] = boost::any(*pullKeyExpireTime);
    }
    if (pushAuthKey) {
      res["PushAuthKey"] = boost::any(*pushAuthKey);
    }
    if (pushKeyExpireTime) {
      res["PushKeyExpireTime"] = boost::any(*pushKeyExpireTime);
    }
    if (pushUrlSample) {
      res["PushUrlSample"] = boost::any(*pushUrlSample);
    }
    if (streamName) {
      res["StreamName"] = boost::any(*streamName);
    }
    if (streamStatus) {
      res["StreamStatus"] = boost::any(*streamStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PullAuthKey") != m.end() && !m["PullAuthKey"].empty()) {
      pullAuthKey = make_shared<string>(boost::any_cast<string>(m["PullAuthKey"]));
    }
    if (m.find("PullKeyExpireTime") != m.end() && !m["PullKeyExpireTime"].empty()) {
      pullKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PullKeyExpireTime"]));
    }
    if (m.find("PushAuthKey") != m.end() && !m["PushAuthKey"].empty()) {
      pushAuthKey = make_shared<string>(boost::any_cast<string>(m["PushAuthKey"]));
    }
    if (m.find("PushKeyExpireTime") != m.end() && !m["PushKeyExpireTime"].empty()) {
      pushKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PushKeyExpireTime"]));
    }
    if (m.find("PushUrlSample") != m.end() && !m["PushUrlSample"].empty()) {
      pushUrlSample = make_shared<string>(boost::any_cast<string>(m["PushUrlSample"]));
    }
    if (m.find("StreamName") != m.end() && !m["StreamName"].empty()) {
      streamName = make_shared<string>(boost::any_cast<string>(m["StreamName"]));
    }
    if (m.find("StreamStatus") != m.end() && !m["StreamStatus"].empty()) {
      streamStatus = make_shared<long>(boost::any_cast<long>(m["StreamStatus"]));
    }
  }


  virtual ~QueryVisionDeviceInfoResponseBodyDataRtmpDeviceInfo() = default;
};
class QueryVisionDeviceInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<long> deviceType{};
  shared_ptr<QueryVisionDeviceInfoResponseBodyDataGbDeviceInfo> gbDeviceInfo{};
  shared_ptr<QueryVisionDeviceInfoResponseBodyDataRtmpDeviceInfo> rtmpDeviceInfo{};

  QueryVisionDeviceInfoResponseBodyData() {}

  explicit QueryVisionDeviceInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (gbDeviceInfo) {
      res["GbDeviceInfo"] = gbDeviceInfo ? boost::any(gbDeviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (rtmpDeviceInfo) {
      res["RtmpDeviceInfo"] = rtmpDeviceInfo ? boost::any(rtmpDeviceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<long>(boost::any_cast<long>(m["DeviceType"]));
    }
    if (m.find("GbDeviceInfo") != m.end() && !m["GbDeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["GbDeviceInfo"].type()) {
        QueryVisionDeviceInfoResponseBodyDataGbDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GbDeviceInfo"]));
        gbDeviceInfo = make_shared<QueryVisionDeviceInfoResponseBodyDataGbDeviceInfo>(model1);
      }
    }
    if (m.find("RtmpDeviceInfo") != m.end() && !m["RtmpDeviceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["RtmpDeviceInfo"].type()) {
        QueryVisionDeviceInfoResponseBodyDataRtmpDeviceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["RtmpDeviceInfo"]));
        rtmpDeviceInfo = make_shared<QueryVisionDeviceInfoResponseBodyDataRtmpDeviceInfo>(model1);
      }
    }
  }


  virtual ~QueryVisionDeviceInfoResponseBodyData() = default;
};
class QueryVisionDeviceInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryVisionDeviceInfoResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryVisionDeviceInfoResponseBody() {}

  explicit QueryVisionDeviceInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryVisionDeviceInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryVisionDeviceInfoResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryVisionDeviceInfoResponseBody() = default;
};
class QueryVisionDeviceInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryVisionDeviceInfoResponseBody> body{};

  QueryVisionDeviceInfoResponse() {}

  explicit QueryVisionDeviceInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryVisionDeviceInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryVisionDeviceInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryVisionDeviceInfoResponse() = default;
};
class QueryVoiceIntercomRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<string> scheme{};

  QueryVoiceIntercomRequest() {}

  explicit QueryVoiceIntercomRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (scheme) {
      res["Scheme"] = boost::any(*scheme);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("Scheme") != m.end() && !m["Scheme"].empty()) {
      scheme = make_shared<string>(boost::any_cast<string>(m["Scheme"]));
    }
  }


  virtual ~QueryVoiceIntercomRequest() = default;
};
class QueryVoiceIntercomResponseBodyDataCryptoKey : public Darabonba::Model {
public:
  shared_ptr<string> iv{};
  shared_ptr<string> key{};

  QueryVoiceIntercomResponseBodyDataCryptoKey() {}

  explicit QueryVoiceIntercomResponseBodyDataCryptoKey(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iv) {
      res["Iv"] = boost::any(*iv);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Iv") != m.end() && !m["Iv"].empty()) {
      iv = make_shared<string>(boost::any_cast<string>(m["Iv"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
  }


  virtual ~QueryVoiceIntercomResponseBodyDataCryptoKey() = default;
};
class QueryVoiceIntercomResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<QueryVoiceIntercomResponseBodyDataCryptoKey> cryptoKey{};
  shared_ptr<string> url{};

  QueryVoiceIntercomResponseBodyData() {}

  explicit QueryVoiceIntercomResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cryptoKey) {
      res["CryptoKey"] = cryptoKey ? boost::any(cryptoKey->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CryptoKey") != m.end() && !m["CryptoKey"].empty()) {
      if (typeid(map<string, boost::any>) == m["CryptoKey"].type()) {
        QueryVoiceIntercomResponseBodyDataCryptoKey model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["CryptoKey"]));
        cryptoKey = make_shared<QueryVoiceIntercomResponseBodyDataCryptoKey>(model1);
      }
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~QueryVoiceIntercomResponseBodyData() = default;
};
class QueryVoiceIntercomResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<QueryVoiceIntercomResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryVoiceIntercomResponseBody() {}

  explicit QueryVoiceIntercomResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryVoiceIntercomResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryVoiceIntercomResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryVoiceIntercomResponseBody() = default;
};
class QueryVoiceIntercomResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryVoiceIntercomResponseBody> body{};

  QueryVoiceIntercomResponse() {}

  explicit QueryVoiceIntercomResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        QueryVoiceIntercomResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryVoiceIntercomResponseBody>(model1);
      }
    }
  }


  virtual ~QueryVoiceIntercomResponse() = default;
};
class RemoveFaceDeviceFromDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceGroupId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> productKey{};

  RemoveFaceDeviceFromDeviceGroupRequest() {}

  explicit RemoveFaceDeviceFromDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceGroupId) {
      res["DeviceGroupId"] = boost::any(*deviceGroupId);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceGroupId") != m.end() && !m["DeviceGroupId"].empty()) {
      deviceGroupId = make_shared<string>(boost::any_cast<string>(m["DeviceGroupId"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~RemoveFaceDeviceFromDeviceGroupRequest() = default;
};
class RemoveFaceDeviceFromDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveFaceDeviceFromDeviceGroupResponseBody() {}

  explicit RemoveFaceDeviceFromDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveFaceDeviceFromDeviceGroupResponseBody() = default;
};
class RemoveFaceDeviceFromDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveFaceDeviceFromDeviceGroupResponseBody> body{};

  RemoveFaceDeviceFromDeviceGroupResponse() {}

  explicit RemoveFaceDeviceFromDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveFaceDeviceFromDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveFaceDeviceFromDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveFaceDeviceFromDeviceGroupResponse() = default;
};
class RemoveFaceUserFromUserGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> isolationId{};
  shared_ptr<string> userGroupId{};
  shared_ptr<string> userId{};

  RemoveFaceUserFromUserGroupRequest() {}

  explicit RemoveFaceUserFromUserGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (userGroupId) {
      res["UserGroupId"] = boost::any(*userGroupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("UserGroupId") != m.end() && !m["UserGroupId"].empty()) {
      userGroupId = make_shared<string>(boost::any_cast<string>(m["UserGroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~RemoveFaceUserFromUserGroupRequest() = default;
};
class RemoveFaceUserFromUserGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveFaceUserFromUserGroupResponseBody() {}

  explicit RemoveFaceUserFromUserGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RemoveFaceUserFromUserGroupResponseBody() = default;
};
class RemoveFaceUserFromUserGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveFaceUserFromUserGroupResponseBody> body{};

  RemoveFaceUserFromUserGroupResponse() {}

  explicit RemoveFaceUserFromUserGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        RemoveFaceUserFromUserGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveFaceUserFromUserGroupResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveFaceUserFromUserGroupResponse() = default;
};
class SetDevicePictureLifeCycleRequest : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  SetDevicePictureLifeCycleRequest() {}

  explicit SetDevicePictureLifeCycleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~SetDevicePictureLifeCycleRequest() = default;
};
class SetDevicePictureLifeCycleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetDevicePictureLifeCycleResponseBody() {}

  explicit SetDevicePictureLifeCycleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetDevicePictureLifeCycleResponseBody() = default;
};
class SetDevicePictureLifeCycleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDevicePictureLifeCycleResponseBody> body{};

  SetDevicePictureLifeCycleResponse() {}

  explicit SetDevicePictureLifeCycleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetDevicePictureLifeCycleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDevicePictureLifeCycleResponseBody>(model1);
      }
    }
  }


  virtual ~SetDevicePictureLifeCycleResponse() = default;
};
class SetDeviceRecordLifeCycleRequest : public Darabonba::Model {
public:
  shared_ptr<long> day{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  SetDeviceRecordLifeCycleRequest() {}

  explicit SetDeviceRecordLifeCycleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (day) {
      res["Day"] = boost::any(*day);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Day") != m.end() && !m["Day"].empty()) {
      day = make_shared<long>(boost::any_cast<long>(m["Day"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~SetDeviceRecordLifeCycleRequest() = default;
};
class SetDeviceRecordLifeCycleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetDeviceRecordLifeCycleResponseBody() {}

  explicit SetDeviceRecordLifeCycleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SetDeviceRecordLifeCycleResponseBody() = default;
};
class SetDeviceRecordLifeCycleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetDeviceRecordLifeCycleResponseBody> body{};

  SetDeviceRecordLifeCycleResponse() {}

  explicit SetDeviceRecordLifeCycleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        SetDeviceRecordLifeCycleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetDeviceRecordLifeCycleResponseBody>(model1);
      }
    }
  }


  virtual ~SetDeviceRecordLifeCycleResponse() = default;
};
class StopLiveStreamingRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<long> streamType{};

  StopLiveStreamingRequest() {}

  explicit StopLiveStreamingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~StopLiveStreamingRequest() = default;
};
class StopLiveStreamingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopLiveStreamingResponseBody() {}

  explicit StopLiveStreamingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopLiveStreamingResponseBody() = default;
};
class StopLiveStreamingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopLiveStreamingResponseBody> body{};

  StopLiveStreamingResponse() {}

  explicit StopLiveStreamingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopLiveStreamingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopLiveStreamingResponseBody>(model1);
      }
    }
  }


  virtual ~StopLiveStreamingResponse() = default;
};
class StopTriggeredRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<string> recordId{};

  StopTriggeredRecordRequest() {}

  explicit StopTriggeredRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (recordId) {
      res["RecordId"] = boost::any(*recordId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("RecordId") != m.end() && !m["RecordId"].empty()) {
      recordId = make_shared<string>(boost::any_cast<string>(m["RecordId"]));
    }
  }


  virtual ~StopTriggeredRecordRequest() = default;
};
class StopTriggeredRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  StopTriggeredRecordResponseBody() {}

  explicit StopTriggeredRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~StopTriggeredRecordResponseBody() = default;
};
class StopTriggeredRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopTriggeredRecordResponseBody> body{};

  StopTriggeredRecordResponse() {}

  explicit StopTriggeredRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        StopTriggeredRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopTriggeredRecordResponseBody>(model1);
      }
    }
  }


  virtual ~StopTriggeredRecordResponse() = default;
};
class TransferDeviceInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> deviceNameList{};
  shared_ptr<string> productKey{};
  shared_ptr<string> sourceInstanceId{};
  shared_ptr<string> targetInstanceId{};

  TransferDeviceInstanceRequest() {}

  explicit TransferDeviceInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceNameList) {
      res["DeviceNameList"] = boost::any(*deviceNameList);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (sourceInstanceId) {
      res["SourceInstanceId"] = boost::any(*sourceInstanceId);
    }
    if (targetInstanceId) {
      res["TargetInstanceId"] = boost::any(*targetInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceNameList") != m.end() && !m["DeviceNameList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceNameList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceNameList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceNameList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("SourceInstanceId") != m.end() && !m["SourceInstanceId"].empty()) {
      sourceInstanceId = make_shared<string>(boost::any_cast<string>(m["SourceInstanceId"]));
    }
    if (m.find("TargetInstanceId") != m.end() && !m["TargetInstanceId"].empty()) {
      targetInstanceId = make_shared<string>(boost::any_cast<string>(m["TargetInstanceId"]));
    }
  }


  virtual ~TransferDeviceInstanceRequest() = default;
};
class TransferDeviceInstanceResponseBodyDataFailedList : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> message{};

  TransferDeviceInstanceResponseBodyDataFailedList() {}

  explicit TransferDeviceInstanceResponseBodyDataFailedList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~TransferDeviceInstanceResponseBodyDataFailedList() = default;
};
class TransferDeviceInstanceResponseBodyDataSuccessList : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> message{};

  TransferDeviceInstanceResponseBodyDataSuccessList() {}

  explicit TransferDeviceInstanceResponseBodyDataSuccessList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
  }


  virtual ~TransferDeviceInstanceResponseBodyDataSuccessList() = default;
};
class TransferDeviceInstanceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<TransferDeviceInstanceResponseBodyDataFailedList>> failedList{};
  shared_ptr<vector<TransferDeviceInstanceResponseBodyDataSuccessList>> successList{};

  TransferDeviceInstanceResponseBodyData() {}

  explicit TransferDeviceInstanceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failedList) {
      vector<boost::any> temp1;
      for(auto item1:*failedList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedList"] = boost::any(temp1);
    }
    if (successList) {
      vector<boost::any> temp1;
      for(auto item1:*successList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SuccessList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailedList") != m.end() && !m["FailedList"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedList"].type()) {
        vector<TransferDeviceInstanceResponseBodyDataFailedList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransferDeviceInstanceResponseBodyDataFailedList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedList = make_shared<vector<TransferDeviceInstanceResponseBodyDataFailedList>>(expect1);
      }
    }
    if (m.find("SuccessList") != m.end() && !m["SuccessList"].empty()) {
      if (typeid(vector<boost::any>) == m["SuccessList"].type()) {
        vector<TransferDeviceInstanceResponseBodyDataSuccessList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SuccessList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TransferDeviceInstanceResponseBodyDataSuccessList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        successList = make_shared<vector<TransferDeviceInstanceResponseBodyDataSuccessList>>(expect1);
      }
    }
  }


  virtual ~TransferDeviceInstanceResponseBodyData() = default;
};
class TransferDeviceInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<TransferDeviceInstanceResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TransferDeviceInstanceResponseBody() {}

  explicit TransferDeviceInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        TransferDeviceInstanceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<TransferDeviceInstanceResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TransferDeviceInstanceResponseBody() = default;
};
class TransferDeviceInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TransferDeviceInstanceResponseBody> body{};

  TransferDeviceInstanceResponse() {}

  explicit TransferDeviceInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TransferDeviceInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TransferDeviceInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~TransferDeviceInstanceResponse() = default;
};
class TriggerCapturePictureRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};

  TriggerCapturePictureRequest() {}

  explicit TriggerCapturePictureRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~TriggerCapturePictureRequest() = default;
};
class TriggerCapturePictureResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TriggerCapturePictureResponseBody() {}

  explicit TriggerCapturePictureResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TriggerCapturePictureResponseBody() = default;
};
class TriggerCapturePictureResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerCapturePictureResponseBody> body{};

  TriggerCapturePictureResponse() {}

  explicit TriggerCapturePictureResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TriggerCapturePictureResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerCapturePictureResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerCapturePictureResponse() = default;
};
class TriggerRecordRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<long> preRecordDuration{};
  shared_ptr<string> productKey{};
  shared_ptr<long> recordDuration{};
  shared_ptr<long> streamType{};

  TriggerRecordRequest() {}

  explicit TriggerRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (preRecordDuration) {
      res["PreRecordDuration"] = boost::any(*preRecordDuration);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (recordDuration) {
      res["RecordDuration"] = boost::any(*recordDuration);
    }
    if (streamType) {
      res["StreamType"] = boost::any(*streamType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("PreRecordDuration") != m.end() && !m["PreRecordDuration"].empty()) {
      preRecordDuration = make_shared<long>(boost::any_cast<long>(m["PreRecordDuration"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("RecordDuration") != m.end() && !m["RecordDuration"].empty()) {
      recordDuration = make_shared<long>(boost::any_cast<long>(m["RecordDuration"]));
    }
    if (m.find("StreamType") != m.end() && !m["StreamType"].empty()) {
      streamType = make_shared<long>(boost::any_cast<long>(m["StreamType"]));
    }
  }


  virtual ~TriggerRecordRequest() = default;
};
class TriggerRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  TriggerRecordResponseBody() {}

  explicit TriggerRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~TriggerRecordResponseBody() = default;
};
class TriggerRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerRecordResponseBody> body{};

  TriggerRecordResponse() {}

  explicit TriggerRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        TriggerRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerRecordResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerRecordResponse() = default;
};
class UnbindPictureSearchAppWithDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<vector<string>> deviceIotIds{};
  shared_ptr<string> iotInstanceId{};

  UnbindPictureSearchAppWithDevicesRequest() {}

  explicit UnbindPictureSearchAppWithDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (deviceIotIds) {
      res["DeviceIotIds"] = boost::any(*deviceIotIds);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("DeviceIotIds") != m.end() && !m["DeviceIotIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DeviceIotIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DeviceIotIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      deviceIotIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
  }


  virtual ~UnbindPictureSearchAppWithDevicesRequest() = default;
};
class UnbindPictureSearchAppWithDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnbindPictureSearchAppWithDevicesResponseBody() {}

  explicit UnbindPictureSearchAppWithDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UnbindPictureSearchAppWithDevicesResponseBody() = default;
};
class UnbindPictureSearchAppWithDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindPictureSearchAppWithDevicesResponseBody> body{};

  UnbindPictureSearchAppWithDevicesResponse() {}

  explicit UnbindPictureSearchAppWithDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UnbindPictureSearchAppWithDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindPictureSearchAppWithDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindPictureSearchAppWithDevicesResponse() = default;
};
class UpdateEventRecordPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> eventTypes{};
  shared_ptr<string> name{};
  shared_ptr<string> planId{};
  shared_ptr<long> preRecordDuration{};
  shared_ptr<long> recordDuration{};
  shared_ptr<string> templateId{};

  UpdateEventRecordPlanRequest() {}

  explicit UpdateEventRecordPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eventTypes) {
      res["EventTypes"] = boost::any(*eventTypes);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (preRecordDuration) {
      res["PreRecordDuration"] = boost::any(*preRecordDuration);
    }
    if (recordDuration) {
      res["RecordDuration"] = boost::any(*recordDuration);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EventTypes") != m.end() && !m["EventTypes"].empty()) {
      eventTypes = make_shared<string>(boost::any_cast<string>(m["EventTypes"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("PreRecordDuration") != m.end() && !m["PreRecordDuration"].empty()) {
      preRecordDuration = make_shared<long>(boost::any_cast<long>(m["PreRecordDuration"]));
    }
    if (m.find("RecordDuration") != m.end() && !m["RecordDuration"].empty()) {
      recordDuration = make_shared<long>(boost::any_cast<long>(m["RecordDuration"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateEventRecordPlanRequest() = default;
};
class UpdateEventRecordPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateEventRecordPlanResponseBody() {}

  explicit UpdateEventRecordPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateEventRecordPlanResponseBody() = default;
};
class UpdateEventRecordPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEventRecordPlanResponseBody> body{};

  UpdateEventRecordPlanResponse() {}

  explicit UpdateEventRecordPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateEventRecordPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEventRecordPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEventRecordPlanResponse() = default;
};
class UpdateFaceUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> customUserId{};
  shared_ptr<string> facePicUrl{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> name{};
  shared_ptr<string> params{};
  shared_ptr<string> userId{};

  UpdateFaceUserRequest() {}

  explicit UpdateFaceUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customUserId) {
      res["CustomUserId"] = boost::any(*customUserId);
    }
    if (facePicUrl) {
      res["FacePicUrl"] = boost::any(*facePicUrl);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustomUserId") != m.end() && !m["CustomUserId"].empty()) {
      customUserId = make_shared<string>(boost::any_cast<string>(m["CustomUserId"]));
    }
    if (m.find("FacePicUrl") != m.end() && !m["FacePicUrl"].empty()) {
      facePicUrl = make_shared<string>(boost::any_cast<string>(m["FacePicUrl"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UpdateFaceUserRequest() = default;
};
class UpdateFaceUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFaceUserResponseBody() {}

  explicit UpdateFaceUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateFaceUserResponseBody() = default;
};
class UpdateFaceUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFaceUserResponseBody> body{};

  UpdateFaceUserResponse() {}

  explicit UpdateFaceUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFaceUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFaceUserResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFaceUserResponse() = default;
};
class UpdateFaceUserGroupAndDeviceGroupRelationRequest : public Darabonba::Model {
public:
  shared_ptr<string> controlId{};
  shared_ptr<string> isolationId{};
  shared_ptr<string> relation{};

  UpdateFaceUserGroupAndDeviceGroupRelationRequest() {}

  explicit UpdateFaceUserGroupAndDeviceGroupRelationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlId) {
      res["ControlId"] = boost::any(*controlId);
    }
    if (isolationId) {
      res["IsolationId"] = boost::any(*isolationId);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlId") != m.end() && !m["ControlId"].empty()) {
      controlId = make_shared<string>(boost::any_cast<string>(m["ControlId"]));
    }
    if (m.find("IsolationId") != m.end() && !m["IsolationId"].empty()) {
      isolationId = make_shared<string>(boost::any_cast<string>(m["IsolationId"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<string>(boost::any_cast<string>(m["Relation"]));
    }
  }


  virtual ~UpdateFaceUserGroupAndDeviceGroupRelationRequest() = default;
};
class UpdateFaceUserGroupAndDeviceGroupRelationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> controlId{};
  shared_ptr<string> modifiedTime{};

  UpdateFaceUserGroupAndDeviceGroupRelationResponseBodyData() {}

  explicit UpdateFaceUserGroupAndDeviceGroupRelationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (controlId) {
      res["ControlId"] = boost::any(*controlId);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ControlId") != m.end() && !m["ControlId"].empty()) {
      controlId = make_shared<string>(boost::any_cast<string>(m["ControlId"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
  }


  virtual ~UpdateFaceUserGroupAndDeviceGroupRelationResponseBodyData() = default;
};
class UpdateFaceUserGroupAndDeviceGroupRelationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<UpdateFaceUserGroupAndDeviceGroupRelationResponseBodyData> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFaceUserGroupAndDeviceGroupRelationResponseBody() {}

  explicit UpdateFaceUserGroupAndDeviceGroupRelationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        UpdateFaceUserGroupAndDeviceGroupRelationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateFaceUserGroupAndDeviceGroupRelationResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateFaceUserGroupAndDeviceGroupRelationResponseBody() = default;
};
class UpdateFaceUserGroupAndDeviceGroupRelationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFaceUserGroupAndDeviceGroupRelationResponseBody> body{};

  UpdateFaceUserGroupAndDeviceGroupRelationResponse() {}

  explicit UpdateFaceUserGroupAndDeviceGroupRelationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateFaceUserGroupAndDeviceGroupRelationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFaceUserGroupAndDeviceGroupRelationResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFaceUserGroupAndDeviceGroupRelationResponse() = default;
};
class UpdateInstanceInternetProtocolRequest : public Darabonba::Model {
public:
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> ipVersion{};

  UpdateInstanceInternetProtocolRequest() {}

  explicit UpdateInstanceInternetProtocolRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (ipVersion) {
      res["IpVersion"] = boost::any(*ipVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("IpVersion") != m.end() && !m["IpVersion"].empty()) {
      ipVersion = make_shared<string>(boost::any_cast<string>(m["IpVersion"]));
    }
  }


  virtual ~UpdateInstanceInternetProtocolRequest() = default;
};
class UpdateInstanceInternetProtocolResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<map<string, boost::any>> data{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateInstanceInternetProtocolResponseBody() {}

  explicit UpdateInstanceInternetProtocolResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Data"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      data = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateInstanceInternetProtocolResponseBody() = default;
};
class UpdateInstanceInternetProtocolResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceInternetProtocolResponseBody> body{};

  UpdateInstanceInternetProtocolResponse() {}

  explicit UpdateInstanceInternetProtocolResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateInstanceInternetProtocolResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceInternetProtocolResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceInternetProtocolResponse() = default;
};
class UpdatePictureSearchAppRequest : public Darabonba::Model {
public:
  shared_ptr<string> appInstanceId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  UpdatePictureSearchAppRequest() {}

  explicit UpdatePictureSearchAppRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appInstanceId) {
      res["AppInstanceId"] = boost::any(*appInstanceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppInstanceId") != m.end() && !m["AppInstanceId"].empty()) {
      appInstanceId = make_shared<string>(boost::any_cast<string>(m["AppInstanceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdatePictureSearchAppRequest() = default;
};
class UpdatePictureSearchAppResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdatePictureSearchAppResponseBody() {}

  explicit UpdatePictureSearchAppResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdatePictureSearchAppResponseBody() = default;
};
class UpdatePictureSearchAppResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePictureSearchAppResponseBody> body{};

  UpdatePictureSearchAppResponse() {}

  explicit UpdatePictureSearchAppResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdatePictureSearchAppResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePictureSearchAppResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePictureSearchAppResponse() = default;
};
class UpdateRecordPlanRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> planId{};
  shared_ptr<string> templateId{};

  UpdateRecordPlanRequest() {}

  explicit UpdateRecordPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~UpdateRecordPlanRequest() = default;
};
class UpdateRecordPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateRecordPlanResponseBody() {}

  explicit UpdateRecordPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateRecordPlanResponseBody() = default;
};
class UpdateRecordPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRecordPlanResponseBody> body{};

  UpdateRecordPlanResponse() {}

  explicit UpdateRecordPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRecordPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRecordPlanResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRecordPlanResponse() = default;
};
class UpdateRtmpKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> iotInstanceId{};
  shared_ptr<string> productKey{};
  shared_ptr<string> pullAuthKey{};
  shared_ptr<long> pullKeyExpireTime{};
  shared_ptr<string> pushAuthKey{};
  shared_ptr<long> pushKeyExpireTime{};

  UpdateRtmpKeyRequest() {}

  explicit UpdateRtmpKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (iotInstanceId) {
      res["IotInstanceId"] = boost::any(*iotInstanceId);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    if (pullAuthKey) {
      res["PullAuthKey"] = boost::any(*pullAuthKey);
    }
    if (pullKeyExpireTime) {
      res["PullKeyExpireTime"] = boost::any(*pullKeyExpireTime);
    }
    if (pushAuthKey) {
      res["PushAuthKey"] = boost::any(*pushAuthKey);
    }
    if (pushKeyExpireTime) {
      res["PushKeyExpireTime"] = boost::any(*pushKeyExpireTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("IotInstanceId") != m.end() && !m["IotInstanceId"].empty()) {
      iotInstanceId = make_shared<string>(boost::any_cast<string>(m["IotInstanceId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
    if (m.find("PullAuthKey") != m.end() && !m["PullAuthKey"].empty()) {
      pullAuthKey = make_shared<string>(boost::any_cast<string>(m["PullAuthKey"]));
    }
    if (m.find("PullKeyExpireTime") != m.end() && !m["PullKeyExpireTime"].empty()) {
      pullKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PullKeyExpireTime"]));
    }
    if (m.find("PushAuthKey") != m.end() && !m["PushAuthKey"].empty()) {
      pushAuthKey = make_shared<string>(boost::any_cast<string>(m["PushAuthKey"]));
    }
    if (m.find("PushKeyExpireTime") != m.end() && !m["PushKeyExpireTime"].empty()) {
      pushKeyExpireTime = make_shared<long>(boost::any_cast<long>(m["PushKeyExpireTime"]));
    }
  }


  virtual ~UpdateRtmpKeyRequest() = default;
};
class UpdateRtmpKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateRtmpKeyResponseBody() {}

  explicit UpdateRtmpKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateRtmpKeyResponseBody() = default;
};
class UpdateRtmpKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateRtmpKeyResponseBody> body{};

  UpdateRtmpKeyResponse() {}

  explicit UpdateRtmpKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateRtmpKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateRtmpKeyResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateRtmpKeyResponse() = default;
};
class UpdateTimeTemplateRequestTimeSections : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> dayOfWeek{};
  shared_ptr<long> end{};

  UpdateTimeTemplateRequestTimeSections() {}

  explicit UpdateTimeTemplateRequestTimeSections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["Begin"] = boost::any(*begin);
    }
    if (dayOfWeek) {
      res["DayOfWeek"] = boost::any(*dayOfWeek);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Begin") != m.end() && !m["Begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["Begin"]));
    }
    if (m.find("DayOfWeek") != m.end() && !m["DayOfWeek"].empty()) {
      dayOfWeek = make_shared<long>(boost::any_cast<long>(m["DayOfWeek"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
  }


  virtual ~UpdateTimeTemplateRequestTimeSections() = default;
};
class UpdateTimeTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<long> allDay{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};
  shared_ptr<vector<UpdateTimeTemplateRequestTimeSections>> timeSections{};

  UpdateTimeTemplateRequest() {}

  explicit UpdateTimeTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allDay) {
      res["AllDay"] = boost::any(*allDay);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (timeSections) {
      vector<boost::any> temp1;
      for(auto item1:*timeSections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TimeSections"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AllDay") != m.end() && !m["AllDay"].empty()) {
      allDay = make_shared<long>(boost::any_cast<long>(m["AllDay"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TimeSections") != m.end() && !m["TimeSections"].empty()) {
      if (typeid(vector<boost::any>) == m["TimeSections"].type()) {
        vector<UpdateTimeTemplateRequestTimeSections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TimeSections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateTimeTemplateRequestTimeSections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        timeSections = make_shared<vector<UpdateTimeTemplateRequestTimeSections>>(expect1);
      }
    }
  }


  virtual ~UpdateTimeTemplateRequest() = default;
};
class UpdateTimeTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateTimeTemplateResponseBody() {}

  explicit UpdateTimeTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateTimeTemplateResponseBody() = default;
};
class UpdateTimeTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateTimeTemplateResponseBody> body{};

  UpdateTimeTemplateResponse() {}

  explicit UpdateTimeTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
    }
    if (!statusCode) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("statusCode is required.")));
    }
    if (!body) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("body is required.")));
    }
  }

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (headers) {
      res["headers"] = boost::any(*headers);
    }
    if (statusCode) {
      res["statusCode"] = boost::any(*statusCode);
    }
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("statusCode") != m.end() && !m["statusCode"].empty()) {
      statusCode = make_shared<long>(boost::any_cast<long>(m["statusCode"]));
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        UpdateTimeTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateTimeTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateTimeTemplateResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  string getEndpoint(shared_ptr<string> productId,
                     shared_ptr<string> regionId,
                     shared_ptr<string> endpointRule,
                     shared_ptr<string> network,
                     shared_ptr<string> suffix,
                     shared_ptr<map<string, string>> endpointMap,
                     shared_ptr<string> endpoint);
  AddEventRecordPlanDeviceResponse addEventRecordPlanDeviceWithOptions(shared_ptr<AddEventRecordPlanDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEventRecordPlanDeviceResponse addEventRecordPlanDevice(shared_ptr<AddEventRecordPlanDeviceRequest> request);
  AddFaceDeviceGroupResponse addFaceDeviceGroupWithOptions(shared_ptr<AddFaceDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceDeviceGroupResponse addFaceDeviceGroup(shared_ptr<AddFaceDeviceGroupRequest> request);
  AddFaceDeviceToDeviceGroupResponse addFaceDeviceToDeviceGroupWithOptions(shared_ptr<AddFaceDeviceToDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceDeviceToDeviceGroupResponse addFaceDeviceToDeviceGroup(shared_ptr<AddFaceDeviceToDeviceGroupRequest> request);
  AddFaceUserResponse addFaceUserWithOptions(shared_ptr<AddFaceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceUserResponse addFaceUser(shared_ptr<AddFaceUserRequest> request);
  AddFaceUserGroupResponse addFaceUserGroupWithOptions(shared_ptr<AddFaceUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceUserGroupResponse addFaceUserGroup(shared_ptr<AddFaceUserGroupRequest> request);
  AddFaceUserGroupAndDeviceGroupRelationResponse addFaceUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<AddFaceUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceUserGroupAndDeviceGroupRelationResponse addFaceUserGroupAndDeviceGroupRelation(shared_ptr<AddFaceUserGroupAndDeviceGroupRelationRequest> request);
  AddFaceUserPictureResponse addFaceUserPictureWithOptions(shared_ptr<AddFaceUserPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceUserPictureResponse addFaceUserPicture(shared_ptr<AddFaceUserPictureRequest> request);
  AddFaceUserToUserGroupResponse addFaceUserToUserGroupWithOptions(shared_ptr<AddFaceUserToUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddFaceUserToUserGroupResponse addFaceUserToUserGroup(shared_ptr<AddFaceUserToUserGroupRequest> request);
  AddRecordPlanDeviceResponse addRecordPlanDeviceWithOptions(shared_ptr<AddRecordPlanDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddRecordPlanDeviceResponse addRecordPlanDevice(shared_ptr<AddRecordPlanDeviceRequest> request);
  BatchQueryVisionDeviceInfoResponse batchQueryVisionDeviceInfoWithOptions(shared_ptr<BatchQueryVisionDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchQueryVisionDeviceInfoResponse batchQueryVisionDeviceInfo(shared_ptr<BatchQueryVisionDeviceInfoRequest> request);
  BindPictureSearchAppWithDevicesResponse bindPictureSearchAppWithDevicesWithOptions(shared_ptr<BindPictureSearchAppWithDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindPictureSearchAppWithDevicesResponse bindPictureSearchAppWithDevices(shared_ptr<BindPictureSearchAppWithDevicesRequest> request);
  CheckFaceUserDoExistOnDeviceResponse checkFaceUserDoExistOnDeviceWithOptions(shared_ptr<CheckFaceUserDoExistOnDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckFaceUserDoExistOnDeviceResponse checkFaceUserDoExistOnDevice(shared_ptr<CheckFaceUserDoExistOnDeviceRequest> request);
  ClearFaceDeviceDBResponse clearFaceDeviceDBWithOptions(shared_ptr<ClearFaceDeviceDBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ClearFaceDeviceDBResponse clearFaceDeviceDB(shared_ptr<ClearFaceDeviceDBRequest> request);
  CreateEventRecordPlanResponse createEventRecordPlanWithOptions(shared_ptr<CreateEventRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEventRecordPlanResponse createEventRecordPlan(shared_ptr<CreateEventRecordPlanRequest> request);
  CreateGbDeviceResponse createGbDeviceWithOptions(shared_ptr<CreateGbDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGbDeviceResponse createGbDevice(shared_ptr<CreateGbDeviceRequest> request);
  CreateLocalFileUploadJobResponse createLocalFileUploadJobWithOptions(shared_ptr<CreateLocalFileUploadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLocalFileUploadJobResponse createLocalFileUploadJob(shared_ptr<CreateLocalFileUploadJobRequest> request);
  CreateLocalRecordDownloadByTimeJobResponse createLocalRecordDownloadByTimeJobWithOptions(shared_ptr<CreateLocalRecordDownloadByTimeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLocalRecordDownloadByTimeJobResponse createLocalRecordDownloadByTimeJob(shared_ptr<CreateLocalRecordDownloadByTimeJobRequest> request);
  CreatePictureSearchAppResponse createPictureSearchAppWithOptions(shared_ptr<CreatePictureSearchAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePictureSearchAppResponse createPictureSearchApp(shared_ptr<CreatePictureSearchAppRequest> request);
  CreatePictureSearchJobResponse createPictureSearchJobWithOptions(shared_ptr<CreatePictureSearchJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePictureSearchJobResponse createPictureSearchJob(shared_ptr<CreatePictureSearchJobRequest> request);
  CreateRecordDownloadByTimeJobResponse createRecordDownloadByTimeJobWithOptions(shared_ptr<CreateRecordDownloadByTimeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRecordDownloadByTimeJobResponse createRecordDownloadByTimeJob(shared_ptr<CreateRecordDownloadByTimeJobRequest> request);
  CreateRecordPlanResponse createRecordPlanWithOptions(shared_ptr<CreateRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRecordPlanResponse createRecordPlan(shared_ptr<CreateRecordPlanRequest> request);
  CreateRtmpDeviceResponse createRtmpDeviceWithOptions(shared_ptr<CreateRtmpDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRtmpDeviceResponse createRtmpDevice(shared_ptr<CreateRtmpDeviceRequest> request);
  CreateTimeTemplateResponse createTimeTemplateWithOptions(shared_ptr<CreateTimeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTimeTemplateResponse createTimeTemplate(shared_ptr<CreateTimeTemplateRequest> request);
  DeleteEventRecordPlanResponse deleteEventRecordPlanWithOptions(shared_ptr<DeleteEventRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventRecordPlanResponse deleteEventRecordPlan(shared_ptr<DeleteEventRecordPlanRequest> request);
  DeleteEventRecordPlanDeviceResponse deleteEventRecordPlanDeviceWithOptions(shared_ptr<DeleteEventRecordPlanDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEventRecordPlanDeviceResponse deleteEventRecordPlanDevice(shared_ptr<DeleteEventRecordPlanDeviceRequest> request);
  DeleteFaceDeviceGroupResponse deleteFaceDeviceGroupWithOptions(shared_ptr<DeleteFaceDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceDeviceGroupResponse deleteFaceDeviceGroup(shared_ptr<DeleteFaceDeviceGroupRequest> request);
  DeleteFaceUserResponse deleteFaceUserWithOptions(shared_ptr<DeleteFaceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceUserResponse deleteFaceUser(shared_ptr<DeleteFaceUserRequest> request);
  DeleteFaceUserGroupResponse deleteFaceUserGroupWithOptions(shared_ptr<DeleteFaceUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceUserGroupResponse deleteFaceUserGroup(shared_ptr<DeleteFaceUserGroupRequest> request);
  DeleteFaceUserGroupAndDeviceGroupRelationResponse deleteFaceUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<DeleteFaceUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceUserGroupAndDeviceGroupRelationResponse deleteFaceUserGroupAndDeviceGroupRelation(shared_ptr<DeleteFaceUserGroupAndDeviceGroupRelationRequest> request);
  DeleteFaceUserPictureResponse deleteFaceUserPictureWithOptions(shared_ptr<DeleteFaceUserPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceUserPictureResponse deleteFaceUserPicture(shared_ptr<DeleteFaceUserPictureRequest> request);
  DeleteLocalFileUploadJobResponse deleteLocalFileUploadJobWithOptions(shared_ptr<DeleteLocalFileUploadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLocalFileUploadJobResponse deleteLocalFileUploadJob(shared_ptr<DeleteLocalFileUploadJobRequest> request);
  DeletePictureResponse deletePictureWithOptions(shared_ptr<DeletePictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePictureResponse deletePicture(shared_ptr<DeletePictureRequest> request);
  DeleteRecordResponse deleteRecordWithOptions(shared_ptr<DeleteRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRecordResponse deleteRecord(shared_ptr<DeleteRecordRequest> request);
  DeleteRecordPlanResponse deleteRecordPlanWithOptions(shared_ptr<DeleteRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRecordPlanResponse deleteRecordPlan(shared_ptr<DeleteRecordPlanRequest> request);
  DeleteRecordPlanDeviceResponse deleteRecordPlanDeviceWithOptions(shared_ptr<DeleteRecordPlanDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRecordPlanDeviceResponse deleteRecordPlanDevice(shared_ptr<DeleteRecordPlanDeviceRequest> request);
  DeleteRtmpDeviceResponse deleteRtmpDeviceWithOptions(shared_ptr<DeleteRtmpDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRtmpDeviceResponse deleteRtmpDevice(shared_ptr<DeleteRtmpDeviceRequest> request);
  DeleteRtmpKeyResponse deleteRtmpKeyWithOptions(shared_ptr<DeleteRtmpKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteRtmpKeyResponse deleteRtmpKey(shared_ptr<DeleteRtmpKeyRequest> request);
  DeleteTimeTemplateResponse deleteTimeTemplateWithOptions(shared_ptr<DeleteTimeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteTimeTemplateResponse deleteTimeTemplate(shared_ptr<DeleteTimeTemplateRequest> request);
  DetectUserFaceByUrlResponse detectUserFaceByUrlWithOptions(shared_ptr<DetectUserFaceByUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DetectUserFaceByUrlResponse detectUserFaceByUrl(shared_ptr<DetectUserFaceByUrlRequest> request);
  GetPictureSearchJobStatusResponse getPictureSearchJobStatusWithOptions(shared_ptr<GetPictureSearchJobStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPictureSearchJobStatusResponse getPictureSearchJobStatus(shared_ptr<GetPictureSearchJobStatusRequest> request);
  PictureSearchPictureResponse pictureSearchPictureWithOptions(shared_ptr<PictureSearchPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PictureSearchPictureResponse pictureSearchPicture(shared_ptr<PictureSearchPictureRequest> request);
  QueryCarProcessEventsResponse queryCarProcessEventsWithOptions(shared_ptr<QueryCarProcessEventsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryCarProcessEventsResponse queryCarProcessEvents(shared_ptr<QueryCarProcessEventsRequest> request);
  QueryDeviceEventResponse queryDeviceEventWithOptions(shared_ptr<QueryDeviceEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceEventResponse queryDeviceEvent(shared_ptr<QueryDeviceEventRequest> request);
  QueryDeviceEventPictureResponse queryDeviceEventPictureWithOptions(shared_ptr<QueryDeviceEventPictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceEventPictureResponse queryDeviceEventPicture(shared_ptr<QueryDeviceEventPictureRequest> request);
  QueryDeviceEventRecordResponse queryDeviceEventRecordWithOptions(shared_ptr<QueryDeviceEventRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceEventRecordResponse queryDeviceEventRecord(shared_ptr<QueryDeviceEventRecordRequest> request);
  QueryDevicePictureByListResponse queryDevicePictureByListWithOptions(shared_ptr<QueryDevicePictureByListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDevicePictureByListResponse queryDevicePictureByList(shared_ptr<QueryDevicePictureByListRequest> request);
  QueryDevicePictureFileResponse queryDevicePictureFileWithOptions(shared_ptr<QueryDevicePictureFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDevicePictureFileResponse queryDevicePictureFile(shared_ptr<QueryDevicePictureFileRequest> request);
  QueryDevicePictureLifeCycleResponse queryDevicePictureLifeCycleWithOptions(shared_ptr<QueryDevicePictureLifeCycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDevicePictureLifeCycleResponse queryDevicePictureLifeCycle(shared_ptr<QueryDevicePictureLifeCycleRequest> request);
  QueryDeviceRecordLifeCycleResponse queryDeviceRecordLifeCycleWithOptions(shared_ptr<QueryDeviceRecordLifeCycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceRecordLifeCycleResponse queryDeviceRecordLifeCycle(shared_ptr<QueryDeviceRecordLifeCycleRequest> request);
  QueryDeviceVodUrlResponse queryDeviceVodUrlWithOptions(shared_ptr<QueryDeviceVodUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceVodUrlResponse queryDeviceVodUrl(shared_ptr<QueryDeviceVodUrlRequest> request);
  QueryDeviceVodUrlByTimeResponse queryDeviceVodUrlByTimeWithOptions(shared_ptr<QueryDeviceVodUrlByTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDeviceVodUrlByTimeResponse queryDeviceVodUrlByTime(shared_ptr<QueryDeviceVodUrlByTimeRequest> request);
  QueryEventRecordPlanDetailResponse queryEventRecordPlanDetailWithOptions(shared_ptr<QueryEventRecordPlanDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventRecordPlanDetailResponse queryEventRecordPlanDetail(shared_ptr<QueryEventRecordPlanDetailRequest> request);
  QueryEventRecordPlanDeviceByDeviceResponse queryEventRecordPlanDeviceByDeviceWithOptions(shared_ptr<QueryEventRecordPlanDeviceByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventRecordPlanDeviceByDeviceResponse queryEventRecordPlanDeviceByDevice(shared_ptr<QueryEventRecordPlanDeviceByDeviceRequest> request);
  QueryEventRecordPlanDeviceByPlanResponse queryEventRecordPlanDeviceByPlanWithOptions(shared_ptr<QueryEventRecordPlanDeviceByPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventRecordPlanDeviceByPlanResponse queryEventRecordPlanDeviceByPlan(shared_ptr<QueryEventRecordPlanDeviceByPlanRequest> request);
  QueryEventRecordPlansResponse queryEventRecordPlansWithOptions(shared_ptr<QueryEventRecordPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEventRecordPlansResponse queryEventRecordPlans(shared_ptr<QueryEventRecordPlansRequest> request);
  QueryFaceAllDeviceGroupResponse queryFaceAllDeviceGroupWithOptions(shared_ptr<QueryFaceAllDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceAllDeviceGroupResponse queryFaceAllDeviceGroup(shared_ptr<QueryFaceAllDeviceGroupRequest> request);
  QueryFaceAllUserGroupResponse queryFaceAllUserGroupWithOptions(shared_ptr<QueryFaceAllUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceAllUserGroupResponse queryFaceAllUserGroup(shared_ptr<QueryFaceAllUserGroupRequest> request);
  QueryFaceAllUserGroupAndDeviceGroupRelationResponse queryFaceAllUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<QueryFaceAllUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceAllUserGroupAndDeviceGroupRelationResponse queryFaceAllUserGroupAndDeviceGroupRelation(shared_ptr<QueryFaceAllUserGroupAndDeviceGroupRelationRequest> request);
  QueryFaceAllUserIdsByGroupIdResponse queryFaceAllUserIdsByGroupIdWithOptions(shared_ptr<QueryFaceAllUserIdsByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceAllUserIdsByGroupIdResponse queryFaceAllUserIdsByGroupId(shared_ptr<QueryFaceAllUserIdsByGroupIdRequest> request);
  QueryFaceCustomUserIdByUserIdResponse queryFaceCustomUserIdByUserIdWithOptions(shared_ptr<QueryFaceCustomUserIdByUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceCustomUserIdByUserIdResponse queryFaceCustomUserIdByUserId(shared_ptr<QueryFaceCustomUserIdByUserIdRequest> request);
  QueryFaceDeviceGroupsByDeviceResponse queryFaceDeviceGroupsByDeviceWithOptions(shared_ptr<QueryFaceDeviceGroupsByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceDeviceGroupsByDeviceResponse queryFaceDeviceGroupsByDevice(shared_ptr<QueryFaceDeviceGroupsByDeviceRequest> request);
  QueryFaceUserResponse queryFaceUserWithOptions(shared_ptr<QueryFaceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceUserResponse queryFaceUser(shared_ptr<QueryFaceUserRequest> request);
  QueryFaceUserBatchResponse queryFaceUserBatchWithOptions(shared_ptr<QueryFaceUserBatchRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceUserBatchResponse queryFaceUserBatch(shared_ptr<QueryFaceUserBatchRequest> request);
  QueryFaceUserByNameResponse queryFaceUserByNameWithOptions(shared_ptr<QueryFaceUserByNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceUserByNameResponse queryFaceUserByName(shared_ptr<QueryFaceUserByNameRequest> request);
  QueryFaceUserGroupResponse queryFaceUserGroupWithOptions(shared_ptr<QueryFaceUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceUserGroupResponse queryFaceUserGroup(shared_ptr<QueryFaceUserGroupRequest> request);
  QueryFaceUserGroupAndDeviceGroupRelationResponse queryFaceUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<QueryFaceUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceUserGroupAndDeviceGroupRelationResponse queryFaceUserGroupAndDeviceGroupRelation(shared_ptr<QueryFaceUserGroupAndDeviceGroupRelationRequest> request);
  QueryFaceUserIdByCustomUserIdResponse queryFaceUserIdByCustomUserIdWithOptions(shared_ptr<QueryFaceUserIdByCustomUserIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceUserIdByCustomUserIdResponse queryFaceUserIdByCustomUserId(shared_ptr<QueryFaceUserIdByCustomUserIdRequest> request);
  QueryLiveStreamingResponse queryLiveStreamingWithOptions(shared_ptr<QueryLiveStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryLiveStreamingResponse queryLiveStreaming(shared_ptr<QueryLiveStreamingRequest> request);
  QueryLocalFileUploadJobResponse queryLocalFileUploadJobWithOptions(shared_ptr<QueryLocalFileUploadJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryLocalFileUploadJobResponse queryLocalFileUploadJob(shared_ptr<QueryLocalFileUploadJobRequest> request);
  QueryMonthRecordResponse queryMonthRecordWithOptions(shared_ptr<QueryMonthRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMonthRecordResponse queryMonthRecord(shared_ptr<QueryMonthRecordRequest> request);
  QueryPictureFilesResponse queryPictureFilesWithOptions(shared_ptr<QueryPictureFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPictureFilesResponse queryPictureFiles(shared_ptr<QueryPictureFilesRequest> request);
  QueryPictureSearchAiboxesResponse queryPictureSearchAiboxesWithOptions(shared_ptr<QueryPictureSearchAiboxesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPictureSearchAiboxesResponse queryPictureSearchAiboxes(shared_ptr<QueryPictureSearchAiboxesRequest> request);
  QueryPictureSearchAppsResponse queryPictureSearchAppsWithOptions(shared_ptr<QueryPictureSearchAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPictureSearchAppsResponse queryPictureSearchApps(shared_ptr<QueryPictureSearchAppsRequest> request);
  QueryPictureSearchDevicesResponse queryPictureSearchDevicesWithOptions(shared_ptr<QueryPictureSearchDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPictureSearchDevicesResponse queryPictureSearchDevices(shared_ptr<QueryPictureSearchDevicesRequest> request);
  QueryPictureSearchJobResponse queryPictureSearchJobWithOptions(shared_ptr<QueryPictureSearchJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPictureSearchJobResponse queryPictureSearchJob(shared_ptr<QueryPictureSearchJobRequest> request);
  QueryPictureSearchJobResultResponse queryPictureSearchJobResultWithOptions(shared_ptr<QueryPictureSearchJobResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPictureSearchJobResultResponse queryPictureSearchJobResult(shared_ptr<QueryPictureSearchJobResultRequest> request);
  QueryRecordResponse queryRecordWithOptions(shared_ptr<QueryRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordResponse queryRecord(shared_ptr<QueryRecordRequest> request);
  QueryRecordByRecordIdResponse queryRecordByRecordIdWithOptions(shared_ptr<QueryRecordByRecordIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordByRecordIdResponse queryRecordByRecordId(shared_ptr<QueryRecordByRecordIdRequest> request);
  QueryRecordDownloadJobByIdResponse queryRecordDownloadJobByIdWithOptions(shared_ptr<QueryRecordDownloadJobByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordDownloadJobByIdResponse queryRecordDownloadJobById(shared_ptr<QueryRecordDownloadJobByIdRequest> request);
  QueryRecordDownloadJobListResponse queryRecordDownloadJobListWithOptions(shared_ptr<QueryRecordDownloadJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordDownloadJobListResponse queryRecordDownloadJobList(shared_ptr<QueryRecordDownloadJobListRequest> request);
  QueryRecordDownloadUrlResponse queryRecordDownloadUrlWithOptions(shared_ptr<QueryRecordDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordDownloadUrlResponse queryRecordDownloadUrl(shared_ptr<QueryRecordDownloadUrlRequest> request);
  QueryRecordPlanDetailResponse queryRecordPlanDetailWithOptions(shared_ptr<QueryRecordPlanDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordPlanDetailResponse queryRecordPlanDetail(shared_ptr<QueryRecordPlanDetailRequest> request);
  QueryRecordPlanDeviceByDeviceResponse queryRecordPlanDeviceByDeviceWithOptions(shared_ptr<QueryRecordPlanDeviceByDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordPlanDeviceByDeviceResponse queryRecordPlanDeviceByDevice(shared_ptr<QueryRecordPlanDeviceByDeviceRequest> request);
  QueryRecordPlanDeviceByPlanResponse queryRecordPlanDeviceByPlanWithOptions(shared_ptr<QueryRecordPlanDeviceByPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordPlanDeviceByPlanResponse queryRecordPlanDeviceByPlan(shared_ptr<QueryRecordPlanDeviceByPlanRequest> request);
  QueryRecordPlansResponse queryRecordPlansWithOptions(shared_ptr<QueryRecordPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordPlansResponse queryRecordPlans(shared_ptr<QueryRecordPlansRequest> request);
  QueryRecordUrlResponse queryRecordUrlWithOptions(shared_ptr<QueryRecordUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordUrlResponse queryRecordUrl(shared_ptr<QueryRecordUrlRequest> request);
  QueryRecordUrlByTimeResponse queryRecordUrlByTimeWithOptions(shared_ptr<QueryRecordUrlByTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRecordUrlByTimeResponse queryRecordUrlByTime(shared_ptr<QueryRecordUrlByTimeRequest> request);
  QueryRtmpKeyResponse queryRtmpKeyWithOptions(shared_ptr<QueryRtmpKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryRtmpKeyResponse queryRtmpKey(shared_ptr<QueryRtmpKeyRequest> request);
  QueryTimeTemplateResponse queryTimeTemplateWithOptions(shared_ptr<QueryTimeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTimeTemplateResponse queryTimeTemplate(shared_ptr<QueryTimeTemplateRequest> request);
  QueryTimeTemplateDetailResponse queryTimeTemplateDetailWithOptions(shared_ptr<QueryTimeTemplateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTimeTemplateDetailResponse queryTimeTemplateDetail(shared_ptr<QueryTimeTemplateDetailRequest> request);
  QueryVisionDeviceInfoResponse queryVisionDeviceInfoWithOptions(shared_ptr<QueryVisionDeviceInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVisionDeviceInfoResponse queryVisionDeviceInfo(shared_ptr<QueryVisionDeviceInfoRequest> request);
  QueryVoiceIntercomResponse queryVoiceIntercomWithOptions(shared_ptr<QueryVoiceIntercomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryVoiceIntercomResponse queryVoiceIntercom(shared_ptr<QueryVoiceIntercomRequest> request);
  RemoveFaceDeviceFromDeviceGroupResponse removeFaceDeviceFromDeviceGroupWithOptions(shared_ptr<RemoveFaceDeviceFromDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveFaceDeviceFromDeviceGroupResponse removeFaceDeviceFromDeviceGroup(shared_ptr<RemoveFaceDeviceFromDeviceGroupRequest> request);
  RemoveFaceUserFromUserGroupResponse removeFaceUserFromUserGroupWithOptions(shared_ptr<RemoveFaceUserFromUserGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveFaceUserFromUserGroupResponse removeFaceUserFromUserGroup(shared_ptr<RemoveFaceUserFromUserGroupRequest> request);
  SetDevicePictureLifeCycleResponse setDevicePictureLifeCycleWithOptions(shared_ptr<SetDevicePictureLifeCycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDevicePictureLifeCycleResponse setDevicePictureLifeCycle(shared_ptr<SetDevicePictureLifeCycleRequest> request);
  SetDeviceRecordLifeCycleResponse setDeviceRecordLifeCycleWithOptions(shared_ptr<SetDeviceRecordLifeCycleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetDeviceRecordLifeCycleResponse setDeviceRecordLifeCycle(shared_ptr<SetDeviceRecordLifeCycleRequest> request);
  StopLiveStreamingResponse stopLiveStreamingWithOptions(shared_ptr<StopLiveStreamingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopLiveStreamingResponse stopLiveStreaming(shared_ptr<StopLiveStreamingRequest> request);
  StopTriggeredRecordResponse stopTriggeredRecordWithOptions(shared_ptr<StopTriggeredRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopTriggeredRecordResponse stopTriggeredRecord(shared_ptr<StopTriggeredRecordRequest> request);
  TransferDeviceInstanceResponse transferDeviceInstanceWithOptions(shared_ptr<TransferDeviceInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TransferDeviceInstanceResponse transferDeviceInstance(shared_ptr<TransferDeviceInstanceRequest> request);
  TriggerCapturePictureResponse triggerCapturePictureWithOptions(shared_ptr<TriggerCapturePictureRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerCapturePictureResponse triggerCapturePicture(shared_ptr<TriggerCapturePictureRequest> request);
  TriggerRecordResponse triggerRecordWithOptions(shared_ptr<TriggerRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerRecordResponse triggerRecord(shared_ptr<TriggerRecordRequest> request);
  UnbindPictureSearchAppWithDevicesResponse unbindPictureSearchAppWithDevicesWithOptions(shared_ptr<UnbindPictureSearchAppWithDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindPictureSearchAppWithDevicesResponse unbindPictureSearchAppWithDevices(shared_ptr<UnbindPictureSearchAppWithDevicesRequest> request);
  UpdateEventRecordPlanResponse updateEventRecordPlanWithOptions(shared_ptr<UpdateEventRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEventRecordPlanResponse updateEventRecordPlan(shared_ptr<UpdateEventRecordPlanRequest> request);
  UpdateFaceUserResponse updateFaceUserWithOptions(shared_ptr<UpdateFaceUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFaceUserResponse updateFaceUser(shared_ptr<UpdateFaceUserRequest> request);
  UpdateFaceUserGroupAndDeviceGroupRelationResponse updateFaceUserGroupAndDeviceGroupRelationWithOptions(shared_ptr<UpdateFaceUserGroupAndDeviceGroupRelationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFaceUserGroupAndDeviceGroupRelationResponse updateFaceUserGroupAndDeviceGroupRelation(shared_ptr<UpdateFaceUserGroupAndDeviceGroupRelationRequest> request);
  UpdateInstanceInternetProtocolResponse updateInstanceInternetProtocolWithOptions(shared_ptr<UpdateInstanceInternetProtocolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceInternetProtocolResponse updateInstanceInternetProtocol(shared_ptr<UpdateInstanceInternetProtocolRequest> request);
  UpdatePictureSearchAppResponse updatePictureSearchAppWithOptions(shared_ptr<UpdatePictureSearchAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePictureSearchAppResponse updatePictureSearchApp(shared_ptr<UpdatePictureSearchAppRequest> request);
  UpdateRecordPlanResponse updateRecordPlanWithOptions(shared_ptr<UpdateRecordPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRecordPlanResponse updateRecordPlan(shared_ptr<UpdateRecordPlanRequest> request);
  UpdateRtmpKeyResponse updateRtmpKeyWithOptions(shared_ptr<UpdateRtmpKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateRtmpKeyResponse updateRtmpKey(shared_ptr<UpdateRtmpKeyRequest> request);
  UpdateTimeTemplateResponse updateTimeTemplateWithOptions(shared_ptr<UpdateTimeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateTimeTemplateResponse updateTimeTemplate(shared_ptr<UpdateTimeTemplateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Linkvisual20180120

#endif
