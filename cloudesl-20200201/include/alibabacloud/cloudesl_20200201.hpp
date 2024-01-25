// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CLOUDESL20200201_H_
#define ALIBABACLOUD_CLOUDESL20200201_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cloudesl20200201 {
class ActivateApDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> apMac{};
  shared_ptr<string> extraParams{};
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
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
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
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
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
  shared_ptr<string> clientToken{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> remark{};
  shared_ptr<string> serialNumber{};
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
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
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
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
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
class AddCompanyTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceType{};
  shared_ptr<string> eslSize{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> groupId{};
  shared_ptr<bool> ifDefault{};
  shared_ptr<bool> ifMember{};
  shared_ptr<bool> ifOutOfInventory{};
  shared_ptr<bool> ifPromotion{};
  shared_ptr<bool> ifSourceCode{};
  shared_ptr<long> layout{};
  shared_ptr<string> scene{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateSceneId{};
  shared_ptr<string> templateType{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> vendor{};

  AddCompanyTemplateRequest() {}

  explicit AddCompanyTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (eslSize) {
      res["EslSize"] = boost::any(*eslSize);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (ifDefault) {
      res["IfDefault"] = boost::any(*ifDefault);
    }
    if (ifMember) {
      res["IfMember"] = boost::any(*ifMember);
    }
    if (ifOutOfInventory) {
      res["IfOutOfInventory"] = boost::any(*ifOutOfInventory);
    }
    if (ifPromotion) {
      res["IfPromotion"] = boost::any(*ifPromotion);
    }
    if (ifSourceCode) {
      res["IfSourceCode"] = boost::any(*ifSourceCode);
    }
    if (layout) {
      res["Layout"] = boost::any(*layout);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateSceneId) {
      res["TemplateSceneId"] = boost::any(*templateSceneId);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("EslSize") != m.end() && !m["EslSize"].empty()) {
      eslSize = make_shared<string>(boost::any_cast<string>(m["EslSize"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IfDefault") != m.end() && !m["IfDefault"].empty()) {
      ifDefault = make_shared<bool>(boost::any_cast<bool>(m["IfDefault"]));
    }
    if (m.find("IfMember") != m.end() && !m["IfMember"].empty()) {
      ifMember = make_shared<bool>(boost::any_cast<bool>(m["IfMember"]));
    }
    if (m.find("IfOutOfInventory") != m.end() && !m["IfOutOfInventory"].empty()) {
      ifOutOfInventory = make_shared<bool>(boost::any_cast<bool>(m["IfOutOfInventory"]));
    }
    if (m.find("IfPromotion") != m.end() && !m["IfPromotion"].empty()) {
      ifPromotion = make_shared<bool>(boost::any_cast<bool>(m["IfPromotion"]));
    }
    if (m.find("IfSourceCode") != m.end() && !m["IfSourceCode"].empty()) {
      ifSourceCode = make_shared<bool>(boost::any_cast<bool>(m["IfSourceCode"]));
    }
    if (m.find("Layout") != m.end() && !m["Layout"].empty()) {
      layout = make_shared<long>(boost::any_cast<long>(m["Layout"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateSceneId") != m.end() && !m["TemplateSceneId"].empty()) {
      templateSceneId = make_shared<string>(boost::any_cast<string>(m["TemplateSceneId"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~AddCompanyTemplateRequest() = default;
};
class AddCompanyTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddCompanyTemplateResponseBody() {}

  explicit AddCompanyTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddCompanyTemplateResponseBody() = default;
};
class AddCompanyTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddCompanyTemplateResponseBody> body{};

  AddCompanyTemplateResponse() {}

  explicit AddCompanyTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddCompanyTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddCompanyTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~AddCompanyTemplateResponse() = default;
};
class AddUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> userId{};

  AddUserRequest() {}

  explicit AddUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
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
class ApplyCompanyTemplateVersionToStoresRequest : public Darabonba::Model {
public:
  shared_ptr<string> stores{};
  shared_ptr<string> templateVersion{};

  ApplyCompanyTemplateVersionToStoresRequest() {}

  explicit ApplyCompanyTemplateVersionToStoresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stores) {
      res["Stores"] = boost::any(*stores);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Stores") != m.end() && !m["Stores"].empty()) {
      stores = make_shared<string>(boost::any_cast<string>(m["Stores"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~ApplyCompanyTemplateVersionToStoresRequest() = default;
};
class ApplyCompanyTemplateVersionToStoresResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ApplyCompanyTemplateVersionToStoresResponseBody() {}

  explicit ApplyCompanyTemplateVersionToStoresResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ApplyCompanyTemplateVersionToStoresResponseBody() = default;
};
class ApplyCompanyTemplateVersionToStoresResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyCompanyTemplateVersionToStoresResponseBody> body{};

  ApplyCompanyTemplateVersionToStoresResponse() {}

  explicit ApplyCompanyTemplateVersionToStoresResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyCompanyTemplateVersionToStoresResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyCompanyTemplateVersionToStoresResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyCompanyTemplateVersionToStoresResponse() = default;
};
class AssignUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> extraParams{};
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
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
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
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
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
  shared_ptr<bool> beClearance{};
  shared_ptr<bool> beMember{};
  shared_ptr<bool> bePromotion{};
  shared_ptr<bool> beSourceCode{};
  shared_ptr<string> brandName{};
  shared_ptr<string> categoryName{};
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
  shared_ptr<string> customizeFeatureK{};
  shared_ptr<string> customizeFeatureL{};
  shared_ptr<string> customizeFeatureM{};
  shared_ptr<string> customizeFeatureN{};
  shared_ptr<string> customizeFeatureO{};
  shared_ptr<string> customizeFeatureP{};
  shared_ptr<string> customizeFeatureQ{};
  shared_ptr<string> customizeFeatureR{};
  shared_ptr<string> customizeFeatureS{};
  shared_ptr<string> customizeFeatureT{};
  shared_ptr<string> customizeFeatureU{};
  shared_ptr<string> customizeFeatureV{};
  shared_ptr<string> customizeFeatureW{};
  shared_ptr<string> customizeFeatureX{};
  shared_ptr<string> customizeFeatureY{};
  shared_ptr<string> customizeFeatureZ{};
  shared_ptr<string> energyEfficiency{};
  shared_ptr<string> forestFirstId{};
  shared_ptr<string> forestSecondId{};
  shared_ptr<string> inventoryStatus{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> itemId{};
  shared_ptr<long> itemInfoIndex{};
  shared_ptr<string> itemPicUrl{};
  shared_ptr<string> itemQrCode{};
  shared_ptr<string> itemShortTitle{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> manufacturer{};
  shared_ptr<string> material{};
  shared_ptr<long> memberPrice{};
  shared_ptr<string> modelNumber{};
  shared_ptr<long> originalPrice{};
  shared_ptr<string> priceUnit{};
  shared_ptr<string> productionPlace{};
  shared_ptr<string> promotionEnd{};
  shared_ptr<string> promotionReason{};
  shared_ptr<string> promotionStart{};
  shared_ptr<string> promotionText{};
  shared_ptr<string> rank{};
  shared_ptr<string> saleSpec{};
  shared_ptr<long> salesPrice{};
  shared_ptr<string> skuId{};
  shared_ptr<string> sourceCode{};
  shared_ptr<long> suggestPrice{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> taxFee{};
  shared_ptr<string> templateSceneId{};

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
    if (beClearance) {
      res["BeClearance"] = boost::any(*beClearance);
    }
    if (beMember) {
      res["BeMember"] = boost::any(*beMember);
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
    if (customizeFeatureK) {
      res["CustomizeFeatureK"] = boost::any(*customizeFeatureK);
    }
    if (customizeFeatureL) {
      res["CustomizeFeatureL"] = boost::any(*customizeFeatureL);
    }
    if (customizeFeatureM) {
      res["CustomizeFeatureM"] = boost::any(*customizeFeatureM);
    }
    if (customizeFeatureN) {
      res["CustomizeFeatureN"] = boost::any(*customizeFeatureN);
    }
    if (customizeFeatureO) {
      res["CustomizeFeatureO"] = boost::any(*customizeFeatureO);
    }
    if (customizeFeatureP) {
      res["CustomizeFeatureP"] = boost::any(*customizeFeatureP);
    }
    if (customizeFeatureQ) {
      res["CustomizeFeatureQ"] = boost::any(*customizeFeatureQ);
    }
    if (customizeFeatureR) {
      res["CustomizeFeatureR"] = boost::any(*customizeFeatureR);
    }
    if (customizeFeatureS) {
      res["CustomizeFeatureS"] = boost::any(*customizeFeatureS);
    }
    if (customizeFeatureT) {
      res["CustomizeFeatureT"] = boost::any(*customizeFeatureT);
    }
    if (customizeFeatureU) {
      res["CustomizeFeatureU"] = boost::any(*customizeFeatureU);
    }
    if (customizeFeatureV) {
      res["CustomizeFeatureV"] = boost::any(*customizeFeatureV);
    }
    if (customizeFeatureW) {
      res["CustomizeFeatureW"] = boost::any(*customizeFeatureW);
    }
    if (customizeFeatureX) {
      res["CustomizeFeatureX"] = boost::any(*customizeFeatureX);
    }
    if (customizeFeatureY) {
      res["CustomizeFeatureY"] = boost::any(*customizeFeatureY);
    }
    if (customizeFeatureZ) {
      res["CustomizeFeatureZ"] = boost::any(*customizeFeatureZ);
    }
    if (energyEfficiency) {
      res["EnergyEfficiency"] = boost::any(*energyEfficiency);
    }
    if (forestFirstId) {
      res["ForestFirstId"] = boost::any(*forestFirstId);
    }
    if (forestSecondId) {
      res["ForestSecondId"] = boost::any(*forestSecondId);
    }
    if (inventoryStatus) {
      res["InventoryStatus"] = boost::any(*inventoryStatus);
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
    if (itemPicUrl) {
      res["ItemPicUrl"] = boost::any(*itemPicUrl);
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
    if (manufacturer) {
      res["Manufacturer"] = boost::any(*manufacturer);
    }
    if (material) {
      res["Material"] = boost::any(*material);
    }
    if (memberPrice) {
      res["MemberPrice"] = boost::any(*memberPrice);
    }
    if (modelNumber) {
      res["ModelNumber"] = boost::any(*modelNumber);
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
    if (salesPrice) {
      res["SalesPrice"] = boost::any(*salesPrice);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (suggestPrice) {
      res["SuggestPrice"] = boost::any(*suggestPrice);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (taxFee) {
      res["TaxFee"] = boost::any(*taxFee);
    }
    if (templateSceneId) {
      res["TemplateSceneId"] = boost::any(*templateSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPrice") != m.end() && !m["ActionPrice"].empty()) {
      actionPrice = make_shared<long>(boost::any_cast<long>(m["ActionPrice"]));
    }
    if (m.find("BeClearance") != m.end() && !m["BeClearance"].empty()) {
      beClearance = make_shared<bool>(boost::any_cast<bool>(m["BeClearance"]));
    }
    if (m.find("BeMember") != m.end() && !m["BeMember"].empty()) {
      beMember = make_shared<bool>(boost::any_cast<bool>(m["BeMember"]));
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
    if (m.find("CustomizeFeatureK") != m.end() && !m["CustomizeFeatureK"].empty()) {
      customizeFeatureK = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureK"]));
    }
    if (m.find("CustomizeFeatureL") != m.end() && !m["CustomizeFeatureL"].empty()) {
      customizeFeatureL = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureL"]));
    }
    if (m.find("CustomizeFeatureM") != m.end() && !m["CustomizeFeatureM"].empty()) {
      customizeFeatureM = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureM"]));
    }
    if (m.find("CustomizeFeatureN") != m.end() && !m["CustomizeFeatureN"].empty()) {
      customizeFeatureN = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureN"]));
    }
    if (m.find("CustomizeFeatureO") != m.end() && !m["CustomizeFeatureO"].empty()) {
      customizeFeatureO = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureO"]));
    }
    if (m.find("CustomizeFeatureP") != m.end() && !m["CustomizeFeatureP"].empty()) {
      customizeFeatureP = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureP"]));
    }
    if (m.find("CustomizeFeatureQ") != m.end() && !m["CustomizeFeatureQ"].empty()) {
      customizeFeatureQ = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureQ"]));
    }
    if (m.find("CustomizeFeatureR") != m.end() && !m["CustomizeFeatureR"].empty()) {
      customizeFeatureR = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureR"]));
    }
    if (m.find("CustomizeFeatureS") != m.end() && !m["CustomizeFeatureS"].empty()) {
      customizeFeatureS = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureS"]));
    }
    if (m.find("CustomizeFeatureT") != m.end() && !m["CustomizeFeatureT"].empty()) {
      customizeFeatureT = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureT"]));
    }
    if (m.find("CustomizeFeatureU") != m.end() && !m["CustomizeFeatureU"].empty()) {
      customizeFeatureU = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureU"]));
    }
    if (m.find("CustomizeFeatureV") != m.end() && !m["CustomizeFeatureV"].empty()) {
      customizeFeatureV = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureV"]));
    }
    if (m.find("CustomizeFeatureW") != m.end() && !m["CustomizeFeatureW"].empty()) {
      customizeFeatureW = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureW"]));
    }
    if (m.find("CustomizeFeatureX") != m.end() && !m["CustomizeFeatureX"].empty()) {
      customizeFeatureX = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureX"]));
    }
    if (m.find("CustomizeFeatureY") != m.end() && !m["CustomizeFeatureY"].empty()) {
      customizeFeatureY = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureY"]));
    }
    if (m.find("CustomizeFeatureZ") != m.end() && !m["CustomizeFeatureZ"].empty()) {
      customizeFeatureZ = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureZ"]));
    }
    if (m.find("EnergyEfficiency") != m.end() && !m["EnergyEfficiency"].empty()) {
      energyEfficiency = make_shared<string>(boost::any_cast<string>(m["EnergyEfficiency"]));
    }
    if (m.find("ForestFirstId") != m.end() && !m["ForestFirstId"].empty()) {
      forestFirstId = make_shared<string>(boost::any_cast<string>(m["ForestFirstId"]));
    }
    if (m.find("ForestSecondId") != m.end() && !m["ForestSecondId"].empty()) {
      forestSecondId = make_shared<string>(boost::any_cast<string>(m["ForestSecondId"]));
    }
    if (m.find("InventoryStatus") != m.end() && !m["InventoryStatus"].empty()) {
      inventoryStatus = make_shared<string>(boost::any_cast<string>(m["InventoryStatus"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ItemInfoIndex") != m.end() && !m["ItemInfoIndex"].empty()) {
      itemInfoIndex = make_shared<long>(boost::any_cast<long>(m["ItemInfoIndex"]));
    }
    if (m.find("ItemPicUrl") != m.end() && !m["ItemPicUrl"].empty()) {
      itemPicUrl = make_shared<string>(boost::any_cast<string>(m["ItemPicUrl"]));
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
    if (m.find("Manufacturer") != m.end() && !m["Manufacturer"].empty()) {
      manufacturer = make_shared<string>(boost::any_cast<string>(m["Manufacturer"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      material = make_shared<string>(boost::any_cast<string>(m["Material"]));
    }
    if (m.find("MemberPrice") != m.end() && !m["MemberPrice"].empty()) {
      memberPrice = make_shared<long>(boost::any_cast<long>(m["MemberPrice"]));
    }
    if (m.find("ModelNumber") != m.end() && !m["ModelNumber"].empty()) {
      modelNumber = make_shared<string>(boost::any_cast<string>(m["ModelNumber"]));
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
    if (m.find("SalesPrice") != m.end() && !m["SalesPrice"].empty()) {
      salesPrice = make_shared<long>(boost::any_cast<long>(m["SalesPrice"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("SuggestPrice") != m.end() && !m["SuggestPrice"].empty()) {
      suggestPrice = make_shared<long>(boost::any_cast<long>(m["SuggestPrice"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("TaxFee") != m.end() && !m["TaxFee"].empty()) {
      taxFee = make_shared<string>(boost::any_cast<string>(m["TaxFee"]));
    }
    if (m.find("TemplateSceneId") != m.end() && !m["TemplateSceneId"].empty()) {
      templateSceneId = make_shared<string>(boost::any_cast<string>(m["TemplateSceneId"]));
    }
  }


  virtual ~BatchInsertItemsRequestItemInfo() = default;
};
class BatchInsertItemsRequest : public Darabonba::Model {
public:
  shared_ptr<string> extraParams{};
  shared_ptr<vector<BatchInsertItemsRequestItemInfo>> itemInfo{};
  shared_ptr<string> storeId{};
  shared_ptr<bool> syncByItemId{};

  BatchInsertItemsRequest() {}

  explicit BatchInsertItemsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
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
    if (syncByItemId) {
      res["SyncByItemId"] = boost::any(*syncByItemId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
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
    if (m.find("SyncByItemId") != m.end() && !m["SyncByItemId"].empty()) {
      syncByItemId = make_shared<bool>(boost::any_cast<bool>(m["SyncByItemId"]));
    }
  }


  virtual ~BatchInsertItemsRequest() = default;
};
class BatchInsertItemsResponseBodyBatchResults : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<long> index{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  BatchInsertItemsResponseBodyBatchResults() {}

  explicit BatchInsertItemsResponseBodyBatchResults(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BatchInsertItemsResponseBodyBatchResults() = default;
};
class BatchInsertItemsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<BatchInsertItemsResponseBodyBatchResults>> batchResults{};
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
      vector<boost::any> temp1;
      for(auto item1:*batchResults){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BatchResults"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["BatchResults"].type()) {
        vector<BatchInsertItemsResponseBodyBatchResults> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BatchResults"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchInsertItemsResponseBodyBatchResults model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        batchResults = make_shared<vector<BatchInsertItemsResponseBodyBatchResults>>(expect1);
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
  shared_ptr<string> column{};
  shared_ptr<string> containerId{};
  shared_ptr<string> containerName{};
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<long> layer{};
  shared_ptr<string> layoutId{};
  shared_ptr<string> layoutName{};
  shared_ptr<string> shelf{};
  shared_ptr<string> storeId{};

  BindEslDeviceRequest() {}

  explicit BindEslDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (containerId) {
      res["ContainerId"] = boost::any(*containerId);
    }
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (layoutName) {
      res["LayoutName"] = boost::any(*layoutName);
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
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("ContainerId") != m.end() && !m["ContainerId"].empty()) {
      containerId = make_shared<string>(boost::any_cast<string>(m["ContainerId"]));
    }
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<string>(boost::any_cast<string>(m["LayoutId"]));
    }
    if (m.find("LayoutName") != m.end() && !m["LayoutName"].empty()) {
      layoutName = make_shared<string>(boost::any_cast<string>(m["LayoutName"]));
    }
    if (m.find("Shelf") != m.end() && !m["Shelf"].empty()) {
      shelf = make_shared<string>(boost::any_cast<string>(m["Shelf"]));
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
class CreateStoreRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoUnbindDays{};
  shared_ptr<bool> autoUnbindOfflineEsl{};
  shared_ptr<long> barCodeEncode{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> parentId{};
  shared_ptr<string> phone{};
  shared_ptr<string> storeName{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> userStoreCode{};

  CreateStoreRequest() {}

  explicit CreateStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUnbindDays) {
      res["AutoUnbindDays"] = boost::any(*autoUnbindDays);
    }
    if (autoUnbindOfflineEsl) {
      res["AutoUnbindOfflineEsl"] = boost::any(*autoUnbindOfflineEsl);
    }
    if (barCodeEncode) {
      res["BarCodeEncode"] = boost::any(*barCodeEncode);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
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
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (userStoreCode) {
      res["UserStoreCode"] = boost::any(*userStoreCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoUnbindDays") != m.end() && !m["AutoUnbindDays"].empty()) {
      autoUnbindDays = make_shared<long>(boost::any_cast<long>(m["AutoUnbindDays"]));
    }
    if (m.find("AutoUnbindOfflineEsl") != m.end() && !m["AutoUnbindOfflineEsl"].empty()) {
      autoUnbindOfflineEsl = make_shared<bool>(boost::any_cast<bool>(m["AutoUnbindOfflineEsl"]));
    }
    if (m.find("BarCodeEncode") != m.end() && !m["BarCodeEncode"].empty()) {
      barCodeEncode = make_shared<long>(boost::any_cast<long>(m["BarCodeEncode"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
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
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("UserStoreCode") != m.end() && !m["UserStoreCode"].empty()) {
      userStoreCode = make_shared<string>(boost::any_cast<string>(m["UserStoreCode"]));
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
  shared_ptr<string> extraParams{};
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
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
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
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
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
class DeleteCompanyTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> extraParams{};
  shared_ptr<string> templateId{};

  DeleteCompanyTemplateRequest() {}

  explicit DeleteCompanyTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
  }


  virtual ~DeleteCompanyTemplateRequest() = default;
};
class DeleteCompanyTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteCompanyTemplateResponseBody() {}

  explicit DeleteCompanyTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCompanyTemplateResponseBody() = default;
};
class DeleteCompanyTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCompanyTemplateResponseBody> body{};

  DeleteCompanyTemplateResponse() {}

  explicit DeleteCompanyTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCompanyTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCompanyTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCompanyTemplateResponse() = default;
};
class DeleteItemRequest : public Darabonba::Model {
public:
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> storeId{};
  shared_ptr<bool> unbindEslDevice{};

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
    if (unbindEslDevice) {
      res["UnbindEslDevice"] = boost::any(*unbindEslDevice);
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
    if (m.find("UnbindEslDevice") != m.end() && !m["UnbindEslDevice"].empty()) {
      unbindEslDevice = make_shared<bool>(boost::any_cast<bool>(m["UnbindEslDevice"]));
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
class DeleteStoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> extraParams{};
  shared_ptr<string> storeId{};

  DeleteStoreRequest() {}

  explicit DeleteStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
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
  shared_ptr<string> extraParams{};
  shared_ptr<string> userId{};

  DeleteUserRequest() {}

  explicit DeleteUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
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
class DescribeApDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> apMac{};
  shared_ptr<bool> beActivate{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> model{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> status{};
  shared_ptr<string> storeId{};

  DescribeApDevicesRequest() {}

  explicit DescribeApDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apMac) {
      res["ApMac"] = boost::any(*apMac);
    }
    if (beActivate) {
      res["BeActivate"] = boost::any(*beActivate);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("BeActivate") != m.end() && !m["BeActivate"].empty()) {
      beActivate = make_shared<bool>(boost::any_cast<bool>(m["BeActivate"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DescribeApDevicesRequest() = default;
};
class DescribeApDevicesResponseBodyApDevices : public Darabonba::Model {
public:
  shared_ptr<bool> beActivate{};
  shared_ptr<string> mac{};
  shared_ptr<string> model{};
  shared_ptr<string> remark{};
  shared_ptr<bool> status{};
  shared_ptr<string> storeId{};

  DescribeApDevicesResponseBodyApDevices() {}

  explicit DescribeApDevicesResponseBodyApDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beActivate) {
      res["BeActivate"] = boost::any(*beActivate);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (remark) {
      res["Remark"] = boost::any(*remark);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeActivate") != m.end() && !m["BeActivate"].empty()) {
      beActivate = make_shared<bool>(boost::any_cast<bool>(m["BeActivate"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("Remark") != m.end() && !m["Remark"].empty()) {
      remark = make_shared<string>(boost::any_cast<string>(m["Remark"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<bool>(boost::any_cast<bool>(m["Status"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DescribeApDevicesResponseBodyApDevices() = default;
};
class DescribeApDevicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeApDevicesResponseBodyApDevices>> apDevices{};
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
      vector<boost::any> temp1;
      for(auto item1:*apDevices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApDevices"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["ApDevices"].type()) {
        vector<DescribeApDevicesResponseBodyApDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApDevices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeApDevicesResponseBodyApDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        apDevices = make_shared<vector<DescribeApDevicesResponseBodyApDevices>>(expect1);
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
class DescribeAvailableEslModelsRequest : public Darabonba::Model {
public:
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeAvailableEslModelsRequest() {}

  explicit DescribeAvailableEslModelsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeAvailableEslModelsRequest() = default;
};
class DescribeAvailableEslModelsResponseBodyEslModels : public Darabonba::Model {
public:
  shared_ptr<string> deviceType{};
  shared_ptr<string> eslSize{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<long> screenHeight{};
  shared_ptr<long> screenWidth{};
  shared_ptr<string> vendor{};

  DescribeAvailableEslModelsResponseBodyEslModels() {}

  explicit DescribeAvailableEslModelsResponseBodyEslModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (eslSize) {
      res["EslSize"] = boost::any(*eslSize);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (screenHeight) {
      res["ScreenHeight"] = boost::any(*screenHeight);
    }
    if (screenWidth) {
      res["ScreenWidth"] = boost::any(*screenWidth);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("EslSize") != m.end() && !m["EslSize"].empty()) {
      eslSize = make_shared<string>(boost::any_cast<string>(m["EslSize"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ScreenHeight") != m.end() && !m["ScreenHeight"].empty()) {
      screenHeight = make_shared<long>(boost::any_cast<long>(m["ScreenHeight"]));
    }
    if (m.find("ScreenWidth") != m.end() && !m["ScreenWidth"].empty()) {
      screenWidth = make_shared<long>(boost::any_cast<long>(m["ScreenWidth"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~DescribeAvailableEslModelsResponseBodyEslModels() = default;
};
class DescribeAvailableEslModelsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<DescribeAvailableEslModelsResponseBodyEslModels>> eslModels{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeAvailableEslModelsResponseBody() {}

  explicit DescribeAvailableEslModelsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (eslModels) {
      vector<boost::any> temp1;
      for(auto item1:*eslModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EslModels"] = boost::any(temp1);
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
    if (m.find("EslModels") != m.end() && !m["EslModels"].empty()) {
      if (typeid(vector<boost::any>) == m["EslModels"].type()) {
        vector<DescribeAvailableEslModelsResponseBodyEslModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EslModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeAvailableEslModelsResponseBodyEslModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eslModels = make_shared<vector<DescribeAvailableEslModelsResponseBodyEslModels>>(expect1);
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


  virtual ~DescribeAvailableEslModelsResponseBody() = default;
};
class DescribeAvailableEslModelsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAvailableEslModelsResponseBody> body{};

  DescribeAvailableEslModelsResponse() {}

  explicit DescribeAvailableEslModelsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAvailableEslModelsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAvailableEslModelsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAvailableEslModelsResponse() = default;
};
class DescribeBindersRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> itemTitle{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};

  DescribeBindersRequest() {}

  explicit DescribeBindersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
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
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
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
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DescribeBindersRequest() = default;
};
class DescribeBindersResponseBodyEslItemBindInfos : public Darabonba::Model {
public:
  shared_ptr<string> actionPrice{};
  shared_ptr<bool> bePromotion{};
  shared_ptr<string> bindId{};
  shared_ptr<string> containerName{};
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> eslConnectAp{};
  shared_ptr<string> eslModel{};
  shared_ptr<string> eslPic{};
  shared_ptr<string> eslStatus{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemShortTitle{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> originalPrice{};
  shared_ptr<string> priceUnit{};
  shared_ptr<string> promotionEnd{};
  shared_ptr<string> promotionStart{};
  shared_ptr<string> promotionText{};
  shared_ptr<string> skuId{};
  shared_ptr<string> storeId{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateSceneId{};

  DescribeBindersResponseBodyEslItemBindInfos() {}

  explicit DescribeBindersResponseBodyEslItemBindInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (bindId) {
      res["BindId"] = boost::any(*bindId);
    }
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (eslConnectAp) {
      res["EslConnectAp"] = boost::any(*eslConnectAp);
    }
    if (eslModel) {
      res["EslModel"] = boost::any(*eslModel);
    }
    if (eslPic) {
      res["EslPic"] = boost::any(*eslPic);
    }
    if (eslStatus) {
      res["EslStatus"] = boost::any(*eslStatus);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemShortTitle) {
      res["ItemShortTitle"] = boost::any(*itemShortTitle);
    }
    if (itemTitle) {
      res["ItemTitle"] = boost::any(*itemTitle);
    }
    if (originalPrice) {
      res["OriginalPrice"] = boost::any(*originalPrice);
    }
    if (priceUnit) {
      res["PriceUnit"] = boost::any(*priceUnit);
    }
    if (promotionEnd) {
      res["PromotionEnd"] = boost::any(*promotionEnd);
    }
    if (promotionStart) {
      res["PromotionStart"] = boost::any(*promotionStart);
    }
    if (promotionText) {
      res["PromotionText"] = boost::any(*promotionText);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateSceneId) {
      res["TemplateSceneId"] = boost::any(*templateSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPrice") != m.end() && !m["ActionPrice"].empty()) {
      actionPrice = make_shared<string>(boost::any_cast<string>(m["ActionPrice"]));
    }
    if (m.find("BePromotion") != m.end() && !m["BePromotion"].empty()) {
      bePromotion = make_shared<bool>(boost::any_cast<bool>(m["BePromotion"]));
    }
    if (m.find("BindId") != m.end() && !m["BindId"].empty()) {
      bindId = make_shared<string>(boost::any_cast<string>(m["BindId"]));
    }
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("EslConnectAp") != m.end() && !m["EslConnectAp"].empty()) {
      eslConnectAp = make_shared<string>(boost::any_cast<string>(m["EslConnectAp"]));
    }
    if (m.find("EslModel") != m.end() && !m["EslModel"].empty()) {
      eslModel = make_shared<string>(boost::any_cast<string>(m["EslModel"]));
    }
    if (m.find("EslPic") != m.end() && !m["EslPic"].empty()) {
      eslPic = make_shared<string>(boost::any_cast<string>(m["EslPic"]));
    }
    if (m.find("EslStatus") != m.end() && !m["EslStatus"].empty()) {
      eslStatus = make_shared<string>(boost::any_cast<string>(m["EslStatus"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ItemShortTitle") != m.end() && !m["ItemShortTitle"].empty()) {
      itemShortTitle = make_shared<string>(boost::any_cast<string>(m["ItemShortTitle"]));
    }
    if (m.find("ItemTitle") != m.end() && !m["ItemTitle"].empty()) {
      itemTitle = make_shared<string>(boost::any_cast<string>(m["ItemTitle"]));
    }
    if (m.find("OriginalPrice") != m.end() && !m["OriginalPrice"].empty()) {
      originalPrice = make_shared<string>(boost::any_cast<string>(m["OriginalPrice"]));
    }
    if (m.find("PriceUnit") != m.end() && !m["PriceUnit"].empty()) {
      priceUnit = make_shared<string>(boost::any_cast<string>(m["PriceUnit"]));
    }
    if (m.find("PromotionEnd") != m.end() && !m["PromotionEnd"].empty()) {
      promotionEnd = make_shared<string>(boost::any_cast<string>(m["PromotionEnd"]));
    }
    if (m.find("PromotionStart") != m.end() && !m["PromotionStart"].empty()) {
      promotionStart = make_shared<string>(boost::any_cast<string>(m["PromotionStart"]));
    }
    if (m.find("PromotionText") != m.end() && !m["PromotionText"].empty()) {
      promotionText = make_shared<string>(boost::any_cast<string>(m["PromotionText"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateSceneId") != m.end() && !m["TemplateSceneId"].empty()) {
      templateSceneId = make_shared<string>(boost::any_cast<string>(m["TemplateSceneId"]));
    }
  }


  virtual ~DescribeBindersResponseBodyEslItemBindInfos() = default;
};
class DescribeBindersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<DescribeBindersResponseBodyEslItemBindInfos>> eslItemBindInfos{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeBindersResponseBody() {}

  explicit DescribeBindersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (eslItemBindInfos) {
      vector<boost::any> temp1;
      for(auto item1:*eslItemBindInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EslItemBindInfos"] = boost::any(temp1);
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
    if (m.find("EslItemBindInfos") != m.end() && !m["EslItemBindInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["EslItemBindInfos"].type()) {
        vector<DescribeBindersResponseBodyEslItemBindInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EslItemBindInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBindersResponseBodyEslItemBindInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eslItemBindInfos = make_shared<vector<DescribeBindersResponseBodyEslItemBindInfos>>(expect1);
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


  virtual ~DescribeBindersResponseBody() = default;
};
class DescribeBindersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBindersResponseBody> body{};

  DescribeBindersResponse() {}

  explicit DescribeBindersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBindersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBindersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBindersResponse() = default;
};
class DescribeCompanyTemplateVersionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  DescribeCompanyTemplateVersionsRequest() {}

  explicit DescribeCompanyTemplateVersionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~DescribeCompanyTemplateVersionsRequest() = default;
};
class DescribeCompanyTemplateVersionsResponseBodyVersions : public Darabonba::Model {
public:
  shared_ptr<string> version{};

  DescribeCompanyTemplateVersionsResponseBodyVersions() {}

  explicit DescribeCompanyTemplateVersionsResponseBodyVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeCompanyTemplateVersionsResponseBodyVersions() = default;
};
class DescribeCompanyTemplateVersionsResponseBody : public Darabonba::Model {
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
  shared_ptr<vector<DescribeCompanyTemplateVersionsResponseBodyVersions>> versions{};

  DescribeCompanyTemplateVersionsResponseBody() {}

  explicit DescribeCompanyTemplateVersionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Versions"] = boost::any(temp1);
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
    if (m.find("Versions") != m.end() && !m["Versions"].empty()) {
      if (typeid(vector<boost::any>) == m["Versions"].type()) {
        vector<DescribeCompanyTemplateVersionsResponseBodyVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCompanyTemplateVersionsResponseBodyVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<DescribeCompanyTemplateVersionsResponseBodyVersions>>(expect1);
      }
    }
  }


  virtual ~DescribeCompanyTemplateVersionsResponseBody() = default;
};
class DescribeCompanyTemplateVersionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCompanyTemplateVersionsResponseBody> body{};

  DescribeCompanyTemplateVersionsResponse() {}

  explicit DescribeCompanyTemplateVersionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCompanyTemplateVersionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCompanyTemplateVersionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCompanyTemplateVersionsResponse() = default;
};
class DescribeEslDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<string> fromDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};
  shared_ptr<string> toDate{};

  DescribeEslDeviceRequest() {}

  explicit DescribeEslDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (toDate) {
      res["ToDate"] = boost::any(*toDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("ToDate") != m.end() && !m["ToDate"].empty()) {
      toDate = make_shared<string>(boost::any_cast<string>(m["ToDate"]));
    }
  }


  virtual ~DescribeEslDeviceRequest() = default;
};
class DescribeEslDeviceResponseBodyEslDetails : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<long> itemBarCode{};
  shared_ptr<long> itemId{};
  shared_ptr<string> itemShortTitle{};
  shared_ptr<string> lastUpdateTime{};
  shared_ptr<string> status{};
  shared_ptr<string> storeId{};

  DescribeEslDeviceResponseBodyEslDetails() {}

  explicit DescribeEslDeviceResponseBodyEslDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemShortTitle) {
      res["ItemShortTitle"] = boost::any(*itemShortTitle);
    }
    if (lastUpdateTime) {
      res["LastUpdateTime"] = boost::any(*lastUpdateTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
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
      itemBarCode = make_shared<long>(boost::any_cast<long>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<long>(boost::any_cast<long>(m["ItemId"]));
    }
    if (m.find("ItemShortTitle") != m.end() && !m["ItemShortTitle"].empty()) {
      itemShortTitle = make_shared<string>(boost::any_cast<string>(m["ItemShortTitle"]));
    }
    if (m.find("LastUpdateTime") != m.end() && !m["LastUpdateTime"].empty()) {
      lastUpdateTime = make_shared<string>(boost::any_cast<string>(m["LastUpdateTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DescribeEslDeviceResponseBodyEslDetails() = default;
};
class DescribeEslDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeEslDeviceResponseBodyEslDetails>> eslDetails{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeEslDeviceResponseBody() {}

  explicit DescribeEslDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslDetails) {
      vector<boost::any> temp1;
      for(auto item1:*eslDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EslDetails"] = boost::any(temp1);
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
    if (m.find("EslDetails") != m.end() && !m["EslDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["EslDetails"].type()) {
        vector<DescribeEslDeviceResponseBodyEslDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EslDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEslDeviceResponseBodyEslDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eslDetails = make_shared<vector<DescribeEslDeviceResponseBodyEslDetails>>(expect1);
      }
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


  virtual ~DescribeEslDeviceResponseBody() = default;
};
class DescribeEslDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEslDeviceResponseBody> body{};

  DescribeEslDeviceResponse() {}

  explicit DescribeEslDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEslDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEslDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEslDeviceResponse() = default;
};
class DescribeEslDevicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> eslStatus{};
  shared_ptr<string> extraParams{};
  shared_ptr<long> fromBatteryLevel{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};
  shared_ptr<long> toBatteryLevel{};
  shared_ptr<string> type{};
  shared_ptr<string> typeEncode{};

  DescribeEslDevicesRequest() {}

  explicit DescribeEslDevicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (eslStatus) {
      res["EslStatus"] = boost::any(*eslStatus);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (fromBatteryLevel) {
      res["FromBatteryLevel"] = boost::any(*fromBatteryLevel);
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
    if (toBatteryLevel) {
      res["ToBatteryLevel"] = boost::any(*toBatteryLevel);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (typeEncode) {
      res["TypeEncode"] = boost::any(*typeEncode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("EslStatus") != m.end() && !m["EslStatus"].empty()) {
      eslStatus = make_shared<string>(boost::any_cast<string>(m["EslStatus"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("FromBatteryLevel") != m.end() && !m["FromBatteryLevel"].empty()) {
      fromBatteryLevel = make_shared<long>(boost::any_cast<long>(m["FromBatteryLevel"]));
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
    if (m.find("ToBatteryLevel") != m.end() && !m["ToBatteryLevel"].empty()) {
      toBatteryLevel = make_shared<long>(boost::any_cast<long>(m["ToBatteryLevel"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("TypeEncode") != m.end() && !m["TypeEncode"].empty()) {
      typeEncode = make_shared<string>(boost::any_cast<string>(m["TypeEncode"]));
    }
  }


  virtual ~DescribeEslDevicesRequest() = default;
};
class DescribeEslDevicesResponseBodyEslDevices : public Darabonba::Model {
public:
  shared_ptr<long> batteryLevel{};
  shared_ptr<string> eslBarCode{};
  shared_ptr<long> eslSignal{};
  shared_ptr<string> eslStatus{};
  shared_ptr<string> lastCommunicateTime{};
  shared_ptr<string> layoutId{};
  shared_ptr<string> layoutName{};
  shared_ptr<string> mac{};
  shared_ptr<string> model{};
  shared_ptr<long> screenHeight{};
  shared_ptr<long> screenWidth{};
  shared_ptr<string> storeId{};
  shared_ptr<string> type{};
  shared_ptr<string> typeEncode{};

  DescribeEslDevicesResponseBodyEslDevices() {}

  explicit DescribeEslDevicesResponseBodyEslDevices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batteryLevel) {
      res["BatteryLevel"] = boost::any(*batteryLevel);
    }
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (eslSignal) {
      res["EslSignal"] = boost::any(*eslSignal);
    }
    if (eslStatus) {
      res["EslStatus"] = boost::any(*eslStatus);
    }
    if (lastCommunicateTime) {
      res["LastCommunicateTime"] = boost::any(*lastCommunicateTime);
    }
    if (layoutId) {
      res["LayoutId"] = boost::any(*layoutId);
    }
    if (layoutName) {
      res["LayoutName"] = boost::any(*layoutName);
    }
    if (mac) {
      res["Mac"] = boost::any(*mac);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (screenHeight) {
      res["ScreenHeight"] = boost::any(*screenHeight);
    }
    if (screenWidth) {
      res["ScreenWidth"] = boost::any(*screenWidth);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (typeEncode) {
      res["TypeEncode"] = boost::any(*typeEncode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatteryLevel") != m.end() && !m["BatteryLevel"].empty()) {
      batteryLevel = make_shared<long>(boost::any_cast<long>(m["BatteryLevel"]));
    }
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("EslSignal") != m.end() && !m["EslSignal"].empty()) {
      eslSignal = make_shared<long>(boost::any_cast<long>(m["EslSignal"]));
    }
    if (m.find("EslStatus") != m.end() && !m["EslStatus"].empty()) {
      eslStatus = make_shared<string>(boost::any_cast<string>(m["EslStatus"]));
    }
    if (m.find("LastCommunicateTime") != m.end() && !m["LastCommunicateTime"].empty()) {
      lastCommunicateTime = make_shared<string>(boost::any_cast<string>(m["LastCommunicateTime"]));
    }
    if (m.find("LayoutId") != m.end() && !m["LayoutId"].empty()) {
      layoutId = make_shared<string>(boost::any_cast<string>(m["LayoutId"]));
    }
    if (m.find("LayoutName") != m.end() && !m["LayoutName"].empty()) {
      layoutName = make_shared<string>(boost::any_cast<string>(m["LayoutName"]));
    }
    if (m.find("Mac") != m.end() && !m["Mac"].empty()) {
      mac = make_shared<string>(boost::any_cast<string>(m["Mac"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("ScreenHeight") != m.end() && !m["ScreenHeight"].empty()) {
      screenHeight = make_shared<long>(boost::any_cast<long>(m["ScreenHeight"]));
    }
    if (m.find("ScreenWidth") != m.end() && !m["ScreenWidth"].empty()) {
      screenWidth = make_shared<long>(boost::any_cast<long>(m["ScreenWidth"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("TypeEncode") != m.end() && !m["TypeEncode"].empty()) {
      typeEncode = make_shared<string>(boost::any_cast<string>(m["TypeEncode"]));
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
  shared_ptr<vector<DescribeEslDevicesResponseBodyEslDevices>> eslDevices{};
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
      vector<boost::any> temp1;
      for(auto item1:*eslDevices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EslDevices"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["EslDevices"].type()) {
        vector<DescribeEslDevicesResponseBodyEslDevices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EslDevices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEslDevicesResponseBodyEslDevices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eslDevices = make_shared<vector<DescribeEslDevicesResponseBodyEslDevices>>(expect1);
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
class DescribeEslModelByTemplateVersionRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> templateVersion{};

  DescribeEslModelByTemplateVersionRequest() {}

  explicit DescribeEslModelByTemplateVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
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
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~DescribeEslModelByTemplateVersionRequest() = default;
};
class DescribeEslModelByTemplateVersionResponseBodyEslModels : public Darabonba::Model {
public:
  shared_ptr<string> deviceType{};
  shared_ptr<string> eslPhysicalSize{};
  shared_ptr<string> eslSize{};
  shared_ptr<string> image{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<long> screenHeight{};
  shared_ptr<long> screenWidth{};
  shared_ptr<string> vendor{};

  DescribeEslModelByTemplateVersionResponseBodyEslModels() {}

  explicit DescribeEslModelByTemplateVersionResponseBodyEslModels(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (eslPhysicalSize) {
      res["EslPhysicalSize"] = boost::any(*eslPhysicalSize);
    }
    if (eslSize) {
      res["EslSize"] = boost::any(*eslSize);
    }
    if (image) {
      res["Image"] = boost::any(*image);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (screenHeight) {
      res["ScreenHeight"] = boost::any(*screenHeight);
    }
    if (screenWidth) {
      res["ScreenWidth"] = boost::any(*screenWidth);
    }
    if (vendor) {
      res["Vendor"] = boost::any(*vendor);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("EslPhysicalSize") != m.end() && !m["EslPhysicalSize"].empty()) {
      eslPhysicalSize = make_shared<string>(boost::any_cast<string>(m["EslPhysicalSize"]));
    }
    if (m.find("EslSize") != m.end() && !m["EslSize"].empty()) {
      eslSize = make_shared<string>(boost::any_cast<string>(m["EslSize"]));
    }
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      image = make_shared<string>(boost::any_cast<string>(m["Image"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["ModelId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ScreenHeight") != m.end() && !m["ScreenHeight"].empty()) {
      screenHeight = make_shared<long>(boost::any_cast<long>(m["ScreenHeight"]));
    }
    if (m.find("ScreenWidth") != m.end() && !m["ScreenWidth"].empty()) {
      screenWidth = make_shared<long>(boost::any_cast<long>(m["ScreenWidth"]));
    }
    if (m.find("Vendor") != m.end() && !m["Vendor"].empty()) {
      vendor = make_shared<string>(boost::any_cast<string>(m["Vendor"]));
    }
  }


  virtual ~DescribeEslModelByTemplateVersionResponseBodyEslModels() = default;
};
class DescribeEslModelByTemplateVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<DescribeEslModelByTemplateVersionResponseBodyEslModels>> eslModels{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeEslModelByTemplateVersionResponseBody() {}

  explicit DescribeEslModelByTemplateVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (eslModels) {
      vector<boost::any> temp1;
      for(auto item1:*eslModels){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EslModels"] = boost::any(temp1);
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
    if (m.find("EslModels") != m.end() && !m["EslModels"].empty()) {
      if (typeid(vector<boost::any>) == m["EslModels"].type()) {
        vector<DescribeEslModelByTemplateVersionResponseBodyEslModels> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EslModels"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeEslModelByTemplateVersionResponseBodyEslModels model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        eslModels = make_shared<vector<DescribeEslModelByTemplateVersionResponseBodyEslModels>>(expect1);
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


  virtual ~DescribeEslModelByTemplateVersionResponseBody() = default;
};
class DescribeEslModelByTemplateVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeEslModelByTemplateVersionResponseBody> body{};

  DescribeEslModelByTemplateVersionResponse() {}

  explicit DescribeEslModelByTemplateVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeEslModelByTemplateVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeEslModelByTemplateVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeEslModelByTemplateVersionResponse() = default;
};
class DescribeItemsRequest : public Darabonba::Model {
public:
  shared_ptr<bool> bePromotion{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> itemId{};
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
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
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
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
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
class DescribeItemsResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<long> actionPrice{};
  shared_ptr<bool> beClearance{};
  shared_ptr<bool> beMember{};
  shared_ptr<bool> bePromotion{};
  shared_ptr<bool> beSourceCode{};
  shared_ptr<string> brandName{};
  shared_ptr<string> categoryName{};
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
  shared_ptr<string> customizeFeatureK{};
  shared_ptr<string> customizeFeatureL{};
  shared_ptr<string> customizeFeatureM{};
  shared_ptr<string> customizeFeatureN{};
  shared_ptr<string> customizeFeatureO{};
  shared_ptr<string> customizeFeatureP{};
  shared_ptr<string> customizeFeatureQ{};
  shared_ptr<string> customizeFeatureR{};
  shared_ptr<string> customizeFeatureS{};
  shared_ptr<string> customizeFeatureT{};
  shared_ptr<string> customizeFeatureU{};
  shared_ptr<string> customizeFeatureV{};
  shared_ptr<string> customizeFeatureW{};
  shared_ptr<string> customizeFeatureX{};
  shared_ptr<string> customizeFeatureY{};
  shared_ptr<string> customizeFeatureZ{};
  shared_ptr<string> energyEfficiency{};
  shared_ptr<string> forestFirstId{};
  shared_ptr<string> forestSecondId{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> inventoryStatus{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> itemId{};
  shared_ptr<long> itemInfoIndex{};
  shared_ptr<string> itemPicUrl{};
  shared_ptr<string> itemQrCode{};
  shared_ptr<string> itemShortTitle{};
  shared_ptr<string> itemTitle{};
  shared_ptr<string> manufacturer{};
  shared_ptr<string> material{};
  shared_ptr<long> memberPrice{};
  shared_ptr<string> modelNumber{};
  shared_ptr<long> originalPrice{};
  shared_ptr<string> priceUnit{};
  shared_ptr<string> productionPlace{};
  shared_ptr<string> promotionEnd{};
  shared_ptr<string> promotionReason{};
  shared_ptr<string> promotionStart{};
  shared_ptr<string> promotionText{};
  shared_ptr<string> rank{};
  shared_ptr<string> saleSpec{};
  shared_ptr<long> salesPrice{};
  shared_ptr<string> skuId{};
  shared_ptr<string> sourceCode{};
  shared_ptr<long> suggestPrice{};
  shared_ptr<string> supplierName{};
  shared_ptr<string> taxFee{};
  shared_ptr<string> templateSceneId{};

  DescribeItemsResponseBodyItems() {}

  explicit DescribeItemsResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionPrice) {
      res["ActionPrice"] = boost::any(*actionPrice);
    }
    if (beClearance) {
      res["BeClearance"] = boost::any(*beClearance);
    }
    if (beMember) {
      res["BeMember"] = boost::any(*beMember);
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
    if (customizeFeatureK) {
      res["CustomizeFeatureK"] = boost::any(*customizeFeatureK);
    }
    if (customizeFeatureL) {
      res["CustomizeFeatureL"] = boost::any(*customizeFeatureL);
    }
    if (customizeFeatureM) {
      res["CustomizeFeatureM"] = boost::any(*customizeFeatureM);
    }
    if (customizeFeatureN) {
      res["CustomizeFeatureN"] = boost::any(*customizeFeatureN);
    }
    if (customizeFeatureO) {
      res["CustomizeFeatureO"] = boost::any(*customizeFeatureO);
    }
    if (customizeFeatureP) {
      res["CustomizeFeatureP"] = boost::any(*customizeFeatureP);
    }
    if (customizeFeatureQ) {
      res["CustomizeFeatureQ"] = boost::any(*customizeFeatureQ);
    }
    if (customizeFeatureR) {
      res["CustomizeFeatureR"] = boost::any(*customizeFeatureR);
    }
    if (customizeFeatureS) {
      res["CustomizeFeatureS"] = boost::any(*customizeFeatureS);
    }
    if (customizeFeatureT) {
      res["CustomizeFeatureT"] = boost::any(*customizeFeatureT);
    }
    if (customizeFeatureU) {
      res["CustomizeFeatureU"] = boost::any(*customizeFeatureU);
    }
    if (customizeFeatureV) {
      res["CustomizeFeatureV"] = boost::any(*customizeFeatureV);
    }
    if (customizeFeatureW) {
      res["CustomizeFeatureW"] = boost::any(*customizeFeatureW);
    }
    if (customizeFeatureX) {
      res["CustomizeFeatureX"] = boost::any(*customizeFeatureX);
    }
    if (customizeFeatureY) {
      res["CustomizeFeatureY"] = boost::any(*customizeFeatureY);
    }
    if (customizeFeatureZ) {
      res["CustomizeFeatureZ"] = boost::any(*customizeFeatureZ);
    }
    if (energyEfficiency) {
      res["EnergyEfficiency"] = boost::any(*energyEfficiency);
    }
    if (forestFirstId) {
      res["ForestFirstId"] = boost::any(*forestFirstId);
    }
    if (forestSecondId) {
      res["ForestSecondId"] = boost::any(*forestSecondId);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (inventoryStatus) {
      res["InventoryStatus"] = boost::any(*inventoryStatus);
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
    if (itemPicUrl) {
      res["ItemPicUrl"] = boost::any(*itemPicUrl);
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
    if (manufacturer) {
      res["Manufacturer"] = boost::any(*manufacturer);
    }
    if (material) {
      res["Material"] = boost::any(*material);
    }
    if (memberPrice) {
      res["MemberPrice"] = boost::any(*memberPrice);
    }
    if (modelNumber) {
      res["ModelNumber"] = boost::any(*modelNumber);
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
    if (salesPrice) {
      res["SalesPrice"] = boost::any(*salesPrice);
    }
    if (skuId) {
      res["SkuId"] = boost::any(*skuId);
    }
    if (sourceCode) {
      res["SourceCode"] = boost::any(*sourceCode);
    }
    if (suggestPrice) {
      res["SuggestPrice"] = boost::any(*suggestPrice);
    }
    if (supplierName) {
      res["SupplierName"] = boost::any(*supplierName);
    }
    if (taxFee) {
      res["TaxFee"] = boost::any(*taxFee);
    }
    if (templateSceneId) {
      res["TemplateSceneId"] = boost::any(*templateSceneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPrice") != m.end() && !m["ActionPrice"].empty()) {
      actionPrice = make_shared<long>(boost::any_cast<long>(m["ActionPrice"]));
    }
    if (m.find("BeClearance") != m.end() && !m["BeClearance"].empty()) {
      beClearance = make_shared<bool>(boost::any_cast<bool>(m["BeClearance"]));
    }
    if (m.find("BeMember") != m.end() && !m["BeMember"].empty()) {
      beMember = make_shared<bool>(boost::any_cast<bool>(m["BeMember"]));
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
    if (m.find("CustomizeFeatureK") != m.end() && !m["CustomizeFeatureK"].empty()) {
      customizeFeatureK = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureK"]));
    }
    if (m.find("CustomizeFeatureL") != m.end() && !m["CustomizeFeatureL"].empty()) {
      customizeFeatureL = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureL"]));
    }
    if (m.find("CustomizeFeatureM") != m.end() && !m["CustomizeFeatureM"].empty()) {
      customizeFeatureM = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureM"]));
    }
    if (m.find("CustomizeFeatureN") != m.end() && !m["CustomizeFeatureN"].empty()) {
      customizeFeatureN = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureN"]));
    }
    if (m.find("CustomizeFeatureO") != m.end() && !m["CustomizeFeatureO"].empty()) {
      customizeFeatureO = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureO"]));
    }
    if (m.find("CustomizeFeatureP") != m.end() && !m["CustomizeFeatureP"].empty()) {
      customizeFeatureP = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureP"]));
    }
    if (m.find("CustomizeFeatureQ") != m.end() && !m["CustomizeFeatureQ"].empty()) {
      customizeFeatureQ = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureQ"]));
    }
    if (m.find("CustomizeFeatureR") != m.end() && !m["CustomizeFeatureR"].empty()) {
      customizeFeatureR = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureR"]));
    }
    if (m.find("CustomizeFeatureS") != m.end() && !m["CustomizeFeatureS"].empty()) {
      customizeFeatureS = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureS"]));
    }
    if (m.find("CustomizeFeatureT") != m.end() && !m["CustomizeFeatureT"].empty()) {
      customizeFeatureT = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureT"]));
    }
    if (m.find("CustomizeFeatureU") != m.end() && !m["CustomizeFeatureU"].empty()) {
      customizeFeatureU = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureU"]));
    }
    if (m.find("CustomizeFeatureV") != m.end() && !m["CustomizeFeatureV"].empty()) {
      customizeFeatureV = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureV"]));
    }
    if (m.find("CustomizeFeatureW") != m.end() && !m["CustomizeFeatureW"].empty()) {
      customizeFeatureW = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureW"]));
    }
    if (m.find("CustomizeFeatureX") != m.end() && !m["CustomizeFeatureX"].empty()) {
      customizeFeatureX = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureX"]));
    }
    if (m.find("CustomizeFeatureY") != m.end() && !m["CustomizeFeatureY"].empty()) {
      customizeFeatureY = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureY"]));
    }
    if (m.find("CustomizeFeatureZ") != m.end() && !m["CustomizeFeatureZ"].empty()) {
      customizeFeatureZ = make_shared<string>(boost::any_cast<string>(m["CustomizeFeatureZ"]));
    }
    if (m.find("EnergyEfficiency") != m.end() && !m["EnergyEfficiency"].empty()) {
      energyEfficiency = make_shared<string>(boost::any_cast<string>(m["EnergyEfficiency"]));
    }
    if (m.find("ForestFirstId") != m.end() && !m["ForestFirstId"].empty()) {
      forestFirstId = make_shared<string>(boost::any_cast<string>(m["ForestFirstId"]));
    }
    if (m.find("ForestSecondId") != m.end() && !m["ForestSecondId"].empty()) {
      forestSecondId = make_shared<string>(boost::any_cast<string>(m["ForestSecondId"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("InventoryStatus") != m.end() && !m["InventoryStatus"].empty()) {
      inventoryStatus = make_shared<string>(boost::any_cast<string>(m["InventoryStatus"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ItemInfoIndex") != m.end() && !m["ItemInfoIndex"].empty()) {
      itemInfoIndex = make_shared<long>(boost::any_cast<long>(m["ItemInfoIndex"]));
    }
    if (m.find("ItemPicUrl") != m.end() && !m["ItemPicUrl"].empty()) {
      itemPicUrl = make_shared<string>(boost::any_cast<string>(m["ItemPicUrl"]));
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
    if (m.find("Manufacturer") != m.end() && !m["Manufacturer"].empty()) {
      manufacturer = make_shared<string>(boost::any_cast<string>(m["Manufacturer"]));
    }
    if (m.find("Material") != m.end() && !m["Material"].empty()) {
      material = make_shared<string>(boost::any_cast<string>(m["Material"]));
    }
    if (m.find("MemberPrice") != m.end() && !m["MemberPrice"].empty()) {
      memberPrice = make_shared<long>(boost::any_cast<long>(m["MemberPrice"]));
    }
    if (m.find("ModelNumber") != m.end() && !m["ModelNumber"].empty()) {
      modelNumber = make_shared<string>(boost::any_cast<string>(m["ModelNumber"]));
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
    if (m.find("SalesPrice") != m.end() && !m["SalesPrice"].empty()) {
      salesPrice = make_shared<long>(boost::any_cast<long>(m["SalesPrice"]));
    }
    if (m.find("SkuId") != m.end() && !m["SkuId"].empty()) {
      skuId = make_shared<string>(boost::any_cast<string>(m["SkuId"]));
    }
    if (m.find("SourceCode") != m.end() && !m["SourceCode"].empty()) {
      sourceCode = make_shared<string>(boost::any_cast<string>(m["SourceCode"]));
    }
    if (m.find("SuggestPrice") != m.end() && !m["SuggestPrice"].empty()) {
      suggestPrice = make_shared<long>(boost::any_cast<long>(m["SuggestPrice"]));
    }
    if (m.find("SupplierName") != m.end() && !m["SupplierName"].empty()) {
      supplierName = make_shared<string>(boost::any_cast<string>(m["SupplierName"]));
    }
    if (m.find("TaxFee") != m.end() && !m["TaxFee"].empty()) {
      taxFee = make_shared<string>(boost::any_cast<string>(m["TaxFee"]));
    }
    if (m.find("TemplateSceneId") != m.end() && !m["TemplateSceneId"].empty()) {
      templateSceneId = make_shared<string>(boost::any_cast<string>(m["TemplateSceneId"]));
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
  shared_ptr<vector<DescribeItemsResponseBodyItems>> items{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> templateSceneId{};
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
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
    if (templateSceneId) {
      res["TemplateSceneId"] = boost::any(*templateSceneId);
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
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeItemsResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeItemsResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeItemsResponseBodyItems>>(expect1);
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
    if (m.find("TemplateSceneId") != m.end() && !m["TemplateSceneId"].empty()) {
      templateSceneId = make_shared<string>(boost::any_cast<string>(m["TemplateSceneId"]));
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
class DescribeStoreByTemplateVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> templateVersion{};

  DescribeStoreByTemplateVersionRequest() {}

  explicit DescribeStoreByTemplateVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~DescribeStoreByTemplateVersionRequest() = default;
};
class DescribeStoreByTemplateVersionResponseBodyStores : public Darabonba::Model {
public:
  shared_ptr<string> gmtModified{};
  shared_ptr<string> level{};
  shared_ptr<string> parentId{};
  shared_ptr<string> phone{};
  shared_ptr<string> storeId{};
  shared_ptr<string> storeName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> userStoreCode{};

  DescribeStoreByTemplateVersionResponseBodyStores() {}

  explicit DescribeStoreByTemplateVersionResponseBodyStores(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (level) {
      res["Level"] = boost::any(*level);
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
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (userStoreCode) {
      res["UserStoreCode"] = boost::any(*userStoreCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
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
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("UserStoreCode") != m.end() && !m["UserStoreCode"].empty()) {
      userStoreCode = make_shared<string>(boost::any_cast<string>(m["UserStoreCode"]));
    }
  }


  virtual ~DescribeStoreByTemplateVersionResponseBodyStores() = default;
};
class DescribeStoreByTemplateVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeStoreByTemplateVersionResponseBodyStores>> stores{};
  shared_ptr<bool> success{};

  DescribeStoreByTemplateVersionResponseBody() {}

  explicit DescribeStoreByTemplateVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (stores) {
      vector<boost::any> temp1;
      for(auto item1:*stores){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stores"] = boost::any(temp1);
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
    if (m.find("Stores") != m.end() && !m["Stores"].empty()) {
      if (typeid(vector<boost::any>) == m["Stores"].type()) {
        vector<DescribeStoreByTemplateVersionResponseBodyStores> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stores"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStoreByTemplateVersionResponseBodyStores model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stores = make_shared<vector<DescribeStoreByTemplateVersionResponseBodyStores>>(expect1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeStoreByTemplateVersionResponseBody() = default;
};
class DescribeStoreByTemplateVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStoreByTemplateVersionResponseBody> body{};

  DescribeStoreByTemplateVersionResponse() {}

  explicit DescribeStoreByTemplateVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStoreByTemplateVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStoreByTemplateVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStoreByTemplateVersionResponse() = default;
};
class DescribeStoreConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> extraParams{};
  shared_ptr<string> storeId{};

  DescribeStoreConfigRequest() {}

  explicit DescribeStoreConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
  }


  virtual ~DescribeStoreConfigRequest() = default;
};
class DescribeStoreConfigResponseBodyStoreConfigInfoSubscribeContents : public Darabonba::Model {
public:
  shared_ptr<bool> atAll{};
  shared_ptr<string> atMobileList{};
  shared_ptr<string> category{};
  shared_ptr<bool> enable{};
  shared_ptr<string> threshold{};

  DescribeStoreConfigResponseBodyStoreConfigInfoSubscribeContents() {}

  explicit DescribeStoreConfigResponseBodyStoreConfigInfoSubscribeContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (atAll) {
      res["AtAll"] = boost::any(*atAll);
    }
    if (atMobileList) {
      res["AtMobileList"] = boost::any(*atMobileList);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (enable) {
      res["Enable"] = boost::any(*enable);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AtAll") != m.end() && !m["AtAll"].empty()) {
      atAll = make_shared<bool>(boost::any_cast<bool>(m["AtAll"]));
    }
    if (m.find("AtMobileList") != m.end() && !m["AtMobileList"].empty()) {
      atMobileList = make_shared<string>(boost::any_cast<string>(m["AtMobileList"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Enable") != m.end() && !m["Enable"].empty()) {
      enable = make_shared<bool>(boost::any_cast<bool>(m["Enable"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<string>(boost::any_cast<string>(m["Threshold"]));
    }
  }


  virtual ~DescribeStoreConfigResponseBodyStoreConfigInfoSubscribeContents() = default;
};
class DescribeStoreConfigResponseBodyStoreConfigInfo : public Darabonba::Model {
public:
  shared_ptr<bool> enableNotification{};
  shared_ptr<string> notificationSilentTimes{};
  shared_ptr<string> notificationWebHook{};
  shared_ptr<string> storeId{};
  shared_ptr<vector<DescribeStoreConfigResponseBodyStoreConfigInfoSubscribeContents>> subscribeContents{};

  DescribeStoreConfigResponseBodyStoreConfigInfo() {}

  explicit DescribeStoreConfigResponseBodyStoreConfigInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableNotification) {
      res["EnableNotification"] = boost::any(*enableNotification);
    }
    if (notificationSilentTimes) {
      res["NotificationSilentTimes"] = boost::any(*notificationSilentTimes);
    }
    if (notificationWebHook) {
      res["NotificationWebHook"] = boost::any(*notificationWebHook);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (subscribeContents) {
      vector<boost::any> temp1;
      for(auto item1:*subscribeContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SubscribeContents"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableNotification") != m.end() && !m["EnableNotification"].empty()) {
      enableNotification = make_shared<bool>(boost::any_cast<bool>(m["EnableNotification"]));
    }
    if (m.find("NotificationSilentTimes") != m.end() && !m["NotificationSilentTimes"].empty()) {
      notificationSilentTimes = make_shared<string>(boost::any_cast<string>(m["NotificationSilentTimes"]));
    }
    if (m.find("NotificationWebHook") != m.end() && !m["NotificationWebHook"].empty()) {
      notificationWebHook = make_shared<string>(boost::any_cast<string>(m["NotificationWebHook"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("SubscribeContents") != m.end() && !m["SubscribeContents"].empty()) {
      if (typeid(vector<boost::any>) == m["SubscribeContents"].type()) {
        vector<DescribeStoreConfigResponseBodyStoreConfigInfoSubscribeContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SubscribeContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStoreConfigResponseBodyStoreConfigInfoSubscribeContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subscribeContents = make_shared<vector<DescribeStoreConfigResponseBodyStoreConfigInfoSubscribeContents>>(expect1);
      }
    }
  }


  virtual ~DescribeStoreConfigResponseBodyStoreConfigInfo() = default;
};
class DescribeStoreConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeStoreConfigResponseBodyStoreConfigInfo> storeConfigInfo{};
  shared_ptr<bool> success{};

  DescribeStoreConfigResponseBody() {}

  explicit DescribeStoreConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (storeConfigInfo) {
      res["StoreConfigInfo"] = storeConfigInfo ? boost::any(storeConfigInfo->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("StoreConfigInfo") != m.end() && !m["StoreConfigInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["StoreConfigInfo"].type()) {
        DescribeStoreConfigResponseBodyStoreConfigInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StoreConfigInfo"]));
        storeConfigInfo = make_shared<DescribeStoreConfigResponseBodyStoreConfigInfo>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeStoreConfigResponseBody() = default;
};
class DescribeStoreConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStoreConfigResponseBody> body{};

  DescribeStoreConfigResponse() {}

  explicit DescribeStoreConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStoreConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStoreConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStoreConfigResponse() = default;
};
class DescribeStoresRequest : public Darabonba::Model {
public:
  shared_ptr<string> extraParams{};
  shared_ptr<string> fromDate{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};
  shared_ptr<string> storeName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> toDate{};
  shared_ptr<string> userStoreCode{};

  DescribeStoresRequest() {}

  explicit DescribeStoresRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
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
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (toDate) {
      res["ToDate"] = boost::any(*toDate);
    }
    if (userStoreCode) {
      res["UserStoreCode"] = boost::any(*userStoreCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
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
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("ToDate") != m.end() && !m["ToDate"].empty()) {
      toDate = make_shared<string>(boost::any_cast<string>(m["ToDate"]));
    }
    if (m.find("UserStoreCode") != m.end() && !m["UserStoreCode"].empty()) {
      userStoreCode = make_shared<string>(boost::any_cast<string>(m["UserStoreCode"]));
    }
  }


  virtual ~DescribeStoresRequest() = default;
};
class DescribeStoresResponseBodyStores : public Darabonba::Model {
public:
  shared_ptr<long> autoUnbindDays{};
  shared_ptr<bool> autoUnbindOfflineEsl{};
  shared_ptr<long> barCodeEncode{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> level{};
  shared_ptr<string> parentId{};
  shared_ptr<string> phone{};
  shared_ptr<string> storeId{};
  shared_ptr<string> storeName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> userStoreCode{};

  DescribeStoresResponseBodyStores() {}

  explicit DescribeStoresResponseBodyStores(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUnbindDays) {
      res["AutoUnbindDays"] = boost::any(*autoUnbindDays);
    }
    if (autoUnbindOfflineEsl) {
      res["AutoUnbindOfflineEsl"] = boost::any(*autoUnbindOfflineEsl);
    }
    if (barCodeEncode) {
      res["BarCodeEncode"] = boost::any(*barCodeEncode);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (level) {
      res["Level"] = boost::any(*level);
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
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (userStoreCode) {
      res["UserStoreCode"] = boost::any(*userStoreCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoUnbindDays") != m.end() && !m["AutoUnbindDays"].empty()) {
      autoUnbindDays = make_shared<long>(boost::any_cast<long>(m["AutoUnbindDays"]));
    }
    if (m.find("AutoUnbindOfflineEsl") != m.end() && !m["AutoUnbindOfflineEsl"].empty()) {
      autoUnbindOfflineEsl = make_shared<bool>(boost::any_cast<bool>(m["AutoUnbindOfflineEsl"]));
    }
    if (m.find("BarCodeEncode") != m.end() && !m["BarCodeEncode"].empty()) {
      barCodeEncode = make_shared<long>(boost::any_cast<long>(m["BarCodeEncode"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Level") != m.end() && !m["Level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["Level"]));
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
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("UserStoreCode") != m.end() && !m["UserStoreCode"].empty()) {
      userStoreCode = make_shared<string>(boost::any_cast<string>(m["UserStoreCode"]));
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
  shared_ptr<vector<DescribeStoresResponseBodyStores>> stores{};
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
      vector<boost::any> temp1;
      for(auto item1:*stores){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stores"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Stores"].type()) {
        vector<DescribeStoresResponseBodyStores> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stores"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStoresResponseBodyStores model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stores = make_shared<vector<DescribeStoresResponseBodyStores>>(expect1);
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
class DescribeTemplateByModelRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceType{};
  shared_ptr<string> eslSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> templateVersion{};

  DescribeTemplateByModelRequest() {}

  explicit DescribeTemplateByModelRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceType) {
      res["DeviceType"] = boost::any(*deviceType);
    }
    if (eslSize) {
      res["EslSize"] = boost::any(*eslSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceType") != m.end() && !m["DeviceType"].empty()) {
      deviceType = make_shared<string>(boost::any_cast<string>(m["DeviceType"]));
    }
    if (m.find("EslSize") != m.end() && !m["EslSize"].empty()) {
      eslSize = make_shared<string>(boost::any_cast<string>(m["EslSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~DescribeTemplateByModelRequest() = default;
};
class DescribeTemplateByModelResponseBodyItems : public Darabonba::Model {
public:
  shared_ptr<string> basePicture{};
  shared_ptr<string> brand{};
  shared_ptr<string> eslSize{};
  shared_ptr<string> eslType{};
  shared_ptr<long> height{};
  shared_ptr<string> layout{};
  shared_ptr<string> scene{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateSceneId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> width{};

  DescribeTemplateByModelResponseBodyItems() {}

  explicit DescribeTemplateByModelResponseBodyItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basePicture) {
      res["BasePicture"] = boost::any(*basePicture);
    }
    if (brand) {
      res["Brand"] = boost::any(*brand);
    }
    if (eslSize) {
      res["EslSize"] = boost::any(*eslSize);
    }
    if (eslType) {
      res["EslType"] = boost::any(*eslType);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (layout) {
      res["Layout"] = boost::any(*layout);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateSceneId) {
      res["TemplateSceneId"] = boost::any(*templateSceneId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasePicture") != m.end() && !m["BasePicture"].empty()) {
      basePicture = make_shared<string>(boost::any_cast<string>(m["BasePicture"]));
    }
    if (m.find("Brand") != m.end() && !m["Brand"].empty()) {
      brand = make_shared<string>(boost::any_cast<string>(m["Brand"]));
    }
    if (m.find("EslSize") != m.end() && !m["EslSize"].empty()) {
      eslSize = make_shared<string>(boost::any_cast<string>(m["EslSize"]));
    }
    if (m.find("EslType") != m.end() && !m["EslType"].empty()) {
      eslType = make_shared<string>(boost::any_cast<string>(m["EslType"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Layout") != m.end() && !m["Layout"].empty()) {
      layout = make_shared<string>(boost::any_cast<string>(m["Layout"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateSceneId") != m.end() && !m["TemplateSceneId"].empty()) {
      templateSceneId = make_shared<string>(boost::any_cast<string>(m["TemplateSceneId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~DescribeTemplateByModelResponseBodyItems() = default;
};
class DescribeTemplateByModelResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<vector<DescribeTemplateByModelResponseBodyItems>> items{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeTemplateByModelResponseBody() {}

  explicit DescribeTemplateByModelResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      vector<boost::any> temp1;
      for(auto item1:*items){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Items"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Items"].type()) {
        vector<DescribeTemplateByModelResponseBodyItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Items"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTemplateByModelResponseBodyItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        items = make_shared<vector<DescribeTemplateByModelResponseBodyItems>>(expect1);
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


  virtual ~DescribeTemplateByModelResponseBody() = default;
};
class DescribeTemplateByModelResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTemplateByModelResponseBody> body{};

  DescribeTemplateByModelResponse() {}

  explicit DescribeTemplateByModelResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTemplateByModelResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTemplateByModelResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTemplateByModelResponse() = default;
};
class DescribeUserLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> fromDate{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> itemShortTitle{};
  shared_ptr<string> logId{};
  shared_ptr<string> operationStatus{};
  shared_ptr<string> operationType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};
  shared_ptr<string> toDate{};
  shared_ptr<string> userId{};

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
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (fromDate) {
      res["FromDate"] = boost::any(*fromDate);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemShortTitle) {
      res["ItemShortTitle"] = boost::any(*itemShortTitle);
    }
    if (logId) {
      res["LogId"] = boost::any(*logId);
    }
    if (operationStatus) {
      res["OperationStatus"] = boost::any(*operationStatus);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
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
    if (toDate) {
      res["ToDate"] = boost::any(*toDate);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("FromDate") != m.end() && !m["FromDate"].empty()) {
      fromDate = make_shared<string>(boost::any_cast<string>(m["FromDate"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemShortTitle") != m.end() && !m["ItemShortTitle"].empty()) {
      itemShortTitle = make_shared<string>(boost::any_cast<string>(m["ItemShortTitle"]));
    }
    if (m.find("LogId") != m.end() && !m["LogId"].empty()) {
      logId = make_shared<string>(boost::any_cast<string>(m["LogId"]));
    }
    if (m.find("OperationStatus") != m.end() && !m["OperationStatus"].empty()) {
      operationStatus = make_shared<string>(boost::any_cast<string>(m["OperationStatus"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
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
    if (m.find("ToDate") != m.end() && !m["ToDate"].empty()) {
      toDate = make_shared<string>(boost::any_cast<string>(m["ToDate"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~DescribeUserLogRequest() = default;
};
class DescribeUserLogResponseBodyUserLogs : public Darabonba::Model {
public:
  shared_ptr<string> actionPrice{};
  shared_ptr<bool> bePromotion{};
  shared_ptr<string> eslBarCode{};
  shared_ptr<long> eslSignal{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> i18nResultKey{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<string> itemId{};
  shared_ptr<string> itemShortTitle{};
  shared_ptr<string> logId{};
  shared_ptr<string> operationResponseTime{};
  shared_ptr<string> operationSendTime{};
  shared_ptr<string> operationStatus{};
  shared_ptr<string> operationType{};
  shared_ptr<string> priceUnit{};
  shared_ptr<string> resultCode{};
  shared_ptr<string> spendTime{};
  shared_ptr<string> storeId{};
  shared_ptr<string> userId{};

  DescribeUserLogResponseBodyUserLogs() {}

  explicit DescribeUserLogResponseBodyUserLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (eslSignal) {
      res["EslSignal"] = boost::any(*eslSignal);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (i18nResultKey) {
      res["I18nResultKey"] = boost::any(*i18nResultKey);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (itemId) {
      res["ItemId"] = boost::any(*itemId);
    }
    if (itemShortTitle) {
      res["ItemShortTitle"] = boost::any(*itemShortTitle);
    }
    if (logId) {
      res["LogId"] = boost::any(*logId);
    }
    if (operationResponseTime) {
      res["OperationResponseTime"] = boost::any(*operationResponseTime);
    }
    if (operationSendTime) {
      res["OperationSendTime"] = boost::any(*operationSendTime);
    }
    if (operationStatus) {
      res["OperationStatus"] = boost::any(*operationStatus);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (priceUnit) {
      res["PriceUnit"] = boost::any(*priceUnit);
    }
    if (resultCode) {
      res["ResultCode"] = boost::any(*resultCode);
    }
    if (spendTime) {
      res["SpendTime"] = boost::any(*spendTime);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionPrice") != m.end() && !m["ActionPrice"].empty()) {
      actionPrice = make_shared<string>(boost::any_cast<string>(m["ActionPrice"]));
    }
    if (m.find("BePromotion") != m.end() && !m["BePromotion"].empty()) {
      bePromotion = make_shared<bool>(boost::any_cast<bool>(m["BePromotion"]));
    }
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("EslSignal") != m.end() && !m["EslSignal"].empty()) {
      eslSignal = make_shared<long>(boost::any_cast<long>(m["EslSignal"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("I18nResultKey") != m.end() && !m["I18nResultKey"].empty()) {
      i18nResultKey = make_shared<string>(boost::any_cast<string>(m["I18nResultKey"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("ItemId") != m.end() && !m["ItemId"].empty()) {
      itemId = make_shared<string>(boost::any_cast<string>(m["ItemId"]));
    }
    if (m.find("ItemShortTitle") != m.end() && !m["ItemShortTitle"].empty()) {
      itemShortTitle = make_shared<string>(boost::any_cast<string>(m["ItemShortTitle"]));
    }
    if (m.find("LogId") != m.end() && !m["LogId"].empty()) {
      logId = make_shared<string>(boost::any_cast<string>(m["LogId"]));
    }
    if (m.find("OperationResponseTime") != m.end() && !m["OperationResponseTime"].empty()) {
      operationResponseTime = make_shared<string>(boost::any_cast<string>(m["OperationResponseTime"]));
    }
    if (m.find("OperationSendTime") != m.end() && !m["OperationSendTime"].empty()) {
      operationSendTime = make_shared<string>(boost::any_cast<string>(m["OperationSendTime"]));
    }
    if (m.find("OperationStatus") != m.end() && !m["OperationStatus"].empty()) {
      operationStatus = make_shared<string>(boost::any_cast<string>(m["OperationStatus"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("PriceUnit") != m.end() && !m["PriceUnit"].empty()) {
      priceUnit = make_shared<string>(boost::any_cast<string>(m["PriceUnit"]));
    }
    if (m.find("ResultCode") != m.end() && !m["ResultCode"].empty()) {
      resultCode = make_shared<string>(boost::any_cast<string>(m["ResultCode"]));
    }
    if (m.find("SpendTime") != m.end() && !m["SpendTime"].empty()) {
      spendTime = make_shared<string>(boost::any_cast<string>(m["SpendTime"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
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
  shared_ptr<vector<DescribeUserLogResponseBodyUserLogs>> userLogs{};

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
      vector<boost::any> temp1;
      for(auto item1:*userLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserLogs"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["UserLogs"].type()) {
        vector<DescribeUserLogResponseBodyUserLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUserLogResponseBodyUserLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userLogs = make_shared<vector<DescribeUserLogResponseBodyUserLogs>>(expect1);
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
  shared_ptr<string> extraParams{};
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
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
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
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
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
class DescribeUsersResponseBodyUsersDingTalkInfos : public Darabonba::Model {
public:
  shared_ptr<string> dingTalkCompanyId{};
  shared_ptr<string> dingTalkUserId{};

  DescribeUsersResponseBodyUsersDingTalkInfos() {}

  explicit DescribeUsersResponseBodyUsersDingTalkInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dingTalkCompanyId) {
      res["DingTalkCompanyId"] = boost::any(*dingTalkCompanyId);
    }
    if (dingTalkUserId) {
      res["DingTalkUserId"] = boost::any(*dingTalkUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DingTalkCompanyId") != m.end() && !m["DingTalkCompanyId"].empty()) {
      dingTalkCompanyId = make_shared<string>(boost::any_cast<string>(m["DingTalkCompanyId"]));
    }
    if (m.find("DingTalkUserId") != m.end() && !m["DingTalkUserId"].empty()) {
      dingTalkUserId = make_shared<string>(boost::any_cast<string>(m["DingTalkUserId"]));
    }
  }


  virtual ~DescribeUsersResponseBodyUsersDingTalkInfos() = default;
};
class DescribeUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<vector<DescribeUsersResponseBodyUsersDingTalkInfos>> dingTalkInfos{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> stores{};
  shared_ptr<string> userId{};
  shared_ptr<string> userName{};
  shared_ptr<string> userType{};

  DescribeUsersResponseBodyUsers() {}

  explicit DescribeUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (dingTalkInfos) {
      vector<boost::any> temp1;
      for(auto item1:*dingTalkInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DingTalkInfos"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
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
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("DingTalkInfos") != m.end() && !m["DingTalkInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DingTalkInfos"].type()) {
        vector<DescribeUsersResponseBodyUsersDingTalkInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DingTalkInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsersResponseBodyUsersDingTalkInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dingTalkInfos = make_shared<vector<DescribeUsersResponseBodyUsersDingTalkInfos>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
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
  shared_ptr<vector<DescribeUsersResponseBodyUsers>> users{};

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
      vector<boost::any> temp1;
      for(auto item1:*users){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Users"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Users"].type()) {
        vector<DescribeUsersResponseBodyUsers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Users"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeUsersResponseBodyUsers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        users = make_shared<vector<DescribeUsersResponseBodyUsers>>(expect1);
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
class GetUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> extraParams{};
  shared_ptr<string> userId{};

  GetUserRequest() {}

  explicit GetUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetUserRequest() = default;
};
class GetUserResponseBodyUserDingTalkInfos : public Darabonba::Model {
public:
  shared_ptr<string> dingTalkCompanyId{};
  shared_ptr<string> dingTalkUserId{};

  GetUserResponseBodyUserDingTalkInfos() {}

  explicit GetUserResponseBodyUserDingTalkInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dingTalkCompanyId) {
      res["DingTalkCompanyId"] = boost::any(*dingTalkCompanyId);
    }
    if (dingTalkUserId) {
      res["DingTalkUserId"] = boost::any(*dingTalkUserId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DingTalkCompanyId") != m.end() && !m["DingTalkCompanyId"].empty()) {
      dingTalkCompanyId = make_shared<string>(boost::any_cast<string>(m["DingTalkCompanyId"]));
    }
    if (m.find("DingTalkUserId") != m.end() && !m["DingTalkUserId"].empty()) {
      dingTalkUserId = make_shared<string>(boost::any_cast<string>(m["DingTalkUserId"]));
    }
  }


  virtual ~GetUserResponseBodyUserDingTalkInfos() = default;
};
class GetUserResponseBodyUser : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<vector<GetUserResponseBodyUserDingTalkInfos>> dingTalkInfos{};
  shared_ptr<string> ownerId{};
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
    if (bid) {
      res["Bid"] = boost::any(*bid);
    }
    if (dingTalkInfos) {
      vector<boost::any> temp1;
      for(auto item1:*dingTalkInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DingTalkInfos"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
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
    if (m.find("Bid") != m.end() && !m["Bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["Bid"]));
    }
    if (m.find("DingTalkInfos") != m.end() && !m["DingTalkInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["DingTalkInfos"].type()) {
        vector<GetUserResponseBodyUserDingTalkInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DingTalkInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetUserResponseBodyUserDingTalkInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dingTalkInfos = make_shared<vector<GetUserResponseBodyUserDingTalkInfos>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
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
class QueryTemplateListByGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryTemplateListByGroupIdRequest() {}

  explicit QueryTemplateListByGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryTemplateListByGroupIdRequest() = default;
};
class QueryTemplateListByGroupIdResponseBodyTemplateList : public Darabonba::Model {
public:
  shared_ptr<string> basePicture{};
  shared_ptr<string> brand{};
  shared_ptr<string> eslSize{};
  shared_ptr<string> eslType{};
  shared_ptr<string> groupId{};
  shared_ptr<long> height{};
  shared_ptr<string> layout{};
  shared_ptr<bool> relation{};
  shared_ptr<string> scene{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateSceneId{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> width{};

  QueryTemplateListByGroupIdResponseBodyTemplateList() {}

  explicit QueryTemplateListByGroupIdResponseBodyTemplateList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (basePicture) {
      res["BasePicture"] = boost::any(*basePicture);
    }
    if (brand) {
      res["Brand"] = boost::any(*brand);
    }
    if (eslSize) {
      res["EslSize"] = boost::any(*eslSize);
    }
    if (eslType) {
      res["EslType"] = boost::any(*eslType);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (layout) {
      res["Layout"] = boost::any(*layout);
    }
    if (relation) {
      res["Relation"] = boost::any(*relation);
    }
    if (scene) {
      res["Scene"] = boost::any(*scene);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateSceneId) {
      res["TemplateSceneId"] = boost::any(*templateSceneId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BasePicture") != m.end() && !m["BasePicture"].empty()) {
      basePicture = make_shared<string>(boost::any_cast<string>(m["BasePicture"]));
    }
    if (m.find("Brand") != m.end() && !m["Brand"].empty()) {
      brand = make_shared<string>(boost::any_cast<string>(m["Brand"]));
    }
    if (m.find("EslSize") != m.end() && !m["EslSize"].empty()) {
      eslSize = make_shared<string>(boost::any_cast<string>(m["EslSize"]));
    }
    if (m.find("EslType") != m.end() && !m["EslType"].empty()) {
      eslType = make_shared<string>(boost::any_cast<string>(m["EslType"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("Layout") != m.end() && !m["Layout"].empty()) {
      layout = make_shared<string>(boost::any_cast<string>(m["Layout"]));
    }
    if (m.find("Relation") != m.end() && !m["Relation"].empty()) {
      relation = make_shared<bool>(boost::any_cast<bool>(m["Relation"]));
    }
    if (m.find("Scene") != m.end() && !m["Scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["Scene"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateSceneId") != m.end() && !m["TemplateSceneId"].empty()) {
      templateSceneId = make_shared<string>(boost::any_cast<string>(m["TemplateSceneId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~QueryTemplateListByGroupIdResponseBodyTemplateList() = default;
};
class QueryTemplateListByGroupIdResponseBody : public Darabonba::Model {
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
  shared_ptr<vector<QueryTemplateListByGroupIdResponseBodyTemplateList>> templateList{};
  shared_ptr<long> totalCount{};

  QueryTemplateListByGroupIdResponseBody() {}

  explicit QueryTemplateListByGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (templateList) {
      vector<boost::any> temp1;
      for(auto item1:*templateList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TemplateList"] = boost::any(temp1);
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
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TemplateList") != m.end() && !m["TemplateList"].empty()) {
      if (typeid(vector<boost::any>) == m["TemplateList"].type()) {
        vector<QueryTemplateListByGroupIdResponseBodyTemplateList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TemplateList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryTemplateListByGroupIdResponseBodyTemplateList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templateList = make_shared<vector<QueryTemplateListByGroupIdResponseBodyTemplateList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~QueryTemplateListByGroupIdResponseBody() = default;
};
class QueryTemplateListByGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTemplateListByGroupIdResponseBody> body{};

  QueryTemplateListByGroupIdResponse() {}

  explicit QueryTemplateListByGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTemplateListByGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTemplateListByGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTemplateListByGroupIdResponse() = default;
};
class SyncAddMaterialRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> name{};

  SyncAddMaterialRequest() {}

  explicit SyncAddMaterialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~SyncAddMaterialRequest() = default;
};
class SyncAddMaterialResponseBodyResult : public Darabonba::Model {
public:
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> message{};
  shared_ptr<bool> success{};

  SyncAddMaterialResponseBodyResult() {}

  explicit SyncAddMaterialResponseBodyResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dynamicCode) {
      res["DynamicCode"] = boost::any(*dynamicCode);
    }
    if (dynamicMessage) {
      res["DynamicMessage"] = boost::any(*dynamicMessage);
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
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
    if (m.find("DynamicCode") != m.end() && !m["DynamicCode"].empty()) {
      dynamicCode = make_shared<string>(boost::any_cast<string>(m["DynamicCode"]));
    }
    if (m.find("DynamicMessage") != m.end() && !m["DynamicMessage"].empty()) {
      dynamicMessage = make_shared<string>(boost::any_cast<string>(m["DynamicMessage"]));
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SyncAddMaterialResponseBodyResult() = default;
};
class SyncAddMaterialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<SyncAddMaterialResponseBodyResult> result{};
  shared_ptr<bool> success{};

  SyncAddMaterialResponseBody() {}

  explicit SyncAddMaterialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      if (typeid(map<string, boost::any>) == m["Result"].type()) {
        SyncAddMaterialResponseBodyResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Result"]));
        result = make_shared<SyncAddMaterialResponseBodyResult>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SyncAddMaterialResponseBody() = default;
};
class SyncAddMaterialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncAddMaterialResponseBody> body{};

  SyncAddMaterialResponse() {}

  explicit SyncAddMaterialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncAddMaterialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncAddMaterialResponseBody>(model1);
      }
    }
  }


  virtual ~SyncAddMaterialResponse() = default;
};
class UnassignUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> extraParams{};
  shared_ptr<string> userId{};

  UnassignUserRequest() {}

  explicit UnassignUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
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
  shared_ptr<string> column{};
  shared_ptr<string> containerName{};
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> itemBarCode{};
  shared_ptr<long> layer{};
  shared_ptr<string> shelf{};
  shared_ptr<string> storeId{};

  UnbindEslDeviceRequest() {}

  explicit UnbindEslDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (column) {
      res["Column"] = boost::any(*column);
    }
    if (containerName) {
      res["ContainerName"] = boost::any(*containerName);
    }
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (itemBarCode) {
      res["ItemBarCode"] = boost::any(*itemBarCode);
    }
    if (layer) {
      res["Layer"] = boost::any(*layer);
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
    if (m.find("Column") != m.end() && !m["Column"].empty()) {
      column = make_shared<string>(boost::any_cast<string>(m["Column"]));
    }
    if (m.find("ContainerName") != m.end() && !m["ContainerName"].empty()) {
      containerName = make_shared<string>(boost::any_cast<string>(m["ContainerName"]));
    }
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("ItemBarCode") != m.end() && !m["ItemBarCode"].empty()) {
      itemBarCode = make_shared<string>(boost::any_cast<string>(m["ItemBarCode"]));
    }
    if (m.find("Layer") != m.end() && !m["Layer"].empty()) {
      layer = make_shared<long>(boost::any_cast<long>(m["Layer"]));
    }
    if (m.find("Shelf") != m.end() && !m["Shelf"].empty()) {
      shelf = make_shared<string>(boost::any_cast<string>(m["Shelf"]));
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
class UpdateEslDeviceLightRequest : public Darabonba::Model {
public:
  shared_ptr<string> eslBarCode{};
  shared_ptr<string> extraParams{};
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
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
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
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
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
class UpdateEslDeviceLightResponseBodyLightFailEslInfos : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> eslBarCode{};

  UpdateEslDeviceLightResponseBodyLightFailEslInfos() {}

  explicit UpdateEslDeviceLightResponseBodyLightFailEslInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    if (eslBarCode) {
      res["EslBarCode"] = boost::any(*eslBarCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
    if (m.find("EslBarCode") != m.end() && !m["EslBarCode"].empty()) {
      eslBarCode = make_shared<string>(boost::any_cast<string>(m["EslBarCode"]));
    }
  }


  virtual ~UpdateEslDeviceLightResponseBodyLightFailEslInfos() = default;
};
class UpdateEslDeviceLightResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> failCount{};
  shared_ptr<vector<UpdateEslDeviceLightResponseBodyLightFailEslInfos>> lightFailEslInfos{};
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
    if (lightFailEslInfos) {
      vector<boost::any> temp1;
      for(auto item1:*lightFailEslInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["LightFailEslInfos"] = boost::any(temp1);
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
    if (m.find("LightFailEslInfos") != m.end() && !m["LightFailEslInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["LightFailEslInfos"].type()) {
        vector<UpdateEslDeviceLightResponseBodyLightFailEslInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["LightFailEslInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateEslDeviceLightResponseBodyLightFailEslInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lightFailEslInfos = make_shared<vector<UpdateEslDeviceLightResponseBodyLightFailEslInfos>>(expect1);
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
  shared_ptr<long> autoUnbindDays{};
  shared_ptr<bool> autoUnbindOfflineEsl{};
  shared_ptr<long> barCodeEncode{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> phone{};
  shared_ptr<string> storeId{};
  shared_ptr<string> storeName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> timezone{};
  shared_ptr<string> userStoreCode{};

  UpdateStoreRequest() {}

  explicit UpdateStoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUnbindDays) {
      res["AutoUnbindDays"] = boost::any(*autoUnbindDays);
    }
    if (autoUnbindOfflineEsl) {
      res["AutoUnbindOfflineEsl"] = boost::any(*autoUnbindOfflineEsl);
    }
    if (barCodeEncode) {
      res["BarCodeEncode"] = boost::any(*barCodeEncode);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
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
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (timezone) {
      res["Timezone"] = boost::any(*timezone);
    }
    if (userStoreCode) {
      res["UserStoreCode"] = boost::any(*userStoreCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoUnbindDays") != m.end() && !m["AutoUnbindDays"].empty()) {
      autoUnbindDays = make_shared<long>(boost::any_cast<long>(m["AutoUnbindDays"]));
    }
    if (m.find("AutoUnbindOfflineEsl") != m.end() && !m["AutoUnbindOfflineEsl"].empty()) {
      autoUnbindOfflineEsl = make_shared<bool>(boost::any_cast<bool>(m["AutoUnbindOfflineEsl"]));
    }
    if (m.find("BarCodeEncode") != m.end() && !m["BarCodeEncode"].empty()) {
      barCodeEncode = make_shared<long>(boost::any_cast<long>(m["BarCodeEncode"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
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
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("Timezone") != m.end() && !m["Timezone"].empty()) {
      timezone = make_shared<string>(boost::any_cast<string>(m["Timezone"]));
    }
    if (m.find("UserStoreCode") != m.end() && !m["UserStoreCode"].empty()) {
      userStoreCode = make_shared<string>(boost::any_cast<string>(m["UserStoreCode"]));
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
class UpdateStoreConfigRequest : public Darabonba::Model {
public:
  shared_ptr<bool> enableNotification{};
  shared_ptr<string> extraParams{};
  shared_ptr<string> notificationSilentTimes{};
  shared_ptr<string> notificationWebHook{};
  shared_ptr<string> storeId{};
  shared_ptr<string> subscribeContents{};

  UpdateStoreConfigRequest() {}

  explicit UpdateStoreConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (enableNotification) {
      res["EnableNotification"] = boost::any(*enableNotification);
    }
    if (extraParams) {
      res["ExtraParams"] = boost::any(*extraParams);
    }
    if (notificationSilentTimes) {
      res["NotificationSilentTimes"] = boost::any(*notificationSilentTimes);
    }
    if (notificationWebHook) {
      res["NotificationWebHook"] = boost::any(*notificationWebHook);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (subscribeContents) {
      res["SubscribeContents"] = boost::any(*subscribeContents);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EnableNotification") != m.end() && !m["EnableNotification"].empty()) {
      enableNotification = make_shared<bool>(boost::any_cast<bool>(m["EnableNotification"]));
    }
    if (m.find("ExtraParams") != m.end() && !m["ExtraParams"].empty()) {
      extraParams = make_shared<string>(boost::any_cast<string>(m["ExtraParams"]));
    }
    if (m.find("NotificationSilentTimes") != m.end() && !m["NotificationSilentTimes"].empty()) {
      notificationSilentTimes = make_shared<string>(boost::any_cast<string>(m["NotificationSilentTimes"]));
    }
    if (m.find("NotificationWebHook") != m.end() && !m["NotificationWebHook"].empty()) {
      notificationWebHook = make_shared<string>(boost::any_cast<string>(m["NotificationWebHook"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("SubscribeContents") != m.end() && !m["SubscribeContents"].empty()) {
      subscribeContents = make_shared<string>(boost::any_cast<string>(m["SubscribeContents"]));
    }
  }


  virtual ~UpdateStoreConfigRequest() = default;
};
class UpdateStoreConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dynamicCode{};
  shared_ptr<string> dynamicMessage{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateStoreConfigResponseBody() {}

  explicit UpdateStoreConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateStoreConfigResponseBody() = default;
};
class UpdateStoreConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStoreConfigResponseBody> body{};

  UpdateStoreConfigResponse() {}

  explicit UpdateStoreConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateStoreConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStoreConfigResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStoreConfigResponse() = default;
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
  AddCompanyTemplateResponse addCompanyTemplateWithOptions(shared_ptr<AddCompanyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddCompanyTemplateResponse addCompanyTemplate(shared_ptr<AddCompanyTemplateRequest> request);
  AddUserResponse addUserWithOptions(shared_ptr<AddUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddUserResponse addUser(shared_ptr<AddUserRequest> request);
  ApplyCompanyTemplateVersionToStoresResponse applyCompanyTemplateVersionToStoresWithOptions(shared_ptr<ApplyCompanyTemplateVersionToStoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyCompanyTemplateVersionToStoresResponse applyCompanyTemplateVersionToStores(shared_ptr<ApplyCompanyTemplateVersionToStoresRequest> request);
  AssignUserResponse assignUserWithOptions(shared_ptr<AssignUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssignUserResponse assignUser(shared_ptr<AssignUserRequest> request);
  BatchInsertItemsResponse batchInsertItemsWithOptions(shared_ptr<BatchInsertItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchInsertItemsResponse batchInsertItems(shared_ptr<BatchInsertItemsRequest> request);
  BindEslDeviceResponse bindEslDeviceWithOptions(shared_ptr<BindEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BindEslDeviceResponse bindEslDevice(shared_ptr<BindEslDeviceRequest> request);
  CreateStoreResponse createStoreWithOptions(shared_ptr<CreateStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStoreResponse createStore(shared_ptr<CreateStoreRequest> request);
  DeleteApDeviceResponse deleteApDeviceWithOptions(shared_ptr<DeleteApDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteApDeviceResponse deleteApDevice(shared_ptr<DeleteApDeviceRequest> request);
  DeleteCompanyTemplateResponse deleteCompanyTemplateWithOptions(shared_ptr<DeleteCompanyTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCompanyTemplateResponse deleteCompanyTemplate(shared_ptr<DeleteCompanyTemplateRequest> request);
  DeleteItemResponse deleteItemWithOptions(shared_ptr<DeleteItemRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteItemResponse deleteItem(shared_ptr<DeleteItemRequest> request);
  DeleteStoreResponse deleteStoreWithOptions(shared_ptr<DeleteStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteStoreResponse deleteStore(shared_ptr<DeleteStoreRequest> request);
  DeleteUserResponse deleteUserWithOptions(shared_ptr<DeleteUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserResponse deleteUser(shared_ptr<DeleteUserRequest> request);
  DescribeApDevicesResponse describeApDevicesWithOptions(shared_ptr<DescribeApDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeApDevicesResponse describeApDevices(shared_ptr<DescribeApDevicesRequest> request);
  DescribeAvailableEslModelsResponse describeAvailableEslModelsWithOptions(shared_ptr<DescribeAvailableEslModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAvailableEslModelsResponse describeAvailableEslModels(shared_ptr<DescribeAvailableEslModelsRequest> request);
  DescribeBindersResponse describeBindersWithOptions(shared_ptr<DescribeBindersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBindersResponse describeBinders(shared_ptr<DescribeBindersRequest> request);
  DescribeCompanyTemplateVersionsResponse describeCompanyTemplateVersionsWithOptions(shared_ptr<DescribeCompanyTemplateVersionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCompanyTemplateVersionsResponse describeCompanyTemplateVersions(shared_ptr<DescribeCompanyTemplateVersionsRequest> request);
  DescribeEslDeviceResponse describeEslDeviceWithOptions(shared_ptr<DescribeEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEslDeviceResponse describeEslDevice(shared_ptr<DescribeEslDeviceRequest> request);
  DescribeEslDevicesResponse describeEslDevicesWithOptions(shared_ptr<DescribeEslDevicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEslDevicesResponse describeEslDevices(shared_ptr<DescribeEslDevicesRequest> request);
  DescribeEslModelByTemplateVersionResponse describeEslModelByTemplateVersionWithOptions(shared_ptr<DescribeEslModelByTemplateVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeEslModelByTemplateVersionResponse describeEslModelByTemplateVersion(shared_ptr<DescribeEslModelByTemplateVersionRequest> request);
  DescribeItemsResponse describeItemsWithOptions(shared_ptr<DescribeItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeItemsResponse describeItems(shared_ptr<DescribeItemsRequest> request);
  DescribeStoreByTemplateVersionResponse describeStoreByTemplateVersionWithOptions(shared_ptr<DescribeStoreByTemplateVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStoreByTemplateVersionResponse describeStoreByTemplateVersion(shared_ptr<DescribeStoreByTemplateVersionRequest> request);
  DescribeStoreConfigResponse describeStoreConfigWithOptions(shared_ptr<DescribeStoreConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStoreConfigResponse describeStoreConfig(shared_ptr<DescribeStoreConfigRequest> request);
  DescribeStoresResponse describeStoresWithOptions(shared_ptr<DescribeStoresRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStoresResponse describeStores(shared_ptr<DescribeStoresRequest> request);
  DescribeTemplateByModelResponse describeTemplateByModelWithOptions(shared_ptr<DescribeTemplateByModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTemplateByModelResponse describeTemplateByModel(shared_ptr<DescribeTemplateByModelRequest> request);
  DescribeUserLogResponse describeUserLogWithOptions(shared_ptr<DescribeUserLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserLogResponse describeUserLog(shared_ptr<DescribeUserLogRequest> request);
  DescribeUsersResponse describeUsersWithOptions(shared_ptr<DescribeUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUsersResponse describeUsers(shared_ptr<DescribeUsersRequest> request);
  GetUserResponse getUserWithOptions(shared_ptr<GetUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserResponse getUser(shared_ptr<GetUserRequest> request);
  QueryTemplateListByGroupIdResponse queryTemplateListByGroupIdWithOptions(shared_ptr<QueryTemplateListByGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTemplateListByGroupIdResponse queryTemplateListByGroupId(shared_ptr<QueryTemplateListByGroupIdRequest> request);
  SyncAddMaterialResponse syncAddMaterialWithOptions(shared_ptr<SyncAddMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncAddMaterialResponse syncAddMaterial(shared_ptr<SyncAddMaterialRequest> request);
  UnassignUserResponse unassignUserWithOptions(shared_ptr<UnassignUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnassignUserResponse unassignUser(shared_ptr<UnassignUserRequest> request);
  UnbindEslDeviceResponse unbindEslDeviceWithOptions(shared_ptr<UnbindEslDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnbindEslDeviceResponse unbindEslDevice(shared_ptr<UnbindEslDeviceRequest> request);
  UpdateEslDeviceLightResponse updateEslDeviceLightWithOptions(shared_ptr<UpdateEslDeviceLightRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEslDeviceLightResponse updateEslDeviceLight(shared_ptr<UpdateEslDeviceLightRequest> request);
  UpdateStoreResponse updateStoreWithOptions(shared_ptr<UpdateStoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStoreResponse updateStore(shared_ptr<UpdateStoreRequest> request);
  UpdateStoreConfigResponse updateStoreConfigWithOptions(shared_ptr<UpdateStoreConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStoreConfigResponse updateStoreConfig(shared_ptr<UpdateStoreConfigRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cloudesl20200201

#endif
