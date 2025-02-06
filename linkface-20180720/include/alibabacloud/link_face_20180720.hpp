// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_LINKFACE20180720_H_
#define ALIBABACLOUD_LINKFACE20180720_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_LinkFace20180720 {
class CreateGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};

  CreateGroupRequest() {}

  explicit CreateGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~CreateGroupRequest() = default;
};
class CreateGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateGroupResponseBody() {}

  explicit CreateGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateGroupResponseBody() = default;
};
class CreateGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupResponseBody> body{};

  CreateGroupResponse() {}

  explicit CreateGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        CreateGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupResponse() = default;
};
class DeleteDeviceAllGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<string> productKey{};

  DeleteDeviceAllGroupRequest() {}

  explicit DeleteDeviceAllGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~DeleteDeviceAllGroupRequest() = default;
};
class DeleteDeviceAllGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDeviceAllGroupResponseBody() {}

  explicit DeleteDeviceAllGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDeviceAllGroupResponseBody() = default;
};
class DeleteDeviceAllGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDeviceAllGroupResponseBody> body{};

  DeleteDeviceAllGroupResponse() {}

  explicit DeleteDeviceAllGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteDeviceAllGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeviceAllGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeviceAllGroupResponse() = default;
};
class DeleteDeviceGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> iotId{};
  shared_ptr<string> productKey{};

  DeleteDeviceGroupRequest() {}

  explicit DeleteDeviceGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~DeleteDeviceGroupRequest() = default;
};
class DeleteDeviceGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteDeviceGroupResponseBody() {}

  explicit DeleteDeviceGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteDeviceGroupResponseBody() = default;
};
class DeleteDeviceGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDeviceGroupResponseBody> body{};

  DeleteDeviceGroupResponse() {}

  explicit DeleteDeviceGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteDeviceGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeviceGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeviceGroupResponse() = default;
};
class DeleteFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> userId{};

  DeleteFaceRequest() {}

  explicit DeleteFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DeleteFaceRequest() = default;
};
class DeleteFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteFaceResponseBody() {}

  explicit DeleteFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteFaceResponseBody() = default;
};
class DeleteFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFaceResponseBody> body{};

  DeleteFaceResponse() {}

  explicit DeleteFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaceResponse() = default;
};
class DeleteGroupRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};

  DeleteGroupRequest() {}

  explicit DeleteGroupRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
  }


  virtual ~DeleteGroupRequest() = default;
};
class DeleteGroupResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteGroupResponseBody() {}

  explicit DeleteGroupResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteGroupResponseBody() = default;
};
class DeleteGroupResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupResponseBody> body{};

  DeleteGroupResponse() {}

  explicit DeleteGroupResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        DeleteGroupResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupResponse() = default;
};
class LinkFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> userId{};

  LinkFaceRequest() {}

  explicit LinkFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~LinkFaceRequest() = default;
};
class LinkFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  LinkFaceResponseBody() {}

  explicit LinkFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~LinkFaceResponseBody() = default;
};
class LinkFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LinkFaceResponseBody> body{};

  LinkFaceResponse() {}

  explicit LinkFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        LinkFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LinkFaceResponseBody>(model1);
      }
    }
  }


  virtual ~LinkFaceResponse() = default;
};
class QueryAddUserInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> iotId{};
  shared_ptr<string> productKey{};

  QueryAddUserInfoRequest() {}

  explicit QueryAddUserInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryAddUserInfoRequest() = default;
};
class QueryAddUserInfoResponseBodyDataCurrentFaceInfos : public Darabonba::Model {
public:
  shared_ptr<string> clientTag{};
  shared_ptr<long> index{};
  shared_ptr<string> userId{};

  QueryAddUserInfoResponseBodyDataCurrentFaceInfos() {}

