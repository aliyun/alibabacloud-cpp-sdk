// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SGW20180511_H_
#define ALIBABACLOUD_SGW20180511_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Sgw20180511 {
class ActivateAllInOneGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientUUID{};
  shared_ptr<string> deviceNumber{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> model{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> serialNumber{};

  ActivateAllInOneGatewayRequest() {}

  explicit ActivateAllInOneGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUUID) {
      res["ClientUUID"] = boost::any(*clientUUID);
    }
    if (deviceNumber) {
      res["DeviceNumber"] = boost::any(*deviceNumber);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUUID") != m.end() && !m["ClientUUID"].empty()) {
      clientUUID = make_shared<string>(boost::any_cast<string>(m["ClientUUID"]));
    }
    if (m.find("DeviceNumber") != m.end() && !m["DeviceNumber"].empty()) {
      deviceNumber = make_shared<string>(boost::any_cast<string>(m["DeviceNumber"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
  }


  virtual ~ActivateAllInOneGatewayRequest() = default;
};
class ActivateAllInOneGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> licenseContent{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ActivateAllInOneGatewayResponseBody() {}

  explicit ActivateAllInOneGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (licenseContent) {
      res["LicenseContent"] = boost::any(*licenseContent);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("LicenseContent") != m.end() && !m["LicenseContent"].empty()) {
      licenseContent = make_shared<string>(boost::any_cast<string>(m["LicenseContent"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ActivateAllInOneGatewayResponseBody() = default;
};
class ActivateAllInOneGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActivateAllInOneGatewayResponseBody> body{};

  ActivateAllInOneGatewayResponse() {}

  explicit ActivateAllInOneGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActivateAllInOneGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivateAllInOneGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~ActivateAllInOneGatewayResponse() = default;
};
class ActivateGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> clientUUID{};
  shared_ptr<string> model{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> serialNumber{};
  shared_ptr<string> token{};
  shared_ptr<string> type{};

  ActivateGatewayRequest() {}

  explicit ActivateGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (clientUUID) {
      res["ClientUUID"] = boost::any(*clientUUID);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (serialNumber) {
      res["SerialNumber"] = boost::any(*serialNumber);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("ClientUUID") != m.end() && !m["ClientUUID"].empty()) {
      clientUUID = make_shared<string>(boost::any_cast<string>(m["ClientUUID"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SerialNumber") != m.end() && !m["SerialNumber"].empty()) {
      serialNumber = make_shared<string>(boost::any_cast<string>(m["SerialNumber"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ActivateGatewayRequest() = default;
};
class ActivateGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ActivateGatewayResponseBody() {}

  explicit ActivateGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
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
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ActivateGatewayResponseBody() = default;
};
class ActivateGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActivateGatewayResponseBody> body{};

  ActivateGatewayResponse() {}

  explicit ActivateGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActivateGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivateGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~ActivateGatewayResponse() = default;
};
class AddSharesToExpressSyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> expressSyncId{};
  shared_ptr<string> gatewayShares{};
  shared_ptr<string> securityToken{};

  AddSharesToExpressSyncRequest() {}

  explicit AddSharesToExpressSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressSyncId) {
      res["ExpressSyncId"] = boost::any(*expressSyncId);
    }
    if (gatewayShares) {
      res["GatewayShares"] = boost::any(*gatewayShares);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressSyncId") != m.end() && !m["ExpressSyncId"].empty()) {
      expressSyncId = make_shared<string>(boost::any_cast<string>(m["ExpressSyncId"]));
    }
    if (m.find("GatewayShares") != m.end() && !m["GatewayShares"].empty()) {
      gatewayShares = make_shared<string>(boost::any_cast<string>(m["GatewayShares"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~AddSharesToExpressSyncRequest() = default;
};
class AddSharesToExpressSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> mnsFullSyncDelay{};
  shared_ptr<string> mnsInnerEndpoint{};
  shared_ptr<string> mnsPublicEndpoint{};
  shared_ptr<string> mnsQueues{};
  shared_ptr<string> mnsTopic{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  AddSharesToExpressSyncResponseBody() {}

  explicit AddSharesToExpressSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (mnsFullSyncDelay) {
      res["MnsFullSyncDelay"] = boost::any(*mnsFullSyncDelay);
    }
    if (mnsInnerEndpoint) {
      res["MnsInnerEndpoint"] = boost::any(*mnsInnerEndpoint);
    }
    if (mnsPublicEndpoint) {
      res["MnsPublicEndpoint"] = boost::any(*mnsPublicEndpoint);
    }
    if (mnsQueues) {
      res["MnsQueues"] = boost::any(*mnsQueues);
    }
    if (mnsTopic) {
      res["MnsTopic"] = boost::any(*mnsTopic);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MnsFullSyncDelay") != m.end() && !m["MnsFullSyncDelay"].empty()) {
      mnsFullSyncDelay = make_shared<long>(boost::any_cast<long>(m["MnsFullSyncDelay"]));
    }
    if (m.find("MnsInnerEndpoint") != m.end() && !m["MnsInnerEndpoint"].empty()) {
      mnsInnerEndpoint = make_shared<string>(boost::any_cast<string>(m["MnsInnerEndpoint"]));
    }
    if (m.find("MnsPublicEndpoint") != m.end() && !m["MnsPublicEndpoint"].empty()) {
      mnsPublicEndpoint = make_shared<string>(boost::any_cast<string>(m["MnsPublicEndpoint"]));
    }
    if (m.find("MnsQueues") != m.end() && !m["MnsQueues"].empty()) {
      mnsQueues = make_shared<string>(boost::any_cast<string>(m["MnsQueues"]));
    }
    if (m.find("MnsTopic") != m.end() && !m["MnsTopic"].empty()) {
      mnsTopic = make_shared<string>(boost::any_cast<string>(m["MnsTopic"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~AddSharesToExpressSyncResponseBody() = default;
};
class AddSharesToExpressSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddSharesToExpressSyncResponseBody> body{};

  AddSharesToExpressSyncResponse() {}

  explicit AddSharesToExpressSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddSharesToExpressSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSharesToExpressSyncResponseBody>(model1);
      }
    }
  }


  virtual ~AddSharesToExpressSyncResponse() = default;
};
class AddTagsToGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> tags{};

  AddTagsToGatewayRequest() {}

  explicit AddTagsToGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~AddTagsToGatewayRequest() = default;
};
class AddTagsToGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddTagsToGatewayResponseBody() {}

  explicit AddTagsToGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~AddTagsToGatewayResponseBody() = default;
};
class AddTagsToGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddTagsToGatewayResponseBody> body{};

  AddTagsToGatewayResponse() {}

  explicit AddTagsToGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddTagsToGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddTagsToGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~AddTagsToGatewayResponse() = default;
};
class CheckActivationKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> cryptKey{};
  shared_ptr<string> cryptText{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> token{};

  CheckActivationKeyRequest() {}

  explicit CheckActivationKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cryptKey) {
      res["CryptKey"] = boost::any(*cryptKey);
    }
    if (cryptText) {
      res["CryptText"] = boost::any(*cryptText);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CryptKey") != m.end() && !m["CryptKey"].empty()) {
      cryptKey = make_shared<string>(boost::any_cast<string>(m["CryptKey"]));
    }
    if (m.find("CryptText") != m.end() && !m["CryptText"].empty()) {
      cryptText = make_shared<string>(boost::any_cast<string>(m["CryptText"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~CheckActivationKeyRequest() = default;
};
class CheckActivationKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckActivationKeyResponseBody() {}

  explicit CheckActivationKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~CheckActivationKeyResponseBody() = default;
};
class CheckActivationKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckActivationKeyResponseBody> body{};

  CheckActivationKeyResponse() {}

  explicit CheckActivationKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckActivationKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckActivationKeyResponseBody>(model1);
      }
    }
  }


  virtual ~CheckActivationKeyResponse() = default;
};
class CheckBlockVolumeNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketEndpoint{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> volumeName{};

  CheckBlockVolumeNameRequest() {}

  explicit CheckBlockVolumeNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketEndpoint) {
      res["BucketEndpoint"] = boost::any(*bucketEndpoint);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (volumeName) {
      res["VolumeName"] = boost::any(*volumeName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketEndpoint") != m.end() && !m["BucketEndpoint"].empty()) {
      bucketEndpoint = make_shared<string>(boost::any_cast<string>(m["BucketEndpoint"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("VolumeName") != m.end() && !m["VolumeName"].empty()) {
      volumeName = make_shared<string>(boost::any_cast<string>(m["VolumeName"]));
    }
  }


  virtual ~CheckBlockVolumeNameRequest() = default;
};
class CheckBlockVolumeNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isAlreadyExist{};
  shared_ptr<string> isRequireRecovery{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckBlockVolumeNameResponseBody() {}

  explicit CheckBlockVolumeNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isAlreadyExist) {
      res["IsAlreadyExist"] = boost::any(*isAlreadyExist);
    }
    if (isRequireRecovery) {
      res["IsRequireRecovery"] = boost::any(*isRequireRecovery);
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
    if (m.find("IsAlreadyExist") != m.end() && !m["IsAlreadyExist"].empty()) {
      isAlreadyExist = make_shared<bool>(boost::any_cast<bool>(m["IsAlreadyExist"]));
    }
    if (m.find("IsRequireRecovery") != m.end() && !m["IsRequireRecovery"].empty()) {
      isRequireRecovery = make_shared<string>(boost::any_cast<string>(m["IsRequireRecovery"]));
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


  virtual ~CheckBlockVolumeNameResponseBody() = default;
};
class CheckBlockVolumeNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckBlockVolumeNameResponseBody> body{};

  CheckBlockVolumeNameResponse() {}

  explicit CheckBlockVolumeNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckBlockVolumeNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckBlockVolumeNameResponseBody>(model1);
      }
    }
  }


  virtual ~CheckBlockVolumeNameResponse() = default;
};
class CheckGatewayEssdSupportRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  CheckGatewayEssdSupportRequest() {}

  explicit CheckGatewayEssdSupportRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CheckGatewayEssdSupportRequest() = default;
};
class CheckGatewayEssdSupportResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isServiceAffect{};
  shared_ptr<bool> isSupportEssd{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckGatewayEssdSupportResponseBody() {}

  explicit CheckGatewayEssdSupportResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isServiceAffect) {
      res["IsServiceAffect"] = boost::any(*isServiceAffect);
    }
    if (isSupportEssd) {
      res["IsSupportEssd"] = boost::any(*isSupportEssd);
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
    if (m.find("IsServiceAffect") != m.end() && !m["IsServiceAffect"].empty()) {
      isServiceAffect = make_shared<bool>(boost::any_cast<bool>(m["IsServiceAffect"]));
    }
    if (m.find("IsSupportEssd") != m.end() && !m["IsSupportEssd"].empty()) {
      isSupportEssd = make_shared<bool>(boost::any_cast<bool>(m["IsSupportEssd"]));
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


  virtual ~CheckGatewayEssdSupportResponseBody() = default;
};
class CheckGatewayEssdSupportResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckGatewayEssdSupportResponseBody> body{};

  CheckGatewayEssdSupportResponse() {}

  explicit CheckGatewayEssdSupportResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckGatewayEssdSupportResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckGatewayEssdSupportResponseBody>(model1);
      }
    }
  }


  virtual ~CheckGatewayEssdSupportResponse() = default;
};
class CheckMnsServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};

  CheckMnsServiceRequest() {}

  explicit CheckMnsServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CheckMnsServiceRequest() = default;
};
class CheckMnsServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> checkMessage{};
  shared_ptr<string> code{};
  shared_ptr<bool> isEnabled{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckMnsServiceResponseBody() {}

  explicit CheckMnsServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkMessage) {
      res["CheckMessage"] = boost::any(*checkMessage);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
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
    if (m.find("CheckMessage") != m.end() && !m["CheckMessage"].empty()) {
      checkMessage = make_shared<string>(boost::any_cast<string>(m["CheckMessage"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsEnabled"]));
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


  virtual ~CheckMnsServiceResponseBody() = default;
};
class CheckMnsServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckMnsServiceResponseBody> body{};

  CheckMnsServiceResponse() {}

  explicit CheckMnsServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckMnsServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckMnsServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CheckMnsServiceResponse() = default;
};
class CheckRoleRequest : public Darabonba::Model {
public:
  shared_ptr<string> roleType{};
  shared_ptr<string> securityToken{};

  CheckRoleRequest() {}

  explicit CheckRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleType) {
      res["RoleType"] = boost::any(*roleType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RoleType") != m.end() && !m["RoleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["RoleType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CheckRoleRequest() = default;
};
class CheckRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckRoleResponseBody() {}

  explicit CheckRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~CheckRoleResponseBody() = default;
};
class CheckRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckRoleResponseBody> body{};

  CheckRoleResponse() {}

  explicit CheckRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckRoleResponse() = default;
};
class CheckSlrRoleRequest : public Darabonba::Model {
public:
  shared_ptr<bool> createIfNotExist{};
  shared_ptr<string> roleName{};
  shared_ptr<string> securityToken{};

  CheckSlrRoleRequest() {}

  explicit CheckSlrRoleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createIfNotExist) {
      res["CreateIfNotExist"] = boost::any(*createIfNotExist);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateIfNotExist") != m.end() && !m["CreateIfNotExist"].empty()) {
      createIfNotExist = make_shared<bool>(boost::any_cast<bool>(m["CreateIfNotExist"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CheckSlrRoleRequest() = default;
};
class CheckSlrRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> exist{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> requireOldWayCheck{};
  shared_ptr<bool> success{};

  CheckSlrRoleResponseBody() {}

  explicit CheckSlrRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (exist) {
      res["Exist"] = boost::any(*exist);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (requireOldWayCheck) {
      res["RequireOldWayCheck"] = boost::any(*requireOldWayCheck);
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
    if (m.find("Exist") != m.end() && !m["Exist"].empty()) {
      exist = make_shared<bool>(boost::any_cast<bool>(m["Exist"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RequireOldWayCheck") != m.end() && !m["RequireOldWayCheck"].empty()) {
      requireOldWayCheck = make_shared<bool>(boost::any_cast<bool>(m["RequireOldWayCheck"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckSlrRoleResponseBody() = default;
};
class CheckSlrRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckSlrRoleResponseBody> body{};

  CheckSlrRoleResponse() {}

  explicit CheckSlrRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckSlrRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckSlrRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CheckSlrRoleResponse() = default;
};
class CheckUpgradeVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientUUID{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayVersion{};
  shared_ptr<string> securityToken{};

  CheckUpgradeVersionRequest() {}

  explicit CheckUpgradeVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUUID) {
      res["ClientUUID"] = boost::any(*clientUUID);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayVersion) {
      res["GatewayVersion"] = boost::any(*gatewayVersion);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUUID") != m.end() && !m["ClientUUID"].empty()) {
      clientUUID = make_shared<string>(boost::any_cast<string>(m["ClientUUID"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayVersion") != m.end() && !m["GatewayVersion"].empty()) {
      gatewayVersion = make_shared<string>(boost::any_cast<string>(m["GatewayVersion"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CheckUpgradeVersionRequest() = default;
};
class CheckUpgradeVersionResponseBodyPatchesPatch : public Darabonba::Model {
public:
  shared_ptr<string> internalUrl{};
  shared_ptr<string> MD5{};
  shared_ptr<string> name{};
  shared_ptr<string> url{};

  CheckUpgradeVersionResponseBodyPatchesPatch() {}

  explicit CheckUpgradeVersionResponseBodyPatchesPatch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (internalUrl) {
      res["InternalUrl"] = boost::any(*internalUrl);
    }
    if (MD5) {
      res["MD5"] = boost::any(*MD5);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InternalUrl") != m.end() && !m["InternalUrl"].empty()) {
      internalUrl = make_shared<string>(boost::any_cast<string>(m["InternalUrl"]));
    }
    if (m.find("MD5") != m.end() && !m["MD5"].empty()) {
      MD5 = make_shared<string>(boost::any_cast<string>(m["MD5"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CheckUpgradeVersionResponseBodyPatchesPatch() = default;
};
class CheckUpgradeVersionResponseBodyPatches : public Darabonba::Model {
public:
  shared_ptr<vector<CheckUpgradeVersionResponseBodyPatchesPatch>> patch{};

  CheckUpgradeVersionResponseBodyPatches() {}

  explicit CheckUpgradeVersionResponseBodyPatches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (patch) {
      vector<boost::any> temp1;
      for(auto item1:*patch){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Patch"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Patch") != m.end() && !m["Patch"].empty()) {
      if (typeid(vector<boost::any>) == m["Patch"].type()) {
        vector<CheckUpgradeVersionResponseBodyPatchesPatch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Patch"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CheckUpgradeVersionResponseBodyPatchesPatch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        patch = make_shared<vector<CheckUpgradeVersionResponseBodyPatchesPatch>>(expect1);
      }
    }
  }


  virtual ~CheckUpgradeVersionResponseBodyPatches() = default;
};
class CheckUpgradeVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> latestVersion{};
  shared_ptr<string> message{};
  shared_ptr<string> option{};
  shared_ptr<CheckUpgradeVersionResponseBodyPatches> patches{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckUpgradeVersionResponseBody() {}

  explicit CheckUpgradeVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (latestVersion) {
      res["LatestVersion"] = boost::any(*latestVersion);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (option) {
      res["Option"] = boost::any(*option);
    }
    if (patches) {
      res["Patches"] = patches ? boost::any(patches->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("LatestVersion") != m.end() && !m["LatestVersion"].empty()) {
      latestVersion = make_shared<string>(boost::any_cast<string>(m["LatestVersion"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Option") != m.end() && !m["Option"].empty()) {
      option = make_shared<string>(boost::any_cast<string>(m["Option"]));
    }
    if (m.find("Patches") != m.end() && !m["Patches"].empty()) {
      if (typeid(map<string, boost::any>) == m["Patches"].type()) {
        CheckUpgradeVersionResponseBodyPatches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Patches"]));
        patches = make_shared<CheckUpgradeVersionResponseBodyPatches>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CheckUpgradeVersionResponseBody() = default;
};
class CheckUpgradeVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckUpgradeVersionResponseBody> body{};

  CheckUpgradeVersionResponse() {}

  explicit CheckUpgradeVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckUpgradeVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckUpgradeVersionResponseBody>(model1);
      }
    }
  }


  virtual ~CheckUpgradeVersionResponse() = default;
};
class CreateCacheRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> sizeInGB{};

  CreateCacheRequest() {}

  explicit CreateCacheRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (sizeInGB) {
      res["SizeInGB"] = boost::any(*sizeInGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SizeInGB") != m.end() && !m["SizeInGB"].empty()) {
      sizeInGB = make_shared<long>(boost::any_cast<long>(m["SizeInGB"]));
    }
  }


  virtual ~CreateCacheRequest() = default;
};
class CreateCacheResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buyURL{};
  shared_ptr<string> cacheId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateCacheResponseBody() {}

  explicit CreateCacheResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
    if (cacheId) {
      res["CacheId"] = boost::any(*cacheId);
    }
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
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("CacheId") != m.end() && !m["CacheId"].empty()) {
      cacheId = make_shared<string>(boost::any_cast<string>(m["CacheId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~CreateCacheResponseBody() = default;
};
class CreateCacheResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCacheResponseBody> body{};

  CreateCacheResponse() {}

  explicit CreateCacheResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCacheResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCacheResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCacheResponse() = default;
};
class CreateElasticGatewayPrivateZoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  CreateElasticGatewayPrivateZoneRequest() {}

  explicit CreateElasticGatewayPrivateZoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CreateElasticGatewayPrivateZoneRequest() = default;
};
class CreateElasticGatewayPrivateZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateElasticGatewayPrivateZoneResponseBody() {}

  explicit CreateElasticGatewayPrivateZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateElasticGatewayPrivateZoneResponseBody() = default;
};
class CreateElasticGatewayPrivateZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateElasticGatewayPrivateZoneResponseBody> body{};

  CreateElasticGatewayPrivateZoneResponse() {}

  explicit CreateElasticGatewayPrivateZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateElasticGatewayPrivateZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateElasticGatewayPrivateZoneResponseBody>(model1);
      }
    }
  }


  virtual ~CreateElasticGatewayPrivateZoneResponse() = default;
};
class CreateExpressSyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> bucketPrefix{};
  shared_ptr<string> bucketRegion{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> securityToken{};

  CreateExpressSyncRequest() {}

  explicit CreateExpressSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (bucketPrefix) {
      res["BucketPrefix"] = boost::any(*bucketPrefix);
    }
    if (bucketRegion) {
      res["BucketRegion"] = boost::any(*bucketRegion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("BucketPrefix") != m.end() && !m["BucketPrefix"].empty()) {
      bucketPrefix = make_shared<string>(boost::any_cast<string>(m["BucketPrefix"]));
    }
    if (m.find("BucketRegion") != m.end() && !m["BucketRegion"].empty()) {
      bucketRegion = make_shared<string>(boost::any_cast<string>(m["BucketRegion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CreateExpressSyncRequest() = default;
};
class CreateExpressSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> expressSyncId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateExpressSyncResponseBody() {}

  explicit CreateExpressSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (expressSyncId) {
      res["ExpressSyncId"] = boost::any(*expressSyncId);
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
    if (m.find("ExpressSyncId") != m.end() && !m["ExpressSyncId"].empty()) {
      expressSyncId = make_shared<string>(boost::any_cast<string>(m["ExpressSyncId"]));
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


  virtual ~CreateExpressSyncResponseBody() = default;
};
class CreateExpressSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateExpressSyncResponseBody> body{};

  CreateExpressSyncResponse() {}

  explicit CreateExpressSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateExpressSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateExpressSyncResponseBody>(model1);
      }
    }
  }


  virtual ~CreateExpressSyncResponse() = default;
};
class CreateGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> gatewayClass{};
  shared_ptr<string> location{};
  shared_ptr<string> name{};
  shared_ptr<bool> postPaid{};
  shared_ptr<long> publicNetworkBandwidth{};
  shared_ptr<bool> releaseAfterExpiration{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> secondaryVSwitchId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<string> type{};
  shared_ptr<string> untrustedEnvId{};
  shared_ptr<string> untrustedEnvInstanceType{};
  shared_ptr<string> vSwitchId{};

  CreateGatewayRequest() {}

  explicit CreateGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gatewayClass) {
      res["GatewayClass"] = boost::any(*gatewayClass);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (postPaid) {
      res["PostPaid"] = boost::any(*postPaid);
    }
    if (publicNetworkBandwidth) {
      res["PublicNetworkBandwidth"] = boost::any(*publicNetworkBandwidth);
    }
    if (releaseAfterExpiration) {
      res["ReleaseAfterExpiration"] = boost::any(*releaseAfterExpiration);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (secondaryVSwitchId) {
      res["SecondaryVSwitchId"] = boost::any(*secondaryVSwitchId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (untrustedEnvId) {
      res["UntrustedEnvId"] = boost::any(*untrustedEnvId);
    }
    if (untrustedEnvInstanceType) {
      res["UntrustedEnvInstanceType"] = boost::any(*untrustedEnvInstanceType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GatewayClass") != m.end() && !m["GatewayClass"].empty()) {
      gatewayClass = make_shared<string>(boost::any_cast<string>(m["GatewayClass"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PostPaid") != m.end() && !m["PostPaid"].empty()) {
      postPaid = make_shared<bool>(boost::any_cast<bool>(m["PostPaid"]));
    }
    if (m.find("PublicNetworkBandwidth") != m.end() && !m["PublicNetworkBandwidth"].empty()) {
      publicNetworkBandwidth = make_shared<long>(boost::any_cast<long>(m["PublicNetworkBandwidth"]));
    }
    if (m.find("ReleaseAfterExpiration") != m.end() && !m["ReleaseAfterExpiration"].empty()) {
      releaseAfterExpiration = make_shared<bool>(boost::any_cast<bool>(m["ReleaseAfterExpiration"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("SecondaryVSwitchId") != m.end() && !m["SecondaryVSwitchId"].empty()) {
      secondaryVSwitchId = make_shared<string>(boost::any_cast<string>(m["SecondaryVSwitchId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UntrustedEnvId") != m.end() && !m["UntrustedEnvId"].empty()) {
      untrustedEnvId = make_shared<string>(boost::any_cast<string>(m["UntrustedEnvId"]));
    }
    if (m.find("UntrustedEnvInstanceType") != m.end() && !m["UntrustedEnvInstanceType"].empty()) {
      untrustedEnvInstanceType = make_shared<string>(boost::any_cast<string>(m["UntrustedEnvInstanceType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
  }


  virtual ~CreateGatewayRequest() = default;
};
class CreateGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buyURL{};
  shared_ptr<string> code{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateGatewayResponseBody() {}

  explicit CreateGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
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
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
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


  virtual ~CreateGatewayResponseBody() = default;
};
class CreateGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayResponseBody> body{};

  CreateGatewayResponse() {}

  explicit CreateGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayResponse() = default;
};
class CreateGatewayBlockVolumeRequest : public Darabonba::Model {
public:
  shared_ptr<string> cacheMode{};
  shared_ptr<bool> chapEnabled{};
  shared_ptr<string> chapInPassword{};
  shared_ptr<string> chapInUser{};
  shared_ptr<long> chunkSize{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> localFilePath{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<bool> ossBucketSsl{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<bool> recovery{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> size{};
  shared_ptr<string> volumeProtocol{};

  CreateGatewayBlockVolumeRequest() {}

  explicit CreateGatewayBlockVolumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheMode) {
      res["CacheMode"] = boost::any(*cacheMode);
    }
    if (chapEnabled) {
      res["ChapEnabled"] = boost::any(*chapEnabled);
    }
    if (chapInPassword) {
      res["ChapInPassword"] = boost::any(*chapInPassword);
    }
    if (chapInUser) {
      res["ChapInUser"] = boost::any(*chapInUser);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (localFilePath) {
      res["LocalFilePath"] = boost::any(*localFilePath);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossBucketSsl) {
      res["OssBucketSsl"] = boost::any(*ossBucketSsl);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (recovery) {
      res["Recovery"] = boost::any(*recovery);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (volumeProtocol) {
      res["VolumeProtocol"] = boost::any(*volumeProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheMode") != m.end() && !m["CacheMode"].empty()) {
      cacheMode = make_shared<string>(boost::any_cast<string>(m["CacheMode"]));
    }
    if (m.find("ChapEnabled") != m.end() && !m["ChapEnabled"].empty()) {
      chapEnabled = make_shared<bool>(boost::any_cast<bool>(m["ChapEnabled"]));
    }
    if (m.find("ChapInPassword") != m.end() && !m["ChapInPassword"].empty()) {
      chapInPassword = make_shared<string>(boost::any_cast<string>(m["ChapInPassword"]));
    }
    if (m.find("ChapInUser") != m.end() && !m["ChapInUser"].empty()) {
      chapInUser = make_shared<string>(boost::any_cast<string>(m["ChapInUser"]));
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("LocalFilePath") != m.end() && !m["LocalFilePath"].empty()) {
      localFilePath = make_shared<string>(boost::any_cast<string>(m["LocalFilePath"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssBucketSsl") != m.end() && !m["OssBucketSsl"].empty()) {
      ossBucketSsl = make_shared<bool>(boost::any_cast<bool>(m["OssBucketSsl"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("Recovery") != m.end() && !m["Recovery"].empty()) {
      recovery = make_shared<bool>(boost::any_cast<bool>(m["Recovery"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("VolumeProtocol") != m.end() && !m["VolumeProtocol"].empty()) {
      volumeProtocol = make_shared<string>(boost::any_cast<string>(m["VolumeProtocol"]));
    }
  }


  virtual ~CreateGatewayBlockVolumeRequest() = default;
};
class CreateGatewayBlockVolumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateGatewayBlockVolumeResponseBody() {}

  explicit CreateGatewayBlockVolumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateGatewayBlockVolumeResponseBody() = default;
};
class CreateGatewayBlockVolumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayBlockVolumeResponseBody> body{};

  CreateGatewayBlockVolumeResponse() {}

  explicit CreateGatewayBlockVolumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGatewayBlockVolumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayBlockVolumeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayBlockVolumeResponse() = default;
};
class CreateGatewayCacheDiskRequest : public Darabonba::Model {
public:
  shared_ptr<string> cacheDiskCategory{};
  shared_ptr<long> cacheDiskSizeInGB{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> securityToken{};

  CreateGatewayCacheDiskRequest() {}

  explicit CreateGatewayCacheDiskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheDiskCategory) {
      res["CacheDiskCategory"] = boost::any(*cacheDiskCategory);
    }
    if (cacheDiskSizeInGB) {
      res["CacheDiskSizeInGB"] = boost::any(*cacheDiskSizeInGB);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheDiskCategory") != m.end() && !m["CacheDiskCategory"].empty()) {
      cacheDiskCategory = make_shared<string>(boost::any_cast<string>(m["CacheDiskCategory"]));
    }
    if (m.find("CacheDiskSizeInGB") != m.end() && !m["CacheDiskSizeInGB"].empty()) {
      cacheDiskSizeInGB = make_shared<long>(boost::any_cast<long>(m["CacheDiskSizeInGB"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CreateGatewayCacheDiskRequest() = default;
};
class CreateGatewayCacheDiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buyURL{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateGatewayCacheDiskResponseBody() {}

  explicit CreateGatewayCacheDiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateGatewayCacheDiskResponseBody() = default;
};
class CreateGatewayCacheDiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayCacheDiskResponseBody> body{};

  CreateGatewayCacheDiskResponse() {}

  explicit CreateGatewayCacheDiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGatewayCacheDiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayCacheDiskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayCacheDiskResponse() = default;
};
class CreateGatewayFileShareRequest : public Darabonba::Model {
public:
  shared_ptr<bool> accessBasedEnumeration{};
  shared_ptr<long> backendLimit{};
  shared_ptr<bool> browsable{};
  shared_ptr<bool> bypassCacheRead{};
  shared_ptr<string> cacheMode{};
  shared_ptr<string> clientSideCmk{};
  shared_ptr<bool> clientSideEncryption{};
  shared_ptr<bool> directIO{};
  shared_ptr<long> downloadLimit{};
  shared_ptr<bool> fastReclaim{};
  shared_ptr<long> frontendLimit{};
  shared_ptr<string> gatewayId{};
  shared_ptr<bool> ignoreDelete{};
  shared_ptr<bool> inPlace{};
  shared_ptr<long> kmsRotatePeriod{};
  shared_ptr<long> lagPeriod{};
  shared_ptr<string> localFilePath{};
  shared_ptr<string> name{};
  shared_ptr<bool> nfsV4Optimization{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<bool> ossBucketSsl{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> partialSyncPaths{};
  shared_ptr<string> pathPrefix{};
  shared_ptr<long> pollingInterval{};
  shared_ptr<string> readOnlyClientList{};
  shared_ptr<string> readOnlyUserList{};
  shared_ptr<string> readWriteClientList{};
  shared_ptr<string> readWriteUserList{};
  shared_ptr<bool> remoteSync{};
  shared_ptr<bool> remoteSyncDownload{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> serverSideAlgorithm{};
  shared_ptr<string> serverSideCmk{};
  shared_ptr<bool> serverSideEncryption{};
  shared_ptr<string> shareProtocol{};
  shared_ptr<string> squash{};
  shared_ptr<bool> supportArchive{};
  shared_ptr<bool> transferAcceleration{};
  shared_ptr<bool> windowsAcl{};

  CreateGatewayFileShareRequest() {}

  explicit CreateGatewayFileShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessBasedEnumeration) {
      res["AccessBasedEnumeration"] = boost::any(*accessBasedEnumeration);
    }
    if (backendLimit) {
      res["BackendLimit"] = boost::any(*backendLimit);
    }
    if (browsable) {
      res["Browsable"] = boost::any(*browsable);
    }
    if (bypassCacheRead) {
      res["BypassCacheRead"] = boost::any(*bypassCacheRead);
    }
    if (cacheMode) {
      res["CacheMode"] = boost::any(*cacheMode);
    }
    if (clientSideCmk) {
      res["ClientSideCmk"] = boost::any(*clientSideCmk);
    }
    if (clientSideEncryption) {
      res["ClientSideEncryption"] = boost::any(*clientSideEncryption);
    }
    if (directIO) {
      res["DirectIO"] = boost::any(*directIO);
    }
    if (downloadLimit) {
      res["DownloadLimit"] = boost::any(*downloadLimit);
    }
    if (fastReclaim) {
      res["FastReclaim"] = boost::any(*fastReclaim);
    }
    if (frontendLimit) {
      res["FrontendLimit"] = boost::any(*frontendLimit);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (ignoreDelete) {
      res["IgnoreDelete"] = boost::any(*ignoreDelete);
    }
    if (inPlace) {
      res["InPlace"] = boost::any(*inPlace);
    }
    if (kmsRotatePeriod) {
      res["KmsRotatePeriod"] = boost::any(*kmsRotatePeriod);
    }
    if (lagPeriod) {
      res["LagPeriod"] = boost::any(*lagPeriod);
    }
    if (localFilePath) {
      res["LocalFilePath"] = boost::any(*localFilePath);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nfsV4Optimization) {
      res["NfsV4Optimization"] = boost::any(*nfsV4Optimization);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossBucketSsl) {
      res["OssBucketSsl"] = boost::any(*ossBucketSsl);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (partialSyncPaths) {
      res["PartialSyncPaths"] = boost::any(*partialSyncPaths);
    }
    if (pathPrefix) {
      res["PathPrefix"] = boost::any(*pathPrefix);
    }
    if (pollingInterval) {
      res["PollingInterval"] = boost::any(*pollingInterval);
    }
    if (readOnlyClientList) {
      res["ReadOnlyClientList"] = boost::any(*readOnlyClientList);
    }
    if (readOnlyUserList) {
      res["ReadOnlyUserList"] = boost::any(*readOnlyUserList);
    }
    if (readWriteClientList) {
      res["ReadWriteClientList"] = boost::any(*readWriteClientList);
    }
    if (readWriteUserList) {
      res["ReadWriteUserList"] = boost::any(*readWriteUserList);
    }
    if (remoteSync) {
      res["RemoteSync"] = boost::any(*remoteSync);
    }
    if (remoteSyncDownload) {
      res["RemoteSyncDownload"] = boost::any(*remoteSyncDownload);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (serverSideAlgorithm) {
      res["ServerSideAlgorithm"] = boost::any(*serverSideAlgorithm);
    }
    if (serverSideCmk) {
      res["ServerSideCmk"] = boost::any(*serverSideCmk);
    }
    if (serverSideEncryption) {
      res["ServerSideEncryption"] = boost::any(*serverSideEncryption);
    }
    if (shareProtocol) {
      res["ShareProtocol"] = boost::any(*shareProtocol);
    }
    if (squash) {
      res["Squash"] = boost::any(*squash);
    }
    if (supportArchive) {
      res["SupportArchive"] = boost::any(*supportArchive);
    }
    if (transferAcceleration) {
      res["TransferAcceleration"] = boost::any(*transferAcceleration);
    }
    if (windowsAcl) {
      res["WindowsAcl"] = boost::any(*windowsAcl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessBasedEnumeration") != m.end() && !m["AccessBasedEnumeration"].empty()) {
      accessBasedEnumeration = make_shared<bool>(boost::any_cast<bool>(m["AccessBasedEnumeration"]));
    }
    if (m.find("BackendLimit") != m.end() && !m["BackendLimit"].empty()) {
      backendLimit = make_shared<long>(boost::any_cast<long>(m["BackendLimit"]));
    }
    if (m.find("Browsable") != m.end() && !m["Browsable"].empty()) {
      browsable = make_shared<bool>(boost::any_cast<bool>(m["Browsable"]));
    }
    if (m.find("BypassCacheRead") != m.end() && !m["BypassCacheRead"].empty()) {
      bypassCacheRead = make_shared<bool>(boost::any_cast<bool>(m["BypassCacheRead"]));
    }
    if (m.find("CacheMode") != m.end() && !m["CacheMode"].empty()) {
      cacheMode = make_shared<string>(boost::any_cast<string>(m["CacheMode"]));
    }
    if (m.find("ClientSideCmk") != m.end() && !m["ClientSideCmk"].empty()) {
      clientSideCmk = make_shared<string>(boost::any_cast<string>(m["ClientSideCmk"]));
    }
    if (m.find("ClientSideEncryption") != m.end() && !m["ClientSideEncryption"].empty()) {
      clientSideEncryption = make_shared<bool>(boost::any_cast<bool>(m["ClientSideEncryption"]));
    }
    if (m.find("DirectIO") != m.end() && !m["DirectIO"].empty()) {
      directIO = make_shared<bool>(boost::any_cast<bool>(m["DirectIO"]));
    }
    if (m.find("DownloadLimit") != m.end() && !m["DownloadLimit"].empty()) {
      downloadLimit = make_shared<long>(boost::any_cast<long>(m["DownloadLimit"]));
    }
    if (m.find("FastReclaim") != m.end() && !m["FastReclaim"].empty()) {
      fastReclaim = make_shared<bool>(boost::any_cast<bool>(m["FastReclaim"]));
    }
    if (m.find("FrontendLimit") != m.end() && !m["FrontendLimit"].empty()) {
      frontendLimit = make_shared<long>(boost::any_cast<long>(m["FrontendLimit"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IgnoreDelete") != m.end() && !m["IgnoreDelete"].empty()) {
      ignoreDelete = make_shared<bool>(boost::any_cast<bool>(m["IgnoreDelete"]));
    }
    if (m.find("InPlace") != m.end() && !m["InPlace"].empty()) {
      inPlace = make_shared<bool>(boost::any_cast<bool>(m["InPlace"]));
    }
    if (m.find("KmsRotatePeriod") != m.end() && !m["KmsRotatePeriod"].empty()) {
      kmsRotatePeriod = make_shared<long>(boost::any_cast<long>(m["KmsRotatePeriod"]));
    }
    if (m.find("LagPeriod") != m.end() && !m["LagPeriod"].empty()) {
      lagPeriod = make_shared<long>(boost::any_cast<long>(m["LagPeriod"]));
    }
    if (m.find("LocalFilePath") != m.end() && !m["LocalFilePath"].empty()) {
      localFilePath = make_shared<string>(boost::any_cast<string>(m["LocalFilePath"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NfsV4Optimization") != m.end() && !m["NfsV4Optimization"].empty()) {
      nfsV4Optimization = make_shared<bool>(boost::any_cast<bool>(m["NfsV4Optimization"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssBucketSsl") != m.end() && !m["OssBucketSsl"].empty()) {
      ossBucketSsl = make_shared<bool>(boost::any_cast<bool>(m["OssBucketSsl"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("PartialSyncPaths") != m.end() && !m["PartialSyncPaths"].empty()) {
      partialSyncPaths = make_shared<string>(boost::any_cast<string>(m["PartialSyncPaths"]));
    }
    if (m.find("PathPrefix") != m.end() && !m["PathPrefix"].empty()) {
      pathPrefix = make_shared<string>(boost::any_cast<string>(m["PathPrefix"]));
    }
    if (m.find("PollingInterval") != m.end() && !m["PollingInterval"].empty()) {
      pollingInterval = make_shared<long>(boost::any_cast<long>(m["PollingInterval"]));
    }
    if (m.find("ReadOnlyClientList") != m.end() && !m["ReadOnlyClientList"].empty()) {
      readOnlyClientList = make_shared<string>(boost::any_cast<string>(m["ReadOnlyClientList"]));
    }
    if (m.find("ReadOnlyUserList") != m.end() && !m["ReadOnlyUserList"].empty()) {
      readOnlyUserList = make_shared<string>(boost::any_cast<string>(m["ReadOnlyUserList"]));
    }
    if (m.find("ReadWriteClientList") != m.end() && !m["ReadWriteClientList"].empty()) {
      readWriteClientList = make_shared<string>(boost::any_cast<string>(m["ReadWriteClientList"]));
    }
    if (m.find("ReadWriteUserList") != m.end() && !m["ReadWriteUserList"].empty()) {
      readWriteUserList = make_shared<string>(boost::any_cast<string>(m["ReadWriteUserList"]));
    }
    if (m.find("RemoteSync") != m.end() && !m["RemoteSync"].empty()) {
      remoteSync = make_shared<bool>(boost::any_cast<bool>(m["RemoteSync"]));
    }
    if (m.find("RemoteSyncDownload") != m.end() && !m["RemoteSyncDownload"].empty()) {
      remoteSyncDownload = make_shared<bool>(boost::any_cast<bool>(m["RemoteSyncDownload"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ServerSideAlgorithm") != m.end() && !m["ServerSideAlgorithm"].empty()) {
      serverSideAlgorithm = make_shared<string>(boost::any_cast<string>(m["ServerSideAlgorithm"]));
    }
    if (m.find("ServerSideCmk") != m.end() && !m["ServerSideCmk"].empty()) {
      serverSideCmk = make_shared<string>(boost::any_cast<string>(m["ServerSideCmk"]));
    }
    if (m.find("ServerSideEncryption") != m.end() && !m["ServerSideEncryption"].empty()) {
      serverSideEncryption = make_shared<bool>(boost::any_cast<bool>(m["ServerSideEncryption"]));
    }
    if (m.find("ShareProtocol") != m.end() && !m["ShareProtocol"].empty()) {
      shareProtocol = make_shared<string>(boost::any_cast<string>(m["ShareProtocol"]));
    }
    if (m.find("Squash") != m.end() && !m["Squash"].empty()) {
      squash = make_shared<string>(boost::any_cast<string>(m["Squash"]));
    }
    if (m.find("SupportArchive") != m.end() && !m["SupportArchive"].empty()) {
      supportArchive = make_shared<bool>(boost::any_cast<bool>(m["SupportArchive"]));
    }
    if (m.find("TransferAcceleration") != m.end() && !m["TransferAcceleration"].empty()) {
      transferAcceleration = make_shared<bool>(boost::any_cast<bool>(m["TransferAcceleration"]));
    }
    if (m.find("WindowsAcl") != m.end() && !m["WindowsAcl"].empty()) {
      windowsAcl = make_shared<bool>(boost::any_cast<bool>(m["WindowsAcl"]));
    }
  }


  virtual ~CreateGatewayFileShareRequest() = default;
};
class CreateGatewayFileShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateGatewayFileShareResponseBody() {}

  explicit CreateGatewayFileShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateGatewayFileShareResponseBody() = default;
};
class CreateGatewayFileShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayFileShareResponseBody> body{};

  CreateGatewayFileShareResponse() {}

  explicit CreateGatewayFileShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGatewayFileShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayFileShareResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayFileShareResponse() = default;
};
class CreateGatewayLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> slsLogstore{};
  shared_ptr<string> slsProject{};

  CreateGatewayLoggingRequest() {}

  explicit CreateGatewayLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (slsLogstore) {
      res["SlsLogstore"] = boost::any(*slsLogstore);
    }
    if (slsProject) {
      res["SlsProject"] = boost::any(*slsProject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SlsLogstore") != m.end() && !m["SlsLogstore"].empty()) {
      slsLogstore = make_shared<string>(boost::any_cast<string>(m["SlsLogstore"]));
    }
    if (m.find("SlsProject") != m.end() && !m["SlsProject"].empty()) {
      slsProject = make_shared<string>(boost::any_cast<string>(m["SlsProject"]));
    }
  }


  virtual ~CreateGatewayLoggingRequest() = default;
};
class CreateGatewayLoggingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateGatewayLoggingResponseBody() {}

  explicit CreateGatewayLoggingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~CreateGatewayLoggingResponseBody() = default;
};
class CreateGatewayLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewayLoggingResponseBody> body{};

  CreateGatewayLoggingResponse() {}

  explicit CreateGatewayLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGatewayLoggingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewayLoggingResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewayLoggingResponse() = default;
};
class CreateGatewaySMBUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> password{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> username{};

  CreateGatewaySMBUserRequest() {}

  explicit CreateGatewaySMBUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~CreateGatewaySMBUserRequest() = default;
};
class CreateGatewaySMBUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  CreateGatewaySMBUserResponseBody() {}

  explicit CreateGatewaySMBUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateGatewaySMBUserResponseBody() = default;
};
class CreateGatewaySMBUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGatewaySMBUserResponseBody> body{};

  CreateGatewaySMBUserResponse() {}

  explicit CreateGatewaySMBUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGatewaySMBUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGatewaySMBUserResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGatewaySMBUserResponse() = default;
};
class CreateStorageBundleRequest : public Darabonba::Model {
public:
  shared_ptr<string> backendBucketRegionId{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> securityToken{};

  CreateStorageBundleRequest() {}

  explicit CreateStorageBundleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendBucketRegionId) {
      res["BackendBucketRegionId"] = boost::any(*backendBucketRegionId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendBucketRegionId") != m.end() && !m["BackendBucketRegionId"].empty()) {
      backendBucketRegionId = make_shared<string>(boost::any_cast<string>(m["BackendBucketRegionId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~CreateStorageBundleRequest() = default;
};
class CreateStorageBundleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<bool> success{};

  CreateStorageBundleResponseBody() {}

  explicit CreateStorageBundleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateStorageBundleResponseBody() = default;
};
class CreateStorageBundleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateStorageBundleResponseBody> body{};

  CreateStorageBundleResponse() {}

  explicit CreateStorageBundleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateStorageBundleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateStorageBundleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateStorageBundleResponse() = default;
};
class DeleteCSGClientsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clientIds{};
  shared_ptr<string> clientRegionId{};
  shared_ptr<string> securityToken{};

  DeleteCSGClientsRequest() {}

  explicit DeleteCSGClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (clientRegionId) {
      res["ClientRegionId"] = boost::any(*clientRegionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientRegionId") != m.end() && !m["ClientRegionId"].empty()) {
      clientRegionId = make_shared<string>(boost::any_cast<string>(m["ClientRegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteCSGClientsRequest() = default;
};
class DeleteCSGClientsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIdsShrink{};
  shared_ptr<string> clientRegionId{};
  shared_ptr<string> securityToken{};

  DeleteCSGClientsShrinkRequest() {}

  explicit DeleteCSGClientsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIdsShrink) {
      res["ClientIds"] = boost::any(*clientIdsShrink);
    }
    if (clientRegionId) {
      res["ClientRegionId"] = boost::any(*clientRegionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIdsShrink = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("ClientRegionId") != m.end() && !m["ClientRegionId"].empty()) {
      clientRegionId = make_shared<string>(boost::any_cast<string>(m["ClientRegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteCSGClientsShrinkRequest() = default;
};
class DeleteCSGClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteCSGClientsResponseBody() {}

  explicit DeleteCSGClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteCSGClientsResponseBody() = default;
};
class DeleteCSGClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCSGClientsResponseBody> body{};

  DeleteCSGClientsResponse() {}

  explicit DeleteCSGClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCSGClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCSGClientsResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCSGClientsResponse() = default;
};
class DeleteElasticGatewayPrivateZoneRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DeleteElasticGatewayPrivateZoneRequest() {}

  explicit DeleteElasticGatewayPrivateZoneRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteElasticGatewayPrivateZoneRequest() = default;
};
class DeleteElasticGatewayPrivateZoneResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteElasticGatewayPrivateZoneResponseBody() {}

  explicit DeleteElasticGatewayPrivateZoneResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteElasticGatewayPrivateZoneResponseBody() = default;
};
class DeleteElasticGatewayPrivateZoneResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteElasticGatewayPrivateZoneResponseBody> body{};

  DeleteElasticGatewayPrivateZoneResponse() {}

  explicit DeleteElasticGatewayPrivateZoneResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteElasticGatewayPrivateZoneResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteElasticGatewayPrivateZoneResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteElasticGatewayPrivateZoneResponse() = default;
};
class DeleteExpressSyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> expressSyncId{};
  shared_ptr<string> securityToken{};

  DeleteExpressSyncRequest() {}

  explicit DeleteExpressSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressSyncId) {
      res["ExpressSyncId"] = boost::any(*expressSyncId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressSyncId") != m.end() && !m["ExpressSyncId"].empty()) {
      expressSyncId = make_shared<string>(boost::any_cast<string>(m["ExpressSyncId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteExpressSyncRequest() = default;
};
class DeleteExpressSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteExpressSyncResponseBody() {}

  explicit DeleteExpressSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteExpressSyncResponseBody() = default;
};
class DeleteExpressSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteExpressSyncResponseBody> body{};

  DeleteExpressSyncResponse() {}

  explicit DeleteExpressSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteExpressSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteExpressSyncResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteExpressSyncResponse() = default;
};
class DeleteGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> reasonDetail{};
  shared_ptr<string> reasonType{};
  shared_ptr<string> securityToken{};

  DeleteGatewayRequest() {}

  explicit DeleteGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (reasonDetail) {
      res["ReasonDetail"] = boost::any(*reasonDetail);
    }
    if (reasonType) {
      res["ReasonType"] = boost::any(*reasonType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("ReasonDetail") != m.end() && !m["ReasonDetail"].empty()) {
      reasonDetail = make_shared<string>(boost::any_cast<string>(m["ReasonDetail"]));
    }
    if (m.find("ReasonType") != m.end() && !m["ReasonType"].empty()) {
      reasonType = make_shared<string>(boost::any_cast<string>(m["ReasonType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteGatewayRequest() = default;
};
class DeleteGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteGatewayResponseBody() {}

  explicit DeleteGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteGatewayResponseBody() = default;
};
class DeleteGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayResponseBody> body{};

  DeleteGatewayResponse() {}

  explicit DeleteGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayResponse() = default;
};
class DeleteGatewayBlockVolumesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<bool> isSourceDeletion{};
  shared_ptr<string> securityToken{};

  DeleteGatewayBlockVolumesRequest() {}

  explicit DeleteGatewayBlockVolumesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (isSourceDeletion) {
      res["IsSourceDeletion"] = boost::any(*isSourceDeletion);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("IsSourceDeletion") != m.end() && !m["IsSourceDeletion"].empty()) {
      isSourceDeletion = make_shared<bool>(boost::any_cast<bool>(m["IsSourceDeletion"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteGatewayBlockVolumesRequest() = default;
};
class DeleteGatewayBlockVolumesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteGatewayBlockVolumesResponseBody() {}

  explicit DeleteGatewayBlockVolumesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteGatewayBlockVolumesResponseBody() = default;
};
class DeleteGatewayBlockVolumesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayBlockVolumesResponseBody> body{};

  DeleteGatewayBlockVolumesResponse() {}

  explicit DeleteGatewayBlockVolumesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGatewayBlockVolumesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayBlockVolumesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayBlockVolumesResponse() = default;
};
class DeleteGatewayCacheDiskRequest : public Darabonba::Model {
public:
  shared_ptr<string> cacheId{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> localFilePath{};
  shared_ptr<string> securityToken{};

  DeleteGatewayCacheDiskRequest() {}

  explicit DeleteGatewayCacheDiskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheId) {
      res["CacheId"] = boost::any(*cacheId);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (localFilePath) {
      res["LocalFilePath"] = boost::any(*localFilePath);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheId") != m.end() && !m["CacheId"].empty()) {
      cacheId = make_shared<string>(boost::any_cast<string>(m["CacheId"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("LocalFilePath") != m.end() && !m["LocalFilePath"].empty()) {
      localFilePath = make_shared<string>(boost::any_cast<string>(m["LocalFilePath"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteGatewayCacheDiskRequest() = default;
};
class DeleteGatewayCacheDiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteGatewayCacheDiskResponseBody() {}

  explicit DeleteGatewayCacheDiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteGatewayCacheDiskResponseBody() = default;
};
class DeleteGatewayCacheDiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayCacheDiskResponseBody> body{};

  DeleteGatewayCacheDiskResponse() {}

  explicit DeleteGatewayCacheDiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGatewayCacheDiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayCacheDiskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayCacheDiskResponse() = default;
};
class DeleteGatewayFileSharesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> force{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<string> securityToken{};

  DeleteGatewayFileSharesRequest() {}

  explicit DeleteGatewayFileSharesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (force) {
      res["Force"] = boost::any(*force);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Force") != m.end() && !m["Force"].empty()) {
      force = make_shared<bool>(boost::any_cast<bool>(m["Force"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteGatewayFileSharesRequest() = default;
};
class DeleteGatewayFileSharesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteGatewayFileSharesResponseBody() {}

  explicit DeleteGatewayFileSharesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteGatewayFileSharesResponseBody() = default;
};
class DeleteGatewayFileSharesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayFileSharesResponseBody> body{};

  DeleteGatewayFileSharesResponse() {}

  explicit DeleteGatewayFileSharesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGatewayFileSharesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayFileSharesResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayFileSharesResponse() = default;
};
class DeleteGatewayLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DeleteGatewayLoggingRequest() {}

  explicit DeleteGatewayLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeleteGatewayLoggingRequest() = default;
};
class DeleteGatewayLoggingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteGatewayLoggingResponseBody() {}

  explicit DeleteGatewayLoggingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DeleteGatewayLoggingResponseBody() = default;
};
class DeleteGatewayLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewayLoggingResponseBody> body{};

  DeleteGatewayLoggingResponse() {}

  explicit DeleteGatewayLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGatewayLoggingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewayLoggingResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewayLoggingResponse() = default;
};
class DeleteGatewaySMBUserRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> username{};

  DeleteGatewaySMBUserRequest() {}

  explicit DeleteGatewaySMBUserRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DeleteGatewaySMBUserRequest() = default;
};
class DeleteGatewaySMBUserResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeleteGatewaySMBUserResponseBody() {}

  explicit DeleteGatewaySMBUserResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeleteGatewaySMBUserResponseBody() = default;
};
class DeleteGatewaySMBUserResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGatewaySMBUserResponseBody> body{};

  DeleteGatewaySMBUserResponse() {}

  explicit DeleteGatewaySMBUserResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGatewaySMBUserResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGatewaySMBUserResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGatewaySMBUserResponse() = default;
};
class DeleteStorageBundleRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<string> storageBundleId{};

  DeleteStorageBundleRequest() {}

  explicit DeleteStorageBundleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
  }


  virtual ~DeleteStorageBundleRequest() = default;
};
class DeleteStorageBundleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteStorageBundleResponseBody() {}

  explicit DeleteStorageBundleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DeleteStorageBundleResponseBody() = default;
};
class DeleteStorageBundleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteStorageBundleResponseBody> body{};

  DeleteStorageBundleResponse() {}

  explicit DeleteStorageBundleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteStorageBundleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteStorageBundleResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteStorageBundleResponse() = default;
};
class DeployCSGClientsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientRegionId{};
  shared_ptr<vector<string>> ecsInstanceIds{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> vpcId{};

  DeployCSGClientsRequest() {}

  explicit DeployCSGClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientRegionId) {
      res["ClientRegionId"] = boost::any(*clientRegionId);
    }
    if (ecsInstanceIds) {
      res["EcsInstanceIds"] = boost::any(*ecsInstanceIds);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientRegionId") != m.end() && !m["ClientRegionId"].empty()) {
      clientRegionId = make_shared<string>(boost::any_cast<string>(m["ClientRegionId"]));
    }
    if (m.find("EcsInstanceIds") != m.end() && !m["EcsInstanceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EcsInstanceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EcsInstanceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      ecsInstanceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DeployCSGClientsRequest() = default;
};
class DeployCSGClientsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientRegionId{};
  shared_ptr<string> ecsInstanceIdsShrink{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> vpcId{};

  DeployCSGClientsShrinkRequest() {}

  explicit DeployCSGClientsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientRegionId) {
      res["ClientRegionId"] = boost::any(*clientRegionId);
    }
    if (ecsInstanceIdsShrink) {
      res["EcsInstanceIds"] = boost::any(*ecsInstanceIdsShrink);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientRegionId") != m.end() && !m["ClientRegionId"].empty()) {
      clientRegionId = make_shared<string>(boost::any_cast<string>(m["ClientRegionId"]));
    }
    if (m.find("EcsInstanceIds") != m.end() && !m["EcsInstanceIds"].empty()) {
      ecsInstanceIdsShrink = make_shared<string>(boost::any_cast<string>(m["EcsInstanceIds"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DeployCSGClientsShrinkRequest() = default;
};
class DeployCSGClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeployCSGClientsResponseBody() {}

  explicit DeployCSGClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeployCSGClientsResponseBody() = default;
};
class DeployCSGClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployCSGClientsResponseBody> body{};

  DeployCSGClientsResponse() {}

  explicit DeployCSGClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployCSGClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployCSGClientsResponseBody>(model1);
      }
    }
  }


  virtual ~DeployCSGClientsResponse() = default;
};
class DeployCacheDiskRequest : public Darabonba::Model {
public:
  shared_ptr<string> cacheConfig{};
  shared_ptr<string> diskCategory{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> sizeInGB{};

  DeployCacheDiskRequest() {}

  explicit DeployCacheDiskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheConfig) {
      res["CacheConfig"] = boost::any(*cacheConfig);
    }
    if (diskCategory) {
      res["DiskCategory"] = boost::any(*diskCategory);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (sizeInGB) {
      res["SizeInGB"] = boost::any(*sizeInGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheConfig") != m.end() && !m["CacheConfig"].empty()) {
      cacheConfig = make_shared<string>(boost::any_cast<string>(m["CacheConfig"]));
    }
    if (m.find("DiskCategory") != m.end() && !m["DiskCategory"].empty()) {
      diskCategory = make_shared<string>(boost::any_cast<string>(m["DiskCategory"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SizeInGB") != m.end() && !m["SizeInGB"].empty()) {
      sizeInGB = make_shared<long>(boost::any_cast<long>(m["SizeInGB"]));
    }
  }


  virtual ~DeployCacheDiskRequest() = default;
};
class DeployCacheDiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeployCacheDiskResponseBody() {}

  explicit DeployCacheDiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeployCacheDiskResponseBody() = default;
};
class DeployCacheDiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployCacheDiskResponseBody> body{};

  DeployCacheDiskResponse() {}

  explicit DeployCacheDiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployCacheDiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployCacheDiskResponseBody>(model1);
      }
    }
  }


  virtual ~DeployCacheDiskResponse() = default;
};
class DeployGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayClass{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DeployGatewayRequest() {}

  explicit DeployGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayClass) {
      res["GatewayClass"] = boost::any(*gatewayClass);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayClass") != m.end() && !m["GatewayClass"].empty()) {
      gatewayClass = make_shared<string>(boost::any_cast<string>(m["GatewayClass"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DeployGatewayRequest() = default;
};
class DeployGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DeployGatewayResponseBody() {}

  explicit DeployGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DeployGatewayResponseBody() = default;
};
class DeployGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeployGatewayResponseBody> body{};

  DeployGatewayResponse() {}

  explicit DeployGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeployGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeployGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~DeployGatewayResponse() = default;
};
class DescribeAccountConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeAccountConfigRequest() {}

  explicit DescribeAccountConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeAccountConfigRequest() = default;
};
class DescribeAccountConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isSupportClientSideEncryption{};
  shared_ptr<bool> isSupportElasticGatewayBeta{};
  shared_ptr<bool> isSupportGatewayLogging{};
  shared_ptr<bool> isSupportServerSideEncryption{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeAccountConfigResponseBody() {}

  explicit DescribeAccountConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isSupportClientSideEncryption) {
      res["IsSupportClientSideEncryption"] = boost::any(*isSupportClientSideEncryption);
    }
    if (isSupportElasticGatewayBeta) {
      res["IsSupportElasticGatewayBeta"] = boost::any(*isSupportElasticGatewayBeta);
    }
    if (isSupportGatewayLogging) {
      res["IsSupportGatewayLogging"] = boost::any(*isSupportGatewayLogging);
    }
    if (isSupportServerSideEncryption) {
      res["IsSupportServerSideEncryption"] = boost::any(*isSupportServerSideEncryption);
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
    if (m.find("IsSupportClientSideEncryption") != m.end() && !m["IsSupportClientSideEncryption"].empty()) {
      isSupportClientSideEncryption = make_shared<bool>(boost::any_cast<bool>(m["IsSupportClientSideEncryption"]));
    }
    if (m.find("IsSupportElasticGatewayBeta") != m.end() && !m["IsSupportElasticGatewayBeta"].empty()) {
      isSupportElasticGatewayBeta = make_shared<bool>(boost::any_cast<bool>(m["IsSupportElasticGatewayBeta"]));
    }
    if (m.find("IsSupportGatewayLogging") != m.end() && !m["IsSupportGatewayLogging"].empty()) {
      isSupportGatewayLogging = make_shared<bool>(boost::any_cast<bool>(m["IsSupportGatewayLogging"]));
    }
    if (m.find("IsSupportServerSideEncryption") != m.end() && !m["IsSupportServerSideEncryption"].empty()) {
      isSupportServerSideEncryption = make_shared<bool>(boost::any_cast<bool>(m["IsSupportServerSideEncryption"]));
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


  virtual ~DescribeAccountConfigResponseBody() = default;
};
class DescribeAccountConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeAccountConfigResponseBody> body{};

  DescribeAccountConfigResponse() {}

  explicit DescribeAccountConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeAccountConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeAccountConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeAccountConfigResponse() = default;
};
class DescribeBlockVolumeSnapshotsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeBlockVolumeSnapshotsRequest() {}

  explicit DescribeBlockVolumeSnapshotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeBlockVolumeSnapshotsRequest() = default;
};
class DescribeBlockVolumeSnapshotsResponseBodySnapshotsSnapshot : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<long> size{};
  shared_ptr<string> snapshotName{};

  DescribeBlockVolumeSnapshotsResponseBodySnapshotsSnapshot() {}

  explicit DescribeBlockVolumeSnapshotsResponseBodySnapshotsSnapshot(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (snapshotName) {
      res["SnapshotName"] = boost::any(*snapshotName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("SnapshotName") != m.end() && !m["SnapshotName"].empty()) {
      snapshotName = make_shared<string>(boost::any_cast<string>(m["SnapshotName"]));
    }
  }


  virtual ~DescribeBlockVolumeSnapshotsResponseBodySnapshotsSnapshot() = default;
};
class DescribeBlockVolumeSnapshotsResponseBodySnapshots : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeBlockVolumeSnapshotsResponseBodySnapshotsSnapshot>> snapshot{};

  DescribeBlockVolumeSnapshotsResponseBodySnapshots() {}

  explicit DescribeBlockVolumeSnapshotsResponseBodySnapshots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (snapshot) {
      vector<boost::any> temp1;
      for(auto item1:*snapshot){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Snapshot"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Snapshot") != m.end() && !m["Snapshot"].empty()) {
      if (typeid(vector<boost::any>) == m["Snapshot"].type()) {
        vector<DescribeBlockVolumeSnapshotsResponseBodySnapshotsSnapshot> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Snapshot"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBlockVolumeSnapshotsResponseBodySnapshotsSnapshot model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        snapshot = make_shared<vector<DescribeBlockVolumeSnapshotsResponseBodySnapshotsSnapshot>>(expect1);
      }
    }
  }


  virtual ~DescribeBlockVolumeSnapshotsResponseBodySnapshots() = default;
};
class DescribeBlockVolumeSnapshotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeBlockVolumeSnapshotsResponseBodySnapshots> snapshots{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeBlockVolumeSnapshotsResponseBody() {}

  explicit DescribeBlockVolumeSnapshotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (snapshots) {
      res["Snapshots"] = snapshots ? boost::any(snapshots->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Snapshots") != m.end() && !m["Snapshots"].empty()) {
      if (typeid(map<string, boost::any>) == m["Snapshots"].type()) {
        DescribeBlockVolumeSnapshotsResponseBodySnapshots model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Snapshots"]));
        snapshots = make_shared<DescribeBlockVolumeSnapshotsResponseBodySnapshots>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeBlockVolumeSnapshotsResponseBody() = default;
};
class DescribeBlockVolumeSnapshotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeBlockVolumeSnapshotsResponseBody> body{};

  DescribeBlockVolumeSnapshotsResponse() {}

  explicit DescribeBlockVolumeSnapshotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBlockVolumeSnapshotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBlockVolumeSnapshotsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBlockVolumeSnapshotsResponse() = default;
};
class DescribeCSGClientTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientRegionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeCSGClientTasksRequest() {}

  explicit DescribeCSGClientTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientRegionId) {
      res["ClientRegionId"] = boost::any(*clientRegionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientRegionId") != m.end() && !m["ClientRegionId"].empty()) {
      clientRegionId = make_shared<string>(boost::any_cast<string>(m["ClientRegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeCSGClientTasksRequest() = default;
};
class DescribeCSGClientTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<long> createdTime{};
  shared_ptr<string> messageKey{};
  shared_ptr<string> messageParams{};
  shared_ptr<string> name{};
  shared_ptr<long> progress{};
  shared_ptr<string> stateCode{};
  shared_ptr<string> taskId{};
  shared_ptr<long> updatedTime{};

  DescribeCSGClientTasksResponseBodyTasks() {}

  explicit DescribeCSGClientTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (messageKey) {
      res["MessageKey"] = boost::any(*messageKey);
    }
    if (messageParams) {
      res["MessageParams"] = boost::any(*messageParams);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (stateCode) {
      res["StateCode"] = boost::any(*stateCode);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("MessageKey") != m.end() && !m["MessageKey"].empty()) {
      messageKey = make_shared<string>(boost::any_cast<string>(m["MessageKey"]));
    }
    if (m.find("MessageParams") != m.end() && !m["MessageParams"].empty()) {
      messageParams = make_shared<string>(boost::any_cast<string>(m["MessageParams"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("StateCode") != m.end() && !m["StateCode"].empty()) {
      stateCode = make_shared<string>(boost::any_cast<string>(m["StateCode"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
  }


  virtual ~DescribeCSGClientTasksResponseBodyTasks() = default;
};
class DescribeCSGClientTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<vector<DescribeCSGClientTasksResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  DescribeCSGClientTasksResponseBody() {}

  explicit DescribeCSGClientTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
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
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<DescribeCSGClientTasksResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCSGClientTasksResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<DescribeCSGClientTasksResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeCSGClientTasksResponseBody() = default;
};
class DescribeCSGClientTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCSGClientTasksResponseBody> body{};

  DescribeCSGClientTasksResponse() {}

  explicit DescribeCSGClientTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCSGClientTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCSGClientTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCSGClientTasksResponse() = default;
};
class DescribeCSGClientsRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientRegionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeCSGClientsRequest() {}

  explicit DescribeCSGClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientRegionId) {
      res["ClientRegionId"] = boost::any(*clientRegionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientRegionId") != m.end() && !m["ClientRegionId"].empty()) {
      clientRegionId = make_shared<string>(boost::any_cast<string>(m["ClientRegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeCSGClientsRequest() = default;
};
class DescribeCSGClientsResponseBodyClients : public Darabonba::Model {
public:
  shared_ptr<string> clientDeletionCommand{};
  shared_ptr<string> clientId{};
  shared_ptr<string> clientInstallationCommand{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<string> hostInstanceId{};
  shared_ptr<long> lastHeartbeatTime{};
  shared_ptr<string> status{};
  shared_ptr<string> vpcId{};
  shared_ptr<string> workDirectory{};

  DescribeCSGClientsResponseBodyClients() {}

  explicit DescribeCSGClientsResponseBodyClients(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientDeletionCommand) {
      res["ClientDeletionCommand"] = boost::any(*clientDeletionCommand);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientInstallationCommand) {
      res["ClientInstallationCommand"] = boost::any(*clientInstallationCommand);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (hostInstanceId) {
      res["HostInstanceId"] = boost::any(*hostInstanceId);
    }
    if (lastHeartbeatTime) {
      res["LastHeartbeatTime"] = boost::any(*lastHeartbeatTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    if (workDirectory) {
      res["WorkDirectory"] = boost::any(*workDirectory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientDeletionCommand") != m.end() && !m["ClientDeletionCommand"].empty()) {
      clientDeletionCommand = make_shared<string>(boost::any_cast<string>(m["ClientDeletionCommand"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientInstallationCommand") != m.end() && !m["ClientInstallationCommand"].empty()) {
      clientInstallationCommand = make_shared<string>(boost::any_cast<string>(m["ClientInstallationCommand"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("HostInstanceId") != m.end() && !m["HostInstanceId"].empty()) {
      hostInstanceId = make_shared<string>(boost::any_cast<string>(m["HostInstanceId"]));
    }
    if (m.find("LastHeartbeatTime") != m.end() && !m["LastHeartbeatTime"].empty()) {
      lastHeartbeatTime = make_shared<long>(boost::any_cast<long>(m["LastHeartbeatTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
    if (m.find("WorkDirectory") != m.end() && !m["WorkDirectory"].empty()) {
      workDirectory = make_shared<string>(boost::any_cast<string>(m["WorkDirectory"]));
    }
  }


  virtual ~DescribeCSGClientsResponseBodyClients() = default;
};
class DescribeCSGClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeCSGClientsResponseBodyClients>> clients{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeCSGClientsResponseBody() {}

  explicit DescribeCSGClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clients) {
      vector<boost::any> temp1;
      for(auto item1:*clients){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Clients"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("Clients") != m.end() && !m["Clients"].empty()) {
      if (typeid(vector<boost::any>) == m["Clients"].type()) {
        vector<DescribeCSGClientsResponseBodyClients> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Clients"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeCSGClientsResponseBodyClients model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clients = make_shared<vector<DescribeCSGClientsResponseBodyClients>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeCSGClientsResponseBody() = default;
};
class DescribeCSGClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCSGClientsResponseBody> body{};

  DescribeCSGClientsResponse() {}

  explicit DescribeCSGClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCSGClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCSGClientsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCSGClientsResponse() = default;
};
class DescribeDashboardRequest : public Darabonba::Model {
public:
  shared_ptr<string> backendBucketRegionId{};
  shared_ptr<string> resourceGroupId{};
  shared_ptr<string> securityToken{};

  DescribeDashboardRequest() {}

  explicit DescribeDashboardRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendBucketRegionId) {
      res["BackendBucketRegionId"] = boost::any(*backendBucketRegionId);
    }
    if (resourceGroupId) {
      res["ResourceGroupId"] = boost::any(*resourceGroupId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendBucketRegionId") != m.end() && !m["BackendBucketRegionId"].empty()) {
      backendBucketRegionId = make_shared<string>(boost::any_cast<string>(m["BackendBucketRegionId"]));
    }
    if (m.find("ResourceGroupId") != m.end() && !m["ResourceGroupId"].empty()) {
      resourceGroupId = make_shared<string>(boost::any_cast<string>(m["ResourceGroupId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeDashboardRequest() = default;
};
class DescribeDashboardResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> overview{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeDashboardResponseBody() {}

  explicit DescribeDashboardResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (overview) {
      res["Overview"] = boost::any(*overview);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Overview") != m.end() && !m["Overview"].empty()) {
      overview = make_shared<string>(boost::any_cast<string>(m["Overview"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeDashboardResponseBody() = default;
};
class DescribeDashboardResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDashboardResponseBody> body{};

  DescribeDashboardResponse() {}

  explicit DescribeDashboardResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDashboardResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDashboardResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDashboardResponse() = default;
};
class DescribeExpireCachesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeExpireCachesRequest() {}

  explicit DescribeExpireCachesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeExpireCachesRequest() = default;
};
class DescribeExpireCachesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> cacheFilePaths{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeExpireCachesResponseBody() {}

  explicit DescribeExpireCachesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheFilePaths) {
      res["CacheFilePaths"] = boost::any(*cacheFilePaths);
    }
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
    if (m.find("CacheFilePaths") != m.end() && !m["CacheFilePaths"].empty()) {
      cacheFilePaths = make_shared<string>(boost::any_cast<string>(m["CacheFilePaths"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeExpireCachesResponseBody() = default;
};
class DescribeExpireCachesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpireCachesResponseBody> body{};

  DescribeExpireCachesResponse() {}

  explicit DescribeExpireCachesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpireCachesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpireCachesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpireCachesResponse() = default;
};
class DescribeExpressSyncSharesRequest : public Darabonba::Model {
public:
  shared_ptr<string> expressSyncIds{};
  shared_ptr<bool> isExternal{};
  shared_ptr<string> securityToken{};

  DescribeExpressSyncSharesRequest() {}

  explicit DescribeExpressSyncSharesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressSyncIds) {
      res["ExpressSyncIds"] = boost::any(*expressSyncIds);
    }
    if (isExternal) {
      res["IsExternal"] = boost::any(*isExternal);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressSyncIds") != m.end() && !m["ExpressSyncIds"].empty()) {
      expressSyncIds = make_shared<string>(boost::any_cast<string>(m["ExpressSyncIds"]));
    }
    if (m.find("IsExternal") != m.end() && !m["IsExternal"].empty()) {
      isExternal = make_shared<bool>(boost::any_cast<bool>(m["IsExternal"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeExpressSyncSharesRequest() = default;
};
class DescribeExpressSyncSharesResponseBodySharesShare : public Darabonba::Model {
public:
  shared_ptr<string> expressSyncId{};
  shared_ptr<string> expressSyncState{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};
  shared_ptr<string> gatewayRegion{};
  shared_ptr<string> mnsQueue{};
  shared_ptr<string> shareName{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<long> syncProgress{};

  DescribeExpressSyncSharesResponseBodySharesShare() {}

  explicit DescribeExpressSyncSharesResponseBodySharesShare(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressSyncId) {
      res["ExpressSyncId"] = boost::any(*expressSyncId);
    }
    if (expressSyncState) {
      res["ExpressSyncState"] = boost::any(*expressSyncState);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (gatewayRegion) {
      res["GatewayRegion"] = boost::any(*gatewayRegion);
    }
    if (mnsQueue) {
      res["MnsQueue"] = boost::any(*mnsQueue);
    }
    if (shareName) {
      res["ShareName"] = boost::any(*shareName);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    if (syncProgress) {
      res["SyncProgress"] = boost::any(*syncProgress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressSyncId") != m.end() && !m["ExpressSyncId"].empty()) {
      expressSyncId = make_shared<string>(boost::any_cast<string>(m["ExpressSyncId"]));
    }
    if (m.find("ExpressSyncState") != m.end() && !m["ExpressSyncState"].empty()) {
      expressSyncState = make_shared<string>(boost::any_cast<string>(m["ExpressSyncState"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("GatewayRegion") != m.end() && !m["GatewayRegion"].empty()) {
      gatewayRegion = make_shared<string>(boost::any_cast<string>(m["GatewayRegion"]));
    }
    if (m.find("MnsQueue") != m.end() && !m["MnsQueue"].empty()) {
      mnsQueue = make_shared<string>(boost::any_cast<string>(m["MnsQueue"]));
    }
    if (m.find("ShareName") != m.end() && !m["ShareName"].empty()) {
      shareName = make_shared<string>(boost::any_cast<string>(m["ShareName"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("SyncProgress") != m.end() && !m["SyncProgress"].empty()) {
      syncProgress = make_shared<long>(boost::any_cast<long>(m["SyncProgress"]));
    }
  }


  virtual ~DescribeExpressSyncSharesResponseBodySharesShare() = default;
};
class DescribeExpressSyncSharesResponseBodyShares : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeExpressSyncSharesResponseBodySharesShare>> share{};

  DescribeExpressSyncSharesResponseBodyShares() {}

  explicit DescribeExpressSyncSharesResponseBodyShares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (share) {
      vector<boost::any> temp1;
      for(auto item1:*share){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Share"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Share") != m.end() && !m["Share"].empty()) {
      if (typeid(vector<boost::any>) == m["Share"].type()) {
        vector<DescribeExpressSyncSharesResponseBodySharesShare> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Share"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressSyncSharesResponseBodySharesShare model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        share = make_shared<vector<DescribeExpressSyncSharesResponseBodySharesShare>>(expect1);
      }
    }
  }


  virtual ~DescribeExpressSyncSharesResponseBodyShares() = default;
};
class DescribeExpressSyncSharesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeExpressSyncSharesResponseBodyShares> shares{};
  shared_ptr<bool> success{};

  DescribeExpressSyncSharesResponseBody() {}

  explicit DescribeExpressSyncSharesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (shares) {
      res["Shares"] = shares ? boost::any(shares->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Shares") != m.end() && !m["Shares"].empty()) {
      if (typeid(map<string, boost::any>) == m["Shares"].type()) {
        DescribeExpressSyncSharesResponseBodyShares model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Shares"]));
        shares = make_shared<DescribeExpressSyncSharesResponseBodyShares>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeExpressSyncSharesResponseBody() = default;
};
class DescribeExpressSyncSharesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpressSyncSharesResponseBody> body{};

  DescribeExpressSyncSharesResponse() {}

  explicit DescribeExpressSyncSharesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpressSyncSharesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpressSyncSharesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpressSyncSharesResponse() = default;
};
class DescribeExpressSyncsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> bucketPrefix{};
  shared_ptr<string> securityToken{};

  DescribeExpressSyncsRequest() {}

  explicit DescribeExpressSyncsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (bucketPrefix) {
      res["BucketPrefix"] = boost::any(*bucketPrefix);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("BucketPrefix") != m.end() && !m["BucketPrefix"].empty()) {
      bucketPrefix = make_shared<string>(boost::any_cast<string>(m["BucketPrefix"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeExpressSyncsRequest() = default;
};
class DescribeExpressSyncsResponseBodyExpressSyncsExpressSync : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> bucketPrefix{};
  shared_ptr<string> bucketRegion{};
  shared_ptr<string> description{};
  shared_ptr<string> expressSyncId{};
  shared_ptr<string> mnsTopic{};
  shared_ptr<string> name{};

  DescribeExpressSyncsResponseBodyExpressSyncsExpressSync() {}

  explicit DescribeExpressSyncsResponseBodyExpressSyncsExpressSync(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (bucketPrefix) {
      res["BucketPrefix"] = boost::any(*bucketPrefix);
    }
    if (bucketRegion) {
      res["BucketRegion"] = boost::any(*bucketRegion);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (expressSyncId) {
      res["ExpressSyncId"] = boost::any(*expressSyncId);
    }
    if (mnsTopic) {
      res["MnsTopic"] = boost::any(*mnsTopic);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("BucketPrefix") != m.end() && !m["BucketPrefix"].empty()) {
      bucketPrefix = make_shared<string>(boost::any_cast<string>(m["BucketPrefix"]));
    }
    if (m.find("BucketRegion") != m.end() && !m["BucketRegion"].empty()) {
      bucketRegion = make_shared<string>(boost::any_cast<string>(m["BucketRegion"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("ExpressSyncId") != m.end() && !m["ExpressSyncId"].empty()) {
      expressSyncId = make_shared<string>(boost::any_cast<string>(m["ExpressSyncId"]));
    }
    if (m.find("MnsTopic") != m.end() && !m["MnsTopic"].empty()) {
      mnsTopic = make_shared<string>(boost::any_cast<string>(m["MnsTopic"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeExpressSyncsResponseBodyExpressSyncsExpressSync() = default;
};
class DescribeExpressSyncsResponseBodyExpressSyncs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeExpressSyncsResponseBodyExpressSyncsExpressSync>> expressSync{};

  DescribeExpressSyncsResponseBodyExpressSyncs() {}

  explicit DescribeExpressSyncsResponseBodyExpressSyncs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressSync) {
      vector<boost::any> temp1;
      for(auto item1:*expressSync){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExpressSync"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressSync") != m.end() && !m["ExpressSync"].empty()) {
      if (typeid(vector<boost::any>) == m["ExpressSync"].type()) {
        vector<DescribeExpressSyncsResponseBodyExpressSyncsExpressSync> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExpressSync"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeExpressSyncsResponseBodyExpressSyncsExpressSync model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        expressSync = make_shared<vector<DescribeExpressSyncsResponseBodyExpressSyncsExpressSync>>(expect1);
      }
    }
  }


  virtual ~DescribeExpressSyncsResponseBodyExpressSyncs() = default;
};
class DescribeExpressSyncsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeExpressSyncsResponseBodyExpressSyncs> expressSyncs{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeExpressSyncsResponseBody() {}

  explicit DescribeExpressSyncsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (expressSyncs) {
      res["ExpressSyncs"] = expressSyncs ? boost::any(expressSyncs->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ExpressSyncs") != m.end() && !m["ExpressSyncs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExpressSyncs"].type()) {
        DescribeExpressSyncsResponseBodyExpressSyncs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExpressSyncs"]));
        expressSyncs = make_shared<DescribeExpressSyncsResponseBodyExpressSyncs>(model1);
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


  virtual ~DescribeExpressSyncsResponseBody() = default;
};
class DescribeExpressSyncsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExpressSyncsResponseBody> body{};

  DescribeExpressSyncsResponse() {}

  explicit DescribeExpressSyncsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExpressSyncsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExpressSyncsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExpressSyncsResponse() = default;
};
class DescribeGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayRequest() {}

  explicit DescribeGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayRequest() = default;
};
class DescribeGatewayResponseBodyElasticNodes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> elasticNode{};

  DescribeGatewayResponseBodyElasticNodes() {}

  explicit DescribeGatewayResponseBodyElasticNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNode) {
      res["ElasticNode"] = boost::any(*elasticNode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNode") != m.end() && !m["ElasticNode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ElasticNode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ElasticNode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      elasticNode = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeGatewayResponseBodyElasticNodes() = default;
};
class DescribeGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> activatedTime{};
  shared_ptr<string> buyURL{};
  shared_ptr<long> capacity{};
  shared_ptr<string> category{};
  shared_ptr<string> code{};
  shared_ptr<string> commonBuyInstanceId{};
  shared_ptr<long> createdTime{};
  shared_ptr<long> dataLoadInterval{};
  shared_ptr<string> dataLoadType{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<bool> elasticGateway{};
  shared_ptr<DescribeGatewayResponseBodyElasticNodes> elasticNodes{};
  shared_ptr<long> expireStatus{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> gatewayClass{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayRegionId{};
  shared_ptr<string> gatewayType{};
  shared_ptr<string> gatewayVersion{};
  shared_ptr<bool> highAvailability{};
  shared_ptr<string> innerIp{};
  shared_ptr<string> innerIpv6Ip{};
  shared_ptr<string> ip{};
  shared_ptr<bool> isPostPaid{};
  shared_ptr<bool> isReleaseAfterExpiration{};
  shared_ptr<string> lastErrorKey{};
  shared_ptr<string> location{};
  shared_ptr<long> maxThroughput{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<long> publicNetworkBandwidth{};
  shared_ptr<string> renewURL{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};
  shared_ptr<string> type{};
  shared_ptr<string> untrustedEnvInstanceType{};
  shared_ptr<string> untrustedEnvOssEndpoint{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeGatewayResponseBody() {}

  explicit DescribeGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activatedTime) {
      res["ActivatedTime"] = boost::any(*activatedTime);
    }
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (commonBuyInstanceId) {
      res["CommonBuyInstanceId"] = boost::any(*commonBuyInstanceId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dataLoadInterval) {
      res["DataLoadInterval"] = boost::any(*dataLoadInterval);
    }
    if (dataLoadType) {
      res["DataLoadType"] = boost::any(*dataLoadType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (elasticGateway) {
      res["ElasticGateway"] = boost::any(*elasticGateway);
    }
    if (elasticNodes) {
      res["ElasticNodes"] = elasticNodes ? boost::any(elasticNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expireStatus) {
      res["ExpireStatus"] = boost::any(*expireStatus);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (gatewayClass) {
      res["GatewayClass"] = boost::any(*gatewayClass);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayRegionId) {
      res["GatewayRegionId"] = boost::any(*gatewayRegionId);
    }
    if (gatewayType) {
      res["GatewayType"] = boost::any(*gatewayType);
    }
    if (gatewayVersion) {
      res["GatewayVersion"] = boost::any(*gatewayVersion);
    }
    if (highAvailability) {
      res["HighAvailability"] = boost::any(*highAvailability);
    }
    if (innerIp) {
      res["InnerIp"] = boost::any(*innerIp);
    }
    if (innerIpv6Ip) {
      res["InnerIpv6Ip"] = boost::any(*innerIpv6Ip);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (isPostPaid) {
      res["IsPostPaid"] = boost::any(*isPostPaid);
    }
    if (isReleaseAfterExpiration) {
      res["IsReleaseAfterExpiration"] = boost::any(*isReleaseAfterExpiration);
    }
    if (lastErrorKey) {
      res["LastErrorKey"] = boost::any(*lastErrorKey);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (maxThroughput) {
      res["MaxThroughput"] = boost::any(*maxThroughput);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (publicNetworkBandwidth) {
      res["PublicNetworkBandwidth"] = boost::any(*publicNetworkBandwidth);
    }
    if (renewURL) {
      res["RenewURL"] = boost::any(*renewURL);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (untrustedEnvInstanceType) {
      res["UntrustedEnvInstanceType"] = boost::any(*untrustedEnvInstanceType);
    }
    if (untrustedEnvOssEndpoint) {
      res["UntrustedEnvOssEndpoint"] = boost::any(*untrustedEnvOssEndpoint);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivatedTime") != m.end() && !m["ActivatedTime"].empty()) {
      activatedTime = make_shared<long>(boost::any_cast<long>(m["ActivatedTime"]));
    }
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CommonBuyInstanceId") != m.end() && !m["CommonBuyInstanceId"].empty()) {
      commonBuyInstanceId = make_shared<string>(boost::any_cast<string>(m["CommonBuyInstanceId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("DataLoadInterval") != m.end() && !m["DataLoadInterval"].empty()) {
      dataLoadInterval = make_shared<long>(boost::any_cast<long>(m["DataLoadInterval"]));
    }
    if (m.find("DataLoadType") != m.end() && !m["DataLoadType"].empty()) {
      dataLoadType = make_shared<string>(boost::any_cast<string>(m["DataLoadType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("ElasticGateway") != m.end() && !m["ElasticGateway"].empty()) {
      elasticGateway = make_shared<bool>(boost::any_cast<bool>(m["ElasticGateway"]));
    }
    if (m.find("ElasticNodes") != m.end() && !m["ElasticNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ElasticNodes"].type()) {
        DescribeGatewayResponseBodyElasticNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ElasticNodes"]));
        elasticNodes = make_shared<DescribeGatewayResponseBodyElasticNodes>(model1);
      }
    }
    if (m.find("ExpireStatus") != m.end() && !m["ExpireStatus"].empty()) {
      expireStatus = make_shared<long>(boost::any_cast<long>(m["ExpireStatus"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("GatewayClass") != m.end() && !m["GatewayClass"].empty()) {
      gatewayClass = make_shared<string>(boost::any_cast<string>(m["GatewayClass"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayRegionId") != m.end() && !m["GatewayRegionId"].empty()) {
      gatewayRegionId = make_shared<string>(boost::any_cast<string>(m["GatewayRegionId"]));
    }
    if (m.find("GatewayType") != m.end() && !m["GatewayType"].empty()) {
      gatewayType = make_shared<string>(boost::any_cast<string>(m["GatewayType"]));
    }
    if (m.find("GatewayVersion") != m.end() && !m["GatewayVersion"].empty()) {
      gatewayVersion = make_shared<string>(boost::any_cast<string>(m["GatewayVersion"]));
    }
    if (m.find("HighAvailability") != m.end() && !m["HighAvailability"].empty()) {
      highAvailability = make_shared<bool>(boost::any_cast<bool>(m["HighAvailability"]));
    }
    if (m.find("InnerIp") != m.end() && !m["InnerIp"].empty()) {
      innerIp = make_shared<string>(boost::any_cast<string>(m["InnerIp"]));
    }
    if (m.find("InnerIpv6Ip") != m.end() && !m["InnerIpv6Ip"].empty()) {
      innerIpv6Ip = make_shared<string>(boost::any_cast<string>(m["InnerIpv6Ip"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("IsPostPaid") != m.end() && !m["IsPostPaid"].empty()) {
      isPostPaid = make_shared<bool>(boost::any_cast<bool>(m["IsPostPaid"]));
    }
    if (m.find("IsReleaseAfterExpiration") != m.end() && !m["IsReleaseAfterExpiration"].empty()) {
      isReleaseAfterExpiration = make_shared<bool>(boost::any_cast<bool>(m["IsReleaseAfterExpiration"]));
    }
    if (m.find("LastErrorKey") != m.end() && !m["LastErrorKey"].empty()) {
      lastErrorKey = make_shared<string>(boost::any_cast<string>(m["LastErrorKey"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MaxThroughput") != m.end() && !m["MaxThroughput"].empty()) {
      maxThroughput = make_shared<long>(boost::any_cast<long>(m["MaxThroughput"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PublicNetworkBandwidth") != m.end() && !m["PublicNetworkBandwidth"].empty()) {
      publicNetworkBandwidth = make_shared<long>(boost::any_cast<long>(m["PublicNetworkBandwidth"]));
    }
    if (m.find("RenewURL") != m.end() && !m["RenewURL"].empty()) {
      renewURL = make_shared<string>(boost::any_cast<string>(m["RenewURL"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UntrustedEnvInstanceType") != m.end() && !m["UntrustedEnvInstanceType"].empty()) {
      untrustedEnvInstanceType = make_shared<string>(boost::any_cast<string>(m["UntrustedEnvInstanceType"]));
    }
    if (m.find("UntrustedEnvOssEndpoint") != m.end() && !m["UntrustedEnvOssEndpoint"].empty()) {
      untrustedEnvOssEndpoint = make_shared<string>(boost::any_cast<string>(m["UntrustedEnvOssEndpoint"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeGatewayResponseBody() = default;
};
class DescribeGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayResponseBody> body{};

  DescribeGatewayResponse() {}

  explicit DescribeGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayResponse() = default;
};
class DescribeGatewayADInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayADInfoRequest() {}

  explicit DescribeGatewayADInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayADInfoRequest() = default;
};
class DescribeGatewayADInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> domainName{};
  shared_ptr<bool> isEnabled{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> serverIp{};
  shared_ptr<bool> success{};
  shared_ptr<string> username{};

  DescribeGatewayADInfoResponseBody() {}

  explicit DescribeGatewayADInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (domainName) {
      res["DomainName"] = boost::any(*domainName);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("DomainName") != m.end() && !m["DomainName"].empty()) {
      domainName = make_shared<string>(boost::any_cast<string>(m["DomainName"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsEnabled"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DescribeGatewayADInfoResponseBody() = default;
};
class DescribeGatewayADInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayADInfoResponseBody> body{};

  DescribeGatewayADInfoResponse() {}

  explicit DescribeGatewayADInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayADInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayADInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayADInfoResponse() = default;
};
class DescribeGatewayActionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayActionsRequest() {}

  explicit DescribeGatewayActionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayActionsRequest() = default;
};
class DescribeGatewayActionsResponseBodyActionsAction : public Darabonba::Model {
public:
  shared_ptr<string> adLdap{};
  shared_ptr<string> cache{};
  shared_ptr<string> disk{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> monitor{};
  shared_ptr<string> self{};
  shared_ptr<string> smbUser{};
  shared_ptr<string> target{};

  DescribeGatewayActionsResponseBodyActionsAction() {}

  explicit DescribeGatewayActionsResponseBodyActionsAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (adLdap) {
      res["AdLdap"] = boost::any(*adLdap);
    }
    if (cache) {
      res["Cache"] = boost::any(*cache);
    }
    if (disk) {
      res["Disk"] = boost::any(*disk);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (monitor) {
      res["Monitor"] = boost::any(*monitor);
    }
    if (self) {
      res["Self"] = boost::any(*self);
    }
    if (smbUser) {
      res["SmbUser"] = boost::any(*smbUser);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdLdap") != m.end() && !m["AdLdap"].empty()) {
      adLdap = make_shared<string>(boost::any_cast<string>(m["AdLdap"]));
    }
    if (m.find("Cache") != m.end() && !m["Cache"].empty()) {
      cache = make_shared<string>(boost::any_cast<string>(m["Cache"]));
    }
    if (m.find("Disk") != m.end() && !m["Disk"].empty()) {
      disk = make_shared<string>(boost::any_cast<string>(m["Disk"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Monitor") != m.end() && !m["Monitor"].empty()) {
      monitor = make_shared<string>(boost::any_cast<string>(m["Monitor"]));
    }
    if (m.find("Self") != m.end() && !m["Self"].empty()) {
      self = make_shared<string>(boost::any_cast<string>(m["Self"]));
    }
    if (m.find("SmbUser") != m.end() && !m["SmbUser"].empty()) {
      smbUser = make_shared<string>(boost::any_cast<string>(m["SmbUser"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
  }


  virtual ~DescribeGatewayActionsResponseBodyActionsAction() = default;
};
class DescribeGatewayActionsResponseBodyActions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayActionsResponseBodyActionsAction>> action{};

  DescribeGatewayActionsResponseBodyActions() {}

  explicit DescribeGatewayActionsResponseBodyActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      vector<boost::any> temp1;
      for(auto item1:*action){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Action"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      if (typeid(vector<boost::any>) == m["Action"].type()) {
        vector<DescribeGatewayActionsResponseBodyActionsAction> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Action"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayActionsResponseBodyActionsAction model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        action = make_shared<vector<DescribeGatewayActionsResponseBodyActionsAction>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayActionsResponseBodyActions() = default;
};
class DescribeGatewayActionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGatewayActionsResponseBodyActions> actions{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayActionsResponseBody() {}

  explicit DescribeGatewayActionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["Actions"] = actions ? boost::any(actions->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("Actions") != m.end() && !m["Actions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Actions"].type()) {
        DescribeGatewayActionsResponseBodyActions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Actions"]));
        actions = make_shared<DescribeGatewayActionsResponseBodyActions>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeGatewayActionsResponseBody() = default;
};
class DescribeGatewayActionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayActionsResponseBody> body{};

  DescribeGatewayActionsResponse() {}

  explicit DescribeGatewayActionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayActionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayActionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayActionsResponse() = default;
};
class DescribeGatewayAuthInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayAuthInfoRequest() {}

  explicit DescribeGatewayAuthInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayAuthInfoRequest() = default;
};
class DescribeGatewayAuthInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> password{};
  shared_ptr<string> publicIp{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> username{};

  DescribeGatewayAuthInfoResponseBody() {}

  explicit DescribeGatewayAuthInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (publicIp) {
      res["PublicIp"] = boost::any(*publicIp);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PublicIp") != m.end() && !m["PublicIp"].empty()) {
      publicIp = make_shared<string>(boost::any_cast<string>(m["PublicIp"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DescribeGatewayAuthInfoResponseBody() = default;
};
class DescribeGatewayAuthInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayAuthInfoResponseBody> body{};

  DescribeGatewayAuthInfoResponse() {}

  explicit DescribeGatewayAuthInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayAuthInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayAuthInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayAuthInfoResponse() = default;
};
class DescribeGatewayAutoPlansRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeGatewayAutoPlansRequest() {}

  explicit DescribeGatewayAutoPlansRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayAutoPlansRequest() = default;
};
class DescribeGatewayAutoPlansResponseBodyAutoPlans : public Darabonba::Model {
public:
  shared_ptr<string> detail{};
  shared_ptr<long> endTime{};
  shared_ptr<string> event{};
  shared_ptr<string> planId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> status{};

  DescribeGatewayAutoPlansResponseBodyAutoPlans() {}

  explicit DescribeGatewayAutoPlansResponseBodyAutoPlans(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (event) {
      res["Event"] = boost::any(*event);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("Event") != m.end() && !m["Event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["Event"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeGatewayAutoPlansResponseBodyAutoPlans() = default;
};
class DescribeGatewayAutoPlansResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayAutoPlansResponseBodyAutoPlans>> autoPlans{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeGatewayAutoPlansResponseBody() {}

  explicit DescribeGatewayAutoPlansResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoPlans) {
      vector<boost::any> temp1;
      for(auto item1:*autoPlans){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["AutoPlans"] = boost::any(temp1);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("AutoPlans") != m.end() && !m["AutoPlans"].empty()) {
      if (typeid(vector<boost::any>) == m["AutoPlans"].type()) {
        vector<DescribeGatewayAutoPlansResponseBodyAutoPlans> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["AutoPlans"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayAutoPlansResponseBodyAutoPlans model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        autoPlans = make_shared<vector<DescribeGatewayAutoPlansResponseBodyAutoPlans>>(expect1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeGatewayAutoPlansResponseBody() = default;
};
class DescribeGatewayAutoPlansResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayAutoPlansResponseBody> body{};

  DescribeGatewayAutoPlansResponse() {}

  explicit DescribeGatewayAutoPlansResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayAutoPlansResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayAutoPlansResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayAutoPlansResponse() = default;
};
class DescribeGatewayAutoUpgradeConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayAutoUpgradeConfigurationRequest() {}

  explicit DescribeGatewayAutoUpgradeConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayAutoUpgradeConfigurationRequest() = default;
};
class DescribeGatewayAutoUpgradeConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> autoUpgradeEndHour{};
  shared_ptr<long> autoUpgradeStartHour{};
  shared_ptr<string> code{};
  shared_ptr<bool> isAutoUpgrade{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayAutoUpgradeConfigurationResponseBody() {}

  explicit DescribeGatewayAutoUpgradeConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUpgradeEndHour) {
      res["AutoUpgradeEndHour"] = boost::any(*autoUpgradeEndHour);
    }
    if (autoUpgradeStartHour) {
      res["AutoUpgradeStartHour"] = boost::any(*autoUpgradeStartHour);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isAutoUpgrade) {
      res["IsAutoUpgrade"] = boost::any(*isAutoUpgrade);
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
    if (m.find("AutoUpgradeEndHour") != m.end() && !m["AutoUpgradeEndHour"].empty()) {
      autoUpgradeEndHour = make_shared<long>(boost::any_cast<long>(m["AutoUpgradeEndHour"]));
    }
    if (m.find("AutoUpgradeStartHour") != m.end() && !m["AutoUpgradeStartHour"].empty()) {
      autoUpgradeStartHour = make_shared<long>(boost::any_cast<long>(m["AutoUpgradeStartHour"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsAutoUpgrade") != m.end() && !m["IsAutoUpgrade"].empty()) {
      isAutoUpgrade = make_shared<bool>(boost::any_cast<bool>(m["IsAutoUpgrade"]));
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


  virtual ~DescribeGatewayAutoUpgradeConfigurationResponseBody() = default;
};
class DescribeGatewayAutoUpgradeConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayAutoUpgradeConfigurationResponseBody> body{};

  DescribeGatewayAutoUpgradeConfigurationResponse() {}

  explicit DescribeGatewayAutoUpgradeConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayAutoUpgradeConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayAutoUpgradeConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayAutoUpgradeConfigurationResponse() = default;
};
class DescribeGatewayBlockVolumesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<bool> refresh{};
  shared_ptr<string> securityToken{};

  DescribeGatewayBlockVolumesRequest() {}

  explicit DescribeGatewayBlockVolumesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (refresh) {
      res["Refresh"] = boost::any(*refresh);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("Refresh") != m.end() && !m["Refresh"].empty()) {
      refresh = make_shared<bool>(boost::any_cast<bool>(m["Refresh"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayBlockVolumesRequest() = default;
};
class DescribeGatewayBlockVolumesResponseBodyBlockVolumesBlockVolume : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> cacheMode{};
  shared_ptr<bool> chapEnabled{};
  shared_ptr<string> chapInUser{};
  shared_ptr<long> chunkSize{};
  shared_ptr<string> diskId{};
  shared_ptr<string> diskType{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> indexId{};
  shared_ptr<string> localPath{};
  shared_ptr<long> lunId{};
  shared_ptr<string> name{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<bool> ossBucketSsl{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<long> port{};
  shared_ptr<string> protocol{};
  shared_ptr<long> size{};
  shared_ptr<string> state{};
  shared_ptr<long> status{};
  shared_ptr<string> target{};
  shared_ptr<long> totalDownload{};
  shared_ptr<long> totalUpload{};
  shared_ptr<long> volumeState{};

  DescribeGatewayBlockVolumesResponseBodyBlockVolumesBlockVolume() {}

  explicit DescribeGatewayBlockVolumesResponseBodyBlockVolumesBlockVolume(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (cacheMode) {
      res["CacheMode"] = boost::any(*cacheMode);
    }
    if (chapEnabled) {
      res["ChapEnabled"] = boost::any(*chapEnabled);
    }
    if (chapInUser) {
      res["ChapInUser"] = boost::any(*chapInUser);
    }
    if (chunkSize) {
      res["ChunkSize"] = boost::any(*chunkSize);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (localPath) {
      res["LocalPath"] = boost::any(*localPath);
    }
    if (lunId) {
      res["LunId"] = boost::any(*lunId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossBucketSsl) {
      res["OssBucketSsl"] = boost::any(*ossBucketSsl);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (port) {
      res["Port"] = boost::any(*port);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (target) {
      res["Target"] = boost::any(*target);
    }
    if (totalDownload) {
      res["TotalDownload"] = boost::any(*totalDownload);
    }
    if (totalUpload) {
      res["TotalUpload"] = boost::any(*totalUpload);
    }
    if (volumeState) {
      res["VolumeState"] = boost::any(*volumeState);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("CacheMode") != m.end() && !m["CacheMode"].empty()) {
      cacheMode = make_shared<string>(boost::any_cast<string>(m["CacheMode"]));
    }
    if (m.find("ChapEnabled") != m.end() && !m["ChapEnabled"].empty()) {
      chapEnabled = make_shared<bool>(boost::any_cast<bool>(m["ChapEnabled"]));
    }
    if (m.find("ChapInUser") != m.end() && !m["ChapInUser"].empty()) {
      chapInUser = make_shared<string>(boost::any_cast<string>(m["ChapInUser"]));
    }
    if (m.find("ChunkSize") != m.end() && !m["ChunkSize"].empty()) {
      chunkSize = make_shared<long>(boost::any_cast<long>(m["ChunkSize"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("LocalPath") != m.end() && !m["LocalPath"].empty()) {
      localPath = make_shared<string>(boost::any_cast<string>(m["LocalPath"]));
    }
    if (m.find("LunId") != m.end() && !m["LunId"].empty()) {
      lunId = make_shared<long>(boost::any_cast<long>(m["LunId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssBucketSsl") != m.end() && !m["OssBucketSsl"].empty()) {
      ossBucketSsl = make_shared<bool>(boost::any_cast<bool>(m["OssBucketSsl"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("Port") != m.end() && !m["Port"].empty()) {
      port = make_shared<long>(boost::any_cast<long>(m["Port"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Target") != m.end() && !m["Target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["Target"]));
    }
    if (m.find("TotalDownload") != m.end() && !m["TotalDownload"].empty()) {
      totalDownload = make_shared<long>(boost::any_cast<long>(m["TotalDownload"]));
    }
    if (m.find("TotalUpload") != m.end() && !m["TotalUpload"].empty()) {
      totalUpload = make_shared<long>(boost::any_cast<long>(m["TotalUpload"]));
    }
    if (m.find("VolumeState") != m.end() && !m["VolumeState"].empty()) {
      volumeState = make_shared<long>(boost::any_cast<long>(m["VolumeState"]));
    }
  }


  virtual ~DescribeGatewayBlockVolumesResponseBodyBlockVolumesBlockVolume() = default;
};
class DescribeGatewayBlockVolumesResponseBodyBlockVolumes : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayBlockVolumesResponseBodyBlockVolumesBlockVolume>> blockVolume{};

  DescribeGatewayBlockVolumesResponseBodyBlockVolumes() {}

  explicit DescribeGatewayBlockVolumesResponseBodyBlockVolumes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockVolume) {
      vector<boost::any> temp1;
      for(auto item1:*blockVolume){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockVolume"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockVolume") != m.end() && !m["BlockVolume"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockVolume"].type()) {
        vector<DescribeGatewayBlockVolumesResponseBodyBlockVolumesBlockVolume> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockVolume"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayBlockVolumesResponseBodyBlockVolumesBlockVolume model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockVolume = make_shared<vector<DescribeGatewayBlockVolumesResponseBodyBlockVolumesBlockVolume>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayBlockVolumesResponseBodyBlockVolumes() = default;
};
class DescribeGatewayBlockVolumesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGatewayBlockVolumesResponseBodyBlockVolumes> blockVolumes{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayBlockVolumesResponseBody() {}

  explicit DescribeGatewayBlockVolumesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockVolumes) {
      res["BlockVolumes"] = blockVolumes ? boost::any(blockVolumes->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("BlockVolumes") != m.end() && !m["BlockVolumes"].empty()) {
      if (typeid(map<string, boost::any>) == m["BlockVolumes"].type()) {
        DescribeGatewayBlockVolumesResponseBodyBlockVolumes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BlockVolumes"]));
        blockVolumes = make_shared<DescribeGatewayBlockVolumesResponseBodyBlockVolumes>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeGatewayBlockVolumesResponseBody() = default;
};
class DescribeGatewayBlockVolumesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayBlockVolumesResponseBody> body{};

  DescribeGatewayBlockVolumesResponse() {}

  explicit DescribeGatewayBlockVolumesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayBlockVolumesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayBlockVolumesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayBlockVolumesResponse() = default;
};
class DescribeGatewayBucketCachesRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeGatewayBucketCachesRequest() {}

  explicit DescribeGatewayBucketCachesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayBucketCachesRequest() = default;
};
class DescribeGatewayBucketCachesResponseBodyBucketCachesBucketCache : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> cacheMode{};
  shared_ptr<string> cacheStats{};
  shared_ptr<string> category{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayName{};
  shared_ptr<string> location{};
  shared_ptr<string> mountPoint{};
  shared_ptr<string> protocol{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareName{};
  shared_ptr<string> type{};
  shared_ptr<string> vpcCidr{};
  shared_ptr<string> vpcId{};

  DescribeGatewayBucketCachesResponseBodyBucketCachesBucketCache() {}

  explicit DescribeGatewayBucketCachesResponseBodyBucketCachesBucketCache(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (cacheMode) {
      res["CacheMode"] = boost::any(*cacheMode);
    }
    if (cacheStats) {
      res["CacheStats"] = boost::any(*cacheStats);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayName) {
      res["GatewayName"] = boost::any(*gatewayName);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (mountPoint) {
      res["MountPoint"] = boost::any(*mountPoint);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareName) {
      res["ShareName"] = boost::any(*shareName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (vpcCidr) {
      res["VpcCidr"] = boost::any(*vpcCidr);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("CacheMode") != m.end() && !m["CacheMode"].empty()) {
      cacheMode = make_shared<string>(boost::any_cast<string>(m["CacheMode"]));
    }
    if (m.find("CacheStats") != m.end() && !m["CacheStats"].empty()) {
      cacheStats = make_shared<string>(boost::any_cast<string>(m["CacheStats"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayName") != m.end() && !m["GatewayName"].empty()) {
      gatewayName = make_shared<string>(boost::any_cast<string>(m["GatewayName"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MountPoint") != m.end() && !m["MountPoint"].empty()) {
      mountPoint = make_shared<string>(boost::any_cast<string>(m["MountPoint"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareName") != m.end() && !m["ShareName"].empty()) {
      shareName = make_shared<string>(boost::any_cast<string>(m["ShareName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VpcCidr") != m.end() && !m["VpcCidr"].empty()) {
      vpcCidr = make_shared<string>(boost::any_cast<string>(m["VpcCidr"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeGatewayBucketCachesResponseBodyBucketCachesBucketCache() = default;
};
class DescribeGatewayBucketCachesResponseBodyBucketCaches : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayBucketCachesResponseBodyBucketCachesBucketCache>> bucketCache{};

  DescribeGatewayBucketCachesResponseBodyBucketCaches() {}

  explicit DescribeGatewayBucketCachesResponseBodyBucketCaches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketCache) {
      vector<boost::any> temp1;
      for(auto item1:*bucketCache){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BucketCache"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketCache") != m.end() && !m["BucketCache"].empty()) {
      if (typeid(vector<boost::any>) == m["BucketCache"].type()) {
        vector<DescribeGatewayBucketCachesResponseBodyBucketCachesBucketCache> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BucketCache"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayBucketCachesResponseBodyBucketCachesBucketCache model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bucketCache = make_shared<vector<DescribeGatewayBucketCachesResponseBodyBucketCachesBucketCache>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayBucketCachesResponseBodyBucketCaches() = default;
};
class DescribeGatewayBucketCachesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGatewayBucketCachesResponseBodyBucketCaches> bucketCaches{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeGatewayBucketCachesResponseBody() {}

  explicit DescribeGatewayBucketCachesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketCaches) {
      res["BucketCaches"] = bucketCaches ? boost::any(bucketCaches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("BucketCaches") != m.end() && !m["BucketCaches"].empty()) {
      if (typeid(map<string, boost::any>) == m["BucketCaches"].type()) {
        DescribeGatewayBucketCachesResponseBodyBucketCaches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BucketCaches"]));
        bucketCaches = make_shared<DescribeGatewayBucketCachesResponseBodyBucketCaches>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeGatewayBucketCachesResponseBody() = default;
};
class DescribeGatewayBucketCachesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayBucketCachesResponseBody> body{};

  DescribeGatewayBucketCachesResponse() {}

  explicit DescribeGatewayBucketCachesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayBucketCachesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayBucketCachesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayBucketCachesResponse() = default;
};
class DescribeGatewayCachesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayCachesRequest() {}

  explicit DescribeGatewayCachesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayCachesRequest() = default;
};
class DescribeGatewayCachesResponseBodyCachesCache : public Darabonba::Model {
public:
  shared_ptr<string> buyURL{};
  shared_ptr<string> cacheId{};
  shared_ptr<string> cacheType{};
  shared_ptr<long> expireStatus{};
  shared_ptr<long> expiredTime{};
  shared_ptr<long> iops{};
  shared_ptr<string> isDirectExpand{};
  shared_ptr<bool> isNoPartition{};
  shared_ptr<bool> isUsed{};
  shared_ptr<string> localFilePath{};
  shared_ptr<string> performanceLevel{};
  shared_ptr<string> renewURL{};
  shared_ptr<long> sizeInGB{};
  shared_ptr<string> subscriptionInstanceId{};

  DescribeGatewayCachesResponseBodyCachesCache() {}

  explicit DescribeGatewayCachesResponseBodyCachesCache(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
    if (cacheId) {
      res["CacheId"] = boost::any(*cacheId);
    }
    if (cacheType) {
      res["CacheType"] = boost::any(*cacheType);
    }
    if (expireStatus) {
      res["ExpireStatus"] = boost::any(*expireStatus);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (iops) {
      res["Iops"] = boost::any(*iops);
    }
    if (isDirectExpand) {
      res["IsDirectExpand"] = boost::any(*isDirectExpand);
    }
    if (isNoPartition) {
      res["IsNoPartition"] = boost::any(*isNoPartition);
    }
    if (isUsed) {
      res["IsUsed"] = boost::any(*isUsed);
    }
    if (localFilePath) {
      res["LocalFilePath"] = boost::any(*localFilePath);
    }
    if (performanceLevel) {
      res["PerformanceLevel"] = boost::any(*performanceLevel);
    }
    if (renewURL) {
      res["RenewURL"] = boost::any(*renewURL);
    }
    if (sizeInGB) {
      res["SizeInGB"] = boost::any(*sizeInGB);
    }
    if (subscriptionInstanceId) {
      res["SubscriptionInstanceId"] = boost::any(*subscriptionInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("CacheId") != m.end() && !m["CacheId"].empty()) {
      cacheId = make_shared<string>(boost::any_cast<string>(m["CacheId"]));
    }
    if (m.find("CacheType") != m.end() && !m["CacheType"].empty()) {
      cacheType = make_shared<string>(boost::any_cast<string>(m["CacheType"]));
    }
    if (m.find("ExpireStatus") != m.end() && !m["ExpireStatus"].empty()) {
      expireStatus = make_shared<long>(boost::any_cast<long>(m["ExpireStatus"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("Iops") != m.end() && !m["Iops"].empty()) {
      iops = make_shared<long>(boost::any_cast<long>(m["Iops"]));
    }
    if (m.find("IsDirectExpand") != m.end() && !m["IsDirectExpand"].empty()) {
      isDirectExpand = make_shared<string>(boost::any_cast<string>(m["IsDirectExpand"]));
    }
    if (m.find("IsNoPartition") != m.end() && !m["IsNoPartition"].empty()) {
      isNoPartition = make_shared<bool>(boost::any_cast<bool>(m["IsNoPartition"]));
    }
    if (m.find("IsUsed") != m.end() && !m["IsUsed"].empty()) {
      isUsed = make_shared<bool>(boost::any_cast<bool>(m["IsUsed"]));
    }
    if (m.find("LocalFilePath") != m.end() && !m["LocalFilePath"].empty()) {
      localFilePath = make_shared<string>(boost::any_cast<string>(m["LocalFilePath"]));
    }
    if (m.find("PerformanceLevel") != m.end() && !m["PerformanceLevel"].empty()) {
      performanceLevel = make_shared<string>(boost::any_cast<string>(m["PerformanceLevel"]));
    }
    if (m.find("RenewURL") != m.end() && !m["RenewURL"].empty()) {
      renewURL = make_shared<string>(boost::any_cast<string>(m["RenewURL"]));
    }
    if (m.find("SizeInGB") != m.end() && !m["SizeInGB"].empty()) {
      sizeInGB = make_shared<long>(boost::any_cast<long>(m["SizeInGB"]));
    }
    if (m.find("SubscriptionInstanceId") != m.end() && !m["SubscriptionInstanceId"].empty()) {
      subscriptionInstanceId = make_shared<string>(boost::any_cast<string>(m["SubscriptionInstanceId"]));
    }
  }


  virtual ~DescribeGatewayCachesResponseBodyCachesCache() = default;
};
class DescribeGatewayCachesResponseBodyCaches : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayCachesResponseBodyCachesCache>> cache{};

  DescribeGatewayCachesResponseBodyCaches() {}

  explicit DescribeGatewayCachesResponseBodyCaches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cache) {
      vector<boost::any> temp1;
      for(auto item1:*cache){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cache"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cache") != m.end() && !m["Cache"].empty()) {
      if (typeid(vector<boost::any>) == m["Cache"].type()) {
        vector<DescribeGatewayCachesResponseBodyCachesCache> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cache"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayCachesResponseBodyCachesCache model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cache = make_shared<vector<DescribeGatewayCachesResponseBodyCachesCache>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayCachesResponseBodyCaches() = default;
};
class DescribeGatewayCachesResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGatewayCachesResponseBodyCaches> caches{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayCachesResponseBody() {}

  explicit DescribeGatewayCachesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caches) {
      res["Caches"] = caches ? boost::any(caches->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("Caches") != m.end() && !m["Caches"].empty()) {
      if (typeid(map<string, boost::any>) == m["Caches"].type()) {
        DescribeGatewayCachesResponseBodyCaches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Caches"]));
        caches = make_shared<DescribeGatewayCachesResponseBodyCaches>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeGatewayCachesResponseBody() = default;
};
class DescribeGatewayCachesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayCachesResponseBody> body{};

  DescribeGatewayCachesResponse() {}

  explicit DescribeGatewayCachesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayCachesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayCachesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayCachesResponse() = default;
};
class DescribeGatewayCapacityLimitRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> sizeInGB{};

  DescribeGatewayCapacityLimitRequest() {}

  explicit DescribeGatewayCapacityLimitRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (sizeInGB) {
      res["SizeInGB"] = boost::any(*sizeInGB);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SizeInGB") != m.end() && !m["SizeInGB"].empty()) {
      sizeInGB = make_shared<long>(boost::any_cast<long>(m["SizeInGB"]));
    }
  }


  virtual ~DescribeGatewayCapacityLimitRequest() = default;
};
class DescribeGatewayCapacityLimitResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> fileNumber{};
  shared_ptr<long> fileSystemSizeInTB{};
  shared_ptr<bool> isMetadataSeparate{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayCapacityLimitResponseBody() {}

  explicit DescribeGatewayCapacityLimitResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (fileNumber) {
      res["FileNumber"] = boost::any(*fileNumber);
    }
    if (fileSystemSizeInTB) {
      res["FileSystemSizeInTB"] = boost::any(*fileSystemSizeInTB);
    }
    if (isMetadataSeparate) {
      res["IsMetadataSeparate"] = boost::any(*isMetadataSeparate);
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
    if (m.find("FileNumber") != m.end() && !m["FileNumber"].empty()) {
      fileNumber = make_shared<long>(boost::any_cast<long>(m["FileNumber"]));
    }
    if (m.find("FileSystemSizeInTB") != m.end() && !m["FileSystemSizeInTB"].empty()) {
      fileSystemSizeInTB = make_shared<long>(boost::any_cast<long>(m["FileSystemSizeInTB"]));
    }
    if (m.find("IsMetadataSeparate") != m.end() && !m["IsMetadataSeparate"].empty()) {
      isMetadataSeparate = make_shared<bool>(boost::any_cast<bool>(m["IsMetadataSeparate"]));
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


  virtual ~DescribeGatewayCapacityLimitResponseBody() = default;
};
class DescribeGatewayCapacityLimitResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayCapacityLimitResponseBody> body{};

  DescribeGatewayCapacityLimitResponse() {}

  explicit DescribeGatewayCapacityLimitResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayCapacityLimitResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayCapacityLimitResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayCapacityLimitResponse() = default;
};
class DescribeGatewayCategoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayLocation{};
  shared_ptr<string> securityToken{};

  DescribeGatewayCategoriesRequest() {}

  explicit DescribeGatewayCategoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayLocation) {
      res["GatewayLocation"] = boost::any(*gatewayLocation);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayLocation") != m.end() && !m["GatewayLocation"].empty()) {
      gatewayLocation = make_shared<string>(boost::any_cast<string>(m["GatewayLocation"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayCategoriesRequest() = default;
};
class DescribeGatewayCategoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> categories{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayCategoriesResponseBody() {}

  explicit DescribeGatewayCategoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      res["Categories"] = boost::any(*categories);
    }
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
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      categories = make_shared<string>(boost::any_cast<string>(m["Categories"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeGatewayCategoriesResponseBody() = default;
};
class DescribeGatewayCategoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayCategoriesResponseBody> body{};

  DescribeGatewayCategoriesResponse() {}

  explicit DescribeGatewayCategoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayCategoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayCategoriesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayCategoriesResponse() = default;
};
class DescribeGatewayClassesRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};

  DescribeGatewayClassesRequest() {}

  explicit DescribeGatewayClassesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayClassesRequest() = default;
};
class DescribeGatewayClassesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> classes{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayClassesResponseBody() {}

  explicit DescribeGatewayClassesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classes) {
      res["Classes"] = boost::any(*classes);
    }
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
    if (m.find("Classes") != m.end() && !m["Classes"].empty()) {
      classes = make_shared<string>(boost::any_cast<string>(m["Classes"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeGatewayClassesResponseBody() = default;
};
class DescribeGatewayClassesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayClassesResponseBody> body{};

  DescribeGatewayClassesResponse() {}

  explicit DescribeGatewayClassesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayClassesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayClassesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayClassesResponse() = default;
};
class DescribeGatewayCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayCredentialRequest() {}

  explicit DescribeGatewayCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayCredentialRequest() = default;
};
class DescribeGatewayCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> consolePassword{};
  shared_ptr<string> consoleUsername{};
  shared_ptr<string> ecsIp{};
  shared_ptr<string> ecsPassword{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeGatewayCredentialResponseBody() {}

  explicit DescribeGatewayCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (consolePassword) {
      res["ConsolePassword"] = boost::any(*consolePassword);
    }
    if (consoleUsername) {
      res["ConsoleUsername"] = boost::any(*consoleUsername);
    }
    if (ecsIp) {
      res["EcsIp"] = boost::any(*ecsIp);
    }
    if (ecsPassword) {
      res["EcsPassword"] = boost::any(*ecsPassword);
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
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ConsolePassword") != m.end() && !m["ConsolePassword"].empty()) {
      consolePassword = make_shared<string>(boost::any_cast<string>(m["ConsolePassword"]));
    }
    if (m.find("ConsoleUsername") != m.end() && !m["ConsoleUsername"].empty()) {
      consoleUsername = make_shared<string>(boost::any_cast<string>(m["ConsoleUsername"]));
    }
    if (m.find("EcsIp") != m.end() && !m["EcsIp"].empty()) {
      ecsIp = make_shared<string>(boost::any_cast<string>(m["EcsIp"]));
    }
    if (m.find("EcsPassword") != m.end() && !m["EcsPassword"].empty()) {
      ecsPassword = make_shared<string>(boost::any_cast<string>(m["EcsPassword"]));
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
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeGatewayCredentialResponseBody() = default;
};
class DescribeGatewayCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayCredentialResponseBody> body{};

  DescribeGatewayCredentialResponse() {}

  explicit DescribeGatewayCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayCredentialResponse() = default;
};
class DescribeGatewayDNSRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayDNSRequest() {}

  explicit DescribeGatewayDNSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayDNSRequest() = default;
};
class DescribeGatewayDNSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> dnsServer{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayDNSResponseBody() {}

  explicit DescribeGatewayDNSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (dnsServer) {
      res["DnsServer"] = boost::any(*dnsServer);
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
    if (m.find("DnsServer") != m.end() && !m["DnsServer"].empty()) {
      dnsServer = make_shared<string>(boost::any_cast<string>(m["DnsServer"]));
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


  virtual ~DescribeGatewayDNSResponseBody() = default;
};
class DescribeGatewayDNSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayDNSResponseBody> body{};

  DescribeGatewayDNSResponse() {}

  explicit DescribeGatewayDNSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayDNSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayDNSResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayDNSResponse() = default;
};
class DescribeGatewayFileSharesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<bool> refresh{};
  shared_ptr<string> securityToken{};

  DescribeGatewayFileSharesRequest() {}

  explicit DescribeGatewayFileSharesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (refresh) {
      res["Refresh"] = boost::any(*refresh);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("Refresh") != m.end() && !m["Refresh"].empty()) {
      refresh = make_shared<bool>(boost::any_cast<bool>(m["Refresh"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayFileSharesRequest() = default;
};
class DescribeGatewayFileSharesResponseBodyFileSharesFileShare : public Darabonba::Model {
public:
  shared_ptr<bool> accessBasedEnumeration{};
  shared_ptr<long> activeMessages{};
  shared_ptr<string> address{};
  shared_ptr<long> beLimit{};
  shared_ptr<bool> browsable{};
  shared_ptr<string> bucketInfos{};
  shared_ptr<bool> bucketsStub{};
  shared_ptr<bool> bypassCacheRead{};
  shared_ptr<string> cacheMode{};
  shared_ptr<string> clientSideCmk{};
  shared_ptr<bool> clientSideEncryption{};
  shared_ptr<bool> directIO{};
  shared_ptr<string> diskId{};
  shared_ptr<string> diskType{};
  shared_ptr<long> downloadLimit{};
  shared_ptr<long> downloadQueue{};
  shared_ptr<long> downloadRate{};
  shared_ptr<bool> enabled{};
  shared_ptr<string> expressSyncId{};
  shared_ptr<bool> fastReclaim{};
  shared_ptr<long> feLimit{};
  shared_ptr<long> fileNumLimit{};
  shared_ptr<long> fsSizeLimit{};
  shared_ptr<long> highWatermark{};
  shared_ptr<bool> ignoreDelete{};
  shared_ptr<bool> inPlace{};
  shared_ptr<long> inRate{};
  shared_ptr<string> indexId{};
  shared_ptr<string> kmsRotatePeriod{};
  shared_ptr<long> lagPeriod{};
  shared_ptr<string> localPath{};
  shared_ptr<long> lowWatermark{};
  shared_ptr<string> mnsHealth{};
  shared_ptr<string> name{};
  shared_ptr<bool> nfsV4Optimization{};
  shared_ptr<bool> noPartition{};
  shared_ptr<string> obsoleteBuckets{};
  shared_ptr<string> ossBucketName{};
  shared_ptr<bool> ossBucketSsl{};
  shared_ptr<string> ossEndpoint{};
  shared_ptr<string> ossHealth{};
  shared_ptr<long> ossUsed{};
  shared_ptr<long> outRate{};
  shared_ptr<string> partialSyncPaths{};
  shared_ptr<string> pathPrefix{};
  shared_ptr<long> pollingInterval{};
  shared_ptr<string> protocol{};
  shared_ptr<long> remainingMetaSpace{};
  shared_ptr<bool> remoteSync{};
  shared_ptr<bool> remoteSyncDownload{};
  shared_ptr<string> roClientList{};
  shared_ptr<string> roUserList{};
  shared_ptr<string> rwClientList{};
  shared_ptr<string> rwUserList{};
  shared_ptr<string> serverSideAlgorithm{};
  shared_ptr<string> serverSideCmk{};
  shared_ptr<bool> serverSideEncryption{};
  shared_ptr<long> size{};
  shared_ptr<string> squash{};
  shared_ptr<string> state{};
  shared_ptr<string> status{};
  shared_ptr<bool> supportArchive{};
  shared_ptr<long> syncProgress{};
  shared_ptr<bool> throttling{};
  shared_ptr<long> totalDownload{};
  shared_ptr<long> totalUpload{};
  shared_ptr<bool> transferAcceleration{};
  shared_ptr<long> uploadQueue{};
  shared_ptr<long> used{};
  shared_ptr<bool> windowsAcl{};

  DescribeGatewayFileSharesResponseBodyFileSharesFileShare() {}

  explicit DescribeGatewayFileSharesResponseBodyFileSharesFileShare(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessBasedEnumeration) {
      res["AccessBasedEnumeration"] = boost::any(*accessBasedEnumeration);
    }
    if (activeMessages) {
      res["ActiveMessages"] = boost::any(*activeMessages);
    }
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (beLimit) {
      res["BeLimit"] = boost::any(*beLimit);
    }
    if (browsable) {
      res["Browsable"] = boost::any(*browsable);
    }
    if (bucketInfos) {
      res["BucketInfos"] = boost::any(*bucketInfos);
    }
    if (bucketsStub) {
      res["BucketsStub"] = boost::any(*bucketsStub);
    }
    if (bypassCacheRead) {
      res["BypassCacheRead"] = boost::any(*bypassCacheRead);
    }
    if (cacheMode) {
      res["CacheMode"] = boost::any(*cacheMode);
    }
    if (clientSideCmk) {
      res["ClientSideCmk"] = boost::any(*clientSideCmk);
    }
    if (clientSideEncryption) {
      res["ClientSideEncryption"] = boost::any(*clientSideEncryption);
    }
    if (directIO) {
      res["DirectIO"] = boost::any(*directIO);
    }
    if (diskId) {
      res["DiskId"] = boost::any(*diskId);
    }
    if (diskType) {
      res["DiskType"] = boost::any(*diskType);
    }
    if (downloadLimit) {
      res["DownloadLimit"] = boost::any(*downloadLimit);
    }
    if (downloadQueue) {
      res["DownloadQueue"] = boost::any(*downloadQueue);
    }
    if (downloadRate) {
      res["DownloadRate"] = boost::any(*downloadRate);
    }
    if (enabled) {
      res["Enabled"] = boost::any(*enabled);
    }
    if (expressSyncId) {
      res["ExpressSyncId"] = boost::any(*expressSyncId);
    }
    if (fastReclaim) {
      res["FastReclaim"] = boost::any(*fastReclaim);
    }
    if (feLimit) {
      res["FeLimit"] = boost::any(*feLimit);
    }
    if (fileNumLimit) {
      res["FileNumLimit"] = boost::any(*fileNumLimit);
    }
    if (fsSizeLimit) {
      res["FsSizeLimit"] = boost::any(*fsSizeLimit);
    }
    if (highWatermark) {
      res["HighWatermark"] = boost::any(*highWatermark);
    }
    if (ignoreDelete) {
      res["IgnoreDelete"] = boost::any(*ignoreDelete);
    }
    if (inPlace) {
      res["InPlace"] = boost::any(*inPlace);
    }
    if (inRate) {
      res["InRate"] = boost::any(*inRate);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (kmsRotatePeriod) {
      res["KmsRotatePeriod"] = boost::any(*kmsRotatePeriod);
    }
    if (lagPeriod) {
      res["LagPeriod"] = boost::any(*lagPeriod);
    }
    if (localPath) {
      res["LocalPath"] = boost::any(*localPath);
    }
    if (lowWatermark) {
      res["LowWatermark"] = boost::any(*lowWatermark);
    }
    if (mnsHealth) {
      res["MnsHealth"] = boost::any(*mnsHealth);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nfsV4Optimization) {
      res["NfsV4Optimization"] = boost::any(*nfsV4Optimization);
    }
    if (noPartition) {
      res["NoPartition"] = boost::any(*noPartition);
    }
    if (obsoleteBuckets) {
      res["ObsoleteBuckets"] = boost::any(*obsoleteBuckets);
    }
    if (ossBucketName) {
      res["OssBucketName"] = boost::any(*ossBucketName);
    }
    if (ossBucketSsl) {
      res["OssBucketSsl"] = boost::any(*ossBucketSsl);
    }
    if (ossEndpoint) {
      res["OssEndpoint"] = boost::any(*ossEndpoint);
    }
    if (ossHealth) {
      res["OssHealth"] = boost::any(*ossHealth);
    }
    if (ossUsed) {
      res["OssUsed"] = boost::any(*ossUsed);
    }
    if (outRate) {
      res["OutRate"] = boost::any(*outRate);
    }
    if (partialSyncPaths) {
      res["PartialSyncPaths"] = boost::any(*partialSyncPaths);
    }
    if (pathPrefix) {
      res["PathPrefix"] = boost::any(*pathPrefix);
    }
    if (pollingInterval) {
      res["PollingInterval"] = boost::any(*pollingInterval);
    }
    if (protocol) {
      res["Protocol"] = boost::any(*protocol);
    }
    if (remainingMetaSpace) {
      res["RemainingMetaSpace"] = boost::any(*remainingMetaSpace);
    }
    if (remoteSync) {
      res["RemoteSync"] = boost::any(*remoteSync);
    }
    if (remoteSyncDownload) {
      res["RemoteSyncDownload"] = boost::any(*remoteSyncDownload);
    }
    if (roClientList) {
      res["RoClientList"] = boost::any(*roClientList);
    }
    if (roUserList) {
      res["RoUserList"] = boost::any(*roUserList);
    }
    if (rwClientList) {
      res["RwClientList"] = boost::any(*rwClientList);
    }
    if (rwUserList) {
      res["RwUserList"] = boost::any(*rwUserList);
    }
    if (serverSideAlgorithm) {
      res["ServerSideAlgorithm"] = boost::any(*serverSideAlgorithm);
    }
    if (serverSideCmk) {
      res["ServerSideCmk"] = boost::any(*serverSideCmk);
    }
    if (serverSideEncryption) {
      res["ServerSideEncryption"] = boost::any(*serverSideEncryption);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (squash) {
      res["Squash"] = boost::any(*squash);
    }
    if (state) {
      res["State"] = boost::any(*state);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (supportArchive) {
      res["SupportArchive"] = boost::any(*supportArchive);
    }
    if (syncProgress) {
      res["SyncProgress"] = boost::any(*syncProgress);
    }
    if (throttling) {
      res["Throttling"] = boost::any(*throttling);
    }
    if (totalDownload) {
      res["TotalDownload"] = boost::any(*totalDownload);
    }
    if (totalUpload) {
      res["TotalUpload"] = boost::any(*totalUpload);
    }
    if (transferAcceleration) {
      res["TransferAcceleration"] = boost::any(*transferAcceleration);
    }
    if (uploadQueue) {
      res["UploadQueue"] = boost::any(*uploadQueue);
    }
    if (used) {
      res["Used"] = boost::any(*used);
    }
    if (windowsAcl) {
      res["WindowsAcl"] = boost::any(*windowsAcl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessBasedEnumeration") != m.end() && !m["AccessBasedEnumeration"].empty()) {
      accessBasedEnumeration = make_shared<bool>(boost::any_cast<bool>(m["AccessBasedEnumeration"]));
    }
    if (m.find("ActiveMessages") != m.end() && !m["ActiveMessages"].empty()) {
      activeMessages = make_shared<long>(boost::any_cast<long>(m["ActiveMessages"]));
    }
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("BeLimit") != m.end() && !m["BeLimit"].empty()) {
      beLimit = make_shared<long>(boost::any_cast<long>(m["BeLimit"]));
    }
    if (m.find("Browsable") != m.end() && !m["Browsable"].empty()) {
      browsable = make_shared<bool>(boost::any_cast<bool>(m["Browsable"]));
    }
    if (m.find("BucketInfos") != m.end() && !m["BucketInfos"].empty()) {
      bucketInfos = make_shared<string>(boost::any_cast<string>(m["BucketInfos"]));
    }
    if (m.find("BucketsStub") != m.end() && !m["BucketsStub"].empty()) {
      bucketsStub = make_shared<bool>(boost::any_cast<bool>(m["BucketsStub"]));
    }
    if (m.find("BypassCacheRead") != m.end() && !m["BypassCacheRead"].empty()) {
      bypassCacheRead = make_shared<bool>(boost::any_cast<bool>(m["BypassCacheRead"]));
    }
    if (m.find("CacheMode") != m.end() && !m["CacheMode"].empty()) {
      cacheMode = make_shared<string>(boost::any_cast<string>(m["CacheMode"]));
    }
    if (m.find("ClientSideCmk") != m.end() && !m["ClientSideCmk"].empty()) {
      clientSideCmk = make_shared<string>(boost::any_cast<string>(m["ClientSideCmk"]));
    }
    if (m.find("ClientSideEncryption") != m.end() && !m["ClientSideEncryption"].empty()) {
      clientSideEncryption = make_shared<bool>(boost::any_cast<bool>(m["ClientSideEncryption"]));
    }
    if (m.find("DirectIO") != m.end() && !m["DirectIO"].empty()) {
      directIO = make_shared<bool>(boost::any_cast<bool>(m["DirectIO"]));
    }
    if (m.find("DiskId") != m.end() && !m["DiskId"].empty()) {
      diskId = make_shared<string>(boost::any_cast<string>(m["DiskId"]));
    }
    if (m.find("DiskType") != m.end() && !m["DiskType"].empty()) {
      diskType = make_shared<string>(boost::any_cast<string>(m["DiskType"]));
    }
    if (m.find("DownloadLimit") != m.end() && !m["DownloadLimit"].empty()) {
      downloadLimit = make_shared<long>(boost::any_cast<long>(m["DownloadLimit"]));
    }
    if (m.find("DownloadQueue") != m.end() && !m["DownloadQueue"].empty()) {
      downloadQueue = make_shared<long>(boost::any_cast<long>(m["DownloadQueue"]));
    }
    if (m.find("DownloadRate") != m.end() && !m["DownloadRate"].empty()) {
      downloadRate = make_shared<long>(boost::any_cast<long>(m["DownloadRate"]));
    }
    if (m.find("Enabled") != m.end() && !m["Enabled"].empty()) {
      enabled = make_shared<bool>(boost::any_cast<bool>(m["Enabled"]));
    }
    if (m.find("ExpressSyncId") != m.end() && !m["ExpressSyncId"].empty()) {
      expressSyncId = make_shared<string>(boost::any_cast<string>(m["ExpressSyncId"]));
    }
    if (m.find("FastReclaim") != m.end() && !m["FastReclaim"].empty()) {
      fastReclaim = make_shared<bool>(boost::any_cast<bool>(m["FastReclaim"]));
    }
    if (m.find("FeLimit") != m.end() && !m["FeLimit"].empty()) {
      feLimit = make_shared<long>(boost::any_cast<long>(m["FeLimit"]));
    }
    if (m.find("FileNumLimit") != m.end() && !m["FileNumLimit"].empty()) {
      fileNumLimit = make_shared<long>(boost::any_cast<long>(m["FileNumLimit"]));
    }
    if (m.find("FsSizeLimit") != m.end() && !m["FsSizeLimit"].empty()) {
      fsSizeLimit = make_shared<long>(boost::any_cast<long>(m["FsSizeLimit"]));
    }
    if (m.find("HighWatermark") != m.end() && !m["HighWatermark"].empty()) {
      highWatermark = make_shared<long>(boost::any_cast<long>(m["HighWatermark"]));
    }
    if (m.find("IgnoreDelete") != m.end() && !m["IgnoreDelete"].empty()) {
      ignoreDelete = make_shared<bool>(boost::any_cast<bool>(m["IgnoreDelete"]));
    }
    if (m.find("InPlace") != m.end() && !m["InPlace"].empty()) {
      inPlace = make_shared<bool>(boost::any_cast<bool>(m["InPlace"]));
    }
    if (m.find("InRate") != m.end() && !m["InRate"].empty()) {
      inRate = make_shared<long>(boost::any_cast<long>(m["InRate"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("KmsRotatePeriod") != m.end() && !m["KmsRotatePeriod"].empty()) {
      kmsRotatePeriod = make_shared<string>(boost::any_cast<string>(m["KmsRotatePeriod"]));
    }
    if (m.find("LagPeriod") != m.end() && !m["LagPeriod"].empty()) {
      lagPeriod = make_shared<long>(boost::any_cast<long>(m["LagPeriod"]));
    }
    if (m.find("LocalPath") != m.end() && !m["LocalPath"].empty()) {
      localPath = make_shared<string>(boost::any_cast<string>(m["LocalPath"]));
    }
    if (m.find("LowWatermark") != m.end() && !m["LowWatermark"].empty()) {
      lowWatermark = make_shared<long>(boost::any_cast<long>(m["LowWatermark"]));
    }
    if (m.find("MnsHealth") != m.end() && !m["MnsHealth"].empty()) {
      mnsHealth = make_shared<string>(boost::any_cast<string>(m["MnsHealth"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NfsV4Optimization") != m.end() && !m["NfsV4Optimization"].empty()) {
      nfsV4Optimization = make_shared<bool>(boost::any_cast<bool>(m["NfsV4Optimization"]));
    }
    if (m.find("NoPartition") != m.end() && !m["NoPartition"].empty()) {
      noPartition = make_shared<bool>(boost::any_cast<bool>(m["NoPartition"]));
    }
    if (m.find("ObsoleteBuckets") != m.end() && !m["ObsoleteBuckets"].empty()) {
      obsoleteBuckets = make_shared<string>(boost::any_cast<string>(m["ObsoleteBuckets"]));
    }
    if (m.find("OssBucketName") != m.end() && !m["OssBucketName"].empty()) {
      ossBucketName = make_shared<string>(boost::any_cast<string>(m["OssBucketName"]));
    }
    if (m.find("OssBucketSsl") != m.end() && !m["OssBucketSsl"].empty()) {
      ossBucketSsl = make_shared<bool>(boost::any_cast<bool>(m["OssBucketSsl"]));
    }
    if (m.find("OssEndpoint") != m.end() && !m["OssEndpoint"].empty()) {
      ossEndpoint = make_shared<string>(boost::any_cast<string>(m["OssEndpoint"]));
    }
    if (m.find("OssHealth") != m.end() && !m["OssHealth"].empty()) {
      ossHealth = make_shared<string>(boost::any_cast<string>(m["OssHealth"]));
    }
    if (m.find("OssUsed") != m.end() && !m["OssUsed"].empty()) {
      ossUsed = make_shared<long>(boost::any_cast<long>(m["OssUsed"]));
    }
    if (m.find("OutRate") != m.end() && !m["OutRate"].empty()) {
      outRate = make_shared<long>(boost::any_cast<long>(m["OutRate"]));
    }
    if (m.find("PartialSyncPaths") != m.end() && !m["PartialSyncPaths"].empty()) {
      partialSyncPaths = make_shared<string>(boost::any_cast<string>(m["PartialSyncPaths"]));
    }
    if (m.find("PathPrefix") != m.end() && !m["PathPrefix"].empty()) {
      pathPrefix = make_shared<string>(boost::any_cast<string>(m["PathPrefix"]));
    }
    if (m.find("PollingInterval") != m.end() && !m["PollingInterval"].empty()) {
      pollingInterval = make_shared<long>(boost::any_cast<long>(m["PollingInterval"]));
    }
    if (m.find("Protocol") != m.end() && !m["Protocol"].empty()) {
      protocol = make_shared<string>(boost::any_cast<string>(m["Protocol"]));
    }
    if (m.find("RemainingMetaSpace") != m.end() && !m["RemainingMetaSpace"].empty()) {
      remainingMetaSpace = make_shared<long>(boost::any_cast<long>(m["RemainingMetaSpace"]));
    }
    if (m.find("RemoteSync") != m.end() && !m["RemoteSync"].empty()) {
      remoteSync = make_shared<bool>(boost::any_cast<bool>(m["RemoteSync"]));
    }
    if (m.find("RemoteSyncDownload") != m.end() && !m["RemoteSyncDownload"].empty()) {
      remoteSyncDownload = make_shared<bool>(boost::any_cast<bool>(m["RemoteSyncDownload"]));
    }
    if (m.find("RoClientList") != m.end() && !m["RoClientList"].empty()) {
      roClientList = make_shared<string>(boost::any_cast<string>(m["RoClientList"]));
    }
    if (m.find("RoUserList") != m.end() && !m["RoUserList"].empty()) {
      roUserList = make_shared<string>(boost::any_cast<string>(m["RoUserList"]));
    }
    if (m.find("RwClientList") != m.end() && !m["RwClientList"].empty()) {
      rwClientList = make_shared<string>(boost::any_cast<string>(m["RwClientList"]));
    }
    if (m.find("RwUserList") != m.end() && !m["RwUserList"].empty()) {
      rwUserList = make_shared<string>(boost::any_cast<string>(m["RwUserList"]));
    }
    if (m.find("ServerSideAlgorithm") != m.end() && !m["ServerSideAlgorithm"].empty()) {
      serverSideAlgorithm = make_shared<string>(boost::any_cast<string>(m["ServerSideAlgorithm"]));
    }
    if (m.find("ServerSideCmk") != m.end() && !m["ServerSideCmk"].empty()) {
      serverSideCmk = make_shared<string>(boost::any_cast<string>(m["ServerSideCmk"]));
    }
    if (m.find("ServerSideEncryption") != m.end() && !m["ServerSideEncryption"].empty()) {
      serverSideEncryption = make_shared<bool>(boost::any_cast<bool>(m["ServerSideEncryption"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Squash") != m.end() && !m["Squash"].empty()) {
      squash = make_shared<string>(boost::any_cast<string>(m["Squash"]));
    }
    if (m.find("State") != m.end() && !m["State"].empty()) {
      state = make_shared<string>(boost::any_cast<string>(m["State"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("SupportArchive") != m.end() && !m["SupportArchive"].empty()) {
      supportArchive = make_shared<bool>(boost::any_cast<bool>(m["SupportArchive"]));
    }
    if (m.find("SyncProgress") != m.end() && !m["SyncProgress"].empty()) {
      syncProgress = make_shared<long>(boost::any_cast<long>(m["SyncProgress"]));
    }
    if (m.find("Throttling") != m.end() && !m["Throttling"].empty()) {
      throttling = make_shared<bool>(boost::any_cast<bool>(m["Throttling"]));
    }
    if (m.find("TotalDownload") != m.end() && !m["TotalDownload"].empty()) {
      totalDownload = make_shared<long>(boost::any_cast<long>(m["TotalDownload"]));
    }
    if (m.find("TotalUpload") != m.end() && !m["TotalUpload"].empty()) {
      totalUpload = make_shared<long>(boost::any_cast<long>(m["TotalUpload"]));
    }
    if (m.find("TransferAcceleration") != m.end() && !m["TransferAcceleration"].empty()) {
      transferAcceleration = make_shared<bool>(boost::any_cast<bool>(m["TransferAcceleration"]));
    }
    if (m.find("UploadQueue") != m.end() && !m["UploadQueue"].empty()) {
      uploadQueue = make_shared<long>(boost::any_cast<long>(m["UploadQueue"]));
    }
    if (m.find("Used") != m.end() && !m["Used"].empty()) {
      used = make_shared<long>(boost::any_cast<long>(m["Used"]));
    }
    if (m.find("WindowsAcl") != m.end() && !m["WindowsAcl"].empty()) {
      windowsAcl = make_shared<bool>(boost::any_cast<bool>(m["WindowsAcl"]));
    }
  }


  virtual ~DescribeGatewayFileSharesResponseBodyFileSharesFileShare() = default;
};
class DescribeGatewayFileSharesResponseBodyFileShares : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayFileSharesResponseBodyFileSharesFileShare>> fileShare{};

  DescribeGatewayFileSharesResponseBodyFileShares() {}

  explicit DescribeGatewayFileSharesResponseBodyFileShares(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileShare) {
      vector<boost::any> temp1;
      for(auto item1:*fileShare){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FileShare"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileShare") != m.end() && !m["FileShare"].empty()) {
      if (typeid(vector<boost::any>) == m["FileShare"].type()) {
        vector<DescribeGatewayFileSharesResponseBodyFileSharesFileShare> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FileShare"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayFileSharesResponseBodyFileSharesFileShare model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fileShare = make_shared<vector<DescribeGatewayFileSharesResponseBodyFileSharesFileShare>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayFileSharesResponseBodyFileShares() = default;
};
class DescribeGatewayFileSharesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeGatewayFileSharesResponseBodyFileShares> fileShares{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayFileSharesResponseBody() {}

  explicit DescribeGatewayFileSharesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (fileShares) {
      res["FileShares"] = fileShares ? boost::any(fileShares->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("FileShares") != m.end() && !m["FileShares"].empty()) {
      if (typeid(map<string, boost::any>) == m["FileShares"].type()) {
        DescribeGatewayFileSharesResponseBodyFileShares model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["FileShares"]));
        fileShares = make_shared<DescribeGatewayFileSharesResponseBodyFileShares>(model1);
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


  virtual ~DescribeGatewayFileSharesResponseBody() = default;
};
class DescribeGatewayFileSharesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayFileSharesResponseBody> body{};

  DescribeGatewayFileSharesResponse() {}

  explicit DescribeGatewayFileSharesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayFileSharesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayFileSharesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayFileSharesResponse() = default;
};
class DescribeGatewayFileStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> filePath{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayFileStatusRequest() {}

  explicit DescribeGatewayFileStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayFileStatusRequest() = default;
};
class DescribeGatewayFileStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};

  DescribeGatewayFileStatusResponseBody() {}

  explicit DescribeGatewayFileStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (status) {
      res["Status"] = boost::any(*status);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
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


  virtual ~DescribeGatewayFileStatusResponseBody() = default;
};
class DescribeGatewayFileStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayFileStatusResponseBody> body{};

  DescribeGatewayFileStatusResponse() {}

  explicit DescribeGatewayFileStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayFileStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayFileStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayFileStatusResponse() = default;
};
class DescribeGatewayImagesRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<string> type{};

  DescribeGatewayImagesRequest() {}

  explicit DescribeGatewayImagesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeGatewayImagesRequest() = default;
};
class DescribeGatewayImagesResponseBodyImagesImage : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> MD5{};
  shared_ptr<string> modifiedDate{};
  shared_ptr<string> name{};
  shared_ptr<long> size{};
  shared_ptr<string> title{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> version{};

  DescribeGatewayImagesResponseBodyImagesImage() {}

  explicit DescribeGatewayImagesResponseBodyImagesImage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (MD5) {
      res["MD5"] = boost::any(*MD5);
    }
    if (modifiedDate) {
      res["ModifiedDate"] = boost::any(*modifiedDate);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (version) {
      res["Version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("MD5") != m.end() && !m["MD5"].empty()) {
      MD5 = make_shared<string>(boost::any_cast<string>(m["MD5"]));
    }
    if (m.find("ModifiedDate") != m.end() && !m["ModifiedDate"].empty()) {
      modifiedDate = make_shared<string>(boost::any_cast<string>(m["ModifiedDate"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("Version") != m.end() && !m["Version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["Version"]));
    }
  }


  virtual ~DescribeGatewayImagesResponseBodyImagesImage() = default;
};
class DescribeGatewayImagesResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayImagesResponseBodyImagesImage>> image{};

  DescribeGatewayImagesResponseBodyImages() {}

  explicit DescribeGatewayImagesResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (image) {
      vector<boost::any> temp1;
      for(auto item1:*image){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Image"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Image") != m.end() && !m["Image"].empty()) {
      if (typeid(vector<boost::any>) == m["Image"].type()) {
        vector<DescribeGatewayImagesResponseBodyImagesImage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Image"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayImagesResponseBodyImagesImage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        image = make_shared<vector<DescribeGatewayImagesResponseBodyImagesImage>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayImagesResponseBodyImages() = default;
};
class DescribeGatewayImagesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeGatewayImagesResponseBodyImages> images{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayImagesResponseBody() {}

  explicit DescribeGatewayImagesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (images) {
      res["Images"] = images ? boost::any(images->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(map<string, boost::any>) == m["Images"].type()) {
        DescribeGatewayImagesResponseBodyImages model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Images"]));
        images = make_shared<DescribeGatewayImagesResponseBodyImages>(model1);
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


  virtual ~DescribeGatewayImagesResponseBody() = default;
};
class DescribeGatewayImagesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayImagesResponseBody> body{};

  DescribeGatewayImagesResponse() {}

  explicit DescribeGatewayImagesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayImagesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayImagesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayImagesResponse() = default;
};
class DescribeGatewayInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayInfoRequest() {}

  explicit DescribeGatewayInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayInfoRequest() = default;
};
class DescribeGatewayInfoResponseBodyGatewayInfosGatewayInfo : public Darabonba::Model {
public:
  shared_ptr<string> info{};
  shared_ptr<long> time{};

  DescribeGatewayInfoResponseBodyGatewayInfosGatewayInfo() {}

  explicit DescribeGatewayInfoResponseBodyGatewayInfosGatewayInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (info) {
      res["Info"] = boost::any(*info);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Info") != m.end() && !m["Info"].empty()) {
      info = make_shared<string>(boost::any_cast<string>(m["Info"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~DescribeGatewayInfoResponseBodyGatewayInfosGatewayInfo() = default;
};
class DescribeGatewayInfoResponseBodyGatewayInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayInfoResponseBodyGatewayInfosGatewayInfo>> gatewayInfo{};

  DescribeGatewayInfoResponseBodyGatewayInfos() {}

  explicit DescribeGatewayInfoResponseBodyGatewayInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayInfo) {
      vector<boost::any> temp1;
      for(auto item1:*gatewayInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GatewayInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayInfo") != m.end() && !m["GatewayInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["GatewayInfo"].type()) {
        vector<DescribeGatewayInfoResponseBodyGatewayInfosGatewayInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GatewayInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayInfoResponseBodyGatewayInfosGatewayInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gatewayInfo = make_shared<vector<DescribeGatewayInfoResponseBodyGatewayInfosGatewayInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayInfoResponseBodyGatewayInfos() = default;
};
class DescribeGatewayInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeGatewayInfoResponseBodyGatewayInfos> gatewayInfos{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayInfoResponseBody() {}

  explicit DescribeGatewayInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gatewayInfos) {
      res["GatewayInfos"] = gatewayInfos ? boost::any(gatewayInfos->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GatewayInfos") != m.end() && !m["GatewayInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatewayInfos"].type()) {
        DescribeGatewayInfoResponseBodyGatewayInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GatewayInfos"]));
        gatewayInfos = make_shared<DescribeGatewayInfoResponseBodyGatewayInfos>(model1);
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


  virtual ~DescribeGatewayInfoResponseBody() = default;
};
class DescribeGatewayInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayInfoResponseBody> body{};

  DescribeGatewayInfoResponse() {}

  explicit DescribeGatewayInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayInfoResponse() = default;
};
class DescribeGatewayLDAPInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayLDAPInfoRequest() {}

  explicit DescribeGatewayLDAPInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayLDAPInfoRequest() = default;
};
class DescribeGatewayLDAPInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> baseDN{};
  shared_ptr<string> code{};
  shared_ptr<bool> isEnabled{};
  shared_ptr<bool> isTls{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> rootDN{};
  shared_ptr<string> serverIp{};
  shared_ptr<bool> success{};

  DescribeGatewayLDAPInfoResponseBody() {}

  explicit DescribeGatewayLDAPInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseDN) {
      res["BaseDN"] = boost::any(*baseDN);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (isTls) {
      res["IsTls"] = boost::any(*isTls);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (rootDN) {
      res["RootDN"] = boost::any(*rootDN);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseDN") != m.end() && !m["BaseDN"].empty()) {
      baseDN = make_shared<string>(boost::any_cast<string>(m["BaseDN"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsEnabled"]));
    }
    if (m.find("IsTls") != m.end() && !m["IsTls"].empty()) {
      isTls = make_shared<bool>(boost::any_cast<bool>(m["IsTls"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RootDN") != m.end() && !m["RootDN"].empty()) {
      rootDN = make_shared<string>(boost::any_cast<string>(m["RootDN"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeGatewayLDAPInfoResponseBody() = default;
};
class DescribeGatewayLDAPInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayLDAPInfoResponseBody> body{};

  DescribeGatewayLDAPInfoResponse() {}

  explicit DescribeGatewayLDAPInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayLDAPInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayLDAPInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayLDAPInfoResponse() = default;
};
class DescribeGatewayLocationsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};

  DescribeGatewayLocationsRequest() {}

  explicit DescribeGatewayLocationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayLocationsRequest() = default;
};
class DescribeGatewayLocationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> locations{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayLocationsResponseBody() {}

  explicit DescribeGatewayLocationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (locations) {
      res["Locations"] = boost::any(*locations);
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
    if (m.find("Locations") != m.end() && !m["Locations"].empty()) {
      locations = make_shared<string>(boost::any_cast<string>(m["Locations"]));
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


  virtual ~DescribeGatewayLocationsResponseBody() = default;
};
class DescribeGatewayLocationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayLocationsResponseBody> body{};

  DescribeGatewayLocationsResponse() {}

  explicit DescribeGatewayLocationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayLocationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayLocationsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayLocationsResponse() = default;
};
class DescribeGatewayLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayLoggingRequest() {}

  explicit DescribeGatewayLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayLoggingRequest() = default;
};
class DescribeGatewayLoggingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> gatewayLoggingStatus{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> slsLogstore{};
  shared_ptr<string> slsProject{};
  shared_ptr<bool> success{};

  DescribeGatewayLoggingResponseBody() {}

  explicit DescribeGatewayLoggingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gatewayLoggingStatus) {
      res["GatewayLoggingStatus"] = boost::any(*gatewayLoggingStatus);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slsLogstore) {
      res["SlsLogstore"] = boost::any(*slsLogstore);
    }
    if (slsProject) {
      res["SlsProject"] = boost::any(*slsProject);
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
    if (m.find("GatewayLoggingStatus") != m.end() && !m["GatewayLoggingStatus"].empty()) {
      gatewayLoggingStatus = make_shared<string>(boost::any_cast<string>(m["GatewayLoggingStatus"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlsLogstore") != m.end() && !m["SlsLogstore"].empty()) {
      slsLogstore = make_shared<string>(boost::any_cast<string>(m["SlsLogstore"]));
    }
    if (m.find("SlsProject") != m.end() && !m["SlsProject"].empty()) {
      slsProject = make_shared<string>(boost::any_cast<string>(m["SlsProject"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeGatewayLoggingResponseBody() = default;
};
class DescribeGatewayLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayLoggingResponseBody> body{};

  DescribeGatewayLoggingResponse() {}

  explicit DescribeGatewayLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayLoggingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayLoggingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayLoggingResponse() = default;
};
class DescribeGatewayLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> logFilePath{};
  shared_ptr<string> securityToken{};

  DescribeGatewayLogsRequest() {}

  explicit DescribeGatewayLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (logFilePath) {
      res["LogFilePath"] = boost::any(*logFilePath);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("LogFilePath") != m.end() && !m["LogFilePath"].empty()) {
      logFilePath = make_shared<string>(boost::any_cast<string>(m["LogFilePath"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayLogsRequest() = default;
};
class DescribeGatewayLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> logFilePaths{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewayLogsResponseBody() {}

  explicit DescribeGatewayLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (logFilePaths) {
      res["LogFilePaths"] = boost::any(*logFilePaths);
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
    if (m.find("LogFilePaths") != m.end() && !m["LogFilePaths"].empty()) {
      logFilePaths = make_shared<string>(boost::any_cast<string>(m["LogFilePaths"]));
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


  virtual ~DescribeGatewayLogsResponseBody() = default;
};
class DescribeGatewayLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayLogsResponseBody> body{};

  DescribeGatewayLogsResponse() {}

  explicit DescribeGatewayLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayLogsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayLogsResponse() = default;
};
class DescribeGatewayModificationClassesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayModificationClassesRequest() {}

  explicit DescribeGatewayModificationClassesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayModificationClassesRequest() = default;
};
class DescribeGatewayModificationClassesResponseBodyTargetGatewayClassesTargetGatewayClass : public Darabonba::Model {
public:
  shared_ptr<string> gatewayClass{};
  shared_ptr<bool> isAvailable{};

  DescribeGatewayModificationClassesResponseBodyTargetGatewayClassesTargetGatewayClass() {}

  explicit DescribeGatewayModificationClassesResponseBodyTargetGatewayClassesTargetGatewayClass(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayClass) {
      res["GatewayClass"] = boost::any(*gatewayClass);
    }
    if (isAvailable) {
      res["IsAvailable"] = boost::any(*isAvailable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayClass") != m.end() && !m["GatewayClass"].empty()) {
      gatewayClass = make_shared<string>(boost::any_cast<string>(m["GatewayClass"]));
    }
    if (m.find("IsAvailable") != m.end() && !m["IsAvailable"].empty()) {
      isAvailable = make_shared<bool>(boost::any_cast<bool>(m["IsAvailable"]));
    }
  }


  virtual ~DescribeGatewayModificationClassesResponseBodyTargetGatewayClassesTargetGatewayClass() = default;
};
class DescribeGatewayModificationClassesResponseBodyTargetGatewayClasses : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayModificationClassesResponseBodyTargetGatewayClassesTargetGatewayClass>> targetGatewayClass{};

  DescribeGatewayModificationClassesResponseBodyTargetGatewayClasses() {}

  explicit DescribeGatewayModificationClassesResponseBodyTargetGatewayClasses(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (targetGatewayClass) {
      vector<boost::any> temp1;
      for(auto item1:*targetGatewayClass){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TargetGatewayClass"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TargetGatewayClass") != m.end() && !m["TargetGatewayClass"].empty()) {
      if (typeid(vector<boost::any>) == m["TargetGatewayClass"].type()) {
        vector<DescribeGatewayModificationClassesResponseBodyTargetGatewayClassesTargetGatewayClass> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TargetGatewayClass"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayModificationClassesResponseBodyTargetGatewayClassesTargetGatewayClass model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        targetGatewayClass = make_shared<vector<DescribeGatewayModificationClassesResponseBodyTargetGatewayClassesTargetGatewayClass>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayModificationClassesResponseBodyTargetGatewayClasses() = default;
};
class DescribeGatewayModificationClassesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<DescribeGatewayModificationClassesResponseBodyTargetGatewayClasses> targetGatewayClasses{};

  DescribeGatewayModificationClassesResponseBody() {}

  explicit DescribeGatewayModificationClassesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (targetGatewayClasses) {
      res["TargetGatewayClasses"] = targetGatewayClasses ? boost::any(targetGatewayClasses->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TargetGatewayClasses") != m.end() && !m["TargetGatewayClasses"].empty()) {
      if (typeid(map<string, boost::any>) == m["TargetGatewayClasses"].type()) {
        DescribeGatewayModificationClassesResponseBodyTargetGatewayClasses model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TargetGatewayClasses"]));
        targetGatewayClasses = make_shared<DescribeGatewayModificationClassesResponseBodyTargetGatewayClasses>(model1);
      }
    }
  }


  virtual ~DescribeGatewayModificationClassesResponseBody() = default;
};
class DescribeGatewayModificationClassesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayModificationClassesResponseBody> body{};

  DescribeGatewayModificationClassesResponse() {}

  explicit DescribeGatewayModificationClassesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayModificationClassesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayModificationClassesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayModificationClassesResponse() = default;
};
class DescribeGatewayNFSClientsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeGatewayNFSClientsRequest() {}

  explicit DescribeGatewayNFSClientsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayNFSClientsRequest() = default;
};
class DescribeGatewayNFSClientsResponseBodyClientInfoListClientInfo : public Darabonba::Model {
public:
  shared_ptr<string> clientIpAddr{};
  shared_ptr<bool> hasNFSv3{};
  shared_ptr<bool> hasNFSv40{};
  shared_ptr<bool> hasNFSv41{};

  DescribeGatewayNFSClientsResponseBodyClientInfoListClientInfo() {}

  explicit DescribeGatewayNFSClientsResponseBodyClientInfoListClientInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIpAddr) {
      res["ClientIpAddr"] = boost::any(*clientIpAddr);
    }
    if (hasNFSv3) {
      res["HasNFSv3"] = boost::any(*hasNFSv3);
    }
    if (hasNFSv40) {
      res["HasNFSv40"] = boost::any(*hasNFSv40);
    }
    if (hasNFSv41) {
      res["HasNFSv41"] = boost::any(*hasNFSv41);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIpAddr") != m.end() && !m["ClientIpAddr"].empty()) {
      clientIpAddr = make_shared<string>(boost::any_cast<string>(m["ClientIpAddr"]));
    }
    if (m.find("HasNFSv3") != m.end() && !m["HasNFSv3"].empty()) {
      hasNFSv3 = make_shared<bool>(boost::any_cast<bool>(m["HasNFSv3"]));
    }
    if (m.find("HasNFSv40") != m.end() && !m["HasNFSv40"].empty()) {
      hasNFSv40 = make_shared<bool>(boost::any_cast<bool>(m["HasNFSv40"]));
    }
    if (m.find("HasNFSv41") != m.end() && !m["HasNFSv41"].empty()) {
      hasNFSv41 = make_shared<bool>(boost::any_cast<bool>(m["HasNFSv41"]));
    }
  }


  virtual ~DescribeGatewayNFSClientsResponseBodyClientInfoListClientInfo() = default;
};
class DescribeGatewayNFSClientsResponseBodyClientInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayNFSClientsResponseBodyClientInfoListClientInfo>> clientInfo{};

  DescribeGatewayNFSClientsResponseBodyClientInfoList() {}

  explicit DescribeGatewayNFSClientsResponseBodyClientInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfo) {
      vector<boost::any> temp1;
      for(auto item1:*clientInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ClientInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfo") != m.end() && !m["ClientInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["ClientInfo"].type()) {
        vector<DescribeGatewayNFSClientsResponseBodyClientInfoListClientInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ClientInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayNFSClientsResponseBodyClientInfoListClientInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        clientInfo = make_shared<vector<DescribeGatewayNFSClientsResponseBodyClientInfoListClientInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayNFSClientsResponseBodyClientInfoList() = default;
};
class DescribeGatewayNFSClientsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeGatewayNFSClientsResponseBodyClientInfoList> clientInfoList{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<bool> version3Enabled{};
  shared_ptr<bool> version40Enabled{};
  shared_ptr<bool> version41Enabled{};

  DescribeGatewayNFSClientsResponseBody() {}

  explicit DescribeGatewayNFSClientsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientInfoList) {
      res["ClientInfoList"] = clientInfoList ? boost::any(clientInfoList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (version3Enabled) {
      res["Version3Enabled"] = boost::any(*version3Enabled);
    }
    if (version40Enabled) {
      res["Version40Enabled"] = boost::any(*version40Enabled);
    }
    if (version41Enabled) {
      res["Version41Enabled"] = boost::any(*version41Enabled);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientInfoList") != m.end() && !m["ClientInfoList"].empty()) {
      if (typeid(map<string, boost::any>) == m["ClientInfoList"].type()) {
        DescribeGatewayNFSClientsResponseBodyClientInfoList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ClientInfoList"]));
        clientInfoList = make_shared<DescribeGatewayNFSClientsResponseBodyClientInfoList>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Version3Enabled") != m.end() && !m["Version3Enabled"].empty()) {
      version3Enabled = make_shared<bool>(boost::any_cast<bool>(m["Version3Enabled"]));
    }
    if (m.find("Version40Enabled") != m.end() && !m["Version40Enabled"].empty()) {
      version40Enabled = make_shared<bool>(boost::any_cast<bool>(m["Version40Enabled"]));
    }
    if (m.find("Version41Enabled") != m.end() && !m["Version41Enabled"].empty()) {
      version41Enabled = make_shared<bool>(boost::any_cast<bool>(m["Version41Enabled"]));
    }
  }


  virtual ~DescribeGatewayNFSClientsResponseBody() = default;
};
class DescribeGatewayNFSClientsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayNFSClientsResponseBody> body{};

  DescribeGatewayNFSClientsResponse() {}

  explicit DescribeGatewayNFSClientsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayNFSClientsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayNFSClientsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayNFSClientsResponse() = default;
};
class DescribeGatewaySMBUsersRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeGatewaySMBUsersRequest() {}

  explicit DescribeGatewaySMBUsersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewaySMBUsersRequest() = default;
};
class DescribeGatewaySMBUsersResponseBodyUsersUser : public Darabonba::Model {
public:
  shared_ptr<string> username{};

  DescribeGatewaySMBUsersResponseBodyUsersUser() {}

  explicit DescribeGatewaySMBUsersResponseBodyUsersUser(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DescribeGatewaySMBUsersResponseBodyUsersUser() = default;
};
class DescribeGatewaySMBUsersResponseBodyUsers : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewaySMBUsersResponseBodyUsersUser>> user{};

  DescribeGatewaySMBUsersResponseBodyUsers() {}

  explicit DescribeGatewaySMBUsersResponseBodyUsers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (user) {
      vector<boost::any> temp1;
      for(auto item1:*user){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["User"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("User") != m.end() && !m["User"].empty()) {
      if (typeid(vector<boost::any>) == m["User"].type()) {
        vector<DescribeGatewaySMBUsersResponseBodyUsersUser> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["User"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewaySMBUsersResponseBodyUsersUser model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        user = make_shared<vector<DescribeGatewaySMBUsersResponseBodyUsersUser>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewaySMBUsersResponseBodyUsers() = default;
};
class DescribeGatewaySMBUsersResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> activeDirectory{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeGatewaySMBUsersResponseBodyUsers> users{};

  DescribeGatewaySMBUsersResponseBody() {}

  explicit DescribeGatewaySMBUsersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activeDirectory) {
      res["ActiveDirectory"] = boost::any(*activeDirectory);
    }
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (m.find("ActiveDirectory") != m.end() && !m["ActiveDirectory"].empty()) {
      activeDirectory = make_shared<bool>(boost::any_cast<bool>(m["ActiveDirectory"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
        DescribeGatewaySMBUsersResponseBodyUsers model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Users"]));
        users = make_shared<DescribeGatewaySMBUsersResponseBodyUsers>(model1);
      }
    }
  }


  virtual ~DescribeGatewaySMBUsersResponseBody() = default;
};
class DescribeGatewaySMBUsersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewaySMBUsersResponseBody> body{};

  DescribeGatewaySMBUsersResponse() {}

  explicit DescribeGatewaySMBUsersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewaySMBUsersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewaySMBUsersResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewaySMBUsersResponse() = default;
};
class DescribeGatewayStatisticsRequest : public Darabonba::Model {
public:
  shared_ptr<long> endTimestamp{};
  shared_ptr<string> gatewayCategory{};
  shared_ptr<string> gatewayLocation{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> startTimestamp{};
  shared_ptr<string> targetAccountId{};

  DescribeGatewayStatisticsRequest() {}

  explicit DescribeGatewayStatisticsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTimestamp) {
      res["EndTimestamp"] = boost::any(*endTimestamp);
    }
    if (gatewayCategory) {
      res["GatewayCategory"] = boost::any(*gatewayCategory);
    }
    if (gatewayLocation) {
      res["GatewayLocation"] = boost::any(*gatewayLocation);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (startTimestamp) {
      res["StartTimestamp"] = boost::any(*startTimestamp);
    }
    if (targetAccountId) {
      res["TargetAccountId"] = boost::any(*targetAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTimestamp") != m.end() && !m["EndTimestamp"].empty()) {
      endTimestamp = make_shared<long>(boost::any_cast<long>(m["EndTimestamp"]));
    }
    if (m.find("GatewayCategory") != m.end() && !m["GatewayCategory"].empty()) {
      gatewayCategory = make_shared<string>(boost::any_cast<string>(m["GatewayCategory"]));
    }
    if (m.find("GatewayLocation") != m.end() && !m["GatewayLocation"].empty()) {
      gatewayLocation = make_shared<string>(boost::any_cast<string>(m["GatewayLocation"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StartTimestamp") != m.end() && !m["StartTimestamp"].empty()) {
      startTimestamp = make_shared<long>(boost::any_cast<long>(m["StartTimestamp"]));
    }
    if (m.find("TargetAccountId") != m.end() && !m["TargetAccountId"].empty()) {
      targetAccountId = make_shared<string>(boost::any_cast<string>(m["TargetAccountId"]));
    }
  }


  virtual ~DescribeGatewayStatisticsRequest() = default;
};
class DescribeGatewayStatisticsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> result{};
  shared_ptr<bool> success{};

  DescribeGatewayStatisticsResponseBody() {}

  explicit DescribeGatewayStatisticsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (result) {
      res["Result"] = boost::any(*result);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["Result"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeGatewayStatisticsResponseBody() = default;
};
class DescribeGatewayStatisticsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayStatisticsResponseBody> body{};

  DescribeGatewayStatisticsResponse() {}

  explicit DescribeGatewayStatisticsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayStatisticsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayStatisticsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayStatisticsResponse() = default;
};
class DescribeGatewayStockRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayRegionId{};
  shared_ptr<string> securityToken{};

  DescribeGatewayStockRequest() {}

  explicit DescribeGatewayStockRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayRegionId) {
      res["GatewayRegionId"] = boost::any(*gatewayRegionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayRegionId") != m.end() && !m["GatewayRegionId"].empty()) {
      gatewayRegionId = make_shared<string>(boost::any_cast<string>(m["GatewayRegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayStockRequest() = default;
};
class DescribeGatewayStockResponseBodyStocksStock : public Darabonba::Model {
public:
  shared_ptr<string> stockInfo{};
  shared_ptr<string> zoneId{};

  DescribeGatewayStockResponseBodyStocksStock() {}

  explicit DescribeGatewayStockResponseBodyStocksStock(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stockInfo) {
      res["StockInfo"] = boost::any(*stockInfo);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StockInfo") != m.end() && !m["StockInfo"].empty()) {
      stockInfo = make_shared<string>(boost::any_cast<string>(m["StockInfo"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeGatewayStockResponseBodyStocksStock() = default;
};
class DescribeGatewayStockResponseBodyStocks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewayStockResponseBodyStocksStock>> stock{};

  DescribeGatewayStockResponseBodyStocks() {}

  explicit DescribeGatewayStockResponseBodyStocks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (stock) {
      vector<boost::any> temp1;
      for(auto item1:*stock){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Stock"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Stock") != m.end() && !m["Stock"].empty()) {
      if (typeid(vector<boost::any>) == m["Stock"].type()) {
        vector<DescribeGatewayStockResponseBodyStocksStock> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Stock"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewayStockResponseBodyStocksStock model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        stock = make_shared<vector<DescribeGatewayStockResponseBodyStocksStock>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewayStockResponseBodyStocks() = default;
};
class DescribeGatewayStockResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeGatewayStockResponseBodyStocks> stocks{};
  shared_ptr<bool> success{};

  DescribeGatewayStockResponseBody() {}

  explicit DescribeGatewayStockResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (stocks) {
      res["Stocks"] = stocks ? boost::any(stocks->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Stocks") != m.end() && !m["Stocks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Stocks"].type()) {
        DescribeGatewayStockResponseBodyStocks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Stocks"]));
        stocks = make_shared<DescribeGatewayStockResponseBodyStocks>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeGatewayStockResponseBody() = default;
};
class DescribeGatewayStockResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayStockResponseBody> body{};

  DescribeGatewayStockResponse() {}

  explicit DescribeGatewayStockResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayStockResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayStockResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayStockResponse() = default;
};
class DescribeGatewayTypesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayLocation{};
  shared_ptr<string> securityToken{};

  DescribeGatewayTypesRequest() {}

  explicit DescribeGatewayTypesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayLocation) {
      res["GatewayLocation"] = boost::any(*gatewayLocation);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayLocation") != m.end() && !m["GatewayLocation"].empty()) {
      gatewayLocation = make_shared<string>(boost::any_cast<string>(m["GatewayLocation"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewayTypesRequest() = default;
};
class DescribeGatewayTypesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> types{};

  DescribeGatewayTypesResponseBody() {}

  explicit DescribeGatewayTypesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (types) {
      res["Types"] = boost::any(*types);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Types") != m.end() && !m["Types"].empty()) {
      types = make_shared<string>(boost::any_cast<string>(m["Types"]));
    }
  }


  virtual ~DescribeGatewayTypesResponseBody() = default;
};
class DescribeGatewayTypesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewayTypesResponseBody> body{};

  DescribeGatewayTypesResponse() {}

  explicit DescribeGatewayTypesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewayTypesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewayTypesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewayTypesResponse() = default;
};
class DescribeGatewaysRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> storageBundleId{};

  DescribeGatewaysRequest() {}

  explicit DescribeGatewaysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
  }


  virtual ~DescribeGatewaysRequest() = default;
};
class DescribeGatewaysResponseBodyGatewaysGatewayElasticNodes : public Darabonba::Model {
public:
  shared_ptr<vector<string>> elasticNode{};

  DescribeGatewaysResponseBodyGatewaysGatewayElasticNodes() {}

  explicit DescribeGatewaysResponseBodyGatewaysGatewayElasticNodes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (elasticNode) {
      res["ElasticNode"] = boost::any(*elasticNode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ElasticNode") != m.end() && !m["ElasticNode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ElasticNode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ElasticNode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      elasticNode = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeGatewaysResponseBodyGatewaysGatewayElasticNodes() = default;
};
class DescribeGatewaysResponseBodyGatewaysGateway : public Darabonba::Model {
public:
  shared_ptr<long> activatedTime{};
  shared_ptr<string> buyURL{};
  shared_ptr<long> capacity{};
  shared_ptr<string> category{};
  shared_ptr<string> commonBuyInstanceId{};
  shared_ptr<long> createdTime{};
  shared_ptr<long> dataLoadInterval{};
  shared_ptr<string> dataLoadType{};
  shared_ptr<string> description{};
  shared_ptr<string> ecsInstanceId{};
  shared_ptr<bool> elasticGateway{};
  shared_ptr<DescribeGatewaysResponseBodyGatewaysGatewayElasticNodes> elasticNodes{};
  shared_ptr<long> expireStatus{};
  shared_ptr<long> expiredTime{};
  shared_ptr<string> gatewayClass{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayRegionId{};
  shared_ptr<string> gatewayType{};
  shared_ptr<string> gatewayVersion{};
  shared_ptr<bool> highAvailability{};
  shared_ptr<string> innerIp{};
  shared_ptr<string> innerIpv6Ip{};
  shared_ptr<string> ip{};
  shared_ptr<bool> isPostPaid{};
  shared_ptr<bool> isReleaseAfterExpiration{};
  shared_ptr<string> lastErrorKey{};
  shared_ptr<string> location{};
  shared_ptr<long> maxThroughput{};
  shared_ptr<string> name{};
  shared_ptr<long> publicNetworkBandwidth{};
  shared_ptr<string> renewURL{};
  shared_ptr<string> status{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> type{};
  shared_ptr<string> untrustedEnvInstanceType{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeGatewaysResponseBodyGatewaysGateway() {}

  explicit DescribeGatewaysResponseBodyGatewaysGateway(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (activatedTime) {
      res["ActivatedTime"] = boost::any(*activatedTime);
    }
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
    if (capacity) {
      res["Capacity"] = boost::any(*capacity);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (commonBuyInstanceId) {
      res["CommonBuyInstanceId"] = boost::any(*commonBuyInstanceId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (dataLoadInterval) {
      res["DataLoadInterval"] = boost::any(*dataLoadInterval);
    }
    if (dataLoadType) {
      res["DataLoadType"] = boost::any(*dataLoadType);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (ecsInstanceId) {
      res["EcsInstanceId"] = boost::any(*ecsInstanceId);
    }
    if (elasticGateway) {
      res["ElasticGateway"] = boost::any(*elasticGateway);
    }
    if (elasticNodes) {
      res["ElasticNodes"] = elasticNodes ? boost::any(elasticNodes->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (expireStatus) {
      res["ExpireStatus"] = boost::any(*expireStatus);
    }
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (gatewayClass) {
      res["GatewayClass"] = boost::any(*gatewayClass);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayRegionId) {
      res["GatewayRegionId"] = boost::any(*gatewayRegionId);
    }
    if (gatewayType) {
      res["GatewayType"] = boost::any(*gatewayType);
    }
    if (gatewayVersion) {
      res["GatewayVersion"] = boost::any(*gatewayVersion);
    }
    if (highAvailability) {
      res["HighAvailability"] = boost::any(*highAvailability);
    }
    if (innerIp) {
      res["InnerIp"] = boost::any(*innerIp);
    }
    if (innerIpv6Ip) {
      res["InnerIpv6Ip"] = boost::any(*innerIpv6Ip);
    }
    if (ip) {
      res["Ip"] = boost::any(*ip);
    }
    if (isPostPaid) {
      res["IsPostPaid"] = boost::any(*isPostPaid);
    }
    if (isReleaseAfterExpiration) {
      res["IsReleaseAfterExpiration"] = boost::any(*isReleaseAfterExpiration);
    }
    if (lastErrorKey) {
      res["LastErrorKey"] = boost::any(*lastErrorKey);
    }
    if (location) {
      res["Location"] = boost::any(*location);
    }
    if (maxThroughput) {
      res["MaxThroughput"] = boost::any(*maxThroughput);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (publicNetworkBandwidth) {
      res["PublicNetworkBandwidth"] = boost::any(*publicNetworkBandwidth);
    }
    if (renewURL) {
      res["RenewURL"] = boost::any(*renewURL);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (untrustedEnvInstanceType) {
      res["UntrustedEnvInstanceType"] = boost::any(*untrustedEnvInstanceType);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActivatedTime") != m.end() && !m["ActivatedTime"].empty()) {
      activatedTime = make_shared<long>(boost::any_cast<long>(m["ActivatedTime"]));
    }
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("Capacity") != m.end() && !m["Capacity"].empty()) {
      capacity = make_shared<long>(boost::any_cast<long>(m["Capacity"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CommonBuyInstanceId") != m.end() && !m["CommonBuyInstanceId"].empty()) {
      commonBuyInstanceId = make_shared<string>(boost::any_cast<string>(m["CommonBuyInstanceId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("DataLoadInterval") != m.end() && !m["DataLoadInterval"].empty()) {
      dataLoadInterval = make_shared<long>(boost::any_cast<long>(m["DataLoadInterval"]));
    }
    if (m.find("DataLoadType") != m.end() && !m["DataLoadType"].empty()) {
      dataLoadType = make_shared<string>(boost::any_cast<string>(m["DataLoadType"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EcsInstanceId") != m.end() && !m["EcsInstanceId"].empty()) {
      ecsInstanceId = make_shared<string>(boost::any_cast<string>(m["EcsInstanceId"]));
    }
    if (m.find("ElasticGateway") != m.end() && !m["ElasticGateway"].empty()) {
      elasticGateway = make_shared<bool>(boost::any_cast<bool>(m["ElasticGateway"]));
    }
    if (m.find("ElasticNodes") != m.end() && !m["ElasticNodes"].empty()) {
      if (typeid(map<string, boost::any>) == m["ElasticNodes"].type()) {
        DescribeGatewaysResponseBodyGatewaysGatewayElasticNodes model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ElasticNodes"]));
        elasticNodes = make_shared<DescribeGatewaysResponseBodyGatewaysGatewayElasticNodes>(model1);
      }
    }
    if (m.find("ExpireStatus") != m.end() && !m["ExpireStatus"].empty()) {
      expireStatus = make_shared<long>(boost::any_cast<long>(m["ExpireStatus"]));
    }
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("GatewayClass") != m.end() && !m["GatewayClass"].empty()) {
      gatewayClass = make_shared<string>(boost::any_cast<string>(m["GatewayClass"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayRegionId") != m.end() && !m["GatewayRegionId"].empty()) {
      gatewayRegionId = make_shared<string>(boost::any_cast<string>(m["GatewayRegionId"]));
    }
    if (m.find("GatewayType") != m.end() && !m["GatewayType"].empty()) {
      gatewayType = make_shared<string>(boost::any_cast<string>(m["GatewayType"]));
    }
    if (m.find("GatewayVersion") != m.end() && !m["GatewayVersion"].empty()) {
      gatewayVersion = make_shared<string>(boost::any_cast<string>(m["GatewayVersion"]));
    }
    if (m.find("HighAvailability") != m.end() && !m["HighAvailability"].empty()) {
      highAvailability = make_shared<bool>(boost::any_cast<bool>(m["HighAvailability"]));
    }
    if (m.find("InnerIp") != m.end() && !m["InnerIp"].empty()) {
      innerIp = make_shared<string>(boost::any_cast<string>(m["InnerIp"]));
    }
    if (m.find("InnerIpv6Ip") != m.end() && !m["InnerIpv6Ip"].empty()) {
      innerIpv6Ip = make_shared<string>(boost::any_cast<string>(m["InnerIpv6Ip"]));
    }
    if (m.find("Ip") != m.end() && !m["Ip"].empty()) {
      ip = make_shared<string>(boost::any_cast<string>(m["Ip"]));
    }
    if (m.find("IsPostPaid") != m.end() && !m["IsPostPaid"].empty()) {
      isPostPaid = make_shared<bool>(boost::any_cast<bool>(m["IsPostPaid"]));
    }
    if (m.find("IsReleaseAfterExpiration") != m.end() && !m["IsReleaseAfterExpiration"].empty()) {
      isReleaseAfterExpiration = make_shared<bool>(boost::any_cast<bool>(m["IsReleaseAfterExpiration"]));
    }
    if (m.find("LastErrorKey") != m.end() && !m["LastErrorKey"].empty()) {
      lastErrorKey = make_shared<string>(boost::any_cast<string>(m["LastErrorKey"]));
    }
    if (m.find("Location") != m.end() && !m["Location"].empty()) {
      location = make_shared<string>(boost::any_cast<string>(m["Location"]));
    }
    if (m.find("MaxThroughput") != m.end() && !m["MaxThroughput"].empty()) {
      maxThroughput = make_shared<long>(boost::any_cast<long>(m["MaxThroughput"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PublicNetworkBandwidth") != m.end() && !m["PublicNetworkBandwidth"].empty()) {
      publicNetworkBandwidth = make_shared<long>(boost::any_cast<long>(m["PublicNetworkBandwidth"]));
    }
    if (m.find("RenewURL") != m.end() && !m["RenewURL"].empty()) {
      renewURL = make_shared<string>(boost::any_cast<string>(m["RenewURL"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UntrustedEnvInstanceType") != m.end() && !m["UntrustedEnvInstanceType"].empty()) {
      untrustedEnvInstanceType = make_shared<string>(boost::any_cast<string>(m["UntrustedEnvInstanceType"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeGatewaysResponseBodyGatewaysGateway() = default;
};
class DescribeGatewaysResponseBodyGateways : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewaysResponseBodyGatewaysGateway>> gateway{};

  DescribeGatewaysResponseBodyGateways() {}

  explicit DescribeGatewaysResponseBodyGateways(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gateway) {
      vector<boost::any> temp1;
      for(auto item1:*gateway){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Gateway"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      if (typeid(vector<boost::any>) == m["Gateway"].type()) {
        vector<DescribeGatewaysResponseBodyGatewaysGateway> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Gateway"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewaysResponseBodyGatewaysGateway model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gateway = make_shared<vector<DescribeGatewaysResponseBodyGatewaysGateway>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewaysResponseBodyGateways() = default;
};
class DescribeGatewaysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeGatewaysResponseBodyGateways> gateways{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeGatewaysResponseBody() {}

  explicit DescribeGatewaysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gateways) {
      res["Gateways"] = gateways ? boost::any(gateways->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Gateways") != m.end() && !m["Gateways"].empty()) {
      if (typeid(map<string, boost::any>) == m["Gateways"].type()) {
        DescribeGatewaysResponseBodyGateways model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Gateways"]));
        gateways = make_shared<DescribeGatewaysResponseBodyGateways>(model1);
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


  virtual ~DescribeGatewaysResponseBody() = default;
};
class DescribeGatewaysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewaysResponseBody> body{};

  DescribeGatewaysResponse() {}

  explicit DescribeGatewaysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewaysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewaysResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewaysResponse() = default;
};
class DescribeGatewaysForCmsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayRegionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeGatewaysForCmsRequest() {}

  explicit DescribeGatewaysForCmsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayRegionId) {
      res["GatewayRegionId"] = boost::any(*gatewayRegionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayRegionId") != m.end() && !m["GatewayRegionId"].empty()) {
      gatewayRegionId = make_shared<string>(boost::any_cast<string>(m["GatewayRegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeGatewaysForCmsRequest() = default;
};
class DescribeGatewaysForCmsResponseBodyGatewaysGateway : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};

  DescribeGatewaysForCmsResponseBodyGatewaysGateway() {}

  explicit DescribeGatewaysForCmsResponseBodyGatewaysGateway(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeGatewaysForCmsResponseBodyGatewaysGateway() = default;
};
class DescribeGatewaysForCmsResponseBodyGateways : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewaysForCmsResponseBodyGatewaysGateway>> gateway{};

  DescribeGatewaysForCmsResponseBodyGateways() {}

  explicit DescribeGatewaysForCmsResponseBodyGateways(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gateway) {
      vector<boost::any> temp1;
      for(auto item1:*gateway){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Gateway"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Gateway") != m.end() && !m["Gateway"].empty()) {
      if (typeid(vector<boost::any>) == m["Gateway"].type()) {
        vector<DescribeGatewaysForCmsResponseBodyGatewaysGateway> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Gateway"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewaysForCmsResponseBodyGatewaysGateway model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gateway = make_shared<vector<DescribeGatewaysForCmsResponseBodyGatewaysGateway>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewaysForCmsResponseBodyGateways() = default;
};
class DescribeGatewaysForCmsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeGatewaysForCmsResponseBodyGateways> gateways{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeGatewaysForCmsResponseBody() {}

  explicit DescribeGatewaysForCmsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gateways) {
      res["Gateways"] = gateways ? boost::any(gateways->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Gateways") != m.end() && !m["Gateways"].empty()) {
      if (typeid(map<string, boost::any>) == m["Gateways"].type()) {
        DescribeGatewaysForCmsResponseBodyGateways model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Gateways"]));
        gateways = make_shared<DescribeGatewaysForCmsResponseBodyGateways>(model1);
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


  virtual ~DescribeGatewaysForCmsResponseBody() = default;
};
class DescribeGatewaysForCmsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewaysForCmsResponseBody> body{};

  DescribeGatewaysForCmsResponse() {}

  explicit DescribeGatewaysForCmsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewaysForCmsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewaysForCmsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewaysForCmsResponse() = default;
};
class DescribeGatewaysTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayIds{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<string> tagCategory{};

  DescribeGatewaysTagsRequest() {}

  explicit DescribeGatewaysTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayIds) {
      res["GatewayIds"] = boost::any(*gatewayIds);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    if (tagCategory) {
      res["TagCategory"] = boost::any(*tagCategory);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayIds") != m.end() && !m["GatewayIds"].empty()) {
      gatewayIds = make_shared<string>(boost::any_cast<string>(m["GatewayIds"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("TagCategory") != m.end() && !m["TagCategory"].empty()) {
      tagCategory = make_shared<string>(boost::any_cast<string>(m["TagCategory"]));
    }
  }


  virtual ~DescribeGatewaysTagsRequest() = default;
};
class DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTagsTag : public Darabonba::Model {
public:
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTagsTag() {}

  explicit DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTagsTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTagsTag() = default;
};
class DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTagsTag>> tag{};

  DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTags() {}

  explicit DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTagsTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTagsTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTagsTag>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTags() = default;
};
class DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTag : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTags> tags{};

  DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTag() {}

  explicit DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (tags) {
      res["Tags"] = tags ? boost::any(tags->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tags"].type()) {
        DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tags"]));
        tags = make_shared<DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTagTags>(model1);
      }
    }
  }


  virtual ~DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTag() = default;
};
class DescribeGatewaysTagsResponseBodyGatewayTags : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTag>> gatewayTag{};

  DescribeGatewaysTagsResponseBodyGatewayTags() {}

  explicit DescribeGatewaysTagsResponseBodyGatewayTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayTag) {
      vector<boost::any> temp1;
      for(auto item1:*gatewayTag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GatewayTag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayTag") != m.end() && !m["GatewayTag"].empty()) {
      if (typeid(vector<boost::any>) == m["GatewayTag"].type()) {
        vector<DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GatewayTag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gatewayTag = make_shared<vector<DescribeGatewaysTagsResponseBodyGatewayTagsGatewayTag>>(expect1);
      }
    }
  }


  virtual ~DescribeGatewaysTagsResponseBodyGatewayTags() = default;
};
class DescribeGatewaysTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<DescribeGatewaysTagsResponseBodyGatewayTags> gatewayTags{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeGatewaysTagsResponseBody() {}

  explicit DescribeGatewaysTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gatewayTags) {
      res["GatewayTags"] = gatewayTags ? boost::any(gatewayTags->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("GatewayTags") != m.end() && !m["GatewayTags"].empty()) {
      if (typeid(map<string, boost::any>) == m["GatewayTags"].type()) {
        DescribeGatewaysTagsResponseBodyGatewayTags model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GatewayTags"]));
        gatewayTags = make_shared<DescribeGatewaysTagsResponseBodyGatewayTags>(model1);
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


  virtual ~DescribeGatewaysTagsResponseBody() = default;
};
class DescribeGatewaysTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeGatewaysTagsResponseBody> body{};

  DescribeGatewaysTagsResponse() {}

  explicit DescribeGatewaysTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeGatewaysTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeGatewaysTagsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeGatewaysTagsResponse() = default;
};
class DescribeKmsKeyRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> kmsKey{};
  shared_ptr<string> securityToken{};

  DescribeKmsKeyRequest() {}

  explicit DescribeKmsKeyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (kmsKey) {
      res["KmsKey"] = boost::any(*kmsKey);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("KmsKey") != m.end() && !m["KmsKey"].empty()) {
      kmsKey = make_shared<string>(boost::any_cast<string>(m["KmsKey"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeKmsKeyRequest() = default;
};
class DescribeKmsKeyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isValid{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeKmsKeyResponseBody() {}

  explicit DescribeKmsKeyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isValid) {
      res["IsValid"] = boost::any(*isValid);
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
    if (m.find("IsValid") != m.end() && !m["IsValid"].empty()) {
      isValid = make_shared<bool>(boost::any_cast<bool>(m["IsValid"]));
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


  virtual ~DescribeKmsKeyResponseBody() = default;
};
class DescribeKmsKeyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeKmsKeyResponseBody> body{};

  DescribeKmsKeyResponse() {}

  explicit DescribeKmsKeyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeKmsKeyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeKmsKeyResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeKmsKeyResponse() = default;
};
class DescribeMqttConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DescribeMqttConfigRequest() {}

  explicit DescribeMqttConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeMqttConfigRequest() = default;
};
class DescribeMqttConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> authType{};
  shared_ptr<string> brokerUrl{};
  shared_ptr<string> code{};
  shared_ptr<string> groupId{};
  shared_ptr<string> internalBrokerUrl{};
  shared_ptr<bool> isEnabled{};
  shared_ptr<string> message{};
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> password{};
  shared_ptr<string> publishTopic{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subscribeTopic{};
  shared_ptr<bool> success{};
  shared_ptr<string> username{};

  DescribeMqttConfigResponseBody() {}

  explicit DescribeMqttConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authType) {
      res["AuthType"] = boost::any(*authType);
    }
    if (brokerUrl) {
      res["BrokerUrl"] = boost::any(*brokerUrl);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (internalBrokerUrl) {
      res["InternalBrokerUrl"] = boost::any(*internalBrokerUrl);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (publishTopic) {
      res["PublishTopic"] = boost::any(*publishTopic);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (subscribeTopic) {
      res["SubscribeTopic"] = boost::any(*subscribeTopic);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuthType") != m.end() && !m["AuthType"].empty()) {
      authType = make_shared<string>(boost::any_cast<string>(m["AuthType"]));
    }
    if (m.find("BrokerUrl") != m.end() && !m["BrokerUrl"].empty()) {
      brokerUrl = make_shared<string>(boost::any_cast<string>(m["BrokerUrl"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InternalBrokerUrl") != m.end() && !m["InternalBrokerUrl"].empty()) {
      internalBrokerUrl = make_shared<string>(boost::any_cast<string>(m["InternalBrokerUrl"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsEnabled"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("PublishTopic") != m.end() && !m["PublishTopic"].empty()) {
      publishTopic = make_shared<string>(boost::any_cast<string>(m["PublishTopic"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscribeTopic") != m.end() && !m["SubscribeTopic"].empty()) {
      subscribeTopic = make_shared<string>(boost::any_cast<string>(m["SubscribeTopic"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~DescribeMqttConfigResponseBody() = default;
};
class DescribeMqttConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeMqttConfigResponseBody> body{};

  DescribeMqttConfigResponse() {}

  explicit DescribeMqttConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeMqttConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeMqttConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeMqttConfigResponse() = default;
};
class DescribeOssBucketInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketEndpoint{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> type{};

  DescribeOssBucketInfoRequest() {}

  explicit DescribeOssBucketInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketEndpoint) {
      res["BucketEndpoint"] = boost::any(*bucketEndpoint);
    }
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketEndpoint") != m.end() && !m["BucketEndpoint"].empty()) {
      bucketEndpoint = make_shared<string>(boost::any_cast<string>(m["BucketEndpoint"]));
    }
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~DescribeOssBucketInfoRequest() = default;
};
class DescribeOssBucketInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isArchive{};
  shared_ptr<bool> isBackToResource{};
  shared_ptr<bool> isColdArchive{};
  shared_ptr<bool> isFresh{};
  shared_ptr<bool> isSupportServerSideEncryption{};
  shared_ptr<bool> isVersioning{};
  shared_ptr<string> message{};
  shared_ptr<long> pollingInterval{};
  shared_ptr<string> requestId{};
  shared_ptr<long> storageSize{};
  shared_ptr<bool> success{};

  DescribeOssBucketInfoResponseBody() {}

  explicit DescribeOssBucketInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isArchive) {
      res["IsArchive"] = boost::any(*isArchive);
    }
    if (isBackToResource) {
      res["IsBackToResource"] = boost::any(*isBackToResource);
    }
    if (isColdArchive) {
      res["IsColdArchive"] = boost::any(*isColdArchive);
    }
    if (isFresh) {
      res["IsFresh"] = boost::any(*isFresh);
    }
    if (isSupportServerSideEncryption) {
      res["IsSupportServerSideEncryption"] = boost::any(*isSupportServerSideEncryption);
    }
    if (isVersioning) {
      res["IsVersioning"] = boost::any(*isVersioning);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (pollingInterval) {
      res["PollingInterval"] = boost::any(*pollingInterval);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (storageSize) {
      res["StorageSize"] = boost::any(*storageSize);
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
    if (m.find("IsArchive") != m.end() && !m["IsArchive"].empty()) {
      isArchive = make_shared<bool>(boost::any_cast<bool>(m["IsArchive"]));
    }
    if (m.find("IsBackToResource") != m.end() && !m["IsBackToResource"].empty()) {
      isBackToResource = make_shared<bool>(boost::any_cast<bool>(m["IsBackToResource"]));
    }
    if (m.find("IsColdArchive") != m.end() && !m["IsColdArchive"].empty()) {
      isColdArchive = make_shared<bool>(boost::any_cast<bool>(m["IsColdArchive"]));
    }
    if (m.find("IsFresh") != m.end() && !m["IsFresh"].empty()) {
      isFresh = make_shared<bool>(boost::any_cast<bool>(m["IsFresh"]));
    }
    if (m.find("IsSupportServerSideEncryption") != m.end() && !m["IsSupportServerSideEncryption"].empty()) {
      isSupportServerSideEncryption = make_shared<bool>(boost::any_cast<bool>(m["IsSupportServerSideEncryption"]));
    }
    if (m.find("IsVersioning") != m.end() && !m["IsVersioning"].empty()) {
      isVersioning = make_shared<bool>(boost::any_cast<bool>(m["IsVersioning"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PollingInterval") != m.end() && !m["PollingInterval"].empty()) {
      pollingInterval = make_shared<long>(boost::any_cast<long>(m["PollingInterval"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StorageSize") != m.end() && !m["StorageSize"].empty()) {
      storageSize = make_shared<long>(boost::any_cast<long>(m["StorageSize"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeOssBucketInfoResponseBody() = default;
};
class DescribeOssBucketInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssBucketInfoResponseBody> body{};

  DescribeOssBucketInfoResponse() {}

  explicit DescribeOssBucketInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssBucketInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssBucketInfoResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssBucketInfoResponse() = default;
};
class DescribeOssBucketsRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketEndpoint{};
  shared_ptr<string> securityToken{};

  DescribeOssBucketsRequest() {}

  explicit DescribeOssBucketsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketEndpoint) {
      res["BucketEndpoint"] = boost::any(*bucketEndpoint);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketEndpoint") != m.end() && !m["BucketEndpoint"].empty()) {
      bucketEndpoint = make_shared<string>(boost::any_cast<string>(m["BucketEndpoint"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeOssBucketsRequest() = default;
};
class DescribeOssBucketsResponseBodyBucketsBucket : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DescribeOssBucketsResponseBodyBucketsBucket() {}

  explicit DescribeOssBucketsResponseBodyBucketsBucket(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeOssBucketsResponseBodyBucketsBucket() = default;
};
class DescribeOssBucketsResponseBodyBuckets : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeOssBucketsResponseBodyBucketsBucket>> bucket{};

  DescribeOssBucketsResponseBodyBuckets() {}

  explicit DescribeOssBucketsResponseBodyBuckets(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucket) {
      vector<boost::any> temp1;
      for(auto item1:*bucket){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bucket"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Bucket") != m.end() && !m["Bucket"].empty()) {
      if (typeid(vector<boost::any>) == m["Bucket"].type()) {
        vector<DescribeOssBucketsResponseBodyBucketsBucket> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bucket"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeOssBucketsResponseBodyBucketsBucket model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bucket = make_shared<vector<DescribeOssBucketsResponseBodyBucketsBucket>>(expect1);
      }
    }
  }


  virtual ~DescribeOssBucketsResponseBodyBuckets() = default;
};
class DescribeOssBucketsResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeOssBucketsResponseBodyBuckets> buckets{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeOssBucketsResponseBody() {}

  explicit DescribeOssBucketsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buckets) {
      res["Buckets"] = buckets ? boost::any(buckets->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("Buckets") != m.end() && !m["Buckets"].empty()) {
      if (typeid(map<string, boost::any>) == m["Buckets"].type()) {
        DescribeOssBucketsResponseBodyBuckets model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Buckets"]));
        buckets = make_shared<DescribeOssBucketsResponseBodyBuckets>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeOssBucketsResponseBody() = default;
};
class DescribeOssBucketsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeOssBucketsResponseBody> body{};

  DescribeOssBucketsResponse() {}

  explicit DescribeOssBucketsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeOssBucketsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeOssBucketsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeOssBucketsResponse() = default;
};
class DescribePayAsYouGoPriceRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayClass{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityToken{};

  DescribePayAsYouGoPriceRequest() {}

  explicit DescribePayAsYouGoPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayClass) {
      res["GatewayClass"] = boost::any(*gatewayClass);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayClass") != m.end() && !m["GatewayClass"].empty()) {
      gatewayClass = make_shared<string>(boost::any_cast<string>(m["GatewayClass"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribePayAsYouGoPriceRequest() = default;
};
class DescribePayAsYouGoPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<double> cacheCloudEfficiencySizePrice{};
  shared_ptr<double> cacheCloudSSDSizePrice{};
  shared_ptr<double> cacheESSDPl1SizePrice{};
  shared_ptr<string> code{};
  shared_ptr<string> currency{};
  shared_ptr<double> gatewayClassPrice{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribePayAsYouGoPriceResponseBody() {}

  explicit DescribePayAsYouGoPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheCloudEfficiencySizePrice) {
      res["CacheCloudEfficiencySizePrice"] = boost::any(*cacheCloudEfficiencySizePrice);
    }
    if (cacheCloudSSDSizePrice) {
      res["CacheCloudSSDSizePrice"] = boost::any(*cacheCloudSSDSizePrice);
    }
    if (cacheESSDPl1SizePrice) {
      res["CacheESSDPl1SizePrice"] = boost::any(*cacheESSDPl1SizePrice);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (gatewayClassPrice) {
      res["GatewayClassPrice"] = boost::any(*gatewayClassPrice);
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
    if (m.find("CacheCloudEfficiencySizePrice") != m.end() && !m["CacheCloudEfficiencySizePrice"].empty()) {
      cacheCloudEfficiencySizePrice = make_shared<double>(boost::any_cast<double>(m["CacheCloudEfficiencySizePrice"]));
    }
    if (m.find("CacheCloudSSDSizePrice") != m.end() && !m["CacheCloudSSDSizePrice"].empty()) {
      cacheCloudSSDSizePrice = make_shared<double>(boost::any_cast<double>(m["CacheCloudSSDSizePrice"]));
    }
    if (m.find("CacheESSDPl1SizePrice") != m.end() && !m["CacheESSDPl1SizePrice"].empty()) {
      cacheESSDPl1SizePrice = make_shared<double>(boost::any_cast<double>(m["CacheESSDPl1SizePrice"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("GatewayClassPrice") != m.end() && !m["GatewayClassPrice"].empty()) {
      gatewayClassPrice = make_shared<double>(boost::any_cast<double>(m["GatewayClassPrice"]));
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


  virtual ~DescribePayAsYouGoPriceResponseBody() = default;
};
class DescribePayAsYouGoPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePayAsYouGoPriceResponseBody> body{};

  DescribePayAsYouGoPriceResponse() {}

  explicit DescribePayAsYouGoPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePayAsYouGoPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePayAsYouGoPriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePayAsYouGoPriceResponse() = default;
};
class DescribeRegionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};

  DescribeRegionsRequest() {}

  explicit DescribeRegionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeRegionsRequest() = default;
};
class DescribeRegionsResponseBodyRegionsRegion : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  DescribeRegionsResponseBodyRegionsRegion() {}

  explicit DescribeRegionsResponseBodyRegionsRegion(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DescribeRegionsResponseBodyRegionsRegion() = default;
};
class DescribeRegionsResponseBodyRegions : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeRegionsResponseBodyRegionsRegion>> region{};

  DescribeRegionsResponseBodyRegions() {}

  explicit DescribeRegionsResponseBodyRegions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (region) {
      vector<boost::any> temp1;
      for(auto item1:*region){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Region"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Region") != m.end() && !m["Region"].empty()) {
      if (typeid(vector<boost::any>) == m["Region"].type()) {
        vector<DescribeRegionsResponseBodyRegionsRegion> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Region"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeRegionsResponseBodyRegionsRegion model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        region = make_shared<vector<DescribeRegionsResponseBodyRegionsRegion>>(expect1);
      }
    }
  }


  virtual ~DescribeRegionsResponseBodyRegions() = default;
};
class DescribeRegionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<DescribeRegionsResponseBodyRegions> regions{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeRegionsResponseBody() {}

  explicit DescribeRegionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (regions) {
      res["Regions"] = regions ? boost::any(regions->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Regions") != m.end() && !m["Regions"].empty()) {
      if (typeid(map<string, boost::any>) == m["Regions"].type()) {
        DescribeRegionsResponseBodyRegions model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Regions"]));
        regions = make_shared<DescribeRegionsResponseBodyRegions>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeRegionsResponseBody() = default;
};
class DescribeRegionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRegionsResponseBody> body{};

  DescribeRegionsResponse() {}

  explicit DescribeRegionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRegionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRegionsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRegionsResponse() = default;
};
class DescribeSharesBucketInfoForExpressSyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> bucketRegion{};
  shared_ptr<string> securityToken{};

  DescribeSharesBucketInfoForExpressSyncRequest() {}

  explicit DescribeSharesBucketInfoForExpressSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (bucketRegion) {
      res["BucketRegion"] = boost::any(*bucketRegion);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("BucketRegion") != m.end() && !m["BucketRegion"].empty()) {
      bucketRegion = make_shared<string>(boost::any_cast<string>(m["BucketRegion"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeSharesBucketInfoForExpressSyncRequest() = default;
};
class DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfosBucketInfo : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> bucketPrefix{};
  shared_ptr<string> bucketRegion{};

  DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfosBucketInfo() {}

  explicit DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfosBucketInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (bucketPrefix) {
      res["BucketPrefix"] = boost::any(*bucketPrefix);
    }
    if (bucketRegion) {
      res["BucketRegion"] = boost::any(*bucketRegion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("BucketPrefix") != m.end() && !m["BucketPrefix"].empty()) {
      bucketPrefix = make_shared<string>(boost::any_cast<string>(m["BucketPrefix"]));
    }
    if (m.find("BucketRegion") != m.end() && !m["BucketRegion"].empty()) {
      bucketRegion = make_shared<string>(boost::any_cast<string>(m["BucketRegion"]));
    }
  }


  virtual ~DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfosBucketInfo() = default;
};
class DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfos : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfosBucketInfo>> bucketInfo{};

  DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfos() {}

  explicit DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketInfo) {
      vector<boost::any> temp1;
      for(auto item1:*bucketInfo){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BucketInfo"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketInfo") != m.end() && !m["BucketInfo"].empty()) {
      if (typeid(vector<boost::any>) == m["BucketInfo"].type()) {
        vector<DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfosBucketInfo> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BucketInfo"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfosBucketInfo model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bucketInfo = make_shared<vector<DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfosBucketInfo>>(expect1);
      }
    }
  }


  virtual ~DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfos() = default;
};
class DescribeSharesBucketInfoForExpressSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfos> bucketInfos{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeSharesBucketInfoForExpressSyncResponseBody() {}

  explicit DescribeSharesBucketInfoForExpressSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketInfos) {
      res["BucketInfos"] = bucketInfos ? boost::any(bucketInfos->toMap()) : boost::any(map<string,boost::any>({}));
    }
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
    if (m.find("BucketInfos") != m.end() && !m["BucketInfos"].empty()) {
      if (typeid(map<string, boost::any>) == m["BucketInfos"].type()) {
        DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfos model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BucketInfos"]));
        bucketInfos = make_shared<DescribeSharesBucketInfoForExpressSyncResponseBodyBucketInfos>(model1);
      }
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DescribeSharesBucketInfoForExpressSyncResponseBody() = default;
};
class DescribeSharesBucketInfoForExpressSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSharesBucketInfoForExpressSyncResponseBody> body{};

  DescribeSharesBucketInfoForExpressSyncResponse() {}

  explicit DescribeSharesBucketInfoForExpressSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSharesBucketInfoForExpressSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSharesBucketInfoForExpressSyncResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSharesBucketInfoForExpressSyncResponse() = default;
};
class DescribeStorageBundleRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};
  shared_ptr<string> storageBundleId{};

  DescribeStorageBundleRequest() {}

  explicit DescribeStorageBundleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
  }


  virtual ~DescribeStorageBundleRequest() = default;
};
class DescribeStorageBundleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> backendBucketRegionId{};
  shared_ptr<string> code{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> message{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<bool> success{};

  DescribeStorageBundleResponseBody() {}

  explicit DescribeStorageBundleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendBucketRegionId) {
      res["BackendBucketRegionId"] = boost::any(*backendBucketRegionId);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendBucketRegionId") != m.end() && !m["BackendBucketRegionId"].empty()) {
      backendBucketRegionId = make_shared<string>(boost::any_cast<string>(m["BackendBucketRegionId"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DescribeStorageBundleResponseBody() = default;
};
class DescribeStorageBundleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStorageBundleResponseBody> body{};

  DescribeStorageBundleResponse() {}

  explicit DescribeStorageBundleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStorageBundleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStorageBundleResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStorageBundleResponse() = default;
};
class DescribeStorageBundlesRequest : public Darabonba::Model {
public:
  shared_ptr<string> backendBucketRegionId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};

  DescribeStorageBundlesRequest() {}

  explicit DescribeStorageBundlesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendBucketRegionId) {
      res["BackendBucketRegionId"] = boost::any(*backendBucketRegionId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendBucketRegionId") != m.end() && !m["BackendBucketRegionId"].empty()) {
      backendBucketRegionId = make_shared<string>(boost::any_cast<string>(m["BackendBucketRegionId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeStorageBundlesRequest() = default;
};
class DescribeStorageBundlesResponseBodyStorageBundlesStorageBundle : public Darabonba::Model {
public:
  shared_ptr<string> backendBucketRegionId{};
  shared_ptr<long> createdTime{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> storageBundleId{};

  DescribeStorageBundlesResponseBodyStorageBundlesStorageBundle() {}

  explicit DescribeStorageBundlesResponseBodyStorageBundlesStorageBundle(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backendBucketRegionId) {
      res["BackendBucketRegionId"] = boost::any(*backendBucketRegionId);
    }
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BackendBucketRegionId") != m.end() && !m["BackendBucketRegionId"].empty()) {
      backendBucketRegionId = make_shared<string>(boost::any_cast<string>(m["BackendBucketRegionId"]));
    }
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
  }


  virtual ~DescribeStorageBundlesResponseBodyStorageBundlesStorageBundle() = default;
};
class DescribeStorageBundlesResponseBodyStorageBundles : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeStorageBundlesResponseBodyStorageBundlesStorageBundle>> storageBundle{};

  DescribeStorageBundlesResponseBodyStorageBundles() {}

  explicit DescribeStorageBundlesResponseBodyStorageBundles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (storageBundle) {
      vector<boost::any> temp1;
      for(auto item1:*storageBundle){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StorageBundle"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StorageBundle") != m.end() && !m["StorageBundle"].empty()) {
      if (typeid(vector<boost::any>) == m["StorageBundle"].type()) {
        vector<DescribeStorageBundlesResponseBodyStorageBundlesStorageBundle> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StorageBundle"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStorageBundlesResponseBodyStorageBundlesStorageBundle model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        storageBundle = make_shared<vector<DescribeStorageBundlesResponseBodyStorageBundlesStorageBundle>>(expect1);
      }
    }
  }


  virtual ~DescribeStorageBundlesResponseBodyStorageBundles() = default;
};
class DescribeStorageBundlesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeStorageBundlesResponseBodyStorageBundles> storageBundles{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};

  DescribeStorageBundlesResponseBody() {}

  explicit DescribeStorageBundlesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (storageBundles) {
      res["StorageBundles"] = storageBundles ? boost::any(storageBundles->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("StorageBundles") != m.end() && !m["StorageBundles"].empty()) {
      if (typeid(map<string, boost::any>) == m["StorageBundles"].type()) {
        DescribeStorageBundlesResponseBodyStorageBundles model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["StorageBundles"]));
        storageBundles = make_shared<DescribeStorageBundlesResponseBodyStorageBundles>(model1);
      }
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeStorageBundlesResponseBody() = default;
};
class DescribeStorageBundlesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStorageBundlesResponseBody> body{};

  DescribeStorageBundlesResponse() {}

  explicit DescribeStorageBundlesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStorageBundlesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStorageBundlesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStorageBundlesResponse() = default;
};
class DescribeSubscriptionPriceRequest : public Darabonba::Model {
public:
  shared_ptr<long> cacheCloudEfficiencySize{};
  shared_ptr<long> cacheESSDPl1Size{};
  shared_ptr<long> cacheSSDSize{};
  shared_ptr<string> gatewayClass{};
  shared_ptr<long> periodQuantity{};
  shared_ptr<string> periodUnit{};
  shared_ptr<string> regionId{};
  shared_ptr<string> securityToken{};

  DescribeSubscriptionPriceRequest() {}

  explicit DescribeSubscriptionPriceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheCloudEfficiencySize) {
      res["CacheCloudEfficiencySize"] = boost::any(*cacheCloudEfficiencySize);
    }
    if (cacheESSDPl1Size) {
      res["CacheESSDPl1Size"] = boost::any(*cacheESSDPl1Size);
    }
    if (cacheSSDSize) {
      res["CacheSSDSize"] = boost::any(*cacheSSDSize);
    }
    if (gatewayClass) {
      res["GatewayClass"] = boost::any(*gatewayClass);
    }
    if (periodQuantity) {
      res["PeriodQuantity"] = boost::any(*periodQuantity);
    }
    if (periodUnit) {
      res["PeriodUnit"] = boost::any(*periodUnit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheCloudEfficiencySize") != m.end() && !m["CacheCloudEfficiencySize"].empty()) {
      cacheCloudEfficiencySize = make_shared<long>(boost::any_cast<long>(m["CacheCloudEfficiencySize"]));
    }
    if (m.find("CacheESSDPl1Size") != m.end() && !m["CacheESSDPl1Size"].empty()) {
      cacheESSDPl1Size = make_shared<long>(boost::any_cast<long>(m["CacheESSDPl1Size"]));
    }
    if (m.find("CacheSSDSize") != m.end() && !m["CacheSSDSize"].empty()) {
      cacheSSDSize = make_shared<long>(boost::any_cast<long>(m["CacheSSDSize"]));
    }
    if (m.find("GatewayClass") != m.end() && !m["GatewayClass"].empty()) {
      gatewayClass = make_shared<string>(boost::any_cast<string>(m["GatewayClass"]));
    }
    if (m.find("PeriodQuantity") != m.end() && !m["PeriodQuantity"].empty()) {
      periodQuantity = make_shared<long>(boost::any_cast<long>(m["PeriodQuantity"]));
    }
    if (m.find("PeriodUnit") != m.end() && !m["PeriodUnit"].empty()) {
      periodUnit = make_shared<string>(boost::any_cast<string>(m["PeriodUnit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeSubscriptionPriceRequest() = default;
};
class DescribeSubscriptionPriceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> currency{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<double> tradePrice{};

  DescribeSubscriptionPriceResponseBody() {}

  explicit DescribeSubscriptionPriceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
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
    if (tradePrice) {
      res["TradePrice"] = boost::any(*tradePrice);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
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
    if (m.find("TradePrice") != m.end() && !m["TradePrice"].empty()) {
      tradePrice = make_shared<double>(boost::any_cast<double>(m["TradePrice"]));
    }
  }


  virtual ~DescribeSubscriptionPriceResponseBody() = default;
};
class DescribeSubscriptionPriceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeSubscriptionPriceResponseBody> body{};

  DescribeSubscriptionPriceResponse() {}

  explicit DescribeSubscriptionPriceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeSubscriptionPriceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeSubscriptionPriceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeSubscriptionPriceResponse() = default;
};
class DescribeTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> targetId{};
  shared_ptr<string> taskId{};

  DescribeTasksRequest() {}

  explicit DescribeTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (targetId) {
      res["TargetId"] = boost::any(*targetId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TargetId") != m.end() && !m["TargetId"].empty()) {
      targetId = make_shared<string>(boost::any_cast<string>(m["TargetId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DescribeTasksRequest() = default;
};
class DescribeTasksResponseBodyTasksSimpleTask : public Darabonba::Model {
public:
  shared_ptr<long> createdTime{};
  shared_ptr<string> messageKey{};
  shared_ptr<string> name{};
  shared_ptr<long> progress{};
  shared_ptr<string> relatedResourceId{};
  shared_ptr<string> stateCode{};
  shared_ptr<string> taskId{};
  shared_ptr<long> updatedTime{};

  DescribeTasksResponseBodyTasksSimpleTask() {}

  explicit DescribeTasksResponseBodyTasksSimpleTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdTime) {
      res["CreatedTime"] = boost::any(*createdTime);
    }
    if (messageKey) {
      res["MessageKey"] = boost::any(*messageKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
    }
    if (relatedResourceId) {
      res["RelatedResourceId"] = boost::any(*relatedResourceId);
    }
    if (stateCode) {
      res["StateCode"] = boost::any(*stateCode);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (updatedTime) {
      res["UpdatedTime"] = boost::any(*updatedTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedTime") != m.end() && !m["CreatedTime"].empty()) {
      createdTime = make_shared<long>(boost::any_cast<long>(m["CreatedTime"]));
    }
    if (m.find("MessageKey") != m.end() && !m["MessageKey"].empty()) {
      messageKey = make_shared<string>(boost::any_cast<string>(m["MessageKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("RelatedResourceId") != m.end() && !m["RelatedResourceId"].empty()) {
      relatedResourceId = make_shared<string>(boost::any_cast<string>(m["RelatedResourceId"]));
    }
    if (m.find("StateCode") != m.end() && !m["StateCode"].empty()) {
      stateCode = make_shared<string>(boost::any_cast<string>(m["StateCode"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("UpdatedTime") != m.end() && !m["UpdatedTime"].empty()) {
      updatedTime = make_shared<long>(boost::any_cast<long>(m["UpdatedTime"]));
    }
  }


  virtual ~DescribeTasksResponseBodyTasksSimpleTask() = default;
};
class DescribeTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeTasksResponseBodyTasksSimpleTask>> simpleTask{};

  DescribeTasksResponseBodyTasks() {}

  explicit DescribeTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (simpleTask) {
      vector<boost::any> temp1;
      for(auto item1:*simpleTask){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimpleTask"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SimpleTask") != m.end() && !m["SimpleTask"].empty()) {
      if (typeid(vector<boost::any>) == m["SimpleTask"].type()) {
        vector<DescribeTasksResponseBodyTasksSimpleTask> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimpleTask"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeTasksResponseBodyTasksSimpleTask model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        simpleTask = make_shared<vector<DescribeTasksResponseBodyTasksSimpleTask>>(expect1);
      }
    }
  }


  virtual ~DescribeTasksResponseBodyTasks() = default;
};
class DescribeTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<DescribeTasksResponseBodyTasks> tasks{};
  shared_ptr<long> totalCount{};

  DescribeTasksResponseBody() {}

  explicit DescribeTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tasks) {
      res["Tasks"] = tasks ? boost::any(tasks->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["Tasks"].type()) {
        DescribeTasksResponseBodyTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Tasks"]));
        tasks = make_shared<DescribeTasksResponseBodyTasks>(model1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~DescribeTasksResponseBody() = default;
};
class DescribeTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTasksResponseBody> body{};

  DescribeTasksResponse() {}

  explicit DescribeTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTasksResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTasksResponse() = default;
};
class DescribeUserBusinessStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};

  DescribeUserBusinessStatusRequest() {}

  explicit DescribeUserBusinessStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeUserBusinessStatusRequest() = default;
};
class DescribeUserBusinessStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isEnabled{};
  shared_ptr<bool> isIndebted{};
  shared_ptr<bool> isIndebtedOverdue{};
  shared_ptr<bool> isRiskControl{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DescribeUserBusinessStatusResponseBody() {}

  explicit DescribeUserBusinessStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (isIndebted) {
      res["IsIndebted"] = boost::any(*isIndebted);
    }
    if (isIndebtedOverdue) {
      res["IsIndebtedOverdue"] = boost::any(*isIndebtedOverdue);
    }
    if (isRiskControl) {
      res["IsRiskControl"] = boost::any(*isRiskControl);
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
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsEnabled"]));
    }
    if (m.find("IsIndebted") != m.end() && !m["IsIndebted"].empty()) {
      isIndebted = make_shared<bool>(boost::any_cast<bool>(m["IsIndebted"]));
    }
    if (m.find("IsIndebtedOverdue") != m.end() && !m["IsIndebtedOverdue"].empty()) {
      isIndebtedOverdue = make_shared<bool>(boost::any_cast<bool>(m["IsIndebtedOverdue"]));
    }
    if (m.find("IsRiskControl") != m.end() && !m["IsRiskControl"].empty()) {
      isRiskControl = make_shared<bool>(boost::any_cast<bool>(m["IsRiskControl"]));
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


  virtual ~DescribeUserBusinessStatusResponseBody() = default;
};
class DescribeUserBusinessStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeUserBusinessStatusResponseBody> body{};

  DescribeUserBusinessStatusResponse() {}

  explicit DescribeUserBusinessStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeUserBusinessStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeUserBusinessStatusResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeUserBusinessStatusResponse() = default;
};
class DescribeVSwitchesRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<string> vSwitchId{};
  shared_ptr<string> vpcId{};

  DescribeVSwitchesRequest() {}

  explicit DescribeVSwitchesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    if (vSwitchId) {
      res["VSwitchId"] = boost::any(*vSwitchId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("VSwitchId") != m.end() && !m["VSwitchId"].empty()) {
      vSwitchId = make_shared<string>(boost::any_cast<string>(m["VSwitchId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeVSwitchesRequest() = default;
};
class DescribeVSwitchesResponseBodyVSwitchesVSwitch : public Darabonba::Model {
public:
  shared_ptr<string> availableSelectionInfo{};
  shared_ptr<string> id{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> name{};
  shared_ptr<string> zoneId{};

  DescribeVSwitchesResponseBodyVSwitchesVSwitch() {}

  explicit DescribeVSwitchesResponseBodyVSwitchesVSwitch(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (availableSelectionInfo) {
      res["AvailableSelectionInfo"] = boost::any(*availableSelectionInfo);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AvailableSelectionInfo") != m.end() && !m["AvailableSelectionInfo"].empty()) {
      availableSelectionInfo = make_shared<string>(boost::any_cast<string>(m["AvailableSelectionInfo"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeVSwitchesResponseBodyVSwitchesVSwitch() = default;
};
class DescribeVSwitchesResponseBodyVSwitches : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVSwitchesResponseBodyVSwitchesVSwitch>> vSwitch{};

  DescribeVSwitchesResponseBodyVSwitches() {}

  explicit DescribeVSwitchesResponseBodyVSwitches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vSwitch) {
      vector<boost::any> temp1;
      for(auto item1:*vSwitch){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["VSwitch"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("VSwitch") != m.end() && !m["VSwitch"].empty()) {
      if (typeid(vector<boost::any>) == m["VSwitch"].type()) {
        vector<DescribeVSwitchesResponseBodyVSwitchesVSwitch> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["VSwitch"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVSwitchesResponseBodyVSwitchesVSwitch model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vSwitch = make_shared<vector<DescribeVSwitchesResponseBodyVSwitchesVSwitch>>(expect1);
      }
    }
  }


  virtual ~DescribeVSwitchesResponseBodyVSwitches() = default;
};
class DescribeVSwitchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeVSwitchesResponseBodyVSwitches> vSwitches{};

  DescribeVSwitchesResponseBody() {}

  explicit DescribeVSwitchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (vSwitches) {
      res["VSwitches"] = vSwitches ? boost::any(vSwitches->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("VSwitches") != m.end() && !m["VSwitches"].empty()) {
      if (typeid(map<string, boost::any>) == m["VSwitches"].type()) {
        DescribeVSwitchesResponseBodyVSwitches model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["VSwitches"]));
        vSwitches = make_shared<DescribeVSwitchesResponseBodyVSwitches>(model1);
      }
    }
  }


  virtual ~DescribeVSwitchesResponseBody() = default;
};
class DescribeVSwitchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVSwitchesResponseBody> body{};

  DescribeVSwitchesResponse() {}

  explicit DescribeVSwitchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVSwitchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVSwitchesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVSwitchesResponse() = default;
};
class DescribeVpcsRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<string> vpcId{};

  DescribeVpcsRequest() {}

  explicit DescribeVpcsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    if (vpcId) {
      res["VpcId"] = boost::any(*vpcId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("VpcId") != m.end() && !m["VpcId"].empty()) {
      vpcId = make_shared<string>(boost::any_cast<string>(m["VpcId"]));
    }
  }


  virtual ~DescribeVpcsRequest() = default;
};
class DescribeVpcsResponseBodyVpcsVpc : public Darabonba::Model {
public:
  shared_ptr<string> cidrBlock{};
  shared_ptr<string> id{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> name{};

  DescribeVpcsResponseBodyVpcsVpc() {}

  explicit DescribeVpcsResponseBodyVpcsVpc(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cidrBlock) {
      res["CidrBlock"] = boost::any(*cidrBlock);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CidrBlock") != m.end() && !m["CidrBlock"].empty()) {
      cidrBlock = make_shared<string>(boost::any_cast<string>(m["CidrBlock"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeVpcsResponseBodyVpcsVpc() = default;
};
class DescribeVpcsResponseBodyVpcs : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeVpcsResponseBodyVpcsVpc>> vpc{};

  DescribeVpcsResponseBodyVpcs() {}

  explicit DescribeVpcsResponseBodyVpcs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vpc) {
      vector<boost::any> temp1;
      for(auto item1:*vpc){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Vpc"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Vpc") != m.end() && !m["Vpc"].empty()) {
      if (typeid(vector<boost::any>) == m["Vpc"].type()) {
        vector<DescribeVpcsResponseBodyVpcsVpc> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Vpc"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeVpcsResponseBodyVpcsVpc model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        vpc = make_shared<vector<DescribeVpcsResponseBodyVpcsVpc>>(expect1);
      }
    }
  }


  virtual ~DescribeVpcsResponseBodyVpcs() = default;
};
class DescribeVpcsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<long> totalCount{};
  shared_ptr<DescribeVpcsResponseBodyVpcs> vpcs{};

  DescribeVpcsResponseBody() {}

  explicit DescribeVpcsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (vpcs) {
      res["Vpcs"] = vpcs ? boost::any(vpcs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Vpcs") != m.end() && !m["Vpcs"].empty()) {
      if (typeid(map<string, boost::any>) == m["Vpcs"].type()) {
        DescribeVpcsResponseBodyVpcs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Vpcs"]));
        vpcs = make_shared<DescribeVpcsResponseBodyVpcs>(model1);
      }
    }
  }


  virtual ~DescribeVpcsResponseBody() = default;
};
class DescribeVpcsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeVpcsResponseBody> body{};

  DescribeVpcsResponse() {}

  explicit DescribeVpcsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeVpcsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeVpcsResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeVpcsResponse() = default;
};
class DescribeZonesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> securityToken{};

  DescribeZonesRequest() {}

  explicit DescribeZonesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DescribeZonesRequest() = default;
};
class DescribeZonesResponseBodyZonesZone : public Darabonba::Model {
public:
  shared_ptr<string> zoneId{};

  DescribeZonesResponseBodyZonesZone() {}

  explicit DescribeZonesResponseBodyZonesZone(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zoneId) {
      res["ZoneId"] = boost::any(*zoneId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ZoneId") != m.end() && !m["ZoneId"].empty()) {
      zoneId = make_shared<string>(boost::any_cast<string>(m["ZoneId"]));
    }
  }


  virtual ~DescribeZonesResponseBodyZonesZone() = default;
};
class DescribeZonesResponseBodyZones : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeZonesResponseBodyZonesZone>> zone{};

  DescribeZonesResponseBodyZones() {}

  explicit DescribeZonesResponseBodyZones(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (zone) {
      vector<boost::any> temp1;
      for(auto item1:*zone){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Zone"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Zone") != m.end() && !m["Zone"].empty()) {
      if (typeid(vector<boost::any>) == m["Zone"].type()) {
        vector<DescribeZonesResponseBodyZonesZone> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Zone"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeZonesResponseBodyZonesZone model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        zone = make_shared<vector<DescribeZonesResponseBodyZonesZone>>(expect1);
      }
    }
  }


  virtual ~DescribeZonesResponseBodyZones() = default;
};
class DescribeZonesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<DescribeZonesResponseBodyZones> zones{};

  DescribeZonesResponseBody() {}

  explicit DescribeZonesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (zones) {
      res["Zones"] = zones ? boost::any(zones->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Zones") != m.end() && !m["Zones"].empty()) {
      if (typeid(map<string, boost::any>) == m["Zones"].type()) {
        DescribeZonesResponseBodyZones model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Zones"]));
        zones = make_shared<DescribeZonesResponseBodyZones>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponseBody() = default;
};
class DescribeZonesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeZonesResponseBody> body{};

  DescribeZonesResponse() {}

  explicit DescribeZonesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeZonesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeZonesResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeZonesResponse() = default;
};
class DisableGatewayLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  DisableGatewayLoggingRequest() {}

  explicit DisableGatewayLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DisableGatewayLoggingRequest() = default;
};
class DisableGatewayLoggingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DisableGatewayLoggingResponseBody() {}

  explicit DisableGatewayLoggingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~DisableGatewayLoggingResponseBody() = default;
};
class DisableGatewayLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableGatewayLoggingResponseBody> body{};

  DisableGatewayLoggingResponse() {}

  explicit DisableGatewayLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableGatewayLoggingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableGatewayLoggingResponseBody>(model1);
      }
    }
  }


  virtual ~DisableGatewayLoggingResponse() = default;
};
class DisableGatewayNFSVersionRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> NFSVersion{};
  shared_ptr<string> securityToken{};

  DisableGatewayNFSVersionRequest() {}

  explicit DisableGatewayNFSVersionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (NFSVersion) {
      res["NFSVersion"] = boost::any(*NFSVersion);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("NFSVersion") != m.end() && !m["NFSVersion"].empty()) {
      NFSVersion = make_shared<string>(boost::any_cast<string>(m["NFSVersion"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~DisableGatewayNFSVersionRequest() = default;
};
class DisableGatewayNFSVersionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  DisableGatewayNFSVersionResponseBody() {}

  explicit DisableGatewayNFSVersionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~DisableGatewayNFSVersionResponseBody() = default;
};
class DisableGatewayNFSVersionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableGatewayNFSVersionResponseBody> body{};

  DisableGatewayNFSVersionResponse() {}

  explicit DisableGatewayNFSVersionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableGatewayNFSVersionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableGatewayNFSVersionResponseBody>(model1);
      }
    }
  }


  virtual ~DisableGatewayNFSVersionResponse() = default;
};
class EnableGatewayIpv6Request : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  EnableGatewayIpv6Request() {}

  explicit EnableGatewayIpv6Request(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~EnableGatewayIpv6Request() = default;
};
class EnableGatewayIpv6ResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  EnableGatewayIpv6ResponseBody() {}

  explicit EnableGatewayIpv6ResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~EnableGatewayIpv6ResponseBody() = default;
};
class EnableGatewayIpv6Response : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableGatewayIpv6ResponseBody> body{};

  EnableGatewayIpv6Response() {}

  explicit EnableGatewayIpv6Response(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableGatewayIpv6ResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableGatewayIpv6ResponseBody>(model1);
      }
    }
  }


  virtual ~EnableGatewayIpv6Response() = default;
};
class EnableGatewayLoggingRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  EnableGatewayLoggingRequest() {}

  explicit EnableGatewayLoggingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~EnableGatewayLoggingRequest() = default;
};
class EnableGatewayLoggingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  EnableGatewayLoggingResponseBody() {}

  explicit EnableGatewayLoggingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~EnableGatewayLoggingResponseBody() = default;
};
class EnableGatewayLoggingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableGatewayLoggingResponseBody> body{};

  EnableGatewayLoggingResponse() {}

  explicit EnableGatewayLoggingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableGatewayLoggingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableGatewayLoggingResponseBody>(model1);
      }
    }
  }


  virtual ~EnableGatewayLoggingResponse() = default;
};
class ExpandCacheDiskRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> localFilePath{};
  shared_ptr<long> newSizeInGB{};
  shared_ptr<string> securityToken{};

  ExpandCacheDiskRequest() {}

  explicit ExpandCacheDiskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (localFilePath) {
      res["LocalFilePath"] = boost::any(*localFilePath);
    }
    if (newSizeInGB) {
      res["NewSizeInGB"] = boost::any(*newSizeInGB);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("LocalFilePath") != m.end() && !m["LocalFilePath"].empty()) {
      localFilePath = make_shared<string>(boost::any_cast<string>(m["LocalFilePath"]));
    }
    if (m.find("NewSizeInGB") != m.end() && !m["NewSizeInGB"].empty()) {
      newSizeInGB = make_shared<long>(boost::any_cast<long>(m["NewSizeInGB"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ExpandCacheDiskRequest() = default;
};
class ExpandCacheDiskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buyURL{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ExpandCacheDiskResponseBody() {}

  explicit ExpandCacheDiskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ExpandCacheDiskResponseBody() = default;
};
class ExpandCacheDiskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExpandCacheDiskResponseBody> body{};

  ExpandCacheDiskResponse() {}

  explicit ExpandCacheDiskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExpandCacheDiskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExpandCacheDiskResponseBody>(model1);
      }
    }
  }


  virtual ~ExpandCacheDiskResponse() = default;
};
class ExpandGatewayFileShareRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};

  ExpandGatewayFileShareRequest() {}

  explicit ExpandGatewayFileShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
  }


  virtual ~ExpandGatewayFileShareRequest() = default;
};
class ExpandGatewayFileShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ExpandGatewayFileShareResponseBody() {}

  explicit ExpandGatewayFileShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ExpandGatewayFileShareResponseBody() = default;
};
class ExpandGatewayFileShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExpandGatewayFileShareResponseBody> body{};

  ExpandGatewayFileShareResponse() {}

  explicit ExpandGatewayFileShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExpandGatewayFileShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExpandGatewayFileShareResponseBody>(model1);
      }
    }
  }


  virtual ~ExpandGatewayFileShareResponse() = default;
};
class ExpandGatewayNetworkBandwidthRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<long> newNetworkBandwidth{};
  shared_ptr<string> securityToken{};

  ExpandGatewayNetworkBandwidthRequest() {}

  explicit ExpandGatewayNetworkBandwidthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (newNetworkBandwidth) {
      res["NewNetworkBandwidth"] = boost::any(*newNetworkBandwidth);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("NewNetworkBandwidth") != m.end() && !m["NewNetworkBandwidth"].empty()) {
      newNetworkBandwidth = make_shared<long>(boost::any_cast<long>(m["NewNetworkBandwidth"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ExpandGatewayNetworkBandwidthRequest() = default;
};
class ExpandGatewayNetworkBandwidthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buyURL{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ExpandGatewayNetworkBandwidthResponseBody() {}

  explicit ExpandGatewayNetworkBandwidthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ExpandGatewayNetworkBandwidthResponseBody() = default;
};
class ExpandGatewayNetworkBandwidthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExpandGatewayNetworkBandwidthResponseBody> body{};

  ExpandGatewayNetworkBandwidthResponse() {}

  explicit ExpandGatewayNetworkBandwidthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExpandGatewayNetworkBandwidthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExpandGatewayNetworkBandwidthResponseBody>(model1);
      }
    }
  }


  virtual ~ExpandGatewayNetworkBandwidthResponse() = default;
};
class GenerateGatewayTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  GenerateGatewayTokenRequest() {}

  explicit GenerateGatewayTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GenerateGatewayTokenRequest() = default;
};
class GenerateGatewayTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> token{};

  GenerateGatewayTokenResponseBody() {}

  explicit GenerateGatewayTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GenerateGatewayTokenResponseBody() = default;
};
class GenerateGatewayTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateGatewayTokenResponseBody> body{};

  GenerateGatewayTokenResponse() {}

  explicit GenerateGatewayTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateGatewayTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateGatewayTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateGatewayTokenResponse() = default;
};
class GenerateMqttTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientUUID{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  GenerateMqttTokenRequest() {}

  explicit GenerateMqttTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUUID) {
      res["ClientUUID"] = boost::any(*clientUUID);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUUID") != m.end() && !m["ClientUUID"].empty()) {
      clientUUID = make_shared<string>(boost::any_cast<string>(m["ClientUUID"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GenerateMqttTokenRequest() = default;
};
class GenerateMqttTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> mqttToken{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateMqttTokenResponseBody() {}

  explicit GenerateMqttTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (mqttToken) {
      res["MqttToken"] = boost::any(*mqttToken);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MqttToken") != m.end() && !m["MqttToken"].empty()) {
      mqttToken = make_shared<string>(boost::any_cast<string>(m["MqttToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GenerateMqttTokenResponseBody() = default;
};
class GenerateMqttTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateMqttTokenResponseBody> body{};

  GenerateMqttTokenResponse() {}

  explicit GenerateMqttTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateMqttTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateMqttTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateMqttTokenResponse() = default;
};
class GenerateStsTokenRequest : public Darabonba::Model {
public:
  shared_ptr<long> expireInSeconds{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> tokenType{};

  GenerateStsTokenRequest() {}

  explicit GenerateStsTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expireInSeconds) {
      res["ExpireInSeconds"] = boost::any(*expireInSeconds);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tokenType) {
      res["TokenType"] = boost::any(*tokenType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpireInSeconds") != m.end() && !m["ExpireInSeconds"].empty()) {
      expireInSeconds = make_shared<long>(boost::any_cast<long>(m["ExpireInSeconds"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TokenType") != m.end() && !m["TokenType"].empty()) {
      tokenType = make_shared<string>(boost::any_cast<string>(m["TokenType"]));
    }
  }


  virtual ~GenerateStsTokenRequest() = default;
};
class GenerateStsTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> code{};
  shared_ptr<string> environment{};
  shared_ptr<string> expiration{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityToken{};
  shared_ptr<bool> success{};
  shared_ptr<string> supportBundleTarget{};

  GenerateStsTokenResponseBody() {}

  explicit GenerateStsTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKeyId) {
      res["AccessKeyId"] = boost::any(*accessKeyId);
    }
    if (accessKeySecret) {
      res["AccessKeySecret"] = boost::any(*accessKeySecret);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (expiration) {
      res["Expiration"] = boost::any(*expiration);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (supportBundleTarget) {
      res["SupportBundleTarget"] = boost::any(*supportBundleTarget);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKeyId") != m.end() && !m["AccessKeyId"].empty()) {
      accessKeyId = make_shared<string>(boost::any_cast<string>(m["AccessKeyId"]));
    }
    if (m.find("AccessKeySecret") != m.end() && !m["AccessKeySecret"].empty()) {
      accessKeySecret = make_shared<string>(boost::any_cast<string>(m["AccessKeySecret"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<string>(boost::any_cast<string>(m["Environment"]));
    }
    if (m.find("Expiration") != m.end() && !m["Expiration"].empty()) {
      expiration = make_shared<string>(boost::any_cast<string>(m["Expiration"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("SupportBundleTarget") != m.end() && !m["SupportBundleTarget"].empty()) {
      supportBundleTarget = make_shared<string>(boost::any_cast<string>(m["SupportBundleTarget"]));
    }
  }


  virtual ~GenerateStsTokenResponseBody() = default;
};
class GenerateStsTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateStsTokenResponseBody> body{};

  GenerateStsTokenResponse() {}

  explicit GenerateStsTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateStsTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateStsTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateStsTokenResponse() = default;
};
class HandleGatewayAutoPlanRequest : public Darabonba::Model {
public:
  shared_ptr<bool> cancel{};
  shared_ptr<long> delayHours{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> planId{};
  shared_ptr<string> securityToken{};

  HandleGatewayAutoPlanRequest() {}

  explicit HandleGatewayAutoPlanRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cancel) {
      res["Cancel"] = boost::any(*cancel);
    }
    if (delayHours) {
      res["DelayHours"] = boost::any(*delayHours);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (planId) {
      res["PlanId"] = boost::any(*planId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cancel") != m.end() && !m["Cancel"].empty()) {
      cancel = make_shared<bool>(boost::any_cast<bool>(m["Cancel"]));
    }
    if (m.find("DelayHours") != m.end() && !m["DelayHours"].empty()) {
      delayHours = make_shared<long>(boost::any_cast<long>(m["DelayHours"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("PlanId") != m.end() && !m["PlanId"].empty()) {
      planId = make_shared<string>(boost::any_cast<string>(m["PlanId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~HandleGatewayAutoPlanRequest() = default;
};
class HandleGatewayAutoPlanResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  HandleGatewayAutoPlanResponseBody() {}

  explicit HandleGatewayAutoPlanResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~HandleGatewayAutoPlanResponseBody() = default;
};
class HandleGatewayAutoPlanResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<HandleGatewayAutoPlanResponseBody> body{};

  HandleGatewayAutoPlanResponse() {}

  explicit HandleGatewayAutoPlanResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        HandleGatewayAutoPlanResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<HandleGatewayAutoPlanResponseBody>(model1);
      }
    }
  }


  virtual ~HandleGatewayAutoPlanResponse() = default;
};
class ListTagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  ListTagResourcesRequestTag() {}

  explicit ListTagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTagResourcesRequestTag() = default;
};
class ListTagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> securityToken{};
  shared_ptr<vector<ListTagResourcesRequestTag>> tag{};

  ListTagResourcesRequest() {}

  explicit ListTagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<ListTagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<ListTagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesRequest() = default;
};
class ListTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
public:
  shared_ptr<string> resourceId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> tagKey{};
  shared_ptr<string> tagValue{};

  ListTagResourcesResponseBodyTagResourcesTagResource() {}

  explicit ListTagResourcesResponseBodyTagResourcesTagResource(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    if (tagValue) {
      res["TagValue"] = boost::any(*tagValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      resourceId = make_shared<string>(boost::any_cast<string>(m["ResourceId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      tagKey = make_shared<string>(boost::any_cast<string>(m["TagKey"]));
    }
    if (m.find("TagValue") != m.end() && !m["TagValue"].empty()) {
      tagValue = make_shared<string>(boost::any_cast<string>(m["TagValue"]));
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResourcesTagResource() = default;
};
class ListTagResourcesResponseBodyTagResources : public Darabonba::Model {
public:
  shared_ptr<vector<ListTagResourcesResponseBodyTagResourcesTagResource>> tagResource{};

  ListTagResourcesResponseBodyTagResources() {}

  explicit ListTagResourcesResponseBodyTagResources(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagResource) {
      vector<boost::any> temp1;
      for(auto item1:*tagResource){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagResource"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagResource") != m.end() && !m["TagResource"].empty()) {
      if (typeid(vector<boost::any>) == m["TagResource"].type()) {
        vector<ListTagResourcesResponseBodyTagResourcesTagResource> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagResource"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTagResourcesResponseBodyTagResourcesTagResource model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagResource = make_shared<vector<ListTagResourcesResponseBodyTagResourcesTagResource>>(expect1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBodyTagResources() = default;
};
class ListTagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<ListTagResourcesResponseBodyTagResources> tagResources{};

  ListTagResourcesResponseBody() {}

  explicit ListTagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagResources) {
      res["TagResources"] = tagResources ? boost::any(tagResources->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagResources") != m.end() && !m["TagResources"].empty()) {
      if (typeid(map<string, boost::any>) == m["TagResources"].type()) {
        ListTagResourcesResponseBodyTagResources model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TagResources"]));
        tagResources = make_shared<ListTagResourcesResponseBodyTagResources>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponseBody() = default;
};
class ListTagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTagResourcesResponseBody> body{};

  ListTagResourcesResponse() {}

  explicit ListTagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTagResourcesResponse() = default;
};
class ModifyGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> name{};
  shared_ptr<string> securityToken{};

  ModifyGatewayRequest() {}

  explicit ModifyGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyGatewayRequest() = default;
};
class ModifyGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyGatewayResponseBody() {}

  explicit ModifyGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
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
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
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


  virtual ~ModifyGatewayResponseBody() = default;
};
class ModifyGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyGatewayResponseBody> body{};

  ModifyGatewayResponse() {}

  explicit ModifyGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGatewayResponse() = default;
};
class ModifyGatewayBlockVolumeRequest : public Darabonba::Model {
public:
  shared_ptr<string> cacheConfig{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<string> securityToken{};

  ModifyGatewayBlockVolumeRequest() {}

  explicit ModifyGatewayBlockVolumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheConfig) {
      res["CacheConfig"] = boost::any(*cacheConfig);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheConfig") != m.end() && !m["CacheConfig"].empty()) {
      cacheConfig = make_shared<string>(boost::any_cast<string>(m["CacheConfig"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyGatewayBlockVolumeRequest() = default;
};
class ModifyGatewayBlockVolumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ModifyGatewayBlockVolumeResponseBody() {}

  explicit ModifyGatewayBlockVolumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ModifyGatewayBlockVolumeResponseBody() = default;
};
class ModifyGatewayBlockVolumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyGatewayBlockVolumeResponseBody> body{};

  ModifyGatewayBlockVolumeResponse() {}

  explicit ModifyGatewayBlockVolumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyGatewayBlockVolumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGatewayBlockVolumeResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGatewayBlockVolumeResponse() = default;
};
class ModifyGatewayClassRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayClass{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  ModifyGatewayClassRequest() {}

  explicit ModifyGatewayClassRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayClass) {
      res["GatewayClass"] = boost::any(*gatewayClass);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayClass") != m.end() && !m["GatewayClass"].empty()) {
      gatewayClass = make_shared<string>(boost::any_cast<string>(m["GatewayClass"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyGatewayClassRequest() = default;
};
class ModifyGatewayClassResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buyURL{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ModifyGatewayClassResponseBody() {}

  explicit ModifyGatewayClassResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ModifyGatewayClassResponseBody() = default;
};
class ModifyGatewayClassResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyGatewayClassResponseBody> body{};

  ModifyGatewayClassResponse() {}

  explicit ModifyGatewayClassResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyGatewayClassResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGatewayClassResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGatewayClassResponse() = default;
};
class ModifyGatewayFileShareRequest : public Darabonba::Model {
public:
  shared_ptr<string> cacheConfig{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<string> securityToken{};

  ModifyGatewayFileShareRequest() {}

  explicit ModifyGatewayFileShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cacheConfig) {
      res["CacheConfig"] = boost::any(*cacheConfig);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CacheConfig") != m.end() && !m["CacheConfig"].empty()) {
      cacheConfig = make_shared<string>(boost::any_cast<string>(m["CacheConfig"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ModifyGatewayFileShareRequest() = default;
};
class ModifyGatewayFileShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ModifyGatewayFileShareResponseBody() {}

  explicit ModifyGatewayFileShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ModifyGatewayFileShareResponseBody() = default;
};
class ModifyGatewayFileShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyGatewayFileShareResponseBody> body{};

  ModifyGatewayFileShareResponse() {}

  explicit ModifyGatewayFileShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyGatewayFileShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGatewayFileShareResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGatewayFileShareResponse() = default;
};
class ModifyGatewayFileShareWatermarkRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> watermark{};

  ModifyGatewayFileShareWatermarkRequest() {}

  explicit ModifyGatewayFileShareWatermarkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (watermark) {
      res["Watermark"] = boost::any(*watermark);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Watermark") != m.end() && !m["Watermark"].empty()) {
      watermark = make_shared<long>(boost::any_cast<long>(m["Watermark"]));
    }
  }


  virtual ~ModifyGatewayFileShareWatermarkRequest() = default;
};
class ModifyGatewayFileShareWatermarkResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ModifyGatewayFileShareWatermarkResponseBody() {}

  explicit ModifyGatewayFileShareWatermarkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ModifyGatewayFileShareWatermarkResponseBody() = default;
};
class ModifyGatewayFileShareWatermarkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyGatewayFileShareWatermarkResponseBody> body{};

  ModifyGatewayFileShareWatermarkResponse() {}

  explicit ModifyGatewayFileShareWatermarkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyGatewayFileShareWatermarkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGatewayFileShareWatermarkResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGatewayFileShareWatermarkResponse() = default;
};
class ModifyStorageBundleRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> storageBundleId{};

  ModifyStorageBundleRequest() {}

  explicit ModifyStorageBundleRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
  }


  virtual ~ModifyStorageBundleRequest() = default;
};
class ModifyStorageBundleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> storageBundleId{};
  shared_ptr<bool> success{};

  ModifyStorageBundleResponseBody() {}

  explicit ModifyStorageBundleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyStorageBundleResponseBody() = default;
};
class ModifyStorageBundleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyStorageBundleResponseBody> body{};

  ModifyStorageBundleResponse() {}

  explicit ModifyStorageBundleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyStorageBundleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyStorageBundleResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyStorageBundleResponse() = default;
};
class OpenSgwServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> orderId{};
  shared_ptr<string> requestId{};

  OpenSgwServiceResponseBody() {}

  explicit OpenSgwServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (orderId) {
      res["OrderId"] = boost::any(*orderId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OrderId") != m.end() && !m["OrderId"].empty()) {
      orderId = make_shared<string>(boost::any_cast<string>(m["OrderId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~OpenSgwServiceResponseBody() = default;
};
class OpenSgwServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OpenSgwServiceResponseBody> body{};

  OpenSgwServiceResponse() {}

  explicit OpenSgwServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OpenSgwServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OpenSgwServiceResponseBody>(model1);
      }
    }
  }


  virtual ~OpenSgwServiceResponse() = default;
};
class OperateGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> operateAction{};
  shared_ptr<string> params{};
  shared_ptr<string> securityToken{};

  OperateGatewayRequest() {}

  explicit OperateGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (operateAction) {
      res["OperateAction"] = boost::any(*operateAction);
    }
    if (params) {
      res["Params"] = boost::any(*params);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("OperateAction") != m.end() && !m["OperateAction"].empty()) {
      operateAction = make_shared<string>(boost::any_cast<string>(m["OperateAction"]));
    }
    if (m.find("Params") != m.end() && !m["Params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["Params"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~OperateGatewayRequest() = default;
};
class OperateGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> buyURL{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  OperateGatewayResponseBody() {}

  explicit OperateGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyURL) {
      res["BuyURL"] = boost::any(*buyURL);
    }
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BuyURL") != m.end() && !m["BuyURL"].empty()) {
      buyURL = make_shared<string>(boost::any_cast<string>(m["BuyURL"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~OperateGatewayResponseBody() = default;
};
class OperateGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<OperateGatewayResponseBody> body{};

  OperateGatewayResponse() {}

  explicit OperateGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OperateGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OperateGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~OperateGatewayResponse() = default;
};
class ReleaseServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> securityToken{};

  ReleaseServiceRequest() {}

  explicit ReleaseServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ReleaseServiceRequest() = default;
};
class ReleaseServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReleaseServiceResponseBody() {}

  explicit ReleaseServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~ReleaseServiceResponseBody() = default;
};
class ReleaseServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReleaseServiceResponseBody> body{};

  ReleaseServiceResponse() {}

  explicit ReleaseServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReleaseServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReleaseServiceResponseBody>(model1);
      }
    }
  }


  virtual ~ReleaseServiceResponse() = default;
};
class RemoveSharesFromExpressSyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> expressSyncId{};
  shared_ptr<string> gatewayShares{};
  shared_ptr<string> securityToken{};

  RemoveSharesFromExpressSyncRequest() {}

  explicit RemoveSharesFromExpressSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expressSyncId) {
      res["ExpressSyncId"] = boost::any(*expressSyncId);
    }
    if (gatewayShares) {
      res["GatewayShares"] = boost::any(*gatewayShares);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpressSyncId") != m.end() && !m["ExpressSyncId"].empty()) {
      expressSyncId = make_shared<string>(boost::any_cast<string>(m["ExpressSyncId"]));
    }
    if (m.find("GatewayShares") != m.end() && !m["GatewayShares"].empty()) {
      gatewayShares = make_shared<string>(boost::any_cast<string>(m["GatewayShares"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~RemoveSharesFromExpressSyncRequest() = default;
};
class RemoveSharesFromExpressSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  RemoveSharesFromExpressSyncResponseBody() {}

  explicit RemoveSharesFromExpressSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~RemoveSharesFromExpressSyncResponseBody() = default;
};
class RemoveSharesFromExpressSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveSharesFromExpressSyncResponseBody> body{};

  RemoveSharesFromExpressSyncResponse() {}

  explicit RemoveSharesFromExpressSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveSharesFromExpressSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveSharesFromExpressSyncResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveSharesFromExpressSyncResponse() = default;
};
class RemoveTagsFromGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> tags{};

  RemoveTagsFromGatewayRequest() {}

  explicit RemoveTagsFromGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~RemoveTagsFromGatewayRequest() = default;
};
class RemoveTagsFromGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RemoveTagsFromGatewayResponseBody() {}

  explicit RemoveTagsFromGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~RemoveTagsFromGatewayResponseBody() = default;
};
class RemoveTagsFromGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RemoveTagsFromGatewayResponseBody> body{};

  RemoveTagsFromGatewayResponse() {}

  explicit RemoveTagsFromGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveTagsFromGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveTagsFromGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveTagsFromGatewayResponse() = default;
};
class ReportBlockVolumesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientUUID{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> info{};
  shared_ptr<string> securityToken{};

  ReportBlockVolumesRequest() {}

  explicit ReportBlockVolumesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUUID) {
      res["ClientUUID"] = boost::any(*clientUUID);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (info) {
      res["Info"] = boost::any(*info);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUUID") != m.end() && !m["ClientUUID"].empty()) {
      clientUUID = make_shared<string>(boost::any_cast<string>(m["ClientUUID"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Info") != m.end() && !m["Info"].empty()) {
      info = make_shared<string>(boost::any_cast<string>(m["Info"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ReportBlockVolumesRequest() = default;
};
class ReportBlockVolumesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportBlockVolumesResponseBody() {}

  explicit ReportBlockVolumesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~ReportBlockVolumesResponseBody() = default;
};
class ReportBlockVolumesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportBlockVolumesResponseBody> body{};

  ReportBlockVolumesResponse() {}

  explicit ReportBlockVolumesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportBlockVolumesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportBlockVolumesResponseBody>(model1);
      }
    }
  }


  virtual ~ReportBlockVolumesResponse() = default;
};
class ReportFileSharesRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientUUID{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> info{};
  shared_ptr<string> securityToken{};

  ReportFileSharesRequest() {}

  explicit ReportFileSharesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUUID) {
      res["ClientUUID"] = boost::any(*clientUUID);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (info) {
      res["Info"] = boost::any(*info);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUUID") != m.end() && !m["ClientUUID"].empty()) {
      clientUUID = make_shared<string>(boost::any_cast<string>(m["ClientUUID"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Info") != m.end() && !m["Info"].empty()) {
      info = make_shared<string>(boost::any_cast<string>(m["Info"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ReportFileSharesRequest() = default;
};
class ReportFileSharesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportFileSharesResponseBody() {}

  explicit ReportFileSharesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~ReportFileSharesResponseBody() = default;
};
class ReportFileSharesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportFileSharesResponseBody> body{};

  ReportFileSharesResponse() {}

  explicit ReportFileSharesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportFileSharesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportFileSharesResponseBody>(model1);
      }
    }
  }


  virtual ~ReportFileSharesResponse() = default;
};
class ReportGatewayInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientUUID{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> gatewayStatus{};
  shared_ptr<string> info{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> time{};

  ReportGatewayInfoRequest() {}

  explicit ReportGatewayInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUUID) {
      res["ClientUUID"] = boost::any(*clientUUID);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (gatewayStatus) {
      res["GatewayStatus"] = boost::any(*gatewayStatus);
    }
    if (info) {
      res["Info"] = boost::any(*info);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUUID") != m.end() && !m["ClientUUID"].empty()) {
      clientUUID = make_shared<string>(boost::any_cast<string>(m["ClientUUID"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("GatewayStatus") != m.end() && !m["GatewayStatus"].empty()) {
      gatewayStatus = make_shared<string>(boost::any_cast<string>(m["GatewayStatus"]));
    }
    if (m.find("Info") != m.end() && !m["Info"].empty()) {
      info = make_shared<string>(boost::any_cast<string>(m["Info"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["Time"]));
    }
  }


  virtual ~ReportGatewayInfoRequest() = default;
};
class ReportGatewayInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportGatewayInfoResponseBody() {}

  explicit ReportGatewayInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~ReportGatewayInfoResponseBody() = default;
};
class ReportGatewayInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportGatewayInfoResponseBody> body{};

  ReportGatewayInfoResponse() {}

  explicit ReportGatewayInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportGatewayInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportGatewayInfoResponseBody>(model1);
      }
    }
  }


  virtual ~ReportGatewayInfoResponse() = default;
};
class ReportGatewayUsageRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientUUID{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> usage{};

  ReportGatewayUsageRequest() {}

  explicit ReportGatewayUsageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientUUID) {
      res["ClientUUID"] = boost::any(*clientUUID);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (usage) {
      res["Usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientUUID") != m.end() && !m["ClientUUID"].empty()) {
      clientUUID = make_shared<string>(boost::any_cast<string>(m["ClientUUID"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      usage = make_shared<string>(boost::any_cast<string>(m["Usage"]));
    }
  }


  virtual ~ReportGatewayUsageRequest() = default;
};
class ReportGatewayUsageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ReportGatewayUsageResponseBody() {}

  explicit ReportGatewayUsageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~ReportGatewayUsageResponseBody() = default;
};
class ReportGatewayUsageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ReportGatewayUsageResponseBody> body{};

  ReportGatewayUsageResponse() {}

  explicit ReportGatewayUsageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ReportGatewayUsageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ReportGatewayUsageResponseBody>(model1);
      }
    }
  }


  virtual ~ReportGatewayUsageResponse() = default;
};
class ResetGatewayPasswordRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> password{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> username{};

  ResetGatewayPasswordRequest() {}

  explicit ResetGatewayPasswordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~ResetGatewayPasswordRequest() = default;
};
class ResetGatewayPasswordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ResetGatewayPasswordResponseBody() {}

  explicit ResetGatewayPasswordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ResetGatewayPasswordResponseBody() = default;
};
class ResetGatewayPasswordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetGatewayPasswordResponseBody> body{};

  ResetGatewayPasswordResponse() {}

  explicit ResetGatewayPasswordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetGatewayPasswordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetGatewayPasswordResponseBody>(model1);
      }
    }
  }


  virtual ~ResetGatewayPasswordResponse() = default;
};
class RestartFileSharesRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> shareProtocol{};

  RestartFileSharesRequest() {}

  explicit RestartFileSharesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (shareProtocol) {
      res["ShareProtocol"] = boost::any(*shareProtocol);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ShareProtocol") != m.end() && !m["ShareProtocol"].empty()) {
      shareProtocol = make_shared<string>(boost::any_cast<string>(m["ShareProtocol"]));
    }
  }


  virtual ~RestartFileSharesRequest() = default;
};
class RestartFileSharesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  RestartFileSharesResponseBody() {}

  explicit RestartFileSharesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~RestartFileSharesResponseBody() = default;
};
class RestartFileSharesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RestartFileSharesResponseBody> body{};

  RestartFileSharesResponse() {}

  explicit RestartFileSharesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RestartFileSharesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RestartFileSharesResponseBody>(model1);
      }
    }
  }


  virtual ~RestartFileSharesResponse() = default;
};
class SetGatewayADInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<bool> isEnabled{};
  shared_ptr<string> password{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> serverIp{};
  shared_ptr<string> username{};

  SetGatewayADInfoRequest() {}

  explicit SetGatewayADInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    if (username) {
      res["Username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsEnabled"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
    if (m.find("Username") != m.end() && !m["Username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["Username"]));
    }
  }


  virtual ~SetGatewayADInfoRequest() = default;
};
class SetGatewayADInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  SetGatewayADInfoResponseBody() {}

  explicit SetGatewayADInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SetGatewayADInfoResponseBody() = default;
};
class SetGatewayADInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetGatewayADInfoResponseBody> body{};

  SetGatewayADInfoResponse() {}

  explicit SetGatewayADInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetGatewayADInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGatewayADInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SetGatewayADInfoResponse() = default;
};
class SetGatewayAutoUpgradeConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<long> autoUpgradeEndHour{};
  shared_ptr<long> autoUpgradeStartHour{};
  shared_ptr<string> gatewayId{};
  shared_ptr<bool> isAutoUpgrade{};
  shared_ptr<string> securityToken{};

  SetGatewayAutoUpgradeConfigurationRequest() {}

  explicit SetGatewayAutoUpgradeConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoUpgradeEndHour) {
      res["AutoUpgradeEndHour"] = boost::any(*autoUpgradeEndHour);
    }
    if (autoUpgradeStartHour) {
      res["AutoUpgradeStartHour"] = boost::any(*autoUpgradeStartHour);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (isAutoUpgrade) {
      res["IsAutoUpgrade"] = boost::any(*isAutoUpgrade);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AutoUpgradeEndHour") != m.end() && !m["AutoUpgradeEndHour"].empty()) {
      autoUpgradeEndHour = make_shared<long>(boost::any_cast<long>(m["AutoUpgradeEndHour"]));
    }
    if (m.find("AutoUpgradeStartHour") != m.end() && !m["AutoUpgradeStartHour"].empty()) {
      autoUpgradeStartHour = make_shared<long>(boost::any_cast<long>(m["AutoUpgradeStartHour"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IsAutoUpgrade") != m.end() && !m["IsAutoUpgrade"].empty()) {
      isAutoUpgrade = make_shared<bool>(boost::any_cast<bool>(m["IsAutoUpgrade"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~SetGatewayAutoUpgradeConfigurationRequest() = default;
};
class SetGatewayAutoUpgradeConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SetGatewayAutoUpgradeConfigurationResponseBody() {}

  explicit SetGatewayAutoUpgradeConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~SetGatewayAutoUpgradeConfigurationResponseBody() = default;
};
class SetGatewayAutoUpgradeConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetGatewayAutoUpgradeConfigurationResponseBody> body{};

  SetGatewayAutoUpgradeConfigurationResponse() {}

  explicit SetGatewayAutoUpgradeConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetGatewayAutoUpgradeConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGatewayAutoUpgradeConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~SetGatewayAutoUpgradeConfigurationResponse() = default;
};
class SetGatewayDNSRequest : public Darabonba::Model {
public:
  shared_ptr<string> dnsServer{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  SetGatewayDNSRequest() {}

  explicit SetGatewayDNSRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dnsServer) {
      res["DnsServer"] = boost::any(*dnsServer);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DnsServer") != m.end() && !m["DnsServer"].empty()) {
      dnsServer = make_shared<string>(boost::any_cast<string>(m["DnsServer"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~SetGatewayDNSRequest() = default;
};
class SetGatewayDNSResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  SetGatewayDNSResponseBody() {}

  explicit SetGatewayDNSResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SetGatewayDNSResponseBody() = default;
};
class SetGatewayDNSResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetGatewayDNSResponseBody> body{};

  SetGatewayDNSResponse() {}

  explicit SetGatewayDNSResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetGatewayDNSResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGatewayDNSResponseBody>(model1);
      }
    }
  }


  virtual ~SetGatewayDNSResponse() = default;
};
class SetGatewayLDAPInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> baseDN{};
  shared_ptr<string> gatewayId{};
  shared_ptr<bool> isEnabled{};
  shared_ptr<bool> isTls{};
  shared_ptr<string> password{};
  shared_ptr<string> rootDN{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> serverIp{};

  SetGatewayLDAPInfoRequest() {}

  explicit SetGatewayLDAPInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseDN) {
      res["BaseDN"] = boost::any(*baseDN);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (isEnabled) {
      res["IsEnabled"] = boost::any(*isEnabled);
    }
    if (isTls) {
      res["IsTls"] = boost::any(*isTls);
    }
    if (password) {
      res["Password"] = boost::any(*password);
    }
    if (rootDN) {
      res["RootDN"] = boost::any(*rootDN);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (serverIp) {
      res["ServerIp"] = boost::any(*serverIp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseDN") != m.end() && !m["BaseDN"].empty()) {
      baseDN = make_shared<string>(boost::any_cast<string>(m["BaseDN"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IsEnabled") != m.end() && !m["IsEnabled"].empty()) {
      isEnabled = make_shared<bool>(boost::any_cast<bool>(m["IsEnabled"]));
    }
    if (m.find("IsTls") != m.end() && !m["IsTls"].empty()) {
      isTls = make_shared<bool>(boost::any_cast<bool>(m["IsTls"]));
    }
    if (m.find("Password") != m.end() && !m["Password"].empty()) {
      password = make_shared<string>(boost::any_cast<string>(m["Password"]));
    }
    if (m.find("RootDN") != m.end() && !m["RootDN"].empty()) {
      rootDN = make_shared<string>(boost::any_cast<string>(m["RootDN"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ServerIp") != m.end() && !m["ServerIp"].empty()) {
      serverIp = make_shared<string>(boost::any_cast<string>(m["ServerIp"]));
    }
  }


  virtual ~SetGatewayLDAPInfoRequest() = default;
};
class SetGatewayLDAPInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  SetGatewayLDAPInfoResponseBody() {}

  explicit SetGatewayLDAPInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SetGatewayLDAPInfoResponseBody() = default;
};
class SetGatewayLDAPInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetGatewayLDAPInfoResponseBody> body{};

  SetGatewayLDAPInfoResponse() {}

  explicit SetGatewayLDAPInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetGatewayLDAPInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetGatewayLDAPInfoResponseBody>(model1);
      }
    }
  }


  virtual ~SetGatewayLDAPInfoResponse() = default;
};
class SwitchCSGClientsReverseSyncConfigurationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clientIds{};
  shared_ptr<string> clientRegionId{};
  shared_ptr<bool> isReverseSync{};
  shared_ptr<long> reverseSyncInternalSecond{};
  shared_ptr<string> securityToken{};

  SwitchCSGClientsReverseSyncConfigurationRequest() {}

  explicit SwitchCSGClientsReverseSyncConfigurationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIds) {
      res["ClientIds"] = boost::any(*clientIds);
    }
    if (clientRegionId) {
      res["ClientRegionId"] = boost::any(*clientRegionId);
    }
    if (isReverseSync) {
      res["IsReverseSync"] = boost::any(*isReverseSync);
    }
    if (reverseSyncInternalSecond) {
      res["ReverseSyncInternalSecond"] = boost::any(*reverseSyncInternalSecond);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ClientRegionId") != m.end() && !m["ClientRegionId"].empty()) {
      clientRegionId = make_shared<string>(boost::any_cast<string>(m["ClientRegionId"]));
    }
    if (m.find("IsReverseSync") != m.end() && !m["IsReverseSync"].empty()) {
      isReverseSync = make_shared<bool>(boost::any_cast<bool>(m["IsReverseSync"]));
    }
    if (m.find("ReverseSyncInternalSecond") != m.end() && !m["ReverseSyncInternalSecond"].empty()) {
      reverseSyncInternalSecond = make_shared<long>(boost::any_cast<long>(m["ReverseSyncInternalSecond"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~SwitchCSGClientsReverseSyncConfigurationRequest() = default;
};
class SwitchCSGClientsReverseSyncConfigurationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientIdsShrink{};
  shared_ptr<string> clientRegionId{};
  shared_ptr<bool> isReverseSync{};
  shared_ptr<long> reverseSyncInternalSecond{};
  shared_ptr<string> securityToken{};

  SwitchCSGClientsReverseSyncConfigurationShrinkRequest() {}

  explicit SwitchCSGClientsReverseSyncConfigurationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIdsShrink) {
      res["ClientIds"] = boost::any(*clientIdsShrink);
    }
    if (clientRegionId) {
      res["ClientRegionId"] = boost::any(*clientRegionId);
    }
    if (isReverseSync) {
      res["IsReverseSync"] = boost::any(*isReverseSync);
    }
    if (reverseSyncInternalSecond) {
      res["ReverseSyncInternalSecond"] = boost::any(*reverseSyncInternalSecond);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIds") != m.end() && !m["ClientIds"].empty()) {
      clientIdsShrink = make_shared<string>(boost::any_cast<string>(m["ClientIds"]));
    }
    if (m.find("ClientRegionId") != m.end() && !m["ClientRegionId"].empty()) {
      clientRegionId = make_shared<string>(boost::any_cast<string>(m["ClientRegionId"]));
    }
    if (m.find("IsReverseSync") != m.end() && !m["IsReverseSync"].empty()) {
      isReverseSync = make_shared<bool>(boost::any_cast<bool>(m["IsReverseSync"]));
    }
    if (m.find("ReverseSyncInternalSecond") != m.end() && !m["ReverseSyncInternalSecond"].empty()) {
      reverseSyncInternalSecond = make_shared<long>(boost::any_cast<long>(m["ReverseSyncInternalSecond"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~SwitchCSGClientsReverseSyncConfigurationShrinkRequest() = default;
};
class SwitchCSGClientsReverseSyncConfigurationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  SwitchCSGClientsReverseSyncConfigurationResponseBody() {}

  explicit SwitchCSGClientsReverseSyncConfigurationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~SwitchCSGClientsReverseSyncConfigurationResponseBody() = default;
};
class SwitchCSGClientsReverseSyncConfigurationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchCSGClientsReverseSyncConfigurationResponseBody> body{};

  SwitchCSGClientsReverseSyncConfigurationResponse() {}

  explicit SwitchCSGClientsReverseSyncConfigurationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchCSGClientsReverseSyncConfigurationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchCSGClientsReverseSyncConfigurationResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchCSGClientsReverseSyncConfigurationResponse() = default;
};
class SwitchGatewayExpirationPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  SwitchGatewayExpirationPolicyRequest() {}

  explicit SwitchGatewayExpirationPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~SwitchGatewayExpirationPolicyRequest() = default;
};
class SwitchGatewayExpirationPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SwitchGatewayExpirationPolicyResponseBody() {}

  explicit SwitchGatewayExpirationPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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


  virtual ~SwitchGatewayExpirationPolicyResponseBody() = default;
};
class SwitchGatewayExpirationPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchGatewayExpirationPolicyResponseBody> body{};

  SwitchGatewayExpirationPolicyResponse() {}

  explicit SwitchGatewayExpirationPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchGatewayExpirationPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchGatewayExpirationPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchGatewayExpirationPolicyResponse() = default;
};
class SwitchToSubscriptionRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  SwitchToSubscriptionRequest() {}

  explicit SwitchToSubscriptionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~SwitchToSubscriptionRequest() = default;
};
class SwitchToSubscriptionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> subscriptionURL{};
  shared_ptr<bool> success{};

  SwitchToSubscriptionResponseBody() {}

  explicit SwitchToSubscriptionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (subscriptionURL) {
      res["SubscriptionURL"] = boost::any(*subscriptionURL);
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
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SubscriptionURL") != m.end() && !m["SubscriptionURL"].empty()) {
      subscriptionURL = make_shared<string>(boost::any_cast<string>(m["SubscriptionURL"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~SwitchToSubscriptionResponseBody() = default;
};
class SwitchToSubscriptionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SwitchToSubscriptionResponseBody> body{};

  SwitchToSubscriptionResponse() {}

  explicit SwitchToSubscriptionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SwitchToSubscriptionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SwitchToSubscriptionResponseBody>(model1);
      }
    }
  }


  virtual ~SwitchToSubscriptionResponse() = default;
};
class TagResourcesRequestTag : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> value{};

  TagResourcesRequestTag() {}

  explicit TagResourcesRequestTag(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~TagResourcesRequestTag() = default;
};
class TagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> securityToken{};
  shared_ptr<vector<TagResourcesRequestTag>> tag{};

  TagResourcesRequest() {}

  explicit TagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tag) {
      vector<boost::any> temp1;
      for(auto item1:*tag){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tag"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      if (typeid(vector<boost::any>) == m["Tag"].type()) {
        vector<TagResourcesRequestTag> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tag"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            TagResourcesRequestTag model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tag = make_shared<vector<TagResourcesRequestTag>>(expect1);
      }
    }
  }


  virtual ~TagResourcesRequest() = default;
};
class TagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TagResourcesResponseBody() {}

  explicit TagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TagResourcesResponseBody() = default;
};
class TagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TagResourcesResponseBody> body{};

  TagResourcesResponse() {}

  explicit TagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~TagResourcesResponse() = default;
};
class TriggerGatewayRemoteSyncRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<string> path{};
  shared_ptr<string> securityToken{};

  TriggerGatewayRemoteSyncRequest() {}

  explicit TriggerGatewayRemoteSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~TriggerGatewayRemoteSyncRequest() = default;
};
class TriggerGatewayRemoteSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  TriggerGatewayRemoteSyncResponseBody() {}

  explicit TriggerGatewayRemoteSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~TriggerGatewayRemoteSyncResponseBody() = default;
};
class TriggerGatewayRemoteSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TriggerGatewayRemoteSyncResponseBody> body{};

  TriggerGatewayRemoteSyncResponse() {}

  explicit TriggerGatewayRemoteSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TriggerGatewayRemoteSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TriggerGatewayRemoteSyncResponseBody>(model1);
      }
    }
  }


  virtual ~TriggerGatewayRemoteSyncResponse() = default;
};
class UntagResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<bool> all{};
  shared_ptr<string> regionId{};
  shared_ptr<vector<string>> resourceId{};
  shared_ptr<string> resourceRegionId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> securityToken{};
  shared_ptr<vector<string>> tagKey{};

  UntagResourcesRequest() {}

  explicit UntagResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (all) {
      res["All"] = boost::any(*all);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (resourceId) {
      res["ResourceId"] = boost::any(*resourceId);
    }
    if (resourceRegionId) {
      res["ResourceRegionId"] = boost::any(*resourceRegionId);
    }
    if (resourceType) {
      res["ResourceType"] = boost::any(*resourceType);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (tagKey) {
      res["TagKey"] = boost::any(*tagKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("All") != m.end() && !m["All"].empty()) {
      all = make_shared<bool>(boost::any_cast<bool>(m["All"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ResourceId") != m.end() && !m["ResourceId"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ResourceId"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ResourceId"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resourceId = make_shared<vector<string>>(toVec1);
    }
    if (m.find("ResourceRegionId") != m.end() && !m["ResourceRegionId"].empty()) {
      resourceRegionId = make_shared<string>(boost::any_cast<string>(m["ResourceRegionId"]));
    }
    if (m.find("ResourceType") != m.end() && !m["ResourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["ResourceType"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("TagKey") != m.end() && !m["TagKey"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagKey"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagKey"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagKey = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UntagResourcesRequest() = default;
};
class UntagResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UntagResourcesResponseBody() {}

  explicit UntagResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UntagResourcesResponseBody() = default;
};
class UntagResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UntagResourcesResponseBody> body{};

  UntagResourcesResponse() {}

  explicit UntagResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UntagResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UntagResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~UntagResourcesResponse() = default;
};
class UpdateGatewayBlockVolumeRequest : public Darabonba::Model {
public:
  shared_ptr<bool> chapEnabled{};
  shared_ptr<string> chapInPassword{};
  shared_ptr<string> chapInUser{};
  shared_ptr<string> gatewayId{};
  shared_ptr<string> indexId{};
  shared_ptr<string> securityToken{};
  shared_ptr<long> size{};

  UpdateGatewayBlockVolumeRequest() {}

  explicit UpdateGatewayBlockVolumeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chapEnabled) {
      res["ChapEnabled"] = boost::any(*chapEnabled);
    }
    if (chapInPassword) {
      res["ChapInPassword"] = boost::any(*chapInPassword);
    }
    if (chapInUser) {
      res["ChapInUser"] = boost::any(*chapInUser);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChapEnabled") != m.end() && !m["ChapEnabled"].empty()) {
      chapEnabled = make_shared<bool>(boost::any_cast<bool>(m["ChapEnabled"]));
    }
    if (m.find("ChapInPassword") != m.end() && !m["ChapInPassword"].empty()) {
      chapInPassword = make_shared<string>(boost::any_cast<string>(m["ChapInPassword"]));
    }
    if (m.find("ChapInUser") != m.end() && !m["ChapInUser"].empty()) {
      chapInUser = make_shared<string>(boost::any_cast<string>(m["ChapInUser"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~UpdateGatewayBlockVolumeRequest() = default;
};
class UpdateGatewayBlockVolumeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  UpdateGatewayBlockVolumeResponseBody() {}

  explicit UpdateGatewayBlockVolumeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateGatewayBlockVolumeResponseBody() = default;
};
class UpdateGatewayBlockVolumeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGatewayBlockVolumeResponseBody> body{};

  UpdateGatewayBlockVolumeResponse() {}

  explicit UpdateGatewayBlockVolumeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGatewayBlockVolumeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayBlockVolumeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayBlockVolumeResponse() = default;
};
class UpdateGatewayFileShareRequest : public Darabonba::Model {
public:
  shared_ptr<bool> accessBasedEnumeration{};
  shared_ptr<long> backendLimit{};
  shared_ptr<bool> browsable{};
  shared_ptr<bool> bypassCacheRead{};
  shared_ptr<string> cacheMode{};
  shared_ptr<string> clientSideCmk{};
  shared_ptr<bool> clientSideEncryption{};
  shared_ptr<bool> directIO{};
  shared_ptr<long> downloadLimit{};
  shared_ptr<bool> fastReclaim{};
  shared_ptr<long> frontendLimit{};
  shared_ptr<string> gatewayId{};
  shared_ptr<bool> ignoreDelete{};
  shared_ptr<bool> inPlace{};
  shared_ptr<string> indexId{};
  shared_ptr<long> kmsRotatePeriod{};
  shared_ptr<long> lagPeriod{};
  shared_ptr<string> name{};
  shared_ptr<bool> nfsV4Optimization{};
  shared_ptr<long> pollingInterval{};
  shared_ptr<string> readOnlyClientList{};
  shared_ptr<string> readOnlyUserList{};
  shared_ptr<string> readWriteClientList{};
  shared_ptr<string> readWriteUserList{};
  shared_ptr<bool> remoteSync{};
  shared_ptr<bool> remoteSyncDownload{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> serverSideCmk{};
  shared_ptr<bool> serverSideEncryption{};
  shared_ptr<string> squash{};
  shared_ptr<bool> transferAcceleration{};
  shared_ptr<bool> windowsAcl{};

  UpdateGatewayFileShareRequest() {}

  explicit UpdateGatewayFileShareRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessBasedEnumeration) {
      res["AccessBasedEnumeration"] = boost::any(*accessBasedEnumeration);
    }
    if (backendLimit) {
      res["BackendLimit"] = boost::any(*backendLimit);
    }
    if (browsable) {
      res["Browsable"] = boost::any(*browsable);
    }
    if (bypassCacheRead) {
      res["BypassCacheRead"] = boost::any(*bypassCacheRead);
    }
    if (cacheMode) {
      res["CacheMode"] = boost::any(*cacheMode);
    }
    if (clientSideCmk) {
      res["ClientSideCmk"] = boost::any(*clientSideCmk);
    }
    if (clientSideEncryption) {
      res["ClientSideEncryption"] = boost::any(*clientSideEncryption);
    }
    if (directIO) {
      res["DirectIO"] = boost::any(*directIO);
    }
    if (downloadLimit) {
      res["DownloadLimit"] = boost::any(*downloadLimit);
    }
    if (fastReclaim) {
      res["FastReclaim"] = boost::any(*fastReclaim);
    }
    if (frontendLimit) {
      res["FrontendLimit"] = boost::any(*frontendLimit);
    }
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (ignoreDelete) {
      res["IgnoreDelete"] = boost::any(*ignoreDelete);
    }
    if (inPlace) {
      res["InPlace"] = boost::any(*inPlace);
    }
    if (indexId) {
      res["IndexId"] = boost::any(*indexId);
    }
    if (kmsRotatePeriod) {
      res["KmsRotatePeriod"] = boost::any(*kmsRotatePeriod);
    }
    if (lagPeriod) {
      res["LagPeriod"] = boost::any(*lagPeriod);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nfsV4Optimization) {
      res["NfsV4Optimization"] = boost::any(*nfsV4Optimization);
    }
    if (pollingInterval) {
      res["PollingInterval"] = boost::any(*pollingInterval);
    }
    if (readOnlyClientList) {
      res["ReadOnlyClientList"] = boost::any(*readOnlyClientList);
    }
    if (readOnlyUserList) {
      res["ReadOnlyUserList"] = boost::any(*readOnlyUserList);
    }
    if (readWriteClientList) {
      res["ReadWriteClientList"] = boost::any(*readWriteClientList);
    }
    if (readWriteUserList) {
      res["ReadWriteUserList"] = boost::any(*readWriteUserList);
    }
    if (remoteSync) {
      res["RemoteSync"] = boost::any(*remoteSync);
    }
    if (remoteSyncDownload) {
      res["RemoteSyncDownload"] = boost::any(*remoteSyncDownload);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (serverSideCmk) {
      res["ServerSideCmk"] = boost::any(*serverSideCmk);
    }
    if (serverSideEncryption) {
      res["ServerSideEncryption"] = boost::any(*serverSideEncryption);
    }
    if (squash) {
      res["Squash"] = boost::any(*squash);
    }
    if (transferAcceleration) {
      res["TransferAcceleration"] = boost::any(*transferAcceleration);
    }
    if (windowsAcl) {
      res["WindowsAcl"] = boost::any(*windowsAcl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessBasedEnumeration") != m.end() && !m["AccessBasedEnumeration"].empty()) {
      accessBasedEnumeration = make_shared<bool>(boost::any_cast<bool>(m["AccessBasedEnumeration"]));
    }
    if (m.find("BackendLimit") != m.end() && !m["BackendLimit"].empty()) {
      backendLimit = make_shared<long>(boost::any_cast<long>(m["BackendLimit"]));
    }
    if (m.find("Browsable") != m.end() && !m["Browsable"].empty()) {
      browsable = make_shared<bool>(boost::any_cast<bool>(m["Browsable"]));
    }
    if (m.find("BypassCacheRead") != m.end() && !m["BypassCacheRead"].empty()) {
      bypassCacheRead = make_shared<bool>(boost::any_cast<bool>(m["BypassCacheRead"]));
    }
    if (m.find("CacheMode") != m.end() && !m["CacheMode"].empty()) {
      cacheMode = make_shared<string>(boost::any_cast<string>(m["CacheMode"]));
    }
    if (m.find("ClientSideCmk") != m.end() && !m["ClientSideCmk"].empty()) {
      clientSideCmk = make_shared<string>(boost::any_cast<string>(m["ClientSideCmk"]));
    }
    if (m.find("ClientSideEncryption") != m.end() && !m["ClientSideEncryption"].empty()) {
      clientSideEncryption = make_shared<bool>(boost::any_cast<bool>(m["ClientSideEncryption"]));
    }
    if (m.find("DirectIO") != m.end() && !m["DirectIO"].empty()) {
      directIO = make_shared<bool>(boost::any_cast<bool>(m["DirectIO"]));
    }
    if (m.find("DownloadLimit") != m.end() && !m["DownloadLimit"].empty()) {
      downloadLimit = make_shared<long>(boost::any_cast<long>(m["DownloadLimit"]));
    }
    if (m.find("FastReclaim") != m.end() && !m["FastReclaim"].empty()) {
      fastReclaim = make_shared<bool>(boost::any_cast<bool>(m["FastReclaim"]));
    }
    if (m.find("FrontendLimit") != m.end() && !m["FrontendLimit"].empty()) {
      frontendLimit = make_shared<long>(boost::any_cast<long>(m["FrontendLimit"]));
    }
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("IgnoreDelete") != m.end() && !m["IgnoreDelete"].empty()) {
      ignoreDelete = make_shared<bool>(boost::any_cast<bool>(m["IgnoreDelete"]));
    }
    if (m.find("InPlace") != m.end() && !m["InPlace"].empty()) {
      inPlace = make_shared<bool>(boost::any_cast<bool>(m["InPlace"]));
    }
    if (m.find("IndexId") != m.end() && !m["IndexId"].empty()) {
      indexId = make_shared<string>(boost::any_cast<string>(m["IndexId"]));
    }
    if (m.find("KmsRotatePeriod") != m.end() && !m["KmsRotatePeriod"].empty()) {
      kmsRotatePeriod = make_shared<long>(boost::any_cast<long>(m["KmsRotatePeriod"]));
    }
    if (m.find("LagPeriod") != m.end() && !m["LagPeriod"].empty()) {
      lagPeriod = make_shared<long>(boost::any_cast<long>(m["LagPeriod"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NfsV4Optimization") != m.end() && !m["NfsV4Optimization"].empty()) {
      nfsV4Optimization = make_shared<bool>(boost::any_cast<bool>(m["NfsV4Optimization"]));
    }
    if (m.find("PollingInterval") != m.end() && !m["PollingInterval"].empty()) {
      pollingInterval = make_shared<long>(boost::any_cast<long>(m["PollingInterval"]));
    }
    if (m.find("ReadOnlyClientList") != m.end() && !m["ReadOnlyClientList"].empty()) {
      readOnlyClientList = make_shared<string>(boost::any_cast<string>(m["ReadOnlyClientList"]));
    }
    if (m.find("ReadOnlyUserList") != m.end() && !m["ReadOnlyUserList"].empty()) {
      readOnlyUserList = make_shared<string>(boost::any_cast<string>(m["ReadOnlyUserList"]));
    }
    if (m.find("ReadWriteClientList") != m.end() && !m["ReadWriteClientList"].empty()) {
      readWriteClientList = make_shared<string>(boost::any_cast<string>(m["ReadWriteClientList"]));
    }
    if (m.find("ReadWriteUserList") != m.end() && !m["ReadWriteUserList"].empty()) {
      readWriteUserList = make_shared<string>(boost::any_cast<string>(m["ReadWriteUserList"]));
    }
    if (m.find("RemoteSync") != m.end() && !m["RemoteSync"].empty()) {
      remoteSync = make_shared<bool>(boost::any_cast<bool>(m["RemoteSync"]));
    }
    if (m.find("RemoteSyncDownload") != m.end() && !m["RemoteSyncDownload"].empty()) {
      remoteSyncDownload = make_shared<bool>(boost::any_cast<bool>(m["RemoteSyncDownload"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("ServerSideCmk") != m.end() && !m["ServerSideCmk"].empty()) {
      serverSideCmk = make_shared<string>(boost::any_cast<string>(m["ServerSideCmk"]));
    }
    if (m.find("ServerSideEncryption") != m.end() && !m["ServerSideEncryption"].empty()) {
      serverSideEncryption = make_shared<bool>(boost::any_cast<bool>(m["ServerSideEncryption"]));
    }
    if (m.find("Squash") != m.end() && !m["Squash"].empty()) {
      squash = make_shared<string>(boost::any_cast<string>(m["Squash"]));
    }
    if (m.find("TransferAcceleration") != m.end() && !m["TransferAcceleration"].empty()) {
      transferAcceleration = make_shared<bool>(boost::any_cast<bool>(m["TransferAcceleration"]));
    }
    if (m.find("WindowsAcl") != m.end() && !m["WindowsAcl"].empty()) {
      windowsAcl = make_shared<bool>(boost::any_cast<bool>(m["WindowsAcl"]));
    }
  }


  virtual ~UpdateGatewayFileShareRequest() = default;
};
class UpdateGatewayFileShareResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  UpdateGatewayFileShareResponseBody() {}

  explicit UpdateGatewayFileShareResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpdateGatewayFileShareResponseBody() = default;
};
class UpdateGatewayFileShareResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateGatewayFileShareResponseBody> body{};

  UpdateGatewayFileShareResponse() {}

  explicit UpdateGatewayFileShareResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateGatewayFileShareResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateGatewayFileShareResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateGatewayFileShareResponse() = default;
};
class UpgradeGatewayRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};
  shared_ptr<string> securityToken{};

  UpgradeGatewayRequest() {}

  explicit UpgradeGatewayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~UpgradeGatewayRequest() = default;
};
class UpgradeGatewayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  UpgradeGatewayResponseBody() {}

  explicit UpgradeGatewayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UpgradeGatewayResponseBody() = default;
};
class UpgradeGatewayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeGatewayResponseBody> body{};

  UpgradeGatewayResponse() {}

  explicit UpgradeGatewayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeGatewayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeGatewayResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeGatewayResponse() = default;
};
class UploadCSGClientLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> clientRegionId{};
  shared_ptr<string> securityToken{};

  UploadCSGClientLogRequest() {}

  explicit UploadCSGClientLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (clientRegionId) {
      res["ClientRegionId"] = boost::any(*clientRegionId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("ClientRegionId") != m.end() && !m["ClientRegionId"].empty()) {
      clientRegionId = make_shared<string>(boost::any_cast<string>(m["ClientRegionId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~UploadCSGClientLogRequest() = default;
};
class UploadCSGClientLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  UploadCSGClientLogResponseBody() {}

  explicit UploadCSGClientLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UploadCSGClientLogResponseBody() = default;
};
class UploadCSGClientLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadCSGClientLogResponseBody> body{};

  UploadCSGClientLogResponse() {}

  explicit UploadCSGClientLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadCSGClientLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadCSGClientLogResponseBody>(model1);
      }
    }
  }


  virtual ~UploadCSGClientLogResponse() = default;
};
class UploadGatewayLogRequest : public Darabonba::Model {
public:
  shared_ptr<string> gatewayId{};

  UploadGatewayLogRequest() {}

  explicit UploadGatewayLogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gatewayId) {
      res["GatewayId"] = boost::any(*gatewayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GatewayId") != m.end() && !m["GatewayId"].empty()) {
      gatewayId = make_shared<string>(boost::any_cast<string>(m["GatewayId"]));
    }
  }


  virtual ~UploadGatewayLogRequest() = default;
};
class UploadGatewayLogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  UploadGatewayLogResponseBody() {}

  explicit UploadGatewayLogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~UploadGatewayLogResponseBody() = default;
};
class UploadGatewayLogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UploadGatewayLogResponseBody> body{};

  UploadGatewayLogResponse() {}

  explicit UploadGatewayLogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UploadGatewayLogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UploadGatewayLogResponseBody>(model1);
      }
    }
  }


  virtual ~UploadGatewayLogResponse() = default;
};
class ValidateExpressSyncConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> bucketName{};
  shared_ptr<string> bucketPrefix{};
  shared_ptr<string> bucketRegion{};
  shared_ptr<string> name{};
  shared_ptr<string> securityToken{};

  ValidateExpressSyncConfigRequest() {}

  explicit ValidateExpressSyncConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (bucketPrefix) {
      res["BucketPrefix"] = boost::any(*bucketPrefix);
    }
    if (bucketRegion) {
      res["BucketRegion"] = boost::any(*bucketRegion);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("BucketPrefix") != m.end() && !m["BucketPrefix"].empty()) {
      bucketPrefix = make_shared<string>(boost::any_cast<string>(m["BucketPrefix"]));
    }
    if (m.find("BucketRegion") != m.end() && !m["BucketRegion"].empty()) {
      bucketRegion = make_shared<string>(boost::any_cast<string>(m["BucketRegion"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~ValidateExpressSyncConfigRequest() = default;
};
class ValidateExpressSyncConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isValid{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> validateMessage{};

  ValidateExpressSyncConfigResponseBody() {}

  explicit ValidateExpressSyncConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isValid) {
      res["IsValid"] = boost::any(*isValid);
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
    if (validateMessage) {
      res["ValidateMessage"] = boost::any(*validateMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("IsValid") != m.end() && !m["IsValid"].empty()) {
      isValid = make_shared<bool>(boost::any_cast<bool>(m["IsValid"]));
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
    if (m.find("ValidateMessage") != m.end() && !m["ValidateMessage"].empty()) {
      validateMessage = make_shared<string>(boost::any_cast<string>(m["ValidateMessage"]));
    }
  }


  virtual ~ValidateExpressSyncConfigResponseBody() = default;
};
class ValidateExpressSyncConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateExpressSyncConfigResponseBody> body{};

  ValidateExpressSyncConfigResponse() {}

  explicit ValidateExpressSyncConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateExpressSyncConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateExpressSyncConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateExpressSyncConfigResponse() = default;
};
class ValidateGatewayNameRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> storageBundleId{};

  ValidateGatewayNameRequest() {}

  explicit ValidateGatewayNameRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (storageBundleId) {
      res["StorageBundleId"] = boost::any(*storageBundleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("StorageBundleId") != m.end() && !m["StorageBundleId"].empty()) {
      storageBundleId = make_shared<string>(boost::any_cast<string>(m["StorageBundleId"]));
    }
  }


  virtual ~ValidateGatewayNameRequest() = default;
};
class ValidateGatewayNameResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<bool> isValid{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ValidateGatewayNameResponseBody() {}

  explicit ValidateGatewayNameResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (isValid) {
      res["IsValid"] = boost::any(*isValid);
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
    if (m.find("IsValid") != m.end() && !m["IsValid"].empty()) {
      isValid = make_shared<bool>(boost::any_cast<bool>(m["IsValid"]));
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


  virtual ~ValidateGatewayNameResponseBody() = default;
};
class ValidateGatewayNameResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidateGatewayNameResponseBody> body{};

  ValidateGatewayNameResponse() {}

  explicit ValidateGatewayNameResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidateGatewayNameResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidateGatewayNameResponseBody>(model1);
      }
    }
  }


  virtual ~ValidateGatewayNameResponse() = default;
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
  ActivateAllInOneGatewayResponse activateAllInOneGatewayWithOptions(shared_ptr<ActivateAllInOneGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivateAllInOneGatewayResponse activateAllInOneGateway(shared_ptr<ActivateAllInOneGatewayRequest> request);
  ActivateGatewayResponse activateGatewayWithOptions(shared_ptr<ActivateGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivateGatewayResponse activateGateway(shared_ptr<ActivateGatewayRequest> request);
  AddSharesToExpressSyncResponse addSharesToExpressSyncWithOptions(shared_ptr<AddSharesToExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSharesToExpressSyncResponse addSharesToExpressSync(shared_ptr<AddSharesToExpressSyncRequest> request);
  AddTagsToGatewayResponse addTagsToGatewayWithOptions(shared_ptr<AddTagsToGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddTagsToGatewayResponse addTagsToGateway(shared_ptr<AddTagsToGatewayRequest> request);
  CheckActivationKeyResponse checkActivationKeyWithOptions(shared_ptr<CheckActivationKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckActivationKeyResponse checkActivationKey(shared_ptr<CheckActivationKeyRequest> request);
  CheckBlockVolumeNameResponse checkBlockVolumeNameWithOptions(shared_ptr<CheckBlockVolumeNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckBlockVolumeNameResponse checkBlockVolumeName(shared_ptr<CheckBlockVolumeNameRequest> request);
  CheckGatewayEssdSupportResponse checkGatewayEssdSupportWithOptions(shared_ptr<CheckGatewayEssdSupportRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckGatewayEssdSupportResponse checkGatewayEssdSupport(shared_ptr<CheckGatewayEssdSupportRequest> request);
  CheckMnsServiceResponse checkMnsServiceWithOptions(shared_ptr<CheckMnsServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckMnsServiceResponse checkMnsService(shared_ptr<CheckMnsServiceRequest> request);
  CheckRoleResponse checkRoleWithOptions(shared_ptr<CheckRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckRoleResponse checkRole(shared_ptr<CheckRoleRequest> request);
  CheckSlrRoleResponse checkSlrRoleWithOptions(shared_ptr<CheckSlrRoleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckSlrRoleResponse checkSlrRole(shared_ptr<CheckSlrRoleRequest> request);
  CheckUpgradeVersionResponse checkUpgradeVersionWithOptions(shared_ptr<CheckUpgradeVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckUpgradeVersionResponse checkUpgradeVersion(shared_ptr<CheckUpgradeVersionRequest> request);
  CreateCacheResponse createCacheWithOptions(shared_ptr<CreateCacheRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCacheResponse createCache(shared_ptr<CreateCacheRequest> request);
  CreateElasticGatewayPrivateZoneResponse createElasticGatewayPrivateZoneWithOptions(shared_ptr<CreateElasticGatewayPrivateZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateElasticGatewayPrivateZoneResponse createElasticGatewayPrivateZone(shared_ptr<CreateElasticGatewayPrivateZoneRequest> request);
  CreateExpressSyncResponse createExpressSyncWithOptions(shared_ptr<CreateExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateExpressSyncResponse createExpressSync(shared_ptr<CreateExpressSyncRequest> request);
  CreateGatewayResponse createGatewayWithOptions(shared_ptr<CreateGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayResponse createGateway(shared_ptr<CreateGatewayRequest> request);
  CreateGatewayBlockVolumeResponse createGatewayBlockVolumeWithOptions(shared_ptr<CreateGatewayBlockVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayBlockVolumeResponse createGatewayBlockVolume(shared_ptr<CreateGatewayBlockVolumeRequest> request);
  CreateGatewayCacheDiskResponse createGatewayCacheDiskWithOptions(shared_ptr<CreateGatewayCacheDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayCacheDiskResponse createGatewayCacheDisk(shared_ptr<CreateGatewayCacheDiskRequest> request);
  CreateGatewayFileShareResponse createGatewayFileShareWithOptions(shared_ptr<CreateGatewayFileShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayFileShareResponse createGatewayFileShare(shared_ptr<CreateGatewayFileShareRequest> request);
  CreateGatewayLoggingResponse createGatewayLoggingWithOptions(shared_ptr<CreateGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewayLoggingResponse createGatewayLogging(shared_ptr<CreateGatewayLoggingRequest> request);
  CreateGatewaySMBUserResponse createGatewaySMBUserWithOptions(shared_ptr<CreateGatewaySMBUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGatewaySMBUserResponse createGatewaySMBUser(shared_ptr<CreateGatewaySMBUserRequest> request);
  CreateStorageBundleResponse createStorageBundleWithOptions(shared_ptr<CreateStorageBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateStorageBundleResponse createStorageBundle(shared_ptr<CreateStorageBundleRequest> request);
  DeleteCSGClientsResponse deleteCSGClientsWithOptions(shared_ptr<DeleteCSGClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCSGClientsResponse deleteCSGClients(shared_ptr<DeleteCSGClientsRequest> request);
  DeleteElasticGatewayPrivateZoneResponse deleteElasticGatewayPrivateZoneWithOptions(shared_ptr<DeleteElasticGatewayPrivateZoneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteElasticGatewayPrivateZoneResponse deleteElasticGatewayPrivateZone(shared_ptr<DeleteElasticGatewayPrivateZoneRequest> request);
  DeleteExpressSyncResponse deleteExpressSyncWithOptions(shared_ptr<DeleteExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteExpressSyncResponse deleteExpressSync(shared_ptr<DeleteExpressSyncRequest> request);
  DeleteGatewayResponse deleteGatewayWithOptions(shared_ptr<DeleteGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayResponse deleteGateway(shared_ptr<DeleteGatewayRequest> request);
  DeleteGatewayBlockVolumesResponse deleteGatewayBlockVolumesWithOptions(shared_ptr<DeleteGatewayBlockVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayBlockVolumesResponse deleteGatewayBlockVolumes(shared_ptr<DeleteGatewayBlockVolumesRequest> request);
  DeleteGatewayCacheDiskResponse deleteGatewayCacheDiskWithOptions(shared_ptr<DeleteGatewayCacheDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayCacheDiskResponse deleteGatewayCacheDisk(shared_ptr<DeleteGatewayCacheDiskRequest> request);
  DeleteGatewayFileSharesResponse deleteGatewayFileSharesWithOptions(shared_ptr<DeleteGatewayFileSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayFileSharesResponse deleteGatewayFileShares(shared_ptr<DeleteGatewayFileSharesRequest> request);
  DeleteGatewayLoggingResponse deleteGatewayLoggingWithOptions(shared_ptr<DeleteGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewayLoggingResponse deleteGatewayLogging(shared_ptr<DeleteGatewayLoggingRequest> request);
  DeleteGatewaySMBUserResponse deleteGatewaySMBUserWithOptions(shared_ptr<DeleteGatewaySMBUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGatewaySMBUserResponse deleteGatewaySMBUser(shared_ptr<DeleteGatewaySMBUserRequest> request);
  DeleteStorageBundleResponse deleteStorageBundleWithOptions(shared_ptr<DeleteStorageBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteStorageBundleResponse deleteStorageBundle(shared_ptr<DeleteStorageBundleRequest> request);
  DeployCSGClientsResponse deployCSGClientsWithOptions(shared_ptr<DeployCSGClientsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployCSGClientsResponse deployCSGClients(shared_ptr<DeployCSGClientsRequest> request);
  DeployCacheDiskResponse deployCacheDiskWithOptions(shared_ptr<DeployCacheDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployCacheDiskResponse deployCacheDisk(shared_ptr<DeployCacheDiskRequest> request);
  DeployGatewayResponse deployGatewayWithOptions(shared_ptr<DeployGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeployGatewayResponse deployGateway(shared_ptr<DeployGatewayRequest> request);
  DescribeAccountConfigResponse describeAccountConfigWithOptions(shared_ptr<DescribeAccountConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeAccountConfigResponse describeAccountConfig(shared_ptr<DescribeAccountConfigRequest> request);
  DescribeBlockVolumeSnapshotsResponse describeBlockVolumeSnapshotsWithOptions(shared_ptr<DescribeBlockVolumeSnapshotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBlockVolumeSnapshotsResponse describeBlockVolumeSnapshots(shared_ptr<DescribeBlockVolumeSnapshotsRequest> request);
  DescribeCSGClientTasksResponse describeCSGClientTasksWithOptions(shared_ptr<DescribeCSGClientTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCSGClientTasksResponse describeCSGClientTasks(shared_ptr<DescribeCSGClientTasksRequest> request);
  DescribeCSGClientsResponse describeCSGClientsWithOptions(shared_ptr<DescribeCSGClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCSGClientsResponse describeCSGClients(shared_ptr<DescribeCSGClientsRequest> request);
  DescribeDashboardResponse describeDashboardWithOptions(shared_ptr<DescribeDashboardRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDashboardResponse describeDashboard(shared_ptr<DescribeDashboardRequest> request);
  DescribeExpireCachesResponse describeExpireCachesWithOptions(shared_ptr<DescribeExpireCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpireCachesResponse describeExpireCaches(shared_ptr<DescribeExpireCachesRequest> request);
  DescribeExpressSyncSharesResponse describeExpressSyncSharesWithOptions(shared_ptr<DescribeExpressSyncSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpressSyncSharesResponse describeExpressSyncShares(shared_ptr<DescribeExpressSyncSharesRequest> request);
  DescribeExpressSyncsResponse describeExpressSyncsWithOptions(shared_ptr<DescribeExpressSyncsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExpressSyncsResponse describeExpressSyncs(shared_ptr<DescribeExpressSyncsRequest> request);
  DescribeGatewayResponse describeGatewayWithOptions(shared_ptr<DescribeGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayResponse describeGateway(shared_ptr<DescribeGatewayRequest> request);
  DescribeGatewayADInfoResponse describeGatewayADInfoWithOptions(shared_ptr<DescribeGatewayADInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayADInfoResponse describeGatewayADInfo(shared_ptr<DescribeGatewayADInfoRequest> request);
  DescribeGatewayActionsResponse describeGatewayActionsWithOptions(shared_ptr<DescribeGatewayActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayActionsResponse describeGatewayActions(shared_ptr<DescribeGatewayActionsRequest> request);
  DescribeGatewayAuthInfoResponse describeGatewayAuthInfoWithOptions(shared_ptr<DescribeGatewayAuthInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayAuthInfoResponse describeGatewayAuthInfo(shared_ptr<DescribeGatewayAuthInfoRequest> request);
  DescribeGatewayAutoPlansResponse describeGatewayAutoPlansWithOptions(shared_ptr<DescribeGatewayAutoPlansRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayAutoPlansResponse describeGatewayAutoPlans(shared_ptr<DescribeGatewayAutoPlansRequest> request);
  DescribeGatewayAutoUpgradeConfigurationResponse describeGatewayAutoUpgradeConfigurationWithOptions(shared_ptr<DescribeGatewayAutoUpgradeConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayAutoUpgradeConfigurationResponse describeGatewayAutoUpgradeConfiguration(shared_ptr<DescribeGatewayAutoUpgradeConfigurationRequest> request);
  DescribeGatewayBlockVolumesResponse describeGatewayBlockVolumesWithOptions(shared_ptr<DescribeGatewayBlockVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayBlockVolumesResponse describeGatewayBlockVolumes(shared_ptr<DescribeGatewayBlockVolumesRequest> request);
  DescribeGatewayBucketCachesResponse describeGatewayBucketCachesWithOptions(shared_ptr<DescribeGatewayBucketCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayBucketCachesResponse describeGatewayBucketCaches(shared_ptr<DescribeGatewayBucketCachesRequest> request);
  DescribeGatewayCachesResponse describeGatewayCachesWithOptions(shared_ptr<DescribeGatewayCachesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayCachesResponse describeGatewayCaches(shared_ptr<DescribeGatewayCachesRequest> request);
  DescribeGatewayCapacityLimitResponse describeGatewayCapacityLimitWithOptions(shared_ptr<DescribeGatewayCapacityLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayCapacityLimitResponse describeGatewayCapacityLimit(shared_ptr<DescribeGatewayCapacityLimitRequest> request);
  DescribeGatewayCategoriesResponse describeGatewayCategoriesWithOptions(shared_ptr<DescribeGatewayCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayCategoriesResponse describeGatewayCategories(shared_ptr<DescribeGatewayCategoriesRequest> request);
  DescribeGatewayClassesResponse describeGatewayClassesWithOptions(shared_ptr<DescribeGatewayClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayClassesResponse describeGatewayClasses(shared_ptr<DescribeGatewayClassesRequest> request);
  DescribeGatewayCredentialResponse describeGatewayCredentialWithOptions(shared_ptr<DescribeGatewayCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayCredentialResponse describeGatewayCredential(shared_ptr<DescribeGatewayCredentialRequest> request);
  DescribeGatewayDNSResponse describeGatewayDNSWithOptions(shared_ptr<DescribeGatewayDNSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayDNSResponse describeGatewayDNS(shared_ptr<DescribeGatewayDNSRequest> request);
  DescribeGatewayFileSharesResponse describeGatewayFileSharesWithOptions(shared_ptr<DescribeGatewayFileSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayFileSharesResponse describeGatewayFileShares(shared_ptr<DescribeGatewayFileSharesRequest> request);
  DescribeGatewayFileStatusResponse describeGatewayFileStatusWithOptions(shared_ptr<DescribeGatewayFileStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayFileStatusResponse describeGatewayFileStatus(shared_ptr<DescribeGatewayFileStatusRequest> request);
  DescribeGatewayImagesResponse describeGatewayImagesWithOptions(shared_ptr<DescribeGatewayImagesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayImagesResponse describeGatewayImages(shared_ptr<DescribeGatewayImagesRequest> request);
  DescribeGatewayInfoResponse describeGatewayInfoWithOptions(shared_ptr<DescribeGatewayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayInfoResponse describeGatewayInfo(shared_ptr<DescribeGatewayInfoRequest> request);
  DescribeGatewayLDAPInfoResponse describeGatewayLDAPInfoWithOptions(shared_ptr<DescribeGatewayLDAPInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayLDAPInfoResponse describeGatewayLDAPInfo(shared_ptr<DescribeGatewayLDAPInfoRequest> request);
  DescribeGatewayLocationsResponse describeGatewayLocationsWithOptions(shared_ptr<DescribeGatewayLocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayLocationsResponse describeGatewayLocations(shared_ptr<DescribeGatewayLocationsRequest> request);
  DescribeGatewayLoggingResponse describeGatewayLoggingWithOptions(shared_ptr<DescribeGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayLoggingResponse describeGatewayLogging(shared_ptr<DescribeGatewayLoggingRequest> request);
  DescribeGatewayLogsResponse describeGatewayLogsWithOptions(shared_ptr<DescribeGatewayLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayLogsResponse describeGatewayLogs(shared_ptr<DescribeGatewayLogsRequest> request);
  DescribeGatewayModificationClassesResponse describeGatewayModificationClassesWithOptions(shared_ptr<DescribeGatewayModificationClassesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayModificationClassesResponse describeGatewayModificationClasses(shared_ptr<DescribeGatewayModificationClassesRequest> request);
  DescribeGatewayNFSClientsResponse describeGatewayNFSClientsWithOptions(shared_ptr<DescribeGatewayNFSClientsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayNFSClientsResponse describeGatewayNFSClients(shared_ptr<DescribeGatewayNFSClientsRequest> request);
  DescribeGatewaySMBUsersResponse describeGatewaySMBUsersWithOptions(shared_ptr<DescribeGatewaySMBUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewaySMBUsersResponse describeGatewaySMBUsers(shared_ptr<DescribeGatewaySMBUsersRequest> request);
  DescribeGatewayStatisticsResponse describeGatewayStatisticsWithOptions(shared_ptr<DescribeGatewayStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayStatisticsResponse describeGatewayStatistics(shared_ptr<DescribeGatewayStatisticsRequest> request);
  DescribeGatewayStockResponse describeGatewayStockWithOptions(shared_ptr<DescribeGatewayStockRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayStockResponse describeGatewayStock(shared_ptr<DescribeGatewayStockRequest> request);
  DescribeGatewayTypesResponse describeGatewayTypesWithOptions(shared_ptr<DescribeGatewayTypesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewayTypesResponse describeGatewayTypes(shared_ptr<DescribeGatewayTypesRequest> request);
  DescribeGatewaysResponse describeGatewaysWithOptions(shared_ptr<DescribeGatewaysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewaysResponse describeGateways(shared_ptr<DescribeGatewaysRequest> request);
  DescribeGatewaysForCmsResponse describeGatewaysForCmsWithOptions(shared_ptr<DescribeGatewaysForCmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewaysForCmsResponse describeGatewaysForCms(shared_ptr<DescribeGatewaysForCmsRequest> request);
  DescribeGatewaysTagsResponse describeGatewaysTagsWithOptions(shared_ptr<DescribeGatewaysTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeGatewaysTagsResponse describeGatewaysTags(shared_ptr<DescribeGatewaysTagsRequest> request);
  DescribeKmsKeyResponse describeKmsKeyWithOptions(shared_ptr<DescribeKmsKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeKmsKeyResponse describeKmsKey(shared_ptr<DescribeKmsKeyRequest> request);
  DescribeMqttConfigResponse describeMqttConfigWithOptions(shared_ptr<DescribeMqttConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeMqttConfigResponse describeMqttConfig(shared_ptr<DescribeMqttConfigRequest> request);
  DescribeOssBucketInfoResponse describeOssBucketInfoWithOptions(shared_ptr<DescribeOssBucketInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssBucketInfoResponse describeOssBucketInfo(shared_ptr<DescribeOssBucketInfoRequest> request);
  DescribeOssBucketsResponse describeOssBucketsWithOptions(shared_ptr<DescribeOssBucketsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeOssBucketsResponse describeOssBuckets(shared_ptr<DescribeOssBucketsRequest> request);
  DescribePayAsYouGoPriceResponse describePayAsYouGoPriceWithOptions(shared_ptr<DescribePayAsYouGoPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePayAsYouGoPriceResponse describePayAsYouGoPrice(shared_ptr<DescribePayAsYouGoPriceRequest> request);
  DescribeRegionsResponse describeRegionsWithOptions(shared_ptr<DescribeRegionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRegionsResponse describeRegions(shared_ptr<DescribeRegionsRequest> request);
  DescribeSharesBucketInfoForExpressSyncResponse describeSharesBucketInfoForExpressSyncWithOptions(shared_ptr<DescribeSharesBucketInfoForExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSharesBucketInfoForExpressSyncResponse describeSharesBucketInfoForExpressSync(shared_ptr<DescribeSharesBucketInfoForExpressSyncRequest> request);
  DescribeStorageBundleResponse describeStorageBundleWithOptions(shared_ptr<DescribeStorageBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStorageBundleResponse describeStorageBundle(shared_ptr<DescribeStorageBundleRequest> request);
  DescribeStorageBundlesResponse describeStorageBundlesWithOptions(shared_ptr<DescribeStorageBundlesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStorageBundlesResponse describeStorageBundles(shared_ptr<DescribeStorageBundlesRequest> request);
  DescribeSubscriptionPriceResponse describeSubscriptionPriceWithOptions(shared_ptr<DescribeSubscriptionPriceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeSubscriptionPriceResponse describeSubscriptionPrice(shared_ptr<DescribeSubscriptionPriceRequest> request);
  DescribeTasksResponse describeTasksWithOptions(shared_ptr<DescribeTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTasksResponse describeTasks(shared_ptr<DescribeTasksRequest> request);
  DescribeUserBusinessStatusResponse describeUserBusinessStatusWithOptions(shared_ptr<DescribeUserBusinessStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeUserBusinessStatusResponse describeUserBusinessStatus(shared_ptr<DescribeUserBusinessStatusRequest> request);
  DescribeVSwitchesResponse describeVSwitchesWithOptions(shared_ptr<DescribeVSwitchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVSwitchesResponse describeVSwitches(shared_ptr<DescribeVSwitchesRequest> request);
  DescribeVpcsResponse describeVpcsWithOptions(shared_ptr<DescribeVpcsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeVpcsResponse describeVpcs(shared_ptr<DescribeVpcsRequest> request);
  DescribeZonesResponse describeZonesWithOptions(shared_ptr<DescribeZonesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeZonesResponse describeZones(shared_ptr<DescribeZonesRequest> request);
  DisableGatewayLoggingResponse disableGatewayLoggingWithOptions(shared_ptr<DisableGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableGatewayLoggingResponse disableGatewayLogging(shared_ptr<DisableGatewayLoggingRequest> request);
  DisableGatewayNFSVersionResponse disableGatewayNFSVersionWithOptions(shared_ptr<DisableGatewayNFSVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableGatewayNFSVersionResponse disableGatewayNFSVersion(shared_ptr<DisableGatewayNFSVersionRequest> request);
  EnableGatewayIpv6Response enableGatewayIpv6WithOptions(shared_ptr<EnableGatewayIpv6Request> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableGatewayIpv6Response enableGatewayIpv6(shared_ptr<EnableGatewayIpv6Request> request);
  EnableGatewayLoggingResponse enableGatewayLoggingWithOptions(shared_ptr<EnableGatewayLoggingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableGatewayLoggingResponse enableGatewayLogging(shared_ptr<EnableGatewayLoggingRequest> request);
  ExpandCacheDiskResponse expandCacheDiskWithOptions(shared_ptr<ExpandCacheDiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExpandCacheDiskResponse expandCacheDisk(shared_ptr<ExpandCacheDiskRequest> request);
  ExpandGatewayFileShareResponse expandGatewayFileShareWithOptions(shared_ptr<ExpandGatewayFileShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExpandGatewayFileShareResponse expandGatewayFileShare(shared_ptr<ExpandGatewayFileShareRequest> request);
  ExpandGatewayNetworkBandwidthResponse expandGatewayNetworkBandwidthWithOptions(shared_ptr<ExpandGatewayNetworkBandwidthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExpandGatewayNetworkBandwidthResponse expandGatewayNetworkBandwidth(shared_ptr<ExpandGatewayNetworkBandwidthRequest> request);
  GenerateGatewayTokenResponse generateGatewayTokenWithOptions(shared_ptr<GenerateGatewayTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateGatewayTokenResponse generateGatewayToken(shared_ptr<GenerateGatewayTokenRequest> request);
  GenerateMqttTokenResponse generateMqttTokenWithOptions(shared_ptr<GenerateMqttTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateMqttTokenResponse generateMqttToken(shared_ptr<GenerateMqttTokenRequest> request);
  GenerateStsTokenResponse generateStsTokenWithOptions(shared_ptr<GenerateStsTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateStsTokenResponse generateStsToken(shared_ptr<GenerateStsTokenRequest> request);
  HandleGatewayAutoPlanResponse handleGatewayAutoPlanWithOptions(shared_ptr<HandleGatewayAutoPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  HandleGatewayAutoPlanResponse handleGatewayAutoPlan(shared_ptr<HandleGatewayAutoPlanRequest> request);
  ListTagResourcesResponse listTagResourcesWithOptions(shared_ptr<ListTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTagResourcesResponse listTagResources(shared_ptr<ListTagResourcesRequest> request);
  ModifyGatewayResponse modifyGatewayWithOptions(shared_ptr<ModifyGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGatewayResponse modifyGateway(shared_ptr<ModifyGatewayRequest> request);
  ModifyGatewayBlockVolumeResponse modifyGatewayBlockVolumeWithOptions(shared_ptr<ModifyGatewayBlockVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGatewayBlockVolumeResponse modifyGatewayBlockVolume(shared_ptr<ModifyGatewayBlockVolumeRequest> request);
  ModifyGatewayClassResponse modifyGatewayClassWithOptions(shared_ptr<ModifyGatewayClassRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGatewayClassResponse modifyGatewayClass(shared_ptr<ModifyGatewayClassRequest> request);
  ModifyGatewayFileShareResponse modifyGatewayFileShareWithOptions(shared_ptr<ModifyGatewayFileShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGatewayFileShareResponse modifyGatewayFileShare(shared_ptr<ModifyGatewayFileShareRequest> request);
  ModifyGatewayFileShareWatermarkResponse modifyGatewayFileShareWatermarkWithOptions(shared_ptr<ModifyGatewayFileShareWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGatewayFileShareWatermarkResponse modifyGatewayFileShareWatermark(shared_ptr<ModifyGatewayFileShareWatermarkRequest> request);
  ModifyStorageBundleResponse modifyStorageBundleWithOptions(shared_ptr<ModifyStorageBundleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyStorageBundleResponse modifyStorageBundle(shared_ptr<ModifyStorageBundleRequest> request);
  OpenSgwServiceResponse openSgwServiceWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OpenSgwServiceResponse openSgwService();
  OperateGatewayResponse operateGatewayWithOptions(shared_ptr<OperateGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  OperateGatewayResponse operateGateway(shared_ptr<OperateGatewayRequest> request);
  ReleaseServiceResponse releaseServiceWithOptions(shared_ptr<ReleaseServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReleaseServiceResponse releaseService(shared_ptr<ReleaseServiceRequest> request);
  RemoveSharesFromExpressSyncResponse removeSharesFromExpressSyncWithOptions(shared_ptr<RemoveSharesFromExpressSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveSharesFromExpressSyncResponse removeSharesFromExpressSync(shared_ptr<RemoveSharesFromExpressSyncRequest> request);
  RemoveTagsFromGatewayResponse removeTagsFromGatewayWithOptions(shared_ptr<RemoveTagsFromGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveTagsFromGatewayResponse removeTagsFromGateway(shared_ptr<RemoveTagsFromGatewayRequest> request);
  ReportBlockVolumesResponse reportBlockVolumesWithOptions(shared_ptr<ReportBlockVolumesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportBlockVolumesResponse reportBlockVolumes(shared_ptr<ReportBlockVolumesRequest> request);
  ReportFileSharesResponse reportFileSharesWithOptions(shared_ptr<ReportFileSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportFileSharesResponse reportFileShares(shared_ptr<ReportFileSharesRequest> request);
  ReportGatewayInfoResponse reportGatewayInfoWithOptions(shared_ptr<ReportGatewayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportGatewayInfoResponse reportGatewayInfo(shared_ptr<ReportGatewayInfoRequest> request);
  ReportGatewayUsageResponse reportGatewayUsageWithOptions(shared_ptr<ReportGatewayUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ReportGatewayUsageResponse reportGatewayUsage(shared_ptr<ReportGatewayUsageRequest> request);
  ResetGatewayPasswordResponse resetGatewayPasswordWithOptions(shared_ptr<ResetGatewayPasswordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetGatewayPasswordResponse resetGatewayPassword(shared_ptr<ResetGatewayPasswordRequest> request);
  RestartFileSharesResponse restartFileSharesWithOptions(shared_ptr<RestartFileSharesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RestartFileSharesResponse restartFileShares(shared_ptr<RestartFileSharesRequest> request);
  SetGatewayADInfoResponse setGatewayADInfoWithOptions(shared_ptr<SetGatewayADInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGatewayADInfoResponse setGatewayADInfo(shared_ptr<SetGatewayADInfoRequest> request);
  SetGatewayAutoUpgradeConfigurationResponse setGatewayAutoUpgradeConfigurationWithOptions(shared_ptr<SetGatewayAutoUpgradeConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGatewayAutoUpgradeConfigurationResponse setGatewayAutoUpgradeConfiguration(shared_ptr<SetGatewayAutoUpgradeConfigurationRequest> request);
  SetGatewayDNSResponse setGatewayDNSWithOptions(shared_ptr<SetGatewayDNSRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGatewayDNSResponse setGatewayDNS(shared_ptr<SetGatewayDNSRequest> request);
  SetGatewayLDAPInfoResponse setGatewayLDAPInfoWithOptions(shared_ptr<SetGatewayLDAPInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetGatewayLDAPInfoResponse setGatewayLDAPInfo(shared_ptr<SetGatewayLDAPInfoRequest> request);
  SwitchCSGClientsReverseSyncConfigurationResponse switchCSGClientsReverseSyncConfigurationWithOptions(shared_ptr<SwitchCSGClientsReverseSyncConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchCSGClientsReverseSyncConfigurationResponse switchCSGClientsReverseSyncConfiguration(shared_ptr<SwitchCSGClientsReverseSyncConfigurationRequest> request);
  SwitchGatewayExpirationPolicyResponse switchGatewayExpirationPolicyWithOptions(shared_ptr<SwitchGatewayExpirationPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchGatewayExpirationPolicyResponse switchGatewayExpirationPolicy(shared_ptr<SwitchGatewayExpirationPolicyRequest> request);
  SwitchToSubscriptionResponse switchToSubscriptionWithOptions(shared_ptr<SwitchToSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SwitchToSubscriptionResponse switchToSubscription(shared_ptr<SwitchToSubscriptionRequest> request);
  TagResourcesResponse tagResourcesWithOptions(shared_ptr<TagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TagResourcesResponse tagResources(shared_ptr<TagResourcesRequest> request);
  TriggerGatewayRemoteSyncResponse triggerGatewayRemoteSyncWithOptions(shared_ptr<TriggerGatewayRemoteSyncRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TriggerGatewayRemoteSyncResponse triggerGatewayRemoteSync(shared_ptr<TriggerGatewayRemoteSyncRequest> request);
  UntagResourcesResponse untagResourcesWithOptions(shared_ptr<UntagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UntagResourcesResponse untagResources(shared_ptr<UntagResourcesRequest> request);
  UpdateGatewayBlockVolumeResponse updateGatewayBlockVolumeWithOptions(shared_ptr<UpdateGatewayBlockVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayBlockVolumeResponse updateGatewayBlockVolume(shared_ptr<UpdateGatewayBlockVolumeRequest> request);
  UpdateGatewayFileShareResponse updateGatewayFileShareWithOptions(shared_ptr<UpdateGatewayFileShareRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateGatewayFileShareResponse updateGatewayFileShare(shared_ptr<UpdateGatewayFileShareRequest> request);
  UpgradeGatewayResponse upgradeGatewayWithOptions(shared_ptr<UpgradeGatewayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeGatewayResponse upgradeGateway(shared_ptr<UpgradeGatewayRequest> request);
  UploadCSGClientLogResponse uploadCSGClientLogWithOptions(shared_ptr<UploadCSGClientLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadCSGClientLogResponse uploadCSGClientLog(shared_ptr<UploadCSGClientLogRequest> request);
  UploadGatewayLogResponse uploadGatewayLogWithOptions(shared_ptr<UploadGatewayLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UploadGatewayLogResponse uploadGatewayLog(shared_ptr<UploadGatewayLogRequest> request);
  ValidateExpressSyncConfigResponse validateExpressSyncConfigWithOptions(shared_ptr<ValidateExpressSyncConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateExpressSyncConfigResponse validateExpressSyncConfig(shared_ptr<ValidateExpressSyncConfigRequest> request);
  ValidateGatewayNameResponse validateGatewayNameWithOptions(shared_ptr<ValidateGatewayNameRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidateGatewayNameResponse validateGatewayName(shared_ptr<ValidateGatewayNameRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Sgw20180511

#endif
