// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDESL20190801_H_
#define ALIBABACLOUD_CLOUDESL20190801_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudesl20190801 {
class ActivateApDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apMac{};
  shared_ptr<string> storeId{};

  ActivateApDeviceRequest() {}

  explicit ActivateApDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apMac) {
      res["ApMac"] = boost::any(*apMac);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApMac") != m.end() && !m["ApMac"].empty()) {
      apMac = make_shared<string>(boost::any_cast<string>(m["ApMac"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~ActivateApDeviceRequest() = default;
};
class ActivateApDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ActivateApDeviceResponseBody() {}

  explicit ActivateApDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~ActivateApDeviceResponseBody() = default;
};
class ActivateApDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActivateApDeviceResponseBody> body{};

  ActivateApDeviceResponse() {}

  explicit ActivateApDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActivateApDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivateApDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~ActivateApDeviceResponse() = default;
};
class AddApDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apMac{};
  shared_ptr<string> storeId{};

  AddApDeviceRequest() {}

  explicit AddApDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apMac) {
      res["ApMac"] = boost::any(*apMac);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApMac") != m.end() && !m["ApMac"].empty()) {
      apMac = make_shared<string>(boost::any_cast<string>(m["ApMac"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~AddApDeviceRequest() = default;
};
class AddApDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddApDeviceResponseBody() {}

  explicit AddApDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~AddApDeviceResponseBody() = default;
};
class AddApDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddApDeviceResponseBody> body{};

  AddApDeviceResponse() {}

  explicit AddApDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddApDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddApDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~AddApDeviceResponse() = default;
};
class AddEslDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> storeId{};

  AddEslDeviceRequest() {}

  explicit AddEslDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~AddEslDeviceRequest() = default;
};
class AddEslDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddEslDeviceResponseBody() {}

  explicit AddEslDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~AddEslDeviceResponseBody() = default;
};
class AddEslDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddEslDeviceResponseBody> body{};

  AddEslDeviceResponse() {}

  explicit AddEslDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddEslDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEslDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~AddEslDeviceResponse() = default;
};
class AddUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  AddUserRequest() {}

  explicit AddUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddUserRequest() = default;
};
class AddUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddUserResponseBody() {}

  explicit AddUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~AddUserResponseBody() = default;
};
class AddUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddUserResponseBody> body{};

  AddUserResponse() {}

  explicit AddUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddUserResponseBody>(model1);
      }
    }
  }


  virtual ~AddUserResponse() = default;
};
class AssignUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> stores{};
  shared_ptr<string> userId{};
  shared_ptr<string> userType{};

  AssignUserRequest() {}

  explicit AssignUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stores) {
      res["Stores"] = boost::any(*stores);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Stores") != m.end() && !m["Stores"].empty()) {
      stores = make_shared<string>(boost::any_cast<string>(m["Stores"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~AssignUserRequest() = default;
};
class AssignUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AssignUserResponseBody() {}

  explicit AssignUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~AssignUserResponseBody() = default;
};
class AssignUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssignUserResponseBody> body{};

  AssignUserResponse() {}

  explicit AssignUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssignUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssignUserResponseBody>(model1);
      }
    }
  }


  virtual ~AssignUserResponse() = default;
};
class BatchInsertItemsRequestItemInfo : public Darabonba::Model {
public:
  shared_ptr<long> actionPrice{};
  shared_ptr<bool> bePromotion{};
  shared_ptr<bool> beSourceCode{};
  shared_ptr<string> brandName{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> companyId{};
  shared_ptr<string> customizeFeatureA{};
  shared_ptr<string> customizeFeatureB{};
  shared_ptr<string> customizeFeatureC{};
  shared_ptr<string> customizeFeatureD{};
  shared_ptr<string> customizeFeatureE{};
  shared_ptr<string> customizeFeatureF{};
  shared_ptr<string> customizeFeatureG{};
  shared_ptr<string> customizeFeatureH{};
  shared_ptr<string> customizeFeatureI{};
  shared_ptr<string> customizeFeatureJ{};
  shared_ptr<string> energyEfficiency{};
  shared_ptr<string> extraAttribute{};
  shared_ptr<string> forestFirstId{};
  shared_ptr<string> forestSecondId{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<long> itemId{};
  shared_ptr<long> itemInfoIndex{};
  shared_ptr<string> itemQrCode{};
  shared_ptr<string> itemShortTitle{};
  shared_ptr<string> itemTitle{};
  shared_ptr<long> memberPrice{};
  shared_ptr<string> modelNumber{};
  shared_ptr<string> optionGroups{};
  shared_ptr<long> originalPrice{};
  shared_ptr<string> priceUnit{};
  shared_ptr<string> productionPlace{};
  shared_ptr<string> promotionEnd{};
  shared_ptr<string> promotionReason{};
  shared_ptr<string> promotionStart{};
  shared_ptr<string> promotionText{};
  shared_ptr<string> rank{};
  shared_ptr<string> saleSpec{};
  shared_ptr<string> skuId{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> storeId{};
  shared_ptr<long> suggestPrice{};

  BatchInsertItemsRequestItemInfo() {}

  explicit BatchInsertItemsRequestItemInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionPrice) {
      res["ActionPrice"] = boost::any(*actionPrice);
    }
    if (bePromotion) {
      res["BePromotion"] = boost::any(*bePromotion);
    }
    if (beSourceCode) {
      res["BeSourceCode"] = boost::any(*beSourceCode);
    }
    if (brandName) {
      res["BrandName"] = boost::any(*brandName);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (companyId) {
      res["CompanyId"] = boost::any(*companyId);
    }
    if (customizeFeatureA) {
      res["CustomizeFeatureA"] = boost::any(*customizeFeatureA);
    }
    if (customizeFeatureB) {
      res["CustomizeFeatureB"] = boost::any(*customizeFeatureB);
    }
    if (customizeFeatureC) {
      res["CustomizeFeatureC"] = boost::any(*customizeFeatureC);
    }
    if (customizeFeatureD) {
      res["CustomizeFeatureD"] = boost::any(*customizeFeatureD);
    }
    if (customizeFeatureE) {
      res["CustomizeFeatureE"] = boost::any(*customizeFeatureE);
    }
    if (customizeFeatureF) {
      res["CustomizeFeatureF"] = boost::any(*customizeFeatureF);
    }
    if (customizeFeatureG) {
      res["CustomizeFeatureG"] = boost::any(*customizeFeatureG);
    }
    if (customizeFeatureH) {
      res["CustomizeFeatureH"] = boost::any(*customizeFeatureH);
    }
    if (customizeFeatureI) {
      res["CustomizeFeatureI"] = boost::any(*customizeFeatureI);
    }
    if (customizeFeatureJ) {
      res["CustomizeFeatureJ"] = boost::any(*customizeFeatureJ);
    }
    if (energyEfficiency) {
      res["EnergyEfficiency"] = boost::any(*energyEfficiency);
    }
    if (extraAttribute) {
      res["ExtraAttribute"] = boost::any(*extraAttribute);
    }
    if (forestFirstId) {
      res["ForestFirstId"] = boost::any(*forestFirstId);
    }
    if (forestSecondId) {
      res["ForestSecondId"] = boost::any(*forestSecondId);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemInfoIndex) {
      res["ItemInfoIndex"] = boost::any(*itemInfoIndex);
    }
    if (itemQrCode) {
      res["ItemQrCode"] = boost::any(*itemQrCode);
    }
    if (itemShortTitle) {
      res["ItemShortTitle"] = boost::any(*itemShortTitle);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (memberPrice) {
      res["MemberPrice"] = boost::any(*memberPrice);
    }
    if (modelNumber) {
      res["ModelNumber"] = boost::any(*modelNumber);
    }
    if (optionGroups) {
      res["OptionGroups"] = boost::any(*optionGroups);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (priceUnit) {
      res["PriceUnit"] = boost::any(*priceUnit);
    }
    if (productionPlace) {
      res["ProductionPlace"] = boost::any(*productionPlace);
    }
    if (promotionEnd) {
      res["PromotionEnd"] = boost::any(*promotionEnd);
    }
    if (promotionReason) {
      res["PromotionReason"] = boost::any(*promotionReason);
    }
    if (promotionStart) {
      res["PromotionStart"] = boost::any(*promotionStart);
    }
    if (promotionText) {
      res["PromotionText"] = boost::any(*promotionText);
    }
    if (rank) {
      res["Rank"] = boost::any(*rank);
    }
    if (saleSpec) {
      res["SaleSpec"] = boost::any(*saleSpec);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (suggestPrice) {
      res["SuggestPrice"] = boost::any(*suggestPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPrice") != m.end() && !m["ActionPrice"].empty()) {
      actionPrice = make_shared<long>(boost::any_cast<long>(m["ActionPrice"]));
    }
    if (m.find("BePromotion") != m.end() && !m["BePromotion"].empty()) {
      bePromotion = make_shared<bool>(boost::any_cast<bool>(m["BePromotion"]));
    }
    if (m.find("BeSourceCode") != m.end() && !m["BeSourceCode"].empty()) {
      beSourceCode = make_shared<bool>(boost::any_cast<bool>(m["BeSourceCode"]));
    }
    if (m.find("BrandName") != m.end() && !m["BrandName"].empty()) {
      brandName = make_shared<string>(boost::any_cast<string>(m["BrandName"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("CompanyId") != m.end() && !m["CompanyId"].empty()) {
      companyId = make_shared<string>(boost::any_cast<string>(m["CompanyId"]));
    }
    if (m.find("CustomizeFeatureA") != m.end() && !m["CustomizeFeatureA"].empty()) {
      customizeFeatureA = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureA"]));
    }
    if (m.find("CustomizeFeatureB") != m.end() && !m["CustomizeFeatureB"].empty()) {
      customizeFeatureB = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureB"]));
    }
    if (m.find("CustomizeFeatureC") != m.end() && !m["CustomizeFeatureC"].empty()) {
      customizeFeatureC = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureC"]));
    }
    if (m.find("CustomizeFeatureD") != m.end() && !m["CustomizeFeatureD"].empty()) {
      customizeFeatureD = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureD"]));
    }
    if (m.find("CustomizeFeatureE") != m.end() && !m["CustomizeFeatureE"].empty()) {
      customizeFeatureE = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureE"]));
    }
    if (m.find("CustomizeFeatureF") != m.end() && !m["CustomizeFeatureF"].empty()) {
      customizeFeatureF = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureF"]));
    }
    if (m.find("CustomizeFeatureG") != m.end() && !m["CustomizeFeatureG"].empty()) {
      customizeFeatureG = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureG"]));
    }
    if (m.find("CustomizeFeatureH") != m.end() && !m["CustomizeFeatureH"].empty()) {
      customizeFeatureH = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureH"]));
    }
    if (m.find("CustomizeFeatureI") != m.end() && !m["CustomizeFeatureI"].empty()) {
      customizeFeatureI = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureI"]));
    }
    if (m.find("CustomizeFeatureJ") != m.end() && !m["CustomizeFeatureJ"].empty()) {
      customizeFeatureJ = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureJ"]));
    }
    if (m.find("EnergyEfficiency") != m.end() && !m["EnergyEfficiency"].empty()) {
      energyEfficiency = make_shared<string>(boost::any_cast<string>(m["EnergyEfficiency"]));
    }
    if (m.find("ExtraAttribute") != m.end() && !m["ExtraAttribute"].empty()) {
      extraAttribute = make_shared<string>(boost::any_cast<string>(m["ExtraAttribute"]));
    }
    if (m.find("ForestFirstId") != m.end() && !m["ForestFirstId"].empty()) {
      forestFirstId = make_shared<string>(boost::any_cast<string>(m["ForestFirstId"]));
    }
    if (m.find("ForestSecondId") != m.end() && !m["ForestSecondId"].empty()) {
      forestSecondId = make_shared<string>(boost::any_cast<string>(m["ForestSecondId"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemInfoIndex") != m.end() && !m["ItemInfoIndex"].empty()) {
      itemInfoIndex = make_shared<long>(boost::any_cast<long>(m["ItemInfoIndex"]));
    }
    if (m.find("ItemQrCode") != m.end() && !m["ItemQrCode"].empty()) {
      itemQrCode = make_shared<string>(boost::any_cast<string>(m["ItemQrCode"]));
    }
    if (m.find("ItemShortTitle") != m.end() && !m["ItemShortTitle"].empty()) {
      itemShortTitle = make_shared<string>(boost::any_cast<string>(m["ItemShortTitle"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("MemberPrice") != m.end() && !m["MemberPrice"].empty()) {
      memberPrice = make_shared<long>(boost::any_cast<long>(m["MemberPrice"]));
    }
    if (m.find("ModelNumber") != m.end() && !m["ModelNumber"].empty()) {
      modelNumber = make_shared<string>(boost::any_cast<string>(m["ModelNumber"]));
    }
    if (m.find("OptionGroups") != m.end() && !m["OptionGroups"].empty()) {
      optionGroups = make_shared<string>(boost::any_cast<string>(m["OptionGroups"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<long>(boost::any_cast<long>(m["OriginalPrice"]));
    }
    if (m.find("PriceUnit") != m.end() && !m["PriceUnit"].empty()) {
      priceUnit = make_shared<string>(boost::any_cast<string>(m["PriceUnit"]));
    }
    if (m.find("ProductionPlace") != m.end() && !m["ProductionPlace"].empty()) {
      productionPlace = make_shared<string>(boost::any_cast<string>(m["ProductionPlace"]));
    }
    if (m.find("PromotionEnd") != m.end() && !m["PromotionEnd"].empty()) {
      promotionEnd = make_shared<string>(boost::any_cast<string>(m["PromotionEnd"]));
    }
    if (m.find("PromotionReason") != m.end() && !m["PromotionReason"].empty()) {
      promotionReason = make_shared<string>(boost::any_cast<string>(m["PromotionReason"]));
    }
    if (m.find("PromotionStart") != m.end() && !m["PromotionStart"].empty()) {
      promotionStart = make_shared<string>(boost::any_cast<string>(m["PromotionStart"]));
    }
    if (m.find("PromotionText") != m.end() && !m["PromotionText"].empty()) {
      promotionText = make_shared<string>(boost::any_cast<string>(m["PromotionText"]));
    }
    if (m.find("Rank") != m.end() && !m["Rank"].empty()) {
      rank = make_shared<string>(boost::any_cast<string>(m["Rank"]));
    }
    if (m.find("SaleSpec") != m.end() && !m["SaleSpec"].empty()) {
      saleSpec = make_shared<string>(boost::any_cast<string>(m["SaleSpec"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("SuggestPrice") != m.end() && !m["SuggestPrice"].empty()) {
      suggestPrice = make_shared<long>(boost::any_cast<long>(m["SuggestPrice"]));
    }
  }


  virtual ~BatchInsertItemsRequestItemInfo() = default;
};
class BatchInsertItemsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<BatchInsertItemsRequestItemInfo>> itemInfo{};
  shared_ptr<string> storeId{};

  BatchInsertItemsRequest() {}

  explicit BatchInsertItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemInfo) {
      vector<boost::any> temp1;
      for(auto item1:*itemInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemInfo"] = boost::any(temp1);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemInfo") != m.end() && !m["ItemInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemInfo"].type()) {
        vector<BatchInsertItemsRequestItemInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchInsertItemsRequestItemInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemInfo = make_shared<vector<BatchInsertItemsRequestItemInfo>>(expect1);
      }
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~BatchInsertItemsRequest() = default;
};
class BatchInsertItemsResponseBodyBatchResultsBatchResult : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<long> index{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  BatchInsertItemsResponseBodyBatchResultsBatchResult() {}

  explicit BatchInsertItemsResponseBodyBatchResultsBatchResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~BatchInsertItemsResponseBodyBatchResultsBatchResult() = default;
};
class BatchInsertItemsResponseBodyBatchResults : public Darabonba::Model {
public:
  shared_ptr<vector<BatchInsertItemsResponseBodyBatchResultsBatchResult>> batchResult{};

  BatchInsertItemsResponseBodyBatchResults() {}

  explicit BatchInsertItemsResponseBodyBatchResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchResult) {
      vector<boost::any> temp1;
      for(auto item1:*batchResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BatchResult"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchResult") != m.end() && !m["BatchResult"].empty()) {
      if (typeid(vector<boost::any>) == m["BatchResult"].type()) {
        vector<BatchInsertItemsResponseBodyBatchResultsBatchResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BatchResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchInsertItemsResponseBodyBatchResultsBatchResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        batchResult = make_shared<vector<BatchInsertItemsResponseBodyBatchResultsBatchResult>>(expect1);
      }
    }
  }


  virtual ~BatchInsertItemsResponseBodyBatchResults() = default;
};
class BatchInsertItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<BatchInsertItemsResponseBodyBatchResults> batchResults{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchInsertItemsResponseBody() {}

  explicit BatchInsertItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchResults) {
      res["BatchResults"] = batchResults ? boost::any(batchResults->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("BatchResults") != m.end() && !m["BatchResults"].empty()) {
      if (typeid(map<string, boost::any>) == m["BatchResults"].type()) {
        BatchInsertItemsResponseBodyBatchResults model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BatchResults"]));
        batchResults = make_shared<BatchInsertItemsResponseBodyBatchResults>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~BatchInsertItemsResponseBody() = default;
};
class BatchInsertItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchInsertItemsResponseBody> body{};

  BatchInsertItemsResponse() {}

  explicit BatchInsertItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchInsertItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchInsertItemsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchInsertItemsResponse() = default;
};
class BindEslDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> storeId{};

  BindEslDeviceRequest() {}

  explicit BindEslDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~BindEslDeviceRequest() = default;
};
class BindEslDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BindEslDeviceResponseBody() {}

  explicit BindEslDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~BindEslDeviceResponseBody() = default;
};
class BindEslDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindEslDeviceResponseBody> body{};

  BindEslDeviceResponse() {}

  explicit BindEslDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindEslDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindEslDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~BindEslDeviceResponse() = default;
};
class BindEslDeviceShelfRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> shelfCode{};
  shared_ptr<string> storeId{};

  BindEslDeviceShelfRequest() {}

  explicit BindEslDeviceShelfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (shelfCode) {
      res["ShelfCode"] = boost::any(*shelfCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("ShelfCode") != m.end() && !m["ShelfCode"].empty()) {
      shelfCode = make_shared<string>(boost::any_cast<string>(m["ShelfCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~BindEslDeviceShelfRequest() = default;
};
class BindEslDeviceShelfResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BindEslDeviceShelfResponseBody() {}

  explicit BindEslDeviceShelfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~BindEslDeviceShelfResponseBody() = default;
};
class BindEslDeviceShelfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BindEslDeviceShelfResponseBody> body{};

  BindEslDeviceShelfResponse() {}

  explicit BindEslDeviceShelfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BindEslDeviceShelfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BindEslDeviceShelfResponseBody>(model1);
      }
    }
  }


  virtual ~BindEslDeviceShelfResponse() = default;
};
class ConfirmLogisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> logisticsDocuments{};
  shared_ptr<string> poNumber{};
  shared_ptr<string> prNumber{};
  shared_ptr<string> status{};

  ConfirmLogisticsRequest() {}

  explicit ConfirmLogisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logisticsDocuments) {
      res["LogisticsDocuments"] = boost::any(*logisticsDocuments);
    }
    if (poNumber) {
      res["PoNumber"] = boost::any(*poNumber);
    }
    if (prNumber) {
      res["PrNumber"] = boost::any(*prNumber);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogisticsDocuments") != m.end() && !m["LogisticsDocuments"].empty()) {
      logisticsDocuments = make_shared<string>(boost::any_cast<string>(m["LogisticsDocuments"]));
    }
    if (m.find("PoNumber") != m.end() && !m["PoNumber"].empty()) {
      poNumber = make_shared<string>(boost::any_cast<string>(m["PoNumber"]));
    }
    if (m.find("PrNumber") != m.end() && !m["PrNumber"].empty()) {
      prNumber = make_shared<string>(boost::any_cast<string>(m["PrNumber"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ConfirmLogisticsRequest() = default;
};
class ConfirmLogisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> acceptance{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ConfirmLogisticsResponseBody() {}

  explicit ConfirmLogisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptance) {
      res["Acceptance"] = boost::any(*acceptance);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (m.find("Acceptance") != m.end() && !m["Acceptance"].empty()) {
      acceptance = make_shared<string>(boost::any_cast<string>(m["Acceptance"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~ConfirmLogisticsResponseBody() = default;
};
class ConfirmLogisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ConfirmLogisticsResponseBody> body{};

  ConfirmLogisticsResponse() {}

  explicit ConfirmLogisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ConfirmLogisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ConfirmLogisticsResponseBody>(model1);
      }
    }
  }


  virtual ~ConfirmLogisticsResponse() = default;
};
class CreateStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> brand{};
  shared_ptr<string> comments{};
  shared_ptr<string> companyId{};
  shared_ptr<string> groups{};
  shared_ptr<string> outId{};
  shared_ptr<string> parentId{};
  shared_ptr<string> phone{};
  shared_ptr<string> storeName{};

  CreateStoreRequest() {}

  explicit CreateStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brand) {
      res["Brand"] = boost::any(*brand);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (companyId) {
      res["CompanyId"] = boost::any(*companyId);
    }
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (storeName) {
      res["StoreName"] = boost::any(*storeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Brand") != m.end() && !m["Brand"].empty()) {
      brand = make_shared<string>(boost::any_cast<string>(m["Brand"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CompanyId") != m.end() && !m["CompanyId"].empty()) {
      companyId = make_shared<string>(boost::any_cast<string>(m["CompanyId"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      groups = make_shared<string>(boost::any_cast<string>(m["Groups"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("StoreName") != m.end() && !m["StoreName"].empty()) {
      storeName = make_shared<string>(boost::any_cast<string>(m["StoreName"]));
    }
  }


  virtual ~CreateStoreRequest() = default;
};
class CreateStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> storeId{};
  shared_ptr<bool> success{};

  CreateStoreResponseBody() {}

  explicit CreateStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
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
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateStoreResponseBody() = default;
};
class CreateStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateStoreResponseBody> body{};

  CreateStoreResponse() {}

  explicit CreateStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStoreResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStoreResponse() = default;
};
class DeleteApDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apMac{};
  shared_ptr<string> storeId{};

  DeleteApDeviceRequest() {}

  explicit DeleteApDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apMac) {
      res["ApMac"] = boost::any(*apMac);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApMac") != m.end() && !m["ApMac"].empty()) {
      apMac = make_shared<string>(boost::any_cast<string>(m["ApMac"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DeleteApDeviceRequest() = default;
};
class DeleteApDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteApDeviceResponseBody() {}

  explicit DeleteApDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~DeleteApDeviceResponseBody() = default;
};
class DeleteApDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteApDeviceResponseBody> body{};

  DeleteApDeviceResponse() {}

  explicit DeleteApDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteApDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteApDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteApDeviceResponse() = default;
};
class DeleteEslDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> storeId{};

  DeleteEslDeviceRequest() {}

  explicit DeleteEslDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DeleteEslDeviceRequest() = default;
};
class DeleteEslDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteEslDeviceResponseBody() {}

  explicit DeleteEslDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~DeleteEslDeviceResponseBody() = default;
};
class DeleteEslDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEslDeviceResponseBody> body{};

  DeleteEslDeviceResponse() {}

  explicit DeleteEslDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEslDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEslDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEslDeviceResponse() = default;
};
class DeleteItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> storeId{};

  DeleteItemRequest() {}

  explicit DeleteItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DeleteItemRequest() = default;
};
class DeleteItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteItemResponseBody() {}

  explicit DeleteItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~DeleteItemResponseBody() = default;
};
class DeleteItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteItemResponseBody> body{};

  DeleteItemResponse() {}

  explicit DeleteItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteItemResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteItemResponse() = default;
};
class DeleteItemBySkuIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> skuId{};
  shared_ptr<string> storeId{};

  DeleteItemBySkuIdRequest() {}

  explicit DeleteItemBySkuIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DeleteItemBySkuIdRequest() = default;
};
class DeleteItemBySkuIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteItemBySkuIdResponseBody() {}

  explicit DeleteItemBySkuIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~DeleteItemBySkuIdResponseBody() = default;
};
class DeleteItemBySkuIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteItemBySkuIdResponseBody> body{};

  DeleteItemBySkuIdResponse() {}

  explicit DeleteItemBySkuIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteItemBySkuIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteItemBySkuIdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteItemBySkuIdResponse() = default;
};
class DeleteStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> storeId{};

  DeleteStoreRequest() {}

  explicit DeleteStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DeleteStoreRequest() = default;
};
class DeleteStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteStoreResponseBody() {}

  explicit DeleteStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~DeleteStoreResponseBody() = default;
};
class DeleteStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteStoreResponseBody> body{};

  DeleteStoreResponse() {}

  explicit DeleteStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteStoreResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteStoreResponse() = default;
};
class DeleteUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteUserRequest() = default;
};
class DeleteUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteUserResponseBody() {}

  explicit DeleteUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~DeleteUserResponseBody() = default;
};
class DeleteUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserResponseBody> body{};

  DeleteUserResponse() {}

  explicit DeleteUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserResponse() = default;
};
class DescribeAlarmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> alarmId{};
  shared_ptr<string> alarmStatus{};
  shared_ptr<string> alarmType{};
  shared_ptr<string> errorType{};
  shared_ptr<string> fromAlarmTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};
  shared_ptr<string> toAlarmTime{};

  DescribeAlarmsRequest() {}

  explicit DescribeAlarmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (alarmStatus) {
      res["AlarmStatus"] = boost::any(*alarmStatus);
    }
    if (alarmType) {
      res["AlarmType"] = boost::any(*alarmType);
    }
    if (errorType) {
      res["ErrorType"] = boost::any(*errorType);
    }
    if (fromAlarmTime) {
      res["FromAlarmTime"] = boost::any(*fromAlarmTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (toAlarmTime) {
      res["ToAlarmTime"] = boost::any(*toAlarmTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
    if (m.find("AlarmStatus") != m.end() && !m["AlarmStatus"].empty()) {
      alarmStatus = make_shared<string>(boost::any_cast<string>(m["AlarmStatus"]));
    }
    if (m.find("AlarmType") != m.end() && !m["AlarmType"].empty()) {
      alarmType = make_shared<string>(boost::any_cast<string>(m["AlarmType"]));
    }
    if (m.find("ErrorType") != m.end() && !m["ErrorType"].empty()) {
      errorType = make_shared<string>(boost::any_cast<string>(m["ErrorType"]));
    }
    if (m.find("FromAlarmTime") != m.end() && !m["FromAlarmTime"].empty()) {
      fromAlarmTime = make_shared<string>(boost::any_cast<string>(m["FromAlarmTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("ToAlarmTime") != m.end() && !m["ToAlarmTime"].empty()) {
      toAlarmTime = make_shared<string>(boost::any_cast<string>(m["ToAlarmTime"]));
    }
  }


  virtual ~DescribeAlarmsRequest() = default;
};
class DescribeAlarmsResponseBodyAlarmsAlarmInfo : public Darabonba::Model {
public:
  shared_ptr<string> alarmId{};
  shared_ptr<string> alarmStatus{};
  shared_ptr<string> alarmTime{};
  shared_ptr<string> alarmType{};
  shared_ptr<string> companyId{};
  shared_ptr<string> dealTime{};
  shared_ptr<long> dealUserId{};
  shared_ptr<string> deviceBarCode{};
  shared_ptr<string> deviceMac{};
  shared_ptr<string> deviceType{};
  shared_ptr<string> errorType{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> model{};
  shared_ptr<string> storeId{};
  shared_ptr<string> vendor{};

  DescribeAlarmsResponseBodyAlarmsAlarmInfo() {}

  explicit DescribeAlarmsResponseBodyAlarmsAlarmInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmId) {
      res["AlarmId"] = boost::any(*alarmId);
    }
    if (alarmStatus) {
      res["AlarmStatus"] = boost::any(*alarmStatus);
    }
    if (alarmTime) {
      res["AlarmTime"] = boost::any(*alarmTime);
    }
    if (alarmType) {
      res["AlarmType"] = boost::any(*alarmType);
    }
    if (companyId) {
      res["CompanyId"] = boost::any(*companyId);
    }
    if (dealTime) {
      res["DealTime"] = boost::any(*dealTime);
    }
    if (dealUserId) {
      res["DealUserId"] = boost::any(*dealUserId);
    }
    if (deviceBarCode) {
      res["DeviceBarCode"] = boost::any(*deviceBarCode);
    }
    if (deviceMac) {
      res["DeviceMac"] = boost::any(*deviceMac);
    }
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (errorType) {
      res["ErrorType"] = boost::any(*errorType);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmId") != m.end() && !m["AlarmId"].empty()) {
      alarmId = make_shared<string>(boost::any_cast<string>(m["AlarmId"]));
    }
    if (m.find("AlarmStatus") != m.end() && !m["AlarmStatus"].empty()) {
      alarmStatus = make_shared<string>(boost::any_cast<string>(m["AlarmStatus"]));
    }
    if (m.find("AlarmTime") != m.end() && !m["AlarmTime"].empty()) {
      alarmTime = make_shared<string>(boost::any_cast<string>(m["AlarmTime"]));
    }
    if (m.find("AlarmType") != m.end() && !m["AlarmType"].empty()) {
      alarmType = make_shared<string>(boost::any_cast<string>(m["AlarmType"]));
    }
    if (m.find("CompanyId") != m.end() && !m["CompanyId"].empty()) {
      companyId = make_shared<string>(boost::any_cast<string>(m["CompanyId"]));
    }
    if (m.find("DealTime") != m.end() && !m["DealTime"].empty()) {
      dealTime = make_shared<string>(boost::any_cast<string>(m["DealTime"]));
    }
    if (m.find("DealUserId") != m.end() && !m["DealUserId"].empty()) {
      dealUserId = make_shared<long>(boost::any_cast<long>(m["DealUserId"]));
    }
    if (m.find("DeviceBarCode") != m.end() && !m["DeviceBarCode"].empty()) {
      deviceBarCode = make_shared<string>(boost::any_cast<string>(m["DeviceBarCode"]));
    }
    if (m.find("DeviceMac") != m.end() && !m["DeviceMac"].empty()) {
      deviceMac = make_shared<string>(boost::any_cast<string>(m["DeviceMac"]));
    }
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("ErrorType") != m.end() && !m["ErrorType"].empty()) {
      errorType = make_shared<string>(boost::any_cast<string>(m["ErrorType"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~DescribeAlarmsResponseBodyAlarmsAlarmInfo() = default;
};
class DescribeAlarmsResponseBodyAlarms : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeAlarmsResponseBodyAlarmsAlarmInfo>> alarmInfo{};

  DescribeAlarmsResponseBodyAlarms() {}

  explicit DescribeAlarmsResponseBodyAlarms(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarmInfo) {
      vector<boost::any> temp1;
      for(auto item1:*alarmInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AlarmInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AlarmInfo") != m.end() && !m["AlarmInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["AlarmInfo"].type()) {
        vector<DescribeAlarmsResponseBodyAlarmsAlarmInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AlarmInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAlarmsResponseBodyAlarmsAlarmInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        alarmInfo = make_shared<vector<DescribeAlarmsResponseBodyAlarmsAlarmInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeAlarmsResponseBodyAlarms() = default;
};
class DescribeAlarmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeAlarmsResponseBodyAlarms> alarms{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeAlarmsResponseBody() {}

  explicit DescribeAlarmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (alarms) {
      res["Alarms"] = alarms ? boost::any(alarms->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Alarms") != m.end() && !m["Alarms"].empty()) {
      if (typeid(map<string, boost::any>) == m["Alarms"].type()) {
        DescribeAlarmsResponseBodyAlarms model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Alarms"]));
        alarms = make_shared<DescribeAlarmsResponseBodyAlarms>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeAlarmsResponseBody() = default;
};
class DescribeAlarmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAlarmsResponseBody> body{};

  DescribeAlarmsResponse() {}

  explicit DescribeAlarmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAlarmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAlarmsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAlarmsResponse() = default;
};
class DescribeApDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> activated{};
  shared_ptr<string> apMac{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};

  DescribeApDevicesRequest() {}

  explicit DescribeApDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activated) {
      res["Activated"] = boost::any(*activated);
    }
    if (apMac) {
      res["ApMac"] = boost::any(*apMac);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Activated") != m.end() && !m["Activated"].empty()) {
      activated = make_shared<bool>(boost::any_cast<bool>(m["Activated"]));
    }
    if (m.find("ApMac") != m.end() && !m["ApMac"].empty()) {
      apMac = make_shared<string>(boost::any_cast<string>(m["ApMac"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DescribeApDevicesRequest() = default;
};
class DescribeApDevicesResponseBodyApDevicesApInfo : public Darabonba::Model {
public:
  shared_ptr<bool> isActivate{};
  shared_ptr<string> mac{};
  shared_ptr<string> model{};
  shared_ptr<bool> status{};

  DescribeApDevicesResponseBodyApDevicesApInfo() {}

  explicit DescribeApDevicesResponseBodyApDevicesApInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (isActivate) {
      res["IsActivate"] = boost::any(*isActivate);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IsActivate") != m.end() && !m["IsActivate"].empty()) {
      isActivate = make_shared<bool>(boost::any_cast<bool>(m["IsActivate"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
  }


  virtual ~DescribeApDevicesResponseBodyApDevicesApInfo() = default;
};
class DescribeApDevicesResponseBodyApDevices : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApDevicesResponseBodyApDevicesApInfo>> apInfo{};

  DescribeApDevicesResponseBodyApDevices() {}

  explicit DescribeApDevicesResponseBodyApDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apInfo) {
      vector<boost::any> temp1;
      for(auto item1:*apInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApInfo") != m.end() && !m["ApInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ApInfo"].type()) {
        vector<DescribeApDevicesResponseBodyApDevicesApInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApDevicesResponseBodyApDevicesApInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apInfo = make_shared<vector<DescribeApDevicesResponseBodyApDevicesApInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeApDevicesResponseBodyApDevices() = default;
};
class DescribeApDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeApDevicesResponseBodyApDevices> apDevices{};
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeApDevicesResponseBody() {}

  explicit DescribeApDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apDevices) {
      res["ApDevices"] = apDevices ? boost::any(apDevices->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApDevices") != m.end() && !m["ApDevices"].empty()) {
      if (typeid(map<string, boost::any>) == m["ApDevices"].type()) {
        DescribeApDevicesResponseBodyApDevices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ApDevices"]));
        apDevices = make_shared<DescribeApDevicesResponseBodyApDevices>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeApDevicesResponseBody() = default;
};
class DescribeApDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeApDevicesResponseBody> body{};

  DescribeApDevicesResponse() {}

  explicit DescribeApDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeApDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeApDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeApDevicesResponse() = default;
};
class DescribeEslDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> beBind{};
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> eslStatus{};
  shared_ptr<long> fromBatteryLevel{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> mac{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> shelfCode{};
  shared_ptr<string> storeId{};
  shared_ptr<long> toBatteryLevel{};
  shared_ptr<string> type{};
  shared_ptr<string> vendor{};

  DescribeEslDevicesRequest() {}

  explicit DescribeEslDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beBind) {
      res["BeBind"] = boost::any(*beBind);
    }
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (eslStatus) {
      res["EslStatus"] = boost::any(*eslStatus);
    }
    if (fromBatteryLevel) {
      res["FromBatteryLevel"] = boost::any(*fromBatteryLevel);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (shelfCode) {
      res["ShelfCode"] = boost::any(*shelfCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (toBatteryLevel) {
      res["ToBatteryLevel"] = boost::any(*toBatteryLevel);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeBind") != m.end() && !m["BeBind"].empty()) {
      beBind = make_shared<bool>(boost::any_cast<bool>(m["BeBind"]));
    }
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("EslStatus") != m.end() && !m["EslStatus"].empty()) {
      eslStatus = make_shared<string>(boost::any_cast<string>(m["EslStatus"]));
    }
    if (m.find("FromBatteryLevel") != m.end() && !m["FromBatteryLevel"].empty()) {
      fromBatteryLevel = make_shared<long>(boost::any_cast<long>(m["FromBatteryLevel"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ShelfCode") != m.end() && !m["ShelfCode"].empty()) {
      shelfCode = make_shared<string>(boost::any_cast<string>(m["ShelfCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("ToBatteryLevel") != m.end() && !m["ToBatteryLevel"].empty()) {
      toBatteryLevel = make_shared<long>(boost::any_cast<long>(m["ToBatteryLevel"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~DescribeEslDevicesRequest() = default;
};
class DescribeEslDevicesResponseBodyEslDevicesEslDeviceInfo : public Darabonba::Model {
public:
  shared_ptr<long> batteryLevel{};
  shared_ptr<bool> beBind{};
  shared_ptr<string> companyId{};
  shared_ptr<string> connectAp{};
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> eslStatus{};
  shared_ptr<long> itemActionPrice{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemPriceUnit{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> lastCommunicateTime{};
  shared_ptr<string> mac{};
  shared_ptr<string> model{};
  shared_ptr<string> positionCode{};
  shared_ptr<long> screenHeight{};
  shared_ptr<long> screenWidth{};
  shared_ptr<string> shelfCode{};
  shared_ptr<string> storeId{};
  shared_ptr<string> type{};
  shared_ptr<string> vendor{};

  DescribeEslDevicesResponseBodyEslDevicesEslDeviceInfo() {}

  explicit DescribeEslDevicesResponseBodyEslDevicesEslDeviceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batteryLevel) {
      res["BatteryLevel"] = boost::any(*batteryLevel);
    }
    if (beBind) {
      res["BeBind"] = boost::any(*beBind);
    }
    if (companyId) {
      res["CompanyId"] = boost::any(*companyId);
    }
    if (connectAp) {
      res["ConnectAp"] = boost::any(*connectAp);
    }
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (eslStatus) {
      res["EslStatus"] = boost::any(*eslStatus);
    }
    if (itemActionPrice) {
      res["ItemActionPrice"] = boost::any(*itemActionPrice);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemPriceUnit) {
      res["ItemPriceUnit"] = boost::any(*itemPriceUnit);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (lastCommunicateTime) {
      res["LastCommunicateTime"] = boost::any(*lastCommunicateTime);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (positionCode) {
      res["PositionCode"] = boost::any(*positionCode);
    }
    if (screenHeight) {
      res["ScreenHeight"] = boost::any(*screenHeight);
    }
    if (screenWidth) {
      res["ScreenWidth"] = boost::any(*screenWidth);
    }
    if (shelfCode) {
      res["ShelfCode"] = boost::any(*shelfCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatteryLevel") != m.end() && !m["BatteryLevel"].empty()) {
      batteryLevel = make_shared<long>(boost::any_cast<long>(m["BatteryLevel"]));
    }
    if (m.find("BeBind") != m.end() && !m["BeBind"].empty()) {
      beBind = make_shared<bool>(boost::any_cast<bool>(m["BeBind"]));
    }
    if (m.find("CompanyId") != m.end() && !m["CompanyId"].empty()) {
      companyId = make_shared<string>(boost::any_cast<string>(m["CompanyId"]));
    }
    if (m.find("ConnectAp") != m.end() && !m["ConnectAp"].empty()) {
      connectAp = make_shared<string>(boost::any_cast<string>(m["ConnectAp"]));
    }
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("EslStatus") != m.end() && !m["EslStatus"].empty()) {
      eslStatus = make_shared<string>(boost::any_cast<string>(m["EslStatus"]));
    }
    if (m.find("ItemActionPrice") != m.end() && !m["ItemActionPrice"].empty()) {
      itemActionPrice = make_shared<long>(boost::any_cast<long>(m["ItemActionPrice"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemPriceUnit") != m.end() && !m["ItemPriceUnit"].empty()) {
      itemPriceUnit = make_shared<string>(boost::any_cast<string>(m["ItemPriceUnit"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("LastCommunicateTime") != m.end() && !m["LastCommunicateTime"].empty()) {
      lastCommunicateTime = make_shared<string>(boost::any_cast<string>(m["LastCommunicateTime"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("PositionCode") != m.end() && !m["PositionCode"].empty()) {
      positionCode = make_shared<string>(boost::any_cast<string>(m["PositionCode"]));
    }
    if (m.find("ScreenHeight") != m.end() && !m["ScreenHeight"].empty()) {
      screenHeight = make_shared<long>(boost::any_cast<long>(m["ScreenHeight"]));
    }
    if (m.find("ScreenWidth") != m.end() && !m["ScreenWidth"].empty()) {
      screenWidth = make_shared<long>(boost::any_cast<long>(m["ScreenWidth"]));
    }
    if (m.find("ShelfCode") != m.end() && !m["ShelfCode"].empty()) {
      shelfCode = make_shared<string>(boost::any_cast<string>(m["ShelfCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~DescribeEslDevicesResponseBodyEslDevicesEslDeviceInfo() = default;
};
class DescribeEslDevicesResponseBodyEslDevices : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEslDevicesResponseBodyEslDevicesEslDeviceInfo>> eslDeviceInfo{};

  DescribeEslDevicesResponseBodyEslDevices() {}

  explicit DescribeEslDevicesResponseBodyEslDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslDeviceInfo) {
      vector<boost::any> temp1;
      for(auto item1:*eslDeviceInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EslDeviceInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslDeviceInfo") != m.end() && !m["EslDeviceInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["EslDeviceInfo"].type()) {
        vector<DescribeEslDevicesResponseBodyEslDevicesEslDeviceInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EslDeviceInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEslDevicesResponseBodyEslDevicesEslDeviceInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eslDeviceInfo = make_shared<vector<DescribeEslDevicesResponseBodyEslDevicesEslDeviceInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeEslDevicesResponseBodyEslDevices() = default;
};
class DescribeEslDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<DescribeEslDevicesResponseBodyEslDevices> eslDevices{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeEslDevicesResponseBody() {}

  explicit DescribeEslDevicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (eslDevices) {
      res["EslDevices"] = eslDevices ? boost::any(eslDevices->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EslDevices") != m.end() && !m["EslDevices"].empty()) {
      if (typeid(map<string, boost::any>) == m["EslDevices"].type()) {
        DescribeEslDevicesResponseBodyEslDevices model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EslDevices"]));
        eslDevices = make_shared<DescribeEslDevicesResponseBodyEslDevices>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeEslDevicesResponseBody() = default;
};
class DescribeEslDevicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEslDevicesResponseBody> body{};

  DescribeEslDevicesResponse() {}

  explicit DescribeEslDevicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEslDevicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEslDevicesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEslDevicesResponse() = default;
};
class DescribeItemsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> bePromotion{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemTitle{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> skuId{};
  shared_ptr<string> storeId{};

  DescribeItemsRequest() {}

  explicit DescribeItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bePromotion) {
      res["BePromotion"] = boost::any(*bePromotion);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BePromotion") != m.end() && !m["BePromotion"].empty()) {
      bePromotion = make_shared<bool>(boost::any_cast<bool>(m["BePromotion"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DescribeItemsRequest() = default;
};
class DescribeItemsResponseBodyItemsItemInfo : public Darabonba::Model {
public:
  shared_ptr<long> actionPrice{};
  shared_ptr<bool> bePromotion{};
  shared_ptr<bool> beSourceCode{};
  shared_ptr<string> brandName{};
  shared_ptr<string> categoryName{};
  shared_ptr<string> companyId{};
  shared_ptr<string> customizeFeatureA{};
  shared_ptr<string> customizeFeatureB{};
  shared_ptr<string> customizeFeatureC{};
  shared_ptr<string> customizeFeatureD{};
  shared_ptr<string> customizeFeatureE{};
  shared_ptr<string> customizeFeatureF{};
  shared_ptr<string> customizeFeatureG{};
  shared_ptr<string> customizeFeatureH{};
  shared_ptr<string> customizeFeatureI{};
  shared_ptr<string> customizeFeatureJ{};
  shared_ptr<string> energyEfficiency{};
  shared_ptr<string> extraAttribute{};
  shared_ptr<string> forestFirstId{};
  shared_ptr<string> forestSecondId{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<long> itemId{};
  shared_ptr<long> itemInfoIndex{};
  shared_ptr<string> itemQrCode{};
  shared_ptr<string> itemShortTitle{};
  shared_ptr<string> itemTitle{};
  shared_ptr<long> memberPrice{};
  shared_ptr<string> modelNumber{};
  shared_ptr<string> optionGroups{};
  shared_ptr<long> originalPrice{};
  shared_ptr<string> priceUnit{};
  shared_ptr<string> productionPlace{};
  shared_ptr<string> promotionEnd{};
  shared_ptr<string> promotionReason{};
  shared_ptr<string> promotionStart{};
  shared_ptr<string> promotionText{};
  shared_ptr<string> rank{};
  shared_ptr<string> saleSpec{};
  shared_ptr<string> skuId{};
  shared_ptr<string> sourceCode{};
  shared_ptr<string> storeId{};
  shared_ptr<long> suggestPrice{};

  DescribeItemsResponseBodyItemsItemInfo() {}

  explicit DescribeItemsResponseBodyItemsItemInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionPrice) {
      res["ActionPrice"] = boost::any(*actionPrice);
    }
    if (bePromotion) {
      res["BePromotion"] = boost::any(*bePromotion);
    }
    if (beSourceCode) {
      res["BeSourceCode"] = boost::any(*beSourceCode);
    }
    if (brandName) {
      res["BrandName"] = boost::any(*brandName);
    }
    if (categoryName) {
      res["CategoryName"] = boost::any(*categoryName);
    }
    if (companyId) {
      res["CompanyId"] = boost::any(*companyId);
    }
    if (customizeFeatureA) {
      res["CustomizeFeatureA"] = boost::any(*customizeFeatureA);
    }
    if (customizeFeatureB) {
      res["CustomizeFeatureB"] = boost::any(*customizeFeatureB);
    }
    if (customizeFeatureC) {
      res["CustomizeFeatureC"] = boost::any(*customizeFeatureC);
    }
    if (customizeFeatureD) {
      res["CustomizeFeatureD"] = boost::any(*customizeFeatureD);
    }
    if (customizeFeatureE) {
      res["CustomizeFeatureE"] = boost::any(*customizeFeatureE);
    }
    if (customizeFeatureF) {
      res["CustomizeFeatureF"] = boost::any(*customizeFeatureF);
    }
    if (customizeFeatureG) {
      res["CustomizeFeatureG"] = boost::any(*customizeFeatureG);
    }
    if (customizeFeatureH) {
      res["CustomizeFeatureH"] = boost::any(*customizeFeatureH);
    }
    if (customizeFeatureI) {
      res["CustomizeFeatureI"] = boost::any(*customizeFeatureI);
    }
    if (customizeFeatureJ) {
      res["CustomizeFeatureJ"] = boost::any(*customizeFeatureJ);
    }
    if (energyEfficiency) {
      res["EnergyEfficiency"] = boost::any(*energyEfficiency);
    }
    if (extraAttribute) {
      res["ExtraAttribute"] = boost::any(*extraAttribute);
    }
    if (forestFirstId) {
      res["ForestFirstId"] = boost::any(*forestFirstId);
    }
    if (forestSecondId) {
      res["ForestSecondId"] = boost::any(*forestSecondId);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemInfoIndex) {
      res["ItemInfoIndex"] = boost::any(*itemInfoIndex);
    }
    if (itemQrCode) {
      res["ItemQrCode"] = boost::any(*itemQrCode);
    }
    if (itemShortTitle) {
      res["ItemShortTitle"] = boost::any(*itemShortTitle);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (memberPrice) {
      res["MemberPrice"] = boost::any(*memberPrice);
    }
    if (modelNumber) {
      res["ModelNumber"] = boost::any(*modelNumber);
    }
    if (optionGroups) {
      res["OptionGroups"] = boost::any(*optionGroups);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (priceUnit) {
      res["PriceUnit"] = boost::any(*priceUnit);
    }
    if (productionPlace) {
      res["ProductionPlace"] = boost::any(*productionPlace);
    }
    if (promotionEnd) {
      res["PromotionEnd"] = boost::any(*promotionEnd);
    }
    if (promotionReason) {
      res["PromotionReason"] = boost::any(*promotionReason);
    }
    if (promotionStart) {
      res["PromotionStart"] = boost::any(*promotionStart);
    }
    if (promotionText) {
      res["PromotionText"] = boost::any(*promotionText);
    }
    if (rank) {
      res["Rank"] = boost::any(*rank);
    }
    if (saleSpec) {
      res["SaleSpec"] = boost::any(*saleSpec);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (suggestPrice) {
      res["SuggestPrice"] = boost::any(*suggestPrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPrice") != m.end() && !m["ActionPrice"].empty()) {
      actionPrice = make_shared<long>(boost::any_cast<long>(m["ActionPrice"]));
    }
    if (m.find("BePromotion") != m.end() && !m["BePromotion"].empty()) {
      bePromotion = make_shared<bool>(boost::any_cast<bool>(m["BePromotion"]));
    }
    if (m.find("BeSourceCode") != m.end() && !m["BeSourceCode"].empty()) {
      beSourceCode = make_shared<bool>(boost::any_cast<bool>(m["BeSourceCode"]));
    }
    if (m.find("BrandName") != m.end() && !m["BrandName"].empty()) {
      brandName = make_shared<string>(boost::any_cast<string>(m["BrandName"]));
    }
    if (m.find("CategoryName") != m.end() && !m["CategoryName"].empty()) {
      categoryName = make_shared<string>(boost::any_cast<string>(m["CategoryName"]));
    }
    if (m.find("CompanyId") != m.end() && !m["CompanyId"].empty()) {
      companyId = make_shared<string>(boost::any_cast<string>(m["CompanyId"]));
    }
    if (m.find("CustomizeFeatureA") != m.end() && !m["CustomizeFeatureA"].empty()) {
      customizeFeatureA = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureA"]));
    }
    if (m.find("CustomizeFeatureB") != m.end() && !m["CustomizeFeatureB"].empty()) {
      customizeFeatureB = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureB"]));
    }
    if (m.find("CustomizeFeatureC") != m.end() && !m["CustomizeFeatureC"].empty()) {
      customizeFeatureC = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureC"]));
    }
    if (m.find("CustomizeFeatureD") != m.end() && !m["CustomizeFeatureD"].empty()) {
      customizeFeatureD = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureD"]));
    }
    if (m.find("CustomizeFeatureE") != m.end() && !m["CustomizeFeatureE"].empty()) {
      customizeFeatureE = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureE"]));
    }
    if (m.find("CustomizeFeatureF") != m.end() && !m["CustomizeFeatureF"].empty()) {
      customizeFeatureF = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureF"]));
    }
    if (m.find("CustomizeFeatureG") != m.end() && !m["CustomizeFeatureG"].empty()) {
      customizeFeatureG = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureG"]));
    }
    if (m.find("CustomizeFeatureH") != m.end() && !m["CustomizeFeatureH"].empty()) {
      customizeFeatureH = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureH"]));
    }
    if (m.find("CustomizeFeatureI") != m.end() && !m["CustomizeFeatureI"].empty()) {
      customizeFeatureI = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureI"]));
    }
    if (m.find("CustomizeFeatureJ") != m.end() && !m["CustomizeFeatureJ"].empty()) {
      customizeFeatureJ = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureJ"]));
    }
    if (m.find("EnergyEfficiency") != m.end() && !m["EnergyEfficiency"].empty()) {
      energyEfficiency = make_shared<string>(boost::any_cast<string>(m["EnergyEfficiency"]));
    }
    if (m.find("ExtraAttribute") != m.end() && !m["ExtraAttribute"].empty()) {
      extraAttribute = make_shared<string>(boost::any_cast<string>(m["ExtraAttribute"]));
    }
    if (m.find("ForestFirstId") != m.end() && !m["ForestFirstId"].empty()) {
      forestFirstId = make_shared<string>(boost::any_cast<string>(m["ForestFirstId"]));
    }
    if (m.find("ForestSecondId") != m.end() && !m["ForestSecondId"].empty()) {
      forestSecondId = make_shared<string>(boost::any_cast<string>(m["ForestSecondId"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemInfoIndex") != m.end() && !m["ItemInfoIndex"].empty()) {
      itemInfoIndex = make_shared<long>(boost::any_cast<long>(m["ItemInfoIndex"]));
    }
    if (m.find("ItemQrCode") != m.end() && !m["ItemQrCode"].empty()) {
      itemQrCode = make_shared<string>(boost::any_cast<string>(m["ItemQrCode"]));
    }
    if (m.find("ItemShortTitle") != m.end() && !m["ItemShortTitle"].empty()) {
      itemShortTitle = make_shared<string>(boost::any_cast<string>(m["ItemShortTitle"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("MemberPrice") != m.end() && !m["MemberPrice"].empty()) {
      memberPrice = make_shared<long>(boost::any_cast<long>(m["MemberPrice"]));
    }
    if (m.find("ModelNumber") != m.end() && !m["ModelNumber"].empty()) {
      modelNumber = make_shared<string>(boost::any_cast<string>(m["ModelNumber"]));
    }
    if (m.find("OptionGroups") != m.end() && !m["OptionGroups"].empty()) {
      optionGroups = make_shared<string>(boost::any_cast<string>(m["OptionGroups"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<long>(boost::any_cast<long>(m["OriginalPrice"]));
    }
    if (m.find("PriceUnit") != m.end() && !m["PriceUnit"].empty()) {
      priceUnit = make_shared<string>(boost::any_cast<string>(m["PriceUnit"]));
    }
    if (m.find("ProductionPlace") != m.end() && !m["ProductionPlace"].empty()) {
      productionPlace = make_shared<string>(boost::any_cast<string>(m["ProductionPlace"]));
    }
    if (m.find("PromotionEnd") != m.end() && !m["PromotionEnd"].empty()) {
      promotionEnd = make_shared<string>(boost::any_cast<string>(m["PromotionEnd"]));
    }
    if (m.find("PromotionReason") != m.end() && !m["PromotionReason"].empty()) {
      promotionReason = make_shared<string>(boost::any_cast<string>(m["PromotionReason"]));
    }
    if (m.find("PromotionStart") != m.end() && !m["PromotionStart"].empty()) {
      promotionStart = make_shared<string>(boost::any_cast<string>(m["PromotionStart"]));
    }
    if (m.find("PromotionText") != m.end() && !m["PromotionText"].empty()) {
      promotionText = make_shared<string>(boost::any_cast<string>(m["PromotionText"]));
    }
    if (m.find("Rank") != m.end() && !m["Rank"].empty()) {
      rank = make_shared<string>(boost::any_cast<string>(m["Rank"]));
    }
    if (m.find("SaleSpec") != m.end() && !m["SaleSpec"].empty()) {
      saleSpec = make_shared<string>(boost::any_cast<string>(m["SaleSpec"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("SuggestPrice") != m.end() && !m["SuggestPrice"].empty()) {
      suggestPrice = make_shared<long>(boost::any_cast<long>(m["SuggestPrice"]));
    }
  }


  virtual ~DescribeItemsResponseBodyItemsItemInfo() = default;
};
class DescribeItemsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeItemsResponseBodyItemsItemInfo>> itemInfo{};

  DescribeItemsResponseBodyItems() {}

  explicit DescribeItemsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (itemInfo) {
      vector<boost::any> temp1;
      for(auto item1:*itemInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ItemInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ItemInfo") != m.end() && !m["ItemInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ItemInfo"].type()) {
        vector<DescribeItemsResponseBodyItemsItemInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ItemInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeItemsResponseBodyItemsItemInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        itemInfo = make_shared<vector<DescribeItemsResponseBodyItemsItemInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeItemsResponseBodyItems() = default;
};
class DescribeItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<DescribeItemsResponseBodyItems> items{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeItemsResponseBody() {}

  explicit DescribeItemsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (items) {
      res["Items"] = items ? boost::any(items->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Items") != m.end() && !m["Items"].empty()) {
      if (typeid(map<string, boost::any>) == m["Items"].type()) {
        DescribeItemsResponseBodyItems model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Items"]));
        items = make_shared<DescribeItemsResponseBodyItems>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeItemsResponseBody() = default;
};
class DescribeItemsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeItemsResponseBody> body{};

  DescribeItemsResponse() {}

  explicit DescribeItemsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeItemsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeItemsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeItemsResponse() = default;
};
class DescribeLogisticsRequest : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};

  DescribeLogisticsRequest() {}

  explicit DescribeLogisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
  }


  virtual ~DescribeLogisticsRequest() = default;
};
class DescribeLogisticsResponseBodyLogisticsLogisticsInfo : public Darabonba::Model {
public:
  shared_ptr<bool> acceptStatus{};
  shared_ptr<string> apMacList{};
  shared_ptr<string> description{};
  shared_ptr<string> eslMacList{};
  shared_ptr<string> hasSend{};
  shared_ptr<string> logisticsDocuments{};
  shared_ptr<string> orderId{};
  shared_ptr<string> poNumber{};
  shared_ptr<string> prNumber{};

  DescribeLogisticsResponseBodyLogisticsLogisticsInfo() {}

  explicit DescribeLogisticsResponseBodyLogisticsLogisticsInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (acceptStatus) {
      res["AcceptStatus"] = boost::any(*acceptStatus);
    }
    if (apMacList) {
      res["ApMacList"] = boost::any(*apMacList);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (eslMacList) {
      res["EslMacList"] = boost::any(*eslMacList);
    }
    if (hasSend) {
      res["HasSend"] = boost::any(*hasSend);
    }
    if (logisticsDocuments) {
      res["LogisticsDocuments"] = boost::any(*logisticsDocuments);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (poNumber) {
      res["PoNumber"] = boost::any(*poNumber);
    }
    if (prNumber) {
      res["PrNumber"] = boost::any(*prNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AcceptStatus") != m.end() && !m["AcceptStatus"].empty()) {
      acceptStatus = make_shared<bool>(boost::any_cast<bool>(m["AcceptStatus"]));
    }
    if (m.find("ApMacList") != m.end() && !m["ApMacList"].empty()) {
      apMacList = make_shared<string>(boost::any_cast<string>(m["ApMacList"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EslMacList") != m.end() && !m["EslMacList"].empty()) {
      eslMacList = make_shared<string>(boost::any_cast<string>(m["EslMacList"]));
    }
    if (m.find("HasSend") != m.end() && !m["HasSend"].empty()) {
      hasSend = make_shared<string>(boost::any_cast<string>(m["HasSend"]));
    }
    if (m.find("LogisticsDocuments") != m.end() && !m["LogisticsDocuments"].empty()) {
      logisticsDocuments = make_shared<string>(boost::any_cast<string>(m["LogisticsDocuments"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PoNumber") != m.end() && !m["PoNumber"].empty()) {
      poNumber = make_shared<string>(boost::any_cast<string>(m["PoNumber"]));
    }
    if (m.find("PrNumber") != m.end() && !m["PrNumber"].empty()) {
      prNumber = make_shared<string>(boost::any_cast<string>(m["PrNumber"]));
    }
  }


  virtual ~DescribeLogisticsResponseBodyLogisticsLogisticsInfo() = default;
};
class DescribeLogisticsResponseBodyLogistics : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeLogisticsResponseBodyLogisticsLogisticsInfo>> logisticsInfo{};

  DescribeLogisticsResponseBodyLogistics() {}

  explicit DescribeLogisticsResponseBodyLogistics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logisticsInfo) {
      vector<boost::any> temp1;
      for(auto item1:*logisticsInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LogisticsInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogisticsInfo") != m.end() && !m["LogisticsInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["LogisticsInfo"].type()) {
        vector<DescribeLogisticsResponseBodyLogisticsLogisticsInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LogisticsInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeLogisticsResponseBodyLogisticsLogisticsInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        logisticsInfo = make_shared<vector<DescribeLogisticsResponseBodyLogisticsLogisticsInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeLogisticsResponseBodyLogistics() = default;
};
class DescribeLogisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<DescribeLogisticsResponseBodyLogistics> logistics{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeLogisticsResponseBody() {}

  explicit DescribeLogisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (logistics) {
      res["Logistics"] = logistics ? boost::any(logistics->toMap()) : boost::any(map<string,boost::any>({}));
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Logistics") != m.end() && !m["Logistics"].empty()) {
      if (typeid(map<string, boost::any>) == m["Logistics"].type()) {
        DescribeLogisticsResponseBodyLogistics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Logistics"]));
        logistics = make_shared<DescribeLogisticsResponseBodyLogistics>(model1);
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


  virtual ~DescribeLogisticsResponseBody() = default;
};
class DescribeLogisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeLogisticsResponseBody> body{};

  DescribeLogisticsResponse() {}

  explicit DescribeLogisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeLogisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeLogisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeLogisticsResponse() = default;
};
class DescribePayOrdersRequest : public Darabonba::Model {
public:
  shared_ptr<string> fromDate{};
  shared_ptr<string> orderId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> toDate{};

  DescribePayOrdersRequest() {}

  explicit DescribePayOrdersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fromDate) {
      res["FromDate"] = boost::any(*fromDate);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (toDate) {
      res["ToDate"] = boost::any(*toDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FromDate") != m.end() && !m["FromDate"].empty()) {
      fromDate = make_shared<string>(boost::any_cast<string>(m["FromDate"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ToDate") != m.end() && !m["ToDate"].empty()) {
      toDate = make_shared<string>(boost::any_cast<string>(m["ToDate"]));
    }
  }


  virtual ~DescribePayOrdersRequest() = default;
};
class DescribePayOrdersResponseBodyPayOrdersPayOrderInfo : public Darabonba::Model {
public:
  shared_ptr<string> commodityCode{};
  shared_ptr<string> commodityName{};
  shared_ptr<string> detailName{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtPay{};
  shared_ptr<bool> isAccepted{};
  shared_ptr<string> orderId{};
  shared_ptr<string> orderStatus{};
  shared_ptr<string> orderType{};
  shared_ptr<double> originalAmount{};
  shared_ptr<double> payAmount{};
  shared_ptr<long> quantity{};

  DescribePayOrdersResponseBodyPayOrdersPayOrderInfo() {}

  explicit DescribePayOrdersResponseBodyPayOrdersPayOrderInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (commodityCode) {
      res["CommodityCode"] = boost::any(*commodityCode);
    }
    if (commodityName) {
      res["CommodityName"] = boost::any(*commodityName);
    }
    if (detailName) {
      res["DetailName"] = boost::any(*detailName);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtPay) {
      res["GmtPay"] = boost::any(*gmtPay);
    }
    if (isAccepted) {
      res["IsAccepted"] = boost::any(*isAccepted);
    }
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (orderStatus) {
      res["OrderStatus"] = boost::any(*orderStatus);
    }
    if (orderType) {
      res["OrderType"] = boost::any(*orderType);
    }
    if (originalAmount) {
      res["OriginalAmount"] = boost::any(*originalAmount);
    }
    if (payAmount) {
      res["PayAmount"] = boost::any(*payAmount);
    }
    if (quantity) {
      res["Quantity"] = boost::any(*quantity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CommodityCode") != m.end() && !m["CommodityCode"].empty()) {
      commodityCode = make_shared<string>(boost::any_cast<string>(m["CommodityCode"]));
    }
    if (m.find("CommodityName") != m.end() && !m["CommodityName"].empty()) {
      commodityName = make_shared<string>(boost::any_cast<string>(m["CommodityName"]));
    }
    if (m.find("DetailName") != m.end() && !m["DetailName"].empty()) {
      detailName = make_shared<string>(boost::any_cast<string>(m["DetailName"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtPay") != m.end() && !m["GmtPay"].empty()) {
      gmtPay = make_shared<string>(boost::any_cast<string>(m["GmtPay"]));
    }
    if (m.find("IsAccepted") != m.end() && !m["IsAccepted"].empty()) {
      isAccepted = make_shared<bool>(boost::any_cast<bool>(m["IsAccepted"]));
    }
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("OrderStatus") != m.end() && !m["OrderStatus"].empty()) {
      orderStatus = make_shared<string>(boost::any_cast<string>(m["OrderStatus"]));
    }
    if (m.find("OrderType") != m.end() && !m["OrderType"].empty()) {
      orderType = make_shared<string>(boost::any_cast<string>(m["OrderType"]));
    }
    if (m.find("OriginalAmount") != m.end() && !m["OriginalAmount"].empty()) {
      originalAmount = make_shared<double>(boost::any_cast<double>(m["OriginalAmount"]));
    }
    if (m.find("PayAmount") != m.end() && !m["PayAmount"].empty()) {
      payAmount = make_shared<double>(boost::any_cast<double>(m["PayAmount"]));
    }
    if (m.find("Quantity") != m.end() && !m["Quantity"].empty()) {
      quantity = make_shared<long>(boost::any_cast<long>(m["Quantity"]));
    }
  }


  virtual ~DescribePayOrdersResponseBodyPayOrdersPayOrderInfo() = default;
};
class DescribePayOrdersResponseBodyPayOrders : public Darabonba::Model {
public:
  shared_ptr<vector<DescribePayOrdersResponseBodyPayOrdersPayOrderInfo>> payOrderInfo{};

  DescribePayOrdersResponseBodyPayOrders() {}

  explicit DescribePayOrdersResponseBodyPayOrders(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payOrderInfo) {
      vector<boost::any> temp1;
      for(auto item1:*payOrderInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PayOrderInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PayOrderInfo") != m.end() && !m["PayOrderInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["PayOrderInfo"].type()) {
        vector<DescribePayOrdersResponseBodyPayOrdersPayOrderInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PayOrderInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePayOrdersResponseBodyPayOrdersPayOrderInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        payOrderInfo = make_shared<vector<DescribePayOrdersResponseBodyPayOrdersPayOrderInfo>>(expect1);
      }
    }
  }


  virtual ~DescribePayOrdersResponseBodyPayOrders() = default;
};
class DescribePayOrdersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<DescribePayOrdersResponseBodyPayOrders> payOrders{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribePayOrdersResponseBody() {}

  explicit DescribePayOrdersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (payOrders) {
      res["PayOrders"] = payOrders ? boost::any(payOrders->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PayOrders") != m.end() && !m["PayOrders"].empty()) {
      if (typeid(map<string, boost::any>) == m["PayOrders"].type()) {
        DescribePayOrdersResponseBodyPayOrders model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PayOrders"]));
        payOrders = make_shared<DescribePayOrdersResponseBodyPayOrders>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePayOrdersResponseBody() = default;
};
class DescribePayOrdersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePayOrdersResponseBody> body{};

  DescribePayOrdersResponse() {}

  explicit DescribePayOrdersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePayOrdersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePayOrdersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePayOrdersResponse() = default;
};
class DescribePlanogramRailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> layer{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> railCode{};
  shared_ptr<string> shelf{};
  shared_ptr<string> storeId{};

  DescribePlanogramRailsRequest() {}

  explicit DescribePlanogramRailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (railCode) {
      res["RailCode"] = boost::any(*railCode);
    }
    if (shelf) {
      res["Shelf"] = boost::any(*shelf);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<string>(boost::any_cast<string>(m["Layer"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RailCode") != m.end() && !m["RailCode"].empty()) {
      railCode = make_shared<string>(boost::any_cast<string>(m["RailCode"]));
    }
    if (m.find("Shelf") != m.end() && !m["Shelf"].empty()) {
      shelf = make_shared<string>(boost::any_cast<string>(m["Shelf"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DescribePlanogramRailsRequest() = default;
};
class DescribePlanogramRailsResponseBodyPlanogramRailInfos : public Darabonba::Model {
public:
  shared_ptr<long> gapUnit{};
  shared_ptr<string> layer{};
  shared_ptr<string> railCode{};
  shared_ptr<string> shelf{};

  DescribePlanogramRailsResponseBodyPlanogramRailInfos() {}

  explicit DescribePlanogramRailsResponseBodyPlanogramRailInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gapUnit) {
      res["GapUnit"] = boost::any(*gapUnit);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (railCode) {
      res["RailCode"] = boost::any(*railCode);
    }
    if (shelf) {
      res["Shelf"] = boost::any(*shelf);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GapUnit") != m.end() && !m["GapUnit"].empty()) {
      gapUnit = make_shared<long>(boost::any_cast<long>(m["GapUnit"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<string>(boost::any_cast<string>(m["Layer"]));
    }
    if (m.find("RailCode") != m.end() && !m["RailCode"].empty()) {
      railCode = make_shared<string>(boost::any_cast<string>(m["RailCode"]));
    }
    if (m.find("Shelf") != m.end() && !m["Shelf"].empty()) {
      shelf = make_shared<string>(boost::any_cast<string>(m["Shelf"]));
    }
  }


  virtual ~DescribePlanogramRailsResponseBodyPlanogramRailInfos() = default;
};
class DescribePlanogramRailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<DescribePlanogramRailsResponseBodyPlanogramRailInfos>> planogramRailInfos{};
  shared_ptr<string> requestId{};
  shared_ptr<string> storeId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribePlanogramRailsResponseBody() {}

  explicit DescribePlanogramRailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (planogramRailInfos) {
      vector<boost::any> temp1;
      for(auto item1:*planogramRailInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PlanogramRailInfos"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PlanogramRailInfos") != m.end() && !m["PlanogramRailInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["PlanogramRailInfos"].type()) {
        vector<DescribePlanogramRailsResponseBodyPlanogramRailInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PlanogramRailInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribePlanogramRailsResponseBodyPlanogramRailInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        planogramRailInfos = make_shared<vector<DescribePlanogramRailsResponseBodyPlanogramRailInfos>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribePlanogramRailsResponseBody() = default;
};
class DescribePlanogramRailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePlanogramRailsResponseBody> body{};

  DescribePlanogramRailsResponse() {}

  explicit DescribePlanogramRailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePlanogramRailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePlanogramRailsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePlanogramRailsResponse() = default;
};
class DescribeStoresRequest : public Darabonba::Model {
public:
  shared_ptr<string> brand{};
  shared_ptr<string> companyId{};
  shared_ptr<string> fromDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};
  shared_ptr<string> storeName{};
  shared_ptr<string> toDate{};

  DescribeStoresRequest() {}

  explicit DescribeStoresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brand) {
      res["Brand"] = boost::any(*brand);
    }
    if (companyId) {
      res["CompanyId"] = boost::any(*companyId);
    }
    if (fromDate) {
      res["FromDate"] = boost::any(*fromDate);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (storeName) {
      res["StoreName"] = boost::any(*storeName);
    }
    if (toDate) {
      res["ToDate"] = boost::any(*toDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Brand") != m.end() && !m["Brand"].empty()) {
      brand = make_shared<string>(boost::any_cast<string>(m["Brand"]));
    }
    if (m.find("CompanyId") != m.end() && !m["CompanyId"].empty()) {
      companyId = make_shared<string>(boost::any_cast<string>(m["CompanyId"]));
    }
    if (m.find("FromDate") != m.end() && !m["FromDate"].empty()) {
      fromDate = make_shared<string>(boost::any_cast<string>(m["FromDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("StoreName") != m.end() && !m["StoreName"].empty()) {
      storeName = make_shared<string>(boost::any_cast<string>(m["StoreName"]));
    }
    if (m.find("ToDate") != m.end() && !m["ToDate"].empty()) {
      toDate = make_shared<string>(boost::any_cast<string>(m["ToDate"]));
    }
  }


  virtual ~DescribeStoresRequest() = default;
};
class DescribeStoresResponseBodyStoresStoreInfo : public Darabonba::Model {
public:
  shared_ptr<string> brand{};
  shared_ptr<string> comments{};
  shared_ptr<string> companyId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> groups{};
  shared_ptr<string> level{};
  shared_ptr<string> outId{};
  shared_ptr<string> parentId{};
  shared_ptr<string> phone{};
  shared_ptr<string> storeId{};
  shared_ptr<string> storeName{};

  DescribeStoresResponseBodyStoresStoreInfo() {}

  explicit DescribeStoresResponseBodyStoresStoreInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brand) {
      res["Brand"] = boost::any(*brand);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (companyId) {
      res["CompanyId"] = boost::any(*companyId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    if (level) {
      res["Level"] = boost::any(*level);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (parentId) {
      res["ParentId"] = boost::any(*parentId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (storeName) {
      res["StoreName"] = boost::any(*storeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Brand") != m.end() && !m["Brand"].empty()) {
      brand = make_shared<string>(boost::any_cast<string>(m["Brand"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("CompanyId") != m.end() && !m["CompanyId"].empty()) {
      companyId = make_shared<string>(boost::any_cast<string>(m["CompanyId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      groups = make_shared<string>(boost::any_cast<string>(m["Groups"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("ParentId") != m.end() && !m["ParentId"].empty()) {
      parentId = make_shared<string>(boost::any_cast<string>(m["ParentId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("StoreName") != m.end() && !m["StoreName"].empty()) {
      storeName = make_shared<string>(boost::any_cast<string>(m["StoreName"]));
    }
  }


  virtual ~DescribeStoresResponseBodyStoresStoreInfo() = default;
};
class DescribeStoresResponseBodyStores : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeStoresResponseBodyStoresStoreInfo>> storeInfo{};

  DescribeStoresResponseBodyStores() {}

  explicit DescribeStoresResponseBodyStores(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storeInfo) {
      vector<boost::any> temp1;
      for(auto item1:*storeInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StoreInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StoreInfo") != m.end() && !m["StoreInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["StoreInfo"].type()) {
        vector<DescribeStoresResponseBodyStoresStoreInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StoreInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStoresResponseBodyStoresStoreInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        storeInfo = make_shared<vector<DescribeStoresResponseBodyStoresStoreInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeStoresResponseBodyStores() = default;
};
class DescribeStoresResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeStoresResponseBodyStores> stores{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeStoresResponseBody() {}

  explicit DescribeStoresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (stores) {
      res["Stores"] = stores ? boost::any(stores->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Stores") != m.end() && !m["Stores"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stores"].type()) {
        DescribeStoresResponseBodyStores model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stores"]));
        stores = make_shared<DescribeStoresResponseBodyStores>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeStoresResponseBody() = default;
};
class DescribeStoresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStoresResponseBody> body{};

  DescribeStoresResponse() {}

  explicit DescribeStoresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStoresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStoresResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStoresResponse() = default;
};
class DescribeUserLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> fromDate{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> operateStatus{};
  shared_ptr<string> operateType{};
  shared_ptr<long> operateUserId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> reverse{};
  shared_ptr<string> storeId{};
  shared_ptr<string> toDate{};

  DescribeUserLogRequest() {}

  explicit DescribeUserLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (fromDate) {
      res["FromDate"] = boost::any(*fromDate);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (operateStatus) {
      res["OperateStatus"] = boost::any(*operateStatus);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (operateUserId) {
      res["OperateUserId"] = boost::any(*operateUserId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (toDate) {
      res["ToDate"] = boost::any(*toDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("FromDate") != m.end() && !m["FromDate"].empty()) {
      fromDate = make_shared<string>(boost::any_cast<string>(m["FromDate"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("OperateStatus") != m.end() && !m["OperateStatus"].empty()) {
      operateStatus = make_shared<string>(boost::any_cast<string>(m["OperateStatus"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("OperateUserId") != m.end() && !m["OperateUserId"].empty()) {
      operateUserId = make_shared<long>(boost::any_cast<long>(m["OperateUserId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("ToDate") != m.end() && !m["ToDate"].empty()) {
      toDate = make_shared<string>(boost::any_cast<string>(m["ToDate"]));
    }
  }


  virtual ~DescribeUserLogRequest() = default;
};
class DescribeUserLogResponseBodyUserLogsUserLogInfo : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<long> itemActionPrice{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> mac{};
  shared_ptr<string> operateStatus{};
  shared_ptr<string> operateTime{};
  shared_ptr<string> operateType{};
  shared_ptr<long> operateUserId{};
  shared_ptr<string> shelfCode{};
  shared_ptr<string> storeId{};

  DescribeUserLogResponseBodyUserLogsUserLogInfo() {}

  explicit DescribeUserLogResponseBodyUserLogsUserLogInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (itemActionPrice) {
      res["ItemActionPrice"] = boost::any(*itemActionPrice);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (operateStatus) {
      res["OperateStatus"] = boost::any(*operateStatus);
    }
    if (operateTime) {
      res["OperateTime"] = boost::any(*operateTime);
    }
    if (operateType) {
      res["OperateType"] = boost::any(*operateType);
    }
    if (operateUserId) {
      res["OperateUserId"] = boost::any(*operateUserId);
    }
    if (shelfCode) {
      res["ShelfCode"] = boost::any(*shelfCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("ItemActionPrice") != m.end() && !m["ItemActionPrice"].empty()) {
      itemActionPrice = make_shared<long>(boost::any_cast<long>(m["ItemActionPrice"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("OperateStatus") != m.end() && !m["OperateStatus"].empty()) {
      operateStatus = make_shared<string>(boost::any_cast<string>(m["OperateStatus"]));
    }
    if (m.find("OperateTime") != m.end() && !m["OperateTime"].empty()) {
      operateTime = make_shared<string>(boost::any_cast<string>(m["OperateTime"]));
    }
    if (m.find("OperateType") != m.end() && !m["OperateType"].empty()) {
      operateType = make_shared<string>(boost::any_cast<string>(m["OperateType"]));
    }
    if (m.find("OperateUserId") != m.end() && !m["OperateUserId"].empty()) {
      operateUserId = make_shared<long>(boost::any_cast<long>(m["OperateUserId"]));
    }
    if (m.find("ShelfCode") != m.end() && !m["ShelfCode"].empty()) {
      shelfCode = make_shared<string>(boost::any_cast<string>(m["ShelfCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DescribeUserLogResponseBodyUserLogsUserLogInfo() = default;
};
class DescribeUserLogResponseBodyUserLogs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUserLogResponseBodyUserLogsUserLogInfo>> userLogInfo{};

  DescribeUserLogResponseBodyUserLogs() {}

  explicit DescribeUserLogResponseBodyUserLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userLogInfo) {
      vector<boost::any> temp1;
      for(auto item1:*userLogInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserLogInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserLogInfo") != m.end() && !m["UserLogInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["UserLogInfo"].type()) {
        vector<DescribeUserLogResponseBodyUserLogsUserLogInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserLogInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserLogResponseBodyUserLogsUserLogInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userLogInfo = make_shared<vector<DescribeUserLogResponseBodyUserLogsUserLogInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeUserLogResponseBodyUserLogs() = default;
};
class DescribeUserLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeUserLogResponseBodyUserLogs> userLogs{};

  DescribeUserLogResponseBody() {}

  explicit DescribeUserLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (userLogs) {
      res["UserLogs"] = userLogs ? boost::any(userLogs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UserLogs") != m.end() && !m["UserLogs"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserLogs"].type()) {
        DescribeUserLogResponseBodyUserLogs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserLogs"]));
        userLogs = make_shared<DescribeUserLogResponseBodyUserLogs>(model1);
      }
    }
  }


  virtual ~DescribeUserLogResponseBody() = default;
};
class DescribeUserLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserLogResponseBody> body{};

  DescribeUserLogResponse() {}

  explicit DescribeUserLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserLogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserLogResponse() = default;
};
class DescribeUsersRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> userType{};

  DescribeUsersRequest() {}

  explicit DescribeUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~DescribeUsersRequest() = default;
};
class DescribeUsersResponseBodyUsersUserInfo : public Darabonba::Model {
public:
  shared_ptr<string> stores{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> userType{};

  DescribeUsersResponseBodyUsersUserInfo() {}

  explicit DescribeUsersResponseBodyUsersUserInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stores) {
      res["Stores"] = boost::any(*stores);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Stores") != m.end() && !m["Stores"].empty()) {
      stores = make_shared<string>(boost::any_cast<string>(m["Stores"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~DescribeUsersResponseBodyUsersUserInfo() = default;
};
class DescribeUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeUsersResponseBodyUsersUserInfo>> userInfo{};

  DescribeUsersResponseBodyUsers() {}

  explicit DescribeUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (userInfo) {
      vector<boost::any> temp1;
      for(auto item1:*userInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("UserInfo") != m.end() && !m["UserInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["UserInfo"].type()) {
        vector<DescribeUsersResponseBodyUsersUserInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsersResponseBodyUsersUserInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userInfo = make_shared<vector<DescribeUsersResponseBodyUsersUserInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeUsersResponseBodyUsers() = default;
};
class DescribeUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeUsersResponseBodyUsers> users{};

  DescribeUsersResponseBody() {}

  explicit DescribeUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (users) {
      res["Users"] = users ? boost::any(users->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Users") != m.end() && !m["Users"].empty()) {
      if (typeid(map<string, boost::any>) == m["Users"].type()) {
        DescribeUsersResponseBodyUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Users"]));
        users = make_shared<DescribeUsersResponseBodyUsers>(model1);
      }
    }
  }


  virtual ~DescribeUsersResponseBody() = default;
};
class DescribeUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUsersResponseBody> body{};

  DescribeUsersResponse() {}

  explicit DescribeUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUsersResponse() = default;
};
class GetCompanyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> bid{};
  shared_ptr<string> code{};
  shared_ptr<string> companyId{};
  shared_ptr<string> companyType{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  GetCompanyResponseBody() {}

  explicit GetCompanyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (companyId) {
      res["CompanyId"] = boost::any(*companyId);
    }
    if (companyType) {
      res["CompanyType"] = boost::any(*companyType);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<long>(boost::any_cast<long>(m["Bid"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CompanyId") != m.end() && !m["CompanyId"].empty()) {
      companyId = make_shared<string>(boost::any_cast<string>(m["CompanyId"]));
    }
    if (m.find("CompanyType") != m.end() && !m["CompanyType"].empty()) {
      companyType = make_shared<string>(boost::any_cast<string>(m["CompanyType"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetCompanyResponseBody() = default;
};
class GetCompanyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCompanyResponseBody> body{};

  GetCompanyResponse() {}

  explicit GetCompanyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCompanyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCompanyResponseBody>(model1);
      }
    }
  }


  virtual ~GetCompanyResponse() = default;
};
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> stores{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> userType{};

  GetUserResponseBodyUser() {}

  explicit GetUserResponseBodyUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stores) {
      res["Stores"] = boost::any(*stores);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (userType) {
      res["UserType"] = boost::any(*userType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Stores") != m.end() && !m["Stores"].empty()) {
      stores = make_shared<string>(boost::any_cast<string>(m["Stores"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("UserType") != m.end() && !m["UserType"].empty()) {
      userType = make_shared<string>(boost::any_cast<string>(m["UserType"]));
    }
  }


  virtual ~GetUserResponseBodyUser() = default;
};
class GetUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<GetUserResponseBodyUser> user{};

  GetUserResponseBody() {}

  explicit GetUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
    if (user) {
      res["User"] = user ? boost::any(user->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(map<string, boost::any>) == m["User"].type()) {
        GetUserResponseBodyUser model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["User"]));
        user = make_shared<GetUserResponseBodyUser>(model1);
      }
    }
  }


  virtual ~GetUserResponseBody() = default;
};
class GetUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserResponseBody> body{};

  GetUserResponse() {}

  explicit GetUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserResponse() = default;
};
class MapPlanogramRailRequest : public Darabonba::Model {
public:
  shared_ptr<string> layer{};
  shared_ptr<string> railCode{};
  shared_ptr<string> shelf{};
  shared_ptr<string> storeId{};

  MapPlanogramRailRequest() {}

  explicit MapPlanogramRailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (railCode) {
      res["RailCode"] = boost::any(*railCode);
    }
    if (shelf) {
      res["Shelf"] = boost::any(*shelf);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<string>(boost::any_cast<string>(m["Layer"]));
    }
    if (m.find("RailCode") != m.end() && !m["RailCode"].empty()) {
      railCode = make_shared<string>(boost::any_cast<string>(m["RailCode"]));
    }
    if (m.find("Shelf") != m.end() && !m["Shelf"].empty()) {
      shelf = make_shared<string>(boost::any_cast<string>(m["Shelf"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~MapPlanogramRailRequest() = default;
};
class MapPlanogramRailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  MapPlanogramRailResponseBody() {}

  explicit MapPlanogramRailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~MapPlanogramRailResponseBody() = default;
};
class MapPlanogramRailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<MapPlanogramRailResponseBody> body{};

  MapPlanogramRailResponse() {}

  explicit MapPlanogramRailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MapPlanogramRailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MapPlanogramRailResponseBody>(model1);
      }
    }
  }


  virtual ~MapPlanogramRailResponse() = default;
};
class RefreshTaobaoItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> outerId{};
  shared_ptr<string> skuId{};
  shared_ptr<string> storeId{};
  shared_ptr<string> taobaoItemId{};

  RefreshTaobaoItemRequest() {}

  explicit RefreshTaobaoItemRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outerId) {
      res["OuterId"] = boost::any(*outerId);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (taobaoItemId) {
      res["TaobaoItemId"] = boost::any(*taobaoItemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OuterId") != m.end() && !m["OuterId"].empty()) {
      outerId = make_shared<string>(boost::any_cast<string>(m["OuterId"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("TaobaoItemId") != m.end() && !m["TaobaoItemId"].empty()) {
      taobaoItemId = make_shared<string>(boost::any_cast<string>(m["TaobaoItemId"]));
    }
  }


  virtual ~RefreshTaobaoItemRequest() = default;
};
class RefreshTaobaoItemResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RefreshTaobaoItemResponseBody() {}

  explicit RefreshTaobaoItemResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~RefreshTaobaoItemResponseBody() = default;
};
class RefreshTaobaoItemResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshTaobaoItemResponseBody> body{};

  RefreshTaobaoItemResponse() {}

  explicit RefreshTaobaoItemResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshTaobaoItemResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshTaobaoItemResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshTaobaoItemResponse() = default;
};
class UnassignUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> userId{};

  UnassignUserRequest() {}

  explicit UnassignUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnassignUserRequest() = default;
};
class UnassignUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnassignUserResponseBody() {}

  explicit UnassignUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~UnassignUserResponseBody() = default;
};
class UnassignUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnassignUserResponseBody> body{};

  UnassignUserResponse() {}

  explicit UnassignUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnassignUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnassignUserResponseBody>(model1);
      }
    }
  }


  virtual ~UnassignUserResponse() = default;
};
class UnbindEslDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> storeId{};

  UnbindEslDeviceRequest() {}

  explicit UnbindEslDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~UnbindEslDeviceRequest() = default;
};
class UnbindEslDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnbindEslDeviceResponseBody() {}

  explicit UnbindEslDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~UnbindEslDeviceResponseBody() = default;
};
class UnbindEslDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindEslDeviceResponseBody> body{};

  UnbindEslDeviceResponse() {}

  explicit UnbindEslDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindEslDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindEslDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindEslDeviceResponse() = default;
};
class UnbindEslDeviceShelfRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> storeId{};

  UnbindEslDeviceShelfRequest() {}

  explicit UnbindEslDeviceShelfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~UnbindEslDeviceShelfRequest() = default;
};
class UnbindEslDeviceShelfResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnbindEslDeviceShelfResponseBody() {}

  explicit UnbindEslDeviceShelfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~UnbindEslDeviceShelfResponseBody() = default;
};
class UnbindEslDeviceShelfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnbindEslDeviceShelfResponseBody> body{};

  UnbindEslDeviceShelfResponse() {}

  explicit UnbindEslDeviceShelfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnbindEslDeviceShelfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnbindEslDeviceShelfResponseBody>(model1);
      }
    }
  }


  virtual ~UnbindEslDeviceShelfResponse() = default;
};
class UnmapPlanogramRailRequest : public Darabonba::Model {
public:
  shared_ptr<string> railCode{};
  shared_ptr<string> storeId{};

  UnmapPlanogramRailRequest() {}

  explicit UnmapPlanogramRailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (railCode) {
      res["RailCode"] = boost::any(*railCode);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RailCode") != m.end() && !m["RailCode"].empty()) {
      railCode = make_shared<string>(boost::any_cast<string>(m["RailCode"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~UnmapPlanogramRailRequest() = default;
};
class UnmapPlanogramRailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UnmapPlanogramRailResponseBody() {}

  explicit UnmapPlanogramRailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~UnmapPlanogramRailResponseBody() = default;
};
class UnmapPlanogramRailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnmapPlanogramRailResponseBody> body{};

  UnmapPlanogramRailResponse() {}

  explicit UnmapPlanogramRailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnmapPlanogramRailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnmapPlanogramRailResponseBody>(model1);
      }
    }
  }


  virtual ~UnmapPlanogramRailResponse() = default;
};
class UpdateEslDeviceLightRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> frequency{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> ledColor{};
  shared_ptr<long> lightUpTime{};
  shared_ptr<string> storeId{};

  UpdateEslDeviceLightRequest() {}

  explicit UpdateEslDeviceLightRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (frequency) {
      res["Frequency"] = boost::any(*frequency);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (ledColor) {
      res["LedColor"] = boost::any(*ledColor);
    }
    if (lightUpTime) {
      res["LightUpTime"] = boost::any(*lightUpTime);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("Frequency") != m.end() && !m["Frequency"].empty()) {
      frequency = make_shared<string>(boost::any_cast<string>(m["Frequency"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("LedColor") != m.end() && !m["LedColor"].empty()) {
      ledColor = make_shared<string>(boost::any_cast<string>(m["LedColor"]));
    }
    if (m.find("LightUpTime") != m.end() && !m["LightUpTime"].empty()) {
      lightUpTime = make_shared<long>(boost::any_cast<long>(m["LightUpTime"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~UpdateEslDeviceLightRequest() = default;
};
class UpdateEslDeviceLightResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> failCount{};
  shared_ptr<string> failEslBarCodes{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> successCount{};

  UpdateEslDeviceLightResponseBody() {}

  explicit UpdateEslDeviceLightResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (failEslBarCodes) {
      res["FailEslBarCodes"] = boost::any(*failEslBarCodes);
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
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("FailEslBarCodes") != m.end() && !m["FailEslBarCodes"].empty()) {
      failEslBarCodes = make_shared<string>(boost::any_cast<string>(m["FailEslBarCodes"]));
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
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
  }


  virtual ~UpdateEslDeviceLightResponseBody() = default;
};
class UpdateEslDeviceLightResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEslDeviceLightResponseBody> body{};

  UpdateEslDeviceLightResponse() {}

  explicit UpdateEslDeviceLightResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEslDeviceLightResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEslDeviceLightResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEslDeviceLightResponse() = default;
};
class UpdateStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> brand{};
  shared_ptr<string> comments{};
  shared_ptr<string> groups{};
  shared_ptr<string> outId{};
  shared_ptr<string> phone{};
  shared_ptr<string> storeId{};
  shared_ptr<string> storeName{};

  UpdateStoreRequest() {}

  explicit UpdateStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (brand) {
      res["Brand"] = boost::any(*brand);
    }
    if (comments) {
      res["Comments"] = boost::any(*comments);
    }
    if (groups) {
      res["Groups"] = boost::any(*groups);
    }
    if (outId) {
      res["OutId"] = boost::any(*outId);
    }
    if (phone) {
      res["Phone"] = boost::any(*phone);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (storeName) {
      res["StoreName"] = boost::any(*storeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Brand") != m.end() && !m["Brand"].empty()) {
      brand = make_shared<string>(boost::any_cast<string>(m["Brand"]));
    }
    if (m.find("Comments") != m.end() && !m["Comments"].empty()) {
      comments = make_shared<string>(boost::any_cast<string>(m["Comments"]));
    }
    if (m.find("Groups") != m.end() && !m["Groups"].empty()) {
      groups = make_shared<string>(boost::any_cast<string>(m["Groups"]));
    }
    if (m.find("OutId") != m.end() && !m["OutId"].empty()) {
      outId = make_shared<string>(boost::any_cast<string>(m["OutId"]));
    }
    if (m.find("Phone") != m.end() && !m["Phone"].empty()) {
      phone = make_shared<string>(boost::any_cast<string>(m["Phone"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("StoreName") != m.end() && !m["StoreName"].empty()) {
      storeName = make_shared<string>(boost::any_cast<string>(m["StoreName"]));
    }
  }


  virtual ~UpdateStoreRequest() = default;
};
class UpdateStoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateStoreResponseBody() {}

  explicit UpdateStoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
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


  virtual ~UpdateStoreResponseBody() = default;
};
class UpdateStoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStoreResponseBody> body{};

  UpdateStoreResponse() {}

  explicit UpdateStoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateStoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStoreResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStoreResponse() = default;
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
  ActivateApDeviceResponse activateApDeviceWithOptions(shared_ptr<ActivateApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivateApDeviceResponse activateApDevice(shared_ptr<ActivateApDeviceRequest> request);
  AddApDeviceResponse addApDeviceWithOptions(shared_ptr<AddApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddApDeviceResponse addApDevice(shared_ptr<AddApDeviceRequest> request);
  AddEslDeviceResponse addEslDeviceWithOptions(shared_ptr<AddEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEslDeviceResponse addEslDevice(shared_ptr<AddEslDeviceRequest> request);
  AddUserResponse addUserWithOptions(shared_ptr<AddUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserResponse addUser(shared_ptr<AddUserRequest> request);
  AssignUserResponse assignUserWithOptions(shared_ptr<AssignUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssignUserResponse assignUser(shared_ptr<AssignUserRequest> request);
  BatchInsertItemsResponse batchInsertItemsWithOptions(shared_ptr<BatchInsertItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchInsertItemsResponse batchInsertItems(shared_ptr<BatchInsertItemsRequest> request);
  BindEslDeviceResponse bindEslDeviceWithOptions(shared_ptr<BindEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindEslDeviceResponse bindEslDevice(shared_ptr<BindEslDeviceRequest> request);
  BindEslDeviceShelfResponse bindEslDeviceShelfWithOptions(shared_ptr<BindEslDeviceShelfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindEslDeviceShelfResponse bindEslDeviceShelf(shared_ptr<BindEslDeviceShelfRequest> request);
  ConfirmLogisticsResponse confirmLogisticsWithOptions(shared_ptr<ConfirmLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ConfirmLogisticsResponse confirmLogistics(shared_ptr<ConfirmLogisticsRequest> request);
  CreateStoreResponse createStoreWithOptions(shared_ptr<CreateStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStoreResponse createStore(shared_ptr<CreateStoreRequest> request);
  DeleteApDeviceResponse deleteApDeviceWithOptions(shared_ptr<DeleteApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApDeviceResponse deleteApDevice(shared_ptr<DeleteApDeviceRequest> request);
  DeleteEslDeviceResponse deleteEslDeviceWithOptions(shared_ptr<DeleteEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEslDeviceResponse deleteEslDevice(shared_ptr<DeleteEslDeviceRequest> request);
  DeleteItemResponse deleteItemWithOptions(shared_ptr<DeleteItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteItemResponse deleteItem(shared_ptr<DeleteItemRequest> request);
  DeleteItemBySkuIdResponse deleteItemBySkuIdWithOptions(shared_ptr<DeleteItemBySkuIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteItemBySkuIdResponse deleteItemBySkuId(shared_ptr<DeleteItemBySkuIdRequest> request);
  DeleteStoreResponse deleteStoreWithOptions(shared_ptr<DeleteStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteStoreResponse deleteStore(shared_ptr<DeleteStoreRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DescribeAlarmsResponse describeAlarmsWithOptions(shared_ptr<DescribeAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAlarmsResponse describeAlarms(shared_ptr<DescribeAlarmsRequest> request);
  DescribeApDevicesResponse describeApDevicesWithOptions(shared_ptr<DescribeApDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApDevicesResponse describeApDevices(shared_ptr<DescribeApDevicesRequest> request);
  DescribeEslDevicesResponse describeEslDevicesWithOptions(shared_ptr<DescribeEslDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEslDevicesResponse describeEslDevices(shared_ptr<DescribeEslDevicesRequest> request);
  DescribeItemsResponse describeItemsWithOptions(shared_ptr<DescribeItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeItemsResponse describeItems(shared_ptr<DescribeItemsRequest> request);
  DescribeLogisticsResponse describeLogisticsWithOptions(shared_ptr<DescribeLogisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeLogisticsResponse describeLogistics(shared_ptr<DescribeLogisticsRequest> request);
  DescribePayOrdersResponse describePayOrdersWithOptions(shared_ptr<DescribePayOrdersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePayOrdersResponse describePayOrders(shared_ptr<DescribePayOrdersRequest> request);
  DescribePlanogramRailsResponse describePlanogramRailsWithOptions(shared_ptr<DescribePlanogramRailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePlanogramRailsResponse describePlanogramRails(shared_ptr<DescribePlanogramRailsRequest> request);
  DescribeStoresResponse describeStoresWithOptions(shared_ptr<DescribeStoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStoresResponse describeStores(shared_ptr<DescribeStoresRequest> request);
  DescribeUserLogResponse describeUserLogWithOptions(shared_ptr<DescribeUserLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserLogResponse describeUserLog(shared_ptr<DescribeUserLogRequest> request);
  DescribeUsersResponse describeUsersWithOptions(shared_ptr<DescribeUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsersResponse describeUsers(shared_ptr<DescribeUsersRequest> request);
  GetCompanyResponse getCompanyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCompanyResponse getCompany();
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  MapPlanogramRailResponse mapPlanogramRailWithOptions(shared_ptr<MapPlanogramRailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MapPlanogramRailResponse mapPlanogramRail(shared_ptr<MapPlanogramRailRequest> request);
  RefreshTaobaoItemResponse refreshTaobaoItemWithOptions(shared_ptr<RefreshTaobaoItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshTaobaoItemResponse refreshTaobaoItem(shared_ptr<RefreshTaobaoItemRequest> request);
  UnassignUserResponse unassignUserWithOptions(shared_ptr<UnassignUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnassignUserResponse unassignUser(shared_ptr<UnassignUserRequest> request);
  UnbindEslDeviceResponse unbindEslDeviceWithOptions(shared_ptr<UnbindEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindEslDeviceResponse unbindEslDevice(shared_ptr<UnbindEslDeviceRequest> request);
  UnbindEslDeviceShelfResponse unbindEslDeviceShelfWithOptions(shared_ptr<UnbindEslDeviceShelfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindEslDeviceShelfResponse unbindEslDeviceShelf(shared_ptr<UnbindEslDeviceShelfRequest> request);
  UnmapPlanogramRailResponse unmapPlanogramRailWithOptions(shared_ptr<UnmapPlanogramRailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnmapPlanogramRailResponse unmapPlanogramRail(shared_ptr<UnmapPlanogramRailRequest> request);
  UpdateEslDeviceLightResponse updateEslDeviceLightWithOptions(shared_ptr<UpdateEslDeviceLightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEslDeviceLightResponse updateEslDeviceLight(shared_ptr<UpdateEslDeviceLightRequest> request);
  UpdateStoreResponse updateStoreWithOptions(shared_ptr<UpdateStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStoreResponse updateStore(shared_ptr<UpdateStoreRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudesl20190801

#endif