  explicit QueryAddUserInfoResponseBodyDataCurrentFaceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientTag) {
      res["ClientTag"] = boost::any(*clientTag);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientTag") != m.end() && !m["ClientTag"].empty()) {
      clientTag = make_shared<string>(boost::any_cast<string>(m["ClientTag"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryAddUserInfoResponseBodyDataCurrentFaceInfos() = default;
};
class QueryAddUserInfoResponseBodyDataFailedFaceInfos : public Darabonba::Model {
public:
  shared_ptr<string> clientTag{};
  shared_ptr<long> index{};
  shared_ptr<string> userId{};

  QueryAddUserInfoResponseBodyDataFailedFaceInfos() {}

  explicit QueryAddUserInfoResponseBodyDataFailedFaceInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientTag) {
      res["ClientTag"] = boost::any(*clientTag);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientTag") != m.end() && !m["ClientTag"].empty()) {
      clientTag = make_shared<string>(boost::any_cast<string>(m["ClientTag"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryAddUserInfoResponseBodyDataFailedFaceInfos() = default;
};
class QueryAddUserInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryAddUserInfoResponseBodyDataCurrentFaceInfos>> currentFaceInfos{};
  shared_ptr<vector<QueryAddUserInfoResponseBodyDataFailedFaceInfos>> failedFaceInfos{};

  QueryAddUserInfoResponseBodyData() {}

  explicit QueryAddUserInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentFaceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*currentFaceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CurrentFaceInfos"] = boost::any(temp1);
    }
    if (failedFaceInfos) {
      vector<boost::any> temp1;
      for(auto item1:*failedFaceInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailedFaceInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CurrentFaceInfos") != m.end() && !m["CurrentFaceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["CurrentFaceInfos"].type()) {
        vector<QueryAddUserInfoResponseBodyDataCurrentFaceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CurrentFaceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAddUserInfoResponseBodyDataCurrentFaceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        currentFaceInfos = make_shared<vector<QueryAddUserInfoResponseBodyDataCurrentFaceInfos>>(expect1);
      }
    }
    if (m.find("FailedFaceInfos") != m.end() && !m["FailedFaceInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["FailedFaceInfos"].type()) {
        vector<QueryAddUserInfoResponseBodyDataFailedFaceInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailedFaceInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAddUserInfoResponseBodyDataFailedFaceInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failedFaceInfos = make_shared<vector<QueryAddUserInfoResponseBodyDataFailedFaceInfos>>(expect1);
      }
    }
  }


  virtual ~QueryAddUserInfoResponseBodyData() = default;
};
class QueryAddUserInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryAddUserInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryAddUserInfoResponseBody() {}

  explicit QueryAddUserInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAddUserInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAddUserInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryAddUserInfoResponseBody() = default;
};
class QueryAddUserInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAddUserInfoResponseBody> body{};

  QueryAddUserInfoResponse() {}

  explicit QueryAddUserInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryAddUserInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAddUserInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAddUserInfoResponse() = default;
};
class QueryAllGroupsRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};

  QueryAllGroupsRequest() {}

  explicit QueryAllGroupsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryAllGroupsRequest() = default;
};
class QueryAllGroupsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> groups{};

  QueryAllGroupsResponseBodyData() {}

  explicit QueryAllGroupsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Groups"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Groups"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groups = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryAllGroupsResponseBodyData() = default;
};
class QueryAllGroupsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryAllGroupsResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  QueryAllGroupsResponseBody() {}

  explicit QueryAllGroupsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryAllGroupsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryAllGroupsResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryAllGroupsResponseBody() = default;
};
class QueryAllGroupsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAllGroupsResponseBody> body{};

  QueryAllGroupsResponse() {}

  explicit QueryAllGroupsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryAllGroupsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAllGroupsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAllGroupsResponse() = default;
};
class QueryAuthenticationRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> iotId{};
  shared_ptr<long> licenseType{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> productKey{};

  QueryAuthenticationRequest() {}

  explicit QueryAuthenticationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (licenseType) {
      res["LicenseType"] = boost::any(*licenseType);
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
    if (m.find("LicenseType") != m.end() && !m["LicenseType"].empty()) {
      licenseType = make_shared<long>(boost::any_cast<long>(m["LicenseType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryAuthenticationRequest() = default;
};
class QueryAuthenticationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> apkPubkey{};
  shared_ptr<string> beginTime{};
  shared_ptr<string> clientId{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> expiredTime{};
  shared_ptr<string> iotId{};
  shared_ptr<long> licenseType{};
  shared_ptr<string> packageName{};
  shared_ptr<string> productKey{};

  QueryAuthenticationResponseBodyData() {}

  explicit QueryAuthenticationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apkPubkey) {
      res["ApkPubkey"] = boost::any(*apkPubkey);
    }
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
    }
    if (licenseType) {
      res["LicenseType"] = boost::any(*licenseType);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (productKey) {
      res["ProductKey"] = boost::any(*productKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApkPubkey") != m.end() && !m["ApkPubkey"].empty()) {
      apkPubkey = make_shared<string>(boost::any_cast<string>(m["ApkPubkey"]));
    }
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<string>(boost::any_cast<string>(m["ExpiredTime"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("LicenseType") != m.end() && !m["LicenseType"].empty()) {
      licenseType = make_shared<long>(boost::any_cast<long>(m["LicenseType"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QueryAuthenticationResponseBodyData() = default;
};
class QueryAuthenticationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QueryAuthenticationResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  QueryAuthenticationResponseBody() {}

  explicit QueryAuthenticationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryAuthenticationResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryAuthenticationResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryAuthenticationResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryAuthenticationResponseBody() = default;
};
class QueryAuthenticationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryAuthenticationResponseBody> body{};

  QueryAuthenticationResponse() {}

  explicit QueryAuthenticationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryAuthenticationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryAuthenticationResponseBody>(model1);
      }
    }
  }


  virtual ~QueryAuthenticationResponse() = default;
};
class QueryFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  QueryFaceRequest() {}

  explicit QueryFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryFaceRequest() = default;
};
class QueryFaceResponseBodyDataUserFaceMetas : public Darabonba::Model {
public:
  shared_ptr<string> clientTag{};
  shared_ptr<string> faceUrl{};
  shared_ptr<long> index{};
  shared_ptr<string> userInfo{};

  QueryFaceResponseBodyDataUserFaceMetas() {}

  explicit QueryFaceResponseBodyDataUserFaceMetas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientTag) {
      res["ClientTag"] = boost::any(*clientTag);
    }
    if (faceUrl) {
      res["FaceUrl"] = boost::any(*faceUrl);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (userInfo) {
      res["UserInfo"] = boost::any(*userInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientTag") != m.end() && !m["ClientTag"].empty()) {
      clientTag = make_shared<string>(boost::any_cast<string>(m["ClientTag"]));
    }
    if (m.find("FaceUrl") != m.end() && !m["FaceUrl"].empty()) {
      faceUrl = make_shared<string>(boost::any_cast<string>(m["FaceUrl"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfo = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~QueryFaceResponseBodyDataUserFaceMetas() = default;
};
class QueryFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> groupIds{};
  shared_ptr<vector<QueryFaceResponseBodyDataUserFaceMetas>> userFaceMetas{};

  QueryFaceResponseBodyData() {}

  explicit QueryFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupIds) {
      res["GroupIds"] = boost::any(*groupIds);
    }
    if (userFaceMetas) {
      vector<boost::any> temp1;
      for(auto item1:*userFaceMetas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserFaceMetas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupIds") != m.end() && !m["GroupIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["GroupIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["GroupIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      groupIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("UserFaceMetas") != m.end() && !m["UserFaceMetas"].empty()) {
      if (typeid(vector<boost::any>) == m["UserFaceMetas"].type()) {
        vector<QueryFaceResponseBodyDataUserFaceMetas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserFaceMetas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryFaceResponseBodyDataUserFaceMetas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userFaceMetas = make_shared<vector<QueryFaceResponseBodyDataUserFaceMetas>>(expect1);
      }
    }
  }


  virtual ~QueryFaceResponseBodyData() = default;
};
class QueryFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QueryFaceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryFaceResponseBody() {}

  explicit QueryFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryFaceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryFaceResponseBody() = default;
};
class QueryFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryFaceResponseBody> body{};

  QueryFaceResponse() {}

  explicit QueryFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryFaceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryFaceResponse() = default;
};
class QueryGroupUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<string> groupId{};
  shared_ptr<long> pageSize{};

  QueryGroupUsersRequest() {}

  explicit QueryGroupUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryGroupUsersRequest() = default;
};
class QueryGroupUsersResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  QueryGroupUsersResponseBodyData() {}

  explicit QueryGroupUsersResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryGroupUsersResponseBodyData() = default;
};
class QueryGroupUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QueryGroupUsersResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  QueryGroupUsersResponseBody() {}

  explicit QueryGroupUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryGroupUsersResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryGroupUsersResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryGroupUsersResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryGroupUsersResponseBody() = default;
};
class QueryGroupUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryGroupUsersResponseBody> body{};

  QueryGroupUsersResponse() {}

  explicit QueryGroupUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryGroupUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryGroupUsersResponseBody>(model1);
      }
    }
  }


  virtual ~QueryGroupUsersResponse() = default;
};
class QueryLicensesRequest : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> licenseType{};
  shared_ptr<long> pageSize{};

  QueryLicensesRequest() {}

  explicit QueryLicensesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (licenseType) {
      res["LicenseType"] = boost::any(*licenseType);
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
    if (m.find("LicenseType") != m.end() && !m["LicenseType"].empty()) {
      licenseType = make_shared<long>(boost::any_cast<long>(m["LicenseType"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryLicensesRequest() = default;
};
class QueryLicensesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> costQuantity{};
  shared_ptr<long> licenseType{};
  shared_ptr<long> quantity{};

  QueryLicensesResponseBodyData() {}

  explicit QueryLicensesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costQuantity) {
      res["CostQuantity"] = boost::any(*costQuantity);
    }
    if (licenseType) {
      res["LicenseType"] = boost::any(*licenseType);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostQuantity") != m.end() && !m["CostQuantity"].empty()) {
      costQuantity = make_shared<long>(boost::any_cast<long>(m["CostQuantity"]));
    }
    if (m.find("LicenseType") != m.end() && !m["LicenseType"].empty()) {
      licenseType = make_shared<long>(boost::any_cast<long>(m["LicenseType"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
  }


  virtual ~QueryLicensesResponseBodyData() = default;
};
class QueryLicensesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<vector<QueryLicensesResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> page{};
  shared_ptr<long> pageCount{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> total{};

  QueryLicensesResponseBody() {}

  explicit QueryLicensesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryLicensesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryLicensesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryLicensesResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryLicensesResponseBody() = default;
};
class QueryLicensesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryLicensesResponseBody> body{};

  QueryLicensesResponse() {}

  explicit QueryLicensesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QueryLicensesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryLicensesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryLicensesResponse() = default;
};
class QuerySyncPicScheduleRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> iotId{};
  shared_ptr<string> productKey{};

  QuerySyncPicScheduleRequest() {}

  explicit QuerySyncPicScheduleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~QuerySyncPicScheduleRequest() = default;
};
class QuerySyncPicScheduleResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> rate{};

  QuerySyncPicScheduleResponseBodyData() {}

  explicit QuerySyncPicScheduleResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (rate) {
      res["Rate"] = boost::any(*rate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Rate") != m.end() && !m["Rate"].empty()) {
      rate = make_shared<double>(boost::any_cast<double>(m["Rate"]));
    }
  }


  virtual ~QuerySyncPicScheduleResponseBodyData() = default;
};
class QuerySyncPicScheduleResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<QuerySyncPicScheduleResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QuerySyncPicScheduleResponseBody() {}

  explicit QuerySyncPicScheduleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QuerySyncPicScheduleResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QuerySyncPicScheduleResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QuerySyncPicScheduleResponseBody() = default;
};
class QuerySyncPicScheduleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySyncPicScheduleResponseBody> body{};

  QuerySyncPicScheduleResponse() {}

  explicit QuerySyncPicScheduleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        QuerySyncPicScheduleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySyncPicScheduleResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySyncPicScheduleResponse() = default;
};
class RegisterFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> image{};
  shared_ptr<string> userId{};
  shared_ptr<string> userInfo{};

  RegisterFaceRequest() {}

  explicit RegisterFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userInfo) {
      res["UserInfo"] = boost::any(*userInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfo = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~RegisterFaceRequest() = default;
};
class RegisterFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RegisterFaceResponseBody() {}

  explicit RegisterFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~RegisterFaceResponseBody() = default;
};
class RegisterFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterFaceResponseBody> body{};

  RegisterFaceResponse() {}

  explicit RegisterFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        RegisterFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterFaceResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterFaceResponse() = default;
};
class SearchFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> image{};

  SearchFaceRequest() {}

  explicit SearchFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
  }


  virtual ~SearchFaceRequest() = default;
};
class SearchFaceResponseBodyDataTopUserItem : public Darabonba::Model {
public:
  shared_ptr<double> score{};
  shared_ptr<string> userId{};

  SearchFaceResponseBodyDataTopUserItem() {}

  explicit SearchFaceResponseBodyDataTopUserItem(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~SearchFaceResponseBodyDataTopUserItem() = default;
};
class SearchFaceResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SearchFaceResponseBodyDataTopUserItem>> topUserItem{};

  SearchFaceResponseBodyData() {}

  explicit SearchFaceResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topUserItem) {
      vector<boost::any> temp1;
      for(auto item1:*topUserItem){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TopUserItem"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TopUserItem") != m.end() && !m["TopUserItem"].empty()) {
      if (typeid(vector<boost::any>) == m["TopUserItem"].type()) {
        vector<SearchFaceResponseBodyDataTopUserItem> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TopUserItem"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchFaceResponseBodyDataTopUserItem model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topUserItem = make_shared<vector<SearchFaceResponseBodyDataTopUserItem>>(expect1);
      }
    }
  }


  virtual ~SearchFaceResponseBodyData() = default;
};
class SearchFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<SearchFaceResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SearchFaceResponseBody() {}

  explicit SearchFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["Message"] = boost::any(*message);
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
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        SearchFaceResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SearchFaceResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SearchFaceResponseBody() = default;
};
class SearchFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchFaceResponseBody> body{};

  SearchFaceResponse() {}

  explicit SearchFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        SearchFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchFaceResponseBody>(model1);
      }
    }
  }


  virtual ~SearchFaceResponse() = default;
};
class SyncFacePicturesRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceName{};
  shared_ptr<string> groupId{};
  shared_ptr<string> iotId{};
  shared_ptr<string> productKey{};

  SyncFacePicturesRequest() {}

  explicit SyncFacePicturesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (iotId) {
      res["IotId"] = boost::any(*iotId);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IotId") != m.end() && !m["IotId"].empty()) {
      iotId = make_shared<string>(boost::any_cast<string>(m["IotId"]));
    }
    if (m.find("ProductKey") != m.end() && !m["ProductKey"].empty()) {
      productKey = make_shared<string>(boost::any_cast<string>(m["ProductKey"]));
    }
  }


  virtual ~SyncFacePicturesRequest() = default;
};
class SyncFacePicturesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncFacePicturesResponseBody() {}

  explicit SyncFacePicturesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SyncFacePicturesResponseBody() = default;
};
class SyncFacePicturesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncFacePicturesResponseBody> body{};

  SyncFacePicturesResponse() {}

  explicit SyncFacePicturesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        SyncFacePicturesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncFacePicturesResponseBody>(model1);
      }
    }
  }


  virtual ~SyncFacePicturesResponse() = default;
};
class UnlinkFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> userId{};

  UnlinkFaceRequest() {}

  explicit UnlinkFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~UnlinkFaceRequest() = default;
};
class UnlinkFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnlinkFaceResponseBody() {}

  explicit UnlinkFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UnlinkFaceResponseBody() = default;
};
class UnlinkFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnlinkFaceResponseBody> body{};

  UnlinkFaceResponse() {}

  explicit UnlinkFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UnlinkFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnlinkFaceResponseBody>(model1);
      }
    }
  }


  virtual ~UnlinkFaceResponse() = default;
};
class UpdateFaceRequest : public Darabonba::Model {
public:
  shared_ptr<string> image{};
  shared_ptr<string> userId{};
  shared_ptr<string> userInfo{};

  UpdateFaceRequest() {}

  explicit UpdateFaceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userInfo) {
      res["UserInfo"] = boost::any(*userInfo);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      userInfo = make_shared<string>(boost::any_cast<string>(m["UserInfo"]));
    }
  }


  virtual ~UpdateFaceRequest() = default;
};
class UpdateFaceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateFaceResponseBody() {}

  explicit UpdateFaceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateFaceResponseBody() = default;
};
class UpdateFaceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFaceResponseBody> body{};

  UpdateFaceResponse() {}

  explicit UpdateFaceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

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
        UpdateFaceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFaceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFaceResponse() = default;
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
  CreateGroupResponse createGroupWithOptions(shared_ptr<CreateGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupResponse createGroup(shared_ptr<CreateGroupRequest> request);
  DeleteDeviceAllGroupResponse deleteDeviceAllGroupWithOptions(shared_ptr<DeleteDeviceAllGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeviceAllGroupResponse deleteDeviceAllGroup(shared_ptr<DeleteDeviceAllGroupRequest> request);
  DeleteDeviceGroupResponse deleteDeviceGroupWithOptions(shared_ptr<DeleteDeviceGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeviceGroupResponse deleteDeviceGroup(shared_ptr<DeleteDeviceGroupRequest> request);
  DeleteFaceResponse deleteFaceWithOptions(shared_ptr<DeleteFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaceResponse deleteFace(shared_ptr<DeleteFaceRequest> request);
  DeleteGroupResponse deleteGroupWithOptions(shared_ptr<DeleteGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupResponse deleteGroup(shared_ptr<DeleteGroupRequest> request);
  LinkFaceResponse linkFaceWithOptions(shared_ptr<LinkFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LinkFaceResponse linkFace(shared_ptr<LinkFaceRequest> request);
  QueryAddUserInfoResponse queryAddUserInfoWithOptions(shared_ptr<QueryAddUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAddUserInfoResponse queryAddUserInfo(shared_ptr<QueryAddUserInfoRequest> request);
  QueryAllGroupsResponse queryAllGroupsWithOptions(shared_ptr<QueryAllGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAllGroupsResponse queryAllGroups(shared_ptr<QueryAllGroupsRequest> request);
  QueryAuthenticationResponse queryAuthenticationWithOptions(shared_ptr<QueryAuthenticationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryAuthenticationResponse queryAuthentication(shared_ptr<QueryAuthenticationRequest> request);
  QueryFaceResponse queryFaceWithOptions(shared_ptr<QueryFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryFaceResponse queryFace(shared_ptr<QueryFaceRequest> request);
  QueryGroupUsersResponse queryGroupUsersWithOptions(shared_ptr<QueryGroupUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryGroupUsersResponse queryGroupUsers(shared_ptr<QueryGroupUsersRequest> request);
  QueryLicensesResponse queryLicensesWithOptions(shared_ptr<QueryLicensesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryLicensesResponse queryLicenses(shared_ptr<QueryLicensesRequest> request);
  QuerySyncPicScheduleResponse querySyncPicScheduleWithOptions(shared_ptr<QuerySyncPicScheduleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySyncPicScheduleResponse querySyncPicSchedule(shared_ptr<QuerySyncPicScheduleRequest> request);
  RegisterFaceResponse registerFaceWithOptions(shared_ptr<RegisterFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterFaceResponse registerFace(shared_ptr<RegisterFaceRequest> request);
  SearchFaceResponse searchFaceWithOptions(shared_ptr<SearchFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchFaceResponse searchFace(shared_ptr<SearchFaceRequest> request);
  SyncFacePicturesResponse syncFacePicturesWithOptions(shared_ptr<SyncFacePicturesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncFacePicturesResponse syncFacePictures(shared_ptr<SyncFacePicturesRequest> request);
  UnlinkFaceResponse unlinkFaceWithOptions(shared_ptr<UnlinkFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnlinkFaceResponse unlinkFace(shared_ptr<UnlinkFaceRequest> request);
  UpdateFaceResponse updateFaceWithOptions(shared_ptr<UpdateFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFaceResponse updateFace(shared_ptr<UpdateFaceRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_LinkFace20180720

#endif
