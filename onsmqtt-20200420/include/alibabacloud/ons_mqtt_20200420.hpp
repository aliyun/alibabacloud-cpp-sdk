// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_ONSMQTT20200420_H_
#define ALIBABACLOUD_ONSMQTT20200420_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_OnsMqtt20200420 {
class ActiveCaCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> sn{};

  ActiveCaCertificateRequest() {}

  explicit ActiveCaCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~ActiveCaCertificateRequest() = default;
};
class ActiveCaCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sn{};

  ActiveCaCertificateResponseBody() {}

  explicit ActiveCaCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~ActiveCaCertificateResponseBody() = default;
};
class ActiveCaCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActiveCaCertificateResponseBody> body{};

  ActiveCaCertificateResponse() {}

  explicit ActiveCaCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActiveCaCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActiveCaCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~ActiveCaCertificateResponse() = default;
};
class ActiveDeviceCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> caSn{};
  shared_ptr<string> deviceSn{};
  shared_ptr<string> mqttInstanceId{};

  ActiveDeviceCertificateRequest() {}

  explicit ActiveDeviceCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caSn) {
      res["CaSn"] = boost::any(*caSn);
    }
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaSn") != m.end() && !m["CaSn"].empty()) {
      caSn = make_shared<string>(boost::any_cast<string>(m["CaSn"]));
    }
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
  }


  virtual ~ActiveDeviceCertificateRequest() = default;
};
class ActiveDeviceCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deviceSn{};
  shared_ptr<string> requestId{};

  ActiveDeviceCertificateResponseBody() {}

  explicit ActiveDeviceCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ActiveDeviceCertificateResponseBody() = default;
};
class ActiveDeviceCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActiveDeviceCertificateResponseBody> body{};

  ActiveDeviceCertificateResponse() {}

  explicit ActiveDeviceCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActiveDeviceCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActiveDeviceCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~ActiveDeviceCertificateResponse() = default;
};
class ApplyTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> actions{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> resources{};

  ApplyTokenRequest() {}

  explicit ApplyTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      res["Actions"] = boost::any(*actions);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (resources) {
      res["Resources"] = boost::any(*resources);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Actions") != m.end() && !m["Actions"].empty()) {
      actions = make_shared<string>(boost::any_cast<string>(m["Actions"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Resources") != m.end() && !m["Resources"].empty()) {
      resources = make_shared<string>(boost::any_cast<string>(m["Resources"]));
    }
  }


  virtual ~ApplyTokenRequest() = default;
};
class ApplyTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> token{};

  ApplyTokenResponseBody() {}

  explicit ApplyTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~ApplyTokenResponseBody() = default;
};
class ApplyTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ApplyTokenResponseBody> body{};

  ApplyTokenResponse() {}

  explicit ApplyTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ApplyTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ApplyTokenResponseBody>(model1);
      }
    }
  }


  virtual ~ApplyTokenResponse() = default;
};
class BatchQuerySessionByClientIdsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clientIdList{};
  shared_ptr<string> instanceId{};

  BatchQuerySessionByClientIdsRequest() {}

  explicit BatchQuerySessionByClientIdsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIdList) {
      res["ClientIdList"] = boost::any(*clientIdList);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientIdList") != m.end() && !m["ClientIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~BatchQuerySessionByClientIdsRequest() = default;
};
class BatchQuerySessionByClientIdsResponseBodyOnlineStatusList : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<bool> onlineStatus{};

  BatchQuerySessionByClientIdsResponseBodyOnlineStatusList() {}

  explicit BatchQuerySessionByClientIdsResponseBodyOnlineStatusList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (onlineStatus) {
      res["OnlineStatus"] = boost::any(*onlineStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("OnlineStatus") != m.end() && !m["OnlineStatus"].empty()) {
      onlineStatus = make_shared<bool>(boost::any_cast<bool>(m["OnlineStatus"]));
    }
  }


  virtual ~BatchQuerySessionByClientIdsResponseBodyOnlineStatusList() = default;
};
class BatchQuerySessionByClientIdsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<BatchQuerySessionByClientIdsResponseBodyOnlineStatusList>> onlineStatusList{};
  shared_ptr<string> requestId{};

  BatchQuerySessionByClientIdsResponseBody() {}

  explicit BatchQuerySessionByClientIdsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onlineStatusList) {
      vector<boost::any> temp1;
      for(auto item1:*onlineStatusList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["OnlineStatusList"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnlineStatusList") != m.end() && !m["OnlineStatusList"].empty()) {
      if (typeid(vector<boost::any>) == m["OnlineStatusList"].type()) {
        vector<BatchQuerySessionByClientIdsResponseBodyOnlineStatusList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["OnlineStatusList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchQuerySessionByClientIdsResponseBodyOnlineStatusList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        onlineStatusList = make_shared<vector<BatchQuerySessionByClientIdsResponseBodyOnlineStatusList>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BatchQuerySessionByClientIdsResponseBody() = default;
};
class BatchQuerySessionByClientIdsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchQuerySessionByClientIdsResponseBody> body{};

  BatchQuerySessionByClientIdsResponse() {}

  explicit BatchQuerySessionByClientIdsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchQuerySessionByClientIdsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchQuerySessionByClientIdsResponseBody>(model1);
      }
    }
  }


  virtual ~BatchQuerySessionByClientIdsResponse() = default;
};
class CreateGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  CreateGroupIdRequest() {}

  explicit CreateGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateGroupIdRequest() = default;
};
class CreateGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  CreateGroupIdResponseBody() {}

  explicit CreateGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateGroupIdResponseBody() = default;
};
class CreateGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateGroupIdResponseBody> body{};

  CreateGroupIdResponse() {}

  explicit CreateGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~CreateGroupIdResponse() = default;
};
class DeleteCaCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> sn{};

  DeleteCaCertificateRequest() {}

  explicit DeleteCaCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~DeleteCaCertificateRequest() = default;
};
class DeleteCaCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sn{};

  DeleteCaCertificateResponseBody() {}

  explicit DeleteCaCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~DeleteCaCertificateResponseBody() = default;
};
class DeleteCaCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCaCertificateResponseBody> body{};

  DeleteCaCertificateResponse() {}

  explicit DeleteCaCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCaCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCaCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCaCertificateResponse() = default;
};
class DeleteDeviceCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> caSn{};
  shared_ptr<string> deviceSn{};
  shared_ptr<string> mqttInstanceId{};

  DeleteDeviceCertificateRequest() {}

  explicit DeleteDeviceCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caSn) {
      res["CaSn"] = boost::any(*caSn);
    }
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaSn") != m.end() && !m["CaSn"].empty()) {
      caSn = make_shared<string>(boost::any_cast<string>(m["CaSn"]));
    }
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
  }


  virtual ~DeleteDeviceCertificateRequest() = default;
};
class DeleteDeviceCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deviceSn{};
  shared_ptr<string> requestId{};

  DeleteDeviceCertificateResponseBody() {}

  explicit DeleteDeviceCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDeviceCertificateResponseBody() = default;
};
class DeleteDeviceCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDeviceCertificateResponseBody> body{};

  DeleteDeviceCertificateResponse() {}

  explicit DeleteDeviceCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDeviceCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDeviceCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDeviceCertificateResponse() = default;
};
class DeleteGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};

  DeleteGroupIdRequest() {}

  explicit DeleteGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteGroupIdRequest() = default;
};
class DeleteGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteGroupIdResponseBody() {}

  explicit DeleteGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteGroupIdResponseBody() = default;
};
class DeleteGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteGroupIdResponseBody> body{};

  DeleteGroupIdResponse() {}

  explicit DeleteGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteGroupIdResponse() = default;
};
class GetCaCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> sn{};

  GetCaCertificateRequest() {}

  explicit GetCaCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~GetCaCertificateRequest() = default;
};
class GetCaCertificateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> caContent{};
  shared_ptr<string> caName{};
  shared_ptr<string> registrationCode{};
  shared_ptr<string> sn{};
  shared_ptr<string> status{};
  shared_ptr<string> validBegin{};
  shared_ptr<string> validEnd{};
  shared_ptr<string> verificationContent{};

  GetCaCertificateResponseBodyData() {}

  explicit GetCaCertificateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caContent) {
      res["CaContent"] = boost::any(*caContent);
    }
    if (caName) {
      res["CaName"] = boost::any(*caName);
    }
    if (registrationCode) {
      res["RegistrationCode"] = boost::any(*registrationCode);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (validBegin) {
      res["ValidBegin"] = boost::any(*validBegin);
    }
    if (validEnd) {
      res["ValidEnd"] = boost::any(*validEnd);
    }
    if (verificationContent) {
      res["VerificationContent"] = boost::any(*verificationContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaContent") != m.end() && !m["CaContent"].empty()) {
      caContent = make_shared<string>(boost::any_cast<string>(m["CaContent"]));
    }
    if (m.find("CaName") != m.end() && !m["CaName"].empty()) {
      caName = make_shared<string>(boost::any_cast<string>(m["CaName"]));
    }
    if (m.find("RegistrationCode") != m.end() && !m["RegistrationCode"].empty()) {
      registrationCode = make_shared<string>(boost::any_cast<string>(m["RegistrationCode"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ValidBegin") != m.end() && !m["ValidBegin"].empty()) {
      validBegin = make_shared<string>(boost::any_cast<string>(m["ValidBegin"]));
    }
    if (m.find("ValidEnd") != m.end() && !m["ValidEnd"].empty()) {
      validEnd = make_shared<string>(boost::any_cast<string>(m["ValidEnd"]));
    }
    if (m.find("VerificationContent") != m.end() && !m["VerificationContent"].empty()) {
      verificationContent = make_shared<string>(boost::any_cast<string>(m["VerificationContent"]));
    }
  }


  virtual ~GetCaCertificateResponseBodyData() = default;
};
class GetCaCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetCaCertificateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetCaCertificateResponseBody() {}

  explicit GetCaCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetCaCertificateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetCaCertificateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetCaCertificateResponseBody() = default;
};
class GetCaCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetCaCertificateResponseBody> body{};

  GetCaCertificateResponse() {}

  explicit GetCaCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetCaCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetCaCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~GetCaCertificateResponse() = default;
};
class GetDeviceCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> caSn{};
  shared_ptr<string> deviceSn{};
  shared_ptr<string> mqttInstanceId{};

  GetDeviceCertificateRequest() {}

  explicit GetDeviceCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caSn) {
      res["CaSn"] = boost::any(*caSn);
    }
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaSn") != m.end() && !m["CaSn"].empty()) {
      caSn = make_shared<string>(boost::any_cast<string>(m["CaSn"]));
    }
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
  }


  virtual ~GetDeviceCertificateRequest() = default;
};
class GetDeviceCertificateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> caSn{};
  shared_ptr<string> deviceContent{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceSn{};
  shared_ptr<string> status{};
  shared_ptr<string> validBegin{};
  shared_ptr<string> validEnd{};

  GetDeviceCertificateResponseBodyData() {}

  explicit GetDeviceCertificateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caSn) {
      res["CaSn"] = boost::any(*caSn);
    }
    if (deviceContent) {
      res["DeviceContent"] = boost::any(*deviceContent);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (validBegin) {
      res["ValidBegin"] = boost::any(*validBegin);
    }
    if (validEnd) {
      res["ValidEnd"] = boost::any(*validEnd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaSn") != m.end() && !m["CaSn"].empty()) {
      caSn = make_shared<string>(boost::any_cast<string>(m["CaSn"]));
    }
    if (m.find("DeviceContent") != m.end() && !m["DeviceContent"].empty()) {
      deviceContent = make_shared<string>(boost::any_cast<string>(m["DeviceContent"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ValidBegin") != m.end() && !m["ValidBegin"].empty()) {
      validBegin = make_shared<string>(boost::any_cast<string>(m["ValidBegin"]));
    }
    if (m.find("ValidEnd") != m.end() && !m["ValidEnd"].empty()) {
      validEnd = make_shared<string>(boost::any_cast<string>(m["ValidEnd"]));
    }
  }


  virtual ~GetDeviceCertificateResponseBodyData() = default;
};
class GetDeviceCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDeviceCertificateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  GetDeviceCertificateResponseBody() {}

  explicit GetDeviceCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetDeviceCertificateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetDeviceCertificateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeviceCertificateResponseBody() = default;
};
class GetDeviceCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceCertificateResponseBody> body{};

  GetDeviceCertificateResponse() {}

  explicit GetDeviceCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceCertificateResponse() = default;
};
class GetDeviceCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  GetDeviceCredentialRequest() {}

  explicit GetDeviceCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetDeviceCredentialRequest() = default;
};
class GetDeviceCredentialResponseBodyDeviceCredential : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> deviceAccessKeyId{};
  shared_ptr<string> deviceAccessKeySecret{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> updateTime{};

  GetDeviceCredentialResponseBodyDeviceCredential() {}

  explicit GetDeviceCredentialResponseBodyDeviceCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deviceAccessKeyId) {
      res["DeviceAccessKeyId"] = boost::any(*deviceAccessKeyId);
    }
    if (deviceAccessKeySecret) {
      res["DeviceAccessKeySecret"] = boost::any(*deviceAccessKeySecret);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DeviceAccessKeyId") != m.end() && !m["DeviceAccessKeyId"].empty()) {
      deviceAccessKeyId = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeyId"]));
    }
    if (m.find("DeviceAccessKeySecret") != m.end() && !m["DeviceAccessKeySecret"].empty()) {
      deviceAccessKeySecret = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeySecret"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~GetDeviceCredentialResponseBodyDeviceCredential() = default;
};
class GetDeviceCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetDeviceCredentialResponseBodyDeviceCredential> deviceCredential{};
  shared_ptr<string> requestId{};

  GetDeviceCredentialResponseBody() {}

  explicit GetDeviceCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCredential) {
      res["DeviceCredential"] = deviceCredential ? boost::any(deviceCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceCredential") != m.end() && !m["DeviceCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceCredential"].type()) {
        GetDeviceCredentialResponseBodyDeviceCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceCredential"]));
        deviceCredential = make_shared<GetDeviceCredentialResponseBodyDeviceCredential>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetDeviceCredentialResponseBody() = default;
};
class GetDeviceCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDeviceCredentialResponseBody> body{};

  GetDeviceCredentialResponse() {}

  explicit GetDeviceCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDeviceCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDeviceCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~GetDeviceCredentialResponse() = default;
};
class GetRegisterCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> mqttInstanceId{};

  GetRegisterCodeRequest() {}

  explicit GetRegisterCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
  }


  virtual ~GetRegisterCodeRequest() = default;
};
class GetRegisterCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> registerCode{};
  shared_ptr<string> requestId{};

  GetRegisterCodeResponseBody() {}

  explicit GetRegisterCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (registerCode) {
      res["RegisterCode"] = boost::any(*registerCode);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegisterCode") != m.end() && !m["RegisterCode"].empty()) {
      registerCode = make_shared<string>(boost::any_cast<string>(m["RegisterCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetRegisterCodeResponseBody() = default;
};
class GetRegisterCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRegisterCodeResponseBody> body{};

  GetRegisterCodeResponse() {}

  explicit GetRegisterCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRegisterCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRegisterCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetRegisterCodeResponse() = default;
};
class InactivateCaCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> sn{};

  InactivateCaCertificateRequest() {}

  explicit InactivateCaCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~InactivateCaCertificateRequest() = default;
};
class InactivateCaCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sn{};

  InactivateCaCertificateResponseBody() {}

  explicit InactivateCaCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~InactivateCaCertificateResponseBody() = default;
};
class InactivateCaCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InactivateCaCertificateResponseBody> body{};

  InactivateCaCertificateResponse() {}

  explicit InactivateCaCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InactivateCaCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InactivateCaCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~InactivateCaCertificateResponse() = default;
};
class InactivateDeviceCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> caSn{};
  shared_ptr<string> deviceSn{};
  shared_ptr<string> mqttInstanceId{};

  InactivateDeviceCertificateRequest() {}

  explicit InactivateDeviceCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caSn) {
      res["CaSn"] = boost::any(*caSn);
    }
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaSn") != m.end() && !m["CaSn"].empty()) {
      caSn = make_shared<string>(boost::any_cast<string>(m["CaSn"]));
    }
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
  }


  virtual ~InactivateDeviceCertificateRequest() = default;
};
class InactivateDeviceCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> deviceSn{};
  shared_ptr<string> requestId{};

  InactivateDeviceCertificateResponseBody() {}

  explicit InactivateDeviceCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~InactivateDeviceCertificateResponseBody() = default;
};
class InactivateDeviceCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InactivateDeviceCertificateResponseBody> body{};

  InactivateDeviceCertificateResponse() {}

  explicit InactivateDeviceCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InactivateDeviceCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InactivateDeviceCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~InactivateDeviceCertificateResponse() = default;
};
class ListCaCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};

  ListCaCertificateRequest() {}

  explicit ListCaCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
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
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListCaCertificateRequest() = default;
};
class ListCaCertificateResponseBodyDataCaCertificateVOS : public Darabonba::Model {
public:
  shared_ptr<string> caContent{};
  shared_ptr<string> caName{};
  shared_ptr<string> registrationCode{};
  shared_ptr<string> sn{};
  shared_ptr<string> status{};
  shared_ptr<string> validBegin{};
  shared_ptr<string> validEnd{};
  shared_ptr<string> verificationContent{};

  ListCaCertificateResponseBodyDataCaCertificateVOS() {}

  explicit ListCaCertificateResponseBodyDataCaCertificateVOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caContent) {
      res["CaContent"] = boost::any(*caContent);
    }
    if (caName) {
      res["CaName"] = boost::any(*caName);
    }
    if (registrationCode) {
      res["RegistrationCode"] = boost::any(*registrationCode);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (validBegin) {
      res["ValidBegin"] = boost::any(*validBegin);
    }
    if (validEnd) {
      res["ValidEnd"] = boost::any(*validEnd);
    }
    if (verificationContent) {
      res["VerificationContent"] = boost::any(*verificationContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaContent") != m.end() && !m["CaContent"].empty()) {
      caContent = make_shared<string>(boost::any_cast<string>(m["CaContent"]));
    }
    if (m.find("CaName") != m.end() && !m["CaName"].empty()) {
      caName = make_shared<string>(boost::any_cast<string>(m["CaName"]));
    }
    if (m.find("RegistrationCode") != m.end() && !m["RegistrationCode"].empty()) {
      registrationCode = make_shared<string>(boost::any_cast<string>(m["RegistrationCode"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ValidBegin") != m.end() && !m["ValidBegin"].empty()) {
      validBegin = make_shared<string>(boost::any_cast<string>(m["ValidBegin"]));
    }
    if (m.find("ValidEnd") != m.end() && !m["ValidEnd"].empty()) {
      validEnd = make_shared<string>(boost::any_cast<string>(m["ValidEnd"]));
    }
    if (m.find("VerificationContent") != m.end() && !m["VerificationContent"].empty()) {
      verificationContent = make_shared<string>(boost::any_cast<string>(m["VerificationContent"]));
    }
  }


  virtual ~ListCaCertificateResponseBodyDataCaCertificateVOS() = default;
};
class ListCaCertificateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListCaCertificateResponseBodyDataCaCertificateVOS>> caCertificateVOS{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListCaCertificateResponseBodyData() {}

  explicit ListCaCertificateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caCertificateVOS) {
      vector<boost::any> temp1;
      for(auto item1:*caCertificateVOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CaCertificateVOS"] = boost::any(temp1);
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
    if (m.find("CaCertificateVOS") != m.end() && !m["CaCertificateVOS"].empty()) {
      if (typeid(vector<boost::any>) == m["CaCertificateVOS"].type()) {
        vector<ListCaCertificateResponseBodyDataCaCertificateVOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CaCertificateVOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCaCertificateResponseBodyDataCaCertificateVOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        caCertificateVOS = make_shared<vector<ListCaCertificateResponseBodyDataCaCertificateVOS>>(expect1);
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


  virtual ~ListCaCertificateResponseBodyData() = default;
};
class ListCaCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListCaCertificateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListCaCertificateResponseBody() {}

  explicit ListCaCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListCaCertificateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListCaCertificateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCaCertificateResponseBody() = default;
};
class ListCaCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCaCertificateResponseBody> body{};

  ListCaCertificateResponse() {}

  explicit ListCaCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCaCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCaCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~ListCaCertificateResponse() = default;
};
class ListDeviceCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};

  ListDeviceCertificateRequest() {}

  explicit ListDeviceCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
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
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListDeviceCertificateRequest() = default;
};
class ListDeviceCertificateResponseBodyDataDeviceCertificateVOS : public Darabonba::Model {
public:
  shared_ptr<string> caSn{};
  shared_ptr<string> deviceContent{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceSn{};
  shared_ptr<string> status{};
  shared_ptr<string> validBegin{};
  shared_ptr<string> validEnd{};

  ListDeviceCertificateResponseBodyDataDeviceCertificateVOS() {}

  explicit ListDeviceCertificateResponseBodyDataDeviceCertificateVOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caSn) {
      res["CaSn"] = boost::any(*caSn);
    }
    if (deviceContent) {
      res["DeviceContent"] = boost::any(*deviceContent);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (validBegin) {
      res["ValidBegin"] = boost::any(*validBegin);
    }
    if (validEnd) {
      res["ValidEnd"] = boost::any(*validEnd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaSn") != m.end() && !m["CaSn"].empty()) {
      caSn = make_shared<string>(boost::any_cast<string>(m["CaSn"]));
    }
    if (m.find("DeviceContent") != m.end() && !m["DeviceContent"].empty()) {
      deviceContent = make_shared<string>(boost::any_cast<string>(m["DeviceContent"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ValidBegin") != m.end() && !m["ValidBegin"].empty()) {
      validBegin = make_shared<string>(boost::any_cast<string>(m["ValidBegin"]));
    }
    if (m.find("ValidEnd") != m.end() && !m["ValidEnd"].empty()) {
      validEnd = make_shared<string>(boost::any_cast<string>(m["ValidEnd"]));
    }
  }


  virtual ~ListDeviceCertificateResponseBodyDataDeviceCertificateVOS() = default;
};
class ListDeviceCertificateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeviceCertificateResponseBodyDataDeviceCertificateVOS>> deviceCertificateVOS{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListDeviceCertificateResponseBodyData() {}

  explicit ListDeviceCertificateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCertificateVOS) {
      vector<boost::any> temp1;
      for(auto item1:*deviceCertificateVOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceCertificateVOS"] = boost::any(temp1);
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
    if (m.find("DeviceCertificateVOS") != m.end() && !m["DeviceCertificateVOS"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceCertificateVOS"].type()) {
        vector<ListDeviceCertificateResponseBodyDataDeviceCertificateVOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceCertificateVOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceCertificateResponseBodyDataDeviceCertificateVOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceCertificateVOS = make_shared<vector<ListDeviceCertificateResponseBodyDataDeviceCertificateVOS>>(expect1);
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


  virtual ~ListDeviceCertificateResponseBodyData() = default;
};
class ListDeviceCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDeviceCertificateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListDeviceCertificateResponseBody() {}

  explicit ListDeviceCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDeviceCertificateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDeviceCertificateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDeviceCertificateResponseBody() = default;
};
class ListDeviceCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceCertificateResponseBody> body{};

  ListDeviceCertificateResponse() {}

  explicit ListDeviceCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceCertificateResponse() = default;
};
class ListDeviceCertificateByCaSnRequest : public Darabonba::Model {
public:
  shared_ptr<string> caSn{};
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};

  ListDeviceCertificateByCaSnRequest() {}

  explicit ListDeviceCertificateByCaSnRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caSn) {
      res["CaSn"] = boost::any(*caSn);
    }
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
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
    if (m.find("CaSn") != m.end() && !m["CaSn"].empty()) {
      caSn = make_shared<string>(boost::any_cast<string>(m["CaSn"]));
    }
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListDeviceCertificateByCaSnRequest() = default;
};
class ListDeviceCertificateByCaSnResponseBodyDataDeviceCertificateVOS : public Darabonba::Model {
public:
  shared_ptr<string> caSn{};
  shared_ptr<string> deviceContent{};
  shared_ptr<string> deviceName{};
  shared_ptr<string> deviceSn{};
  shared_ptr<string> status{};
  shared_ptr<string> validBegin{};
  shared_ptr<string> validEnd{};

  ListDeviceCertificateByCaSnResponseBodyDataDeviceCertificateVOS() {}

  explicit ListDeviceCertificateByCaSnResponseBodyDataDeviceCertificateVOS(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caSn) {
      res["CaSn"] = boost::any(*caSn);
    }
    if (deviceContent) {
      res["DeviceContent"] = boost::any(*deviceContent);
    }
    if (deviceName) {
      res["DeviceName"] = boost::any(*deviceName);
    }
    if (deviceSn) {
      res["DeviceSn"] = boost::any(*deviceSn);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (validBegin) {
      res["ValidBegin"] = boost::any(*validBegin);
    }
    if (validEnd) {
      res["ValidEnd"] = boost::any(*validEnd);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaSn") != m.end() && !m["CaSn"].empty()) {
      caSn = make_shared<string>(boost::any_cast<string>(m["CaSn"]));
    }
    if (m.find("DeviceContent") != m.end() && !m["DeviceContent"].empty()) {
      deviceContent = make_shared<string>(boost::any_cast<string>(m["DeviceContent"]));
    }
    if (m.find("DeviceName") != m.end() && !m["DeviceName"].empty()) {
      deviceName = make_shared<string>(boost::any_cast<string>(m["DeviceName"]));
    }
    if (m.find("DeviceSn") != m.end() && !m["DeviceSn"].empty()) {
      deviceSn = make_shared<string>(boost::any_cast<string>(m["DeviceSn"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("ValidBegin") != m.end() && !m["ValidBegin"].empty()) {
      validBegin = make_shared<string>(boost::any_cast<string>(m["ValidBegin"]));
    }
    if (m.find("ValidEnd") != m.end() && !m["ValidEnd"].empty()) {
      validEnd = make_shared<string>(boost::any_cast<string>(m["ValidEnd"]));
    }
  }


  virtual ~ListDeviceCertificateByCaSnResponseBodyDataDeviceCertificateVOS() = default;
};
class ListDeviceCertificateByCaSnResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListDeviceCertificateByCaSnResponseBodyDataDeviceCertificateVOS>> deviceCertificateVOS{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  ListDeviceCertificateByCaSnResponseBodyData() {}

  explicit ListDeviceCertificateByCaSnResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCertificateVOS) {
      vector<boost::any> temp1;
      for(auto item1:*deviceCertificateVOS){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceCertificateVOS"] = boost::any(temp1);
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
    if (m.find("DeviceCertificateVOS") != m.end() && !m["DeviceCertificateVOS"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceCertificateVOS"].type()) {
        vector<ListDeviceCertificateByCaSnResponseBodyDataDeviceCertificateVOS> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceCertificateVOS"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDeviceCertificateByCaSnResponseBodyDataDeviceCertificateVOS model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceCertificateVOS = make_shared<vector<ListDeviceCertificateByCaSnResponseBodyDataDeviceCertificateVOS>>(expect1);
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


  virtual ~ListDeviceCertificateByCaSnResponseBodyData() = default;
};
class ListDeviceCertificateByCaSnResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDeviceCertificateByCaSnResponseBodyData> data{};
  shared_ptr<string> requestId{};

  ListDeviceCertificateByCaSnResponseBody() {}

  explicit ListDeviceCertificateByCaSnResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ListDeviceCertificateByCaSnResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListDeviceCertificateByCaSnResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDeviceCertificateByCaSnResponseBody() = default;
};
class ListDeviceCertificateByCaSnResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceCertificateByCaSnResponseBody> body{};

  ListDeviceCertificateByCaSnResponse() {}

  explicit ListDeviceCertificateByCaSnResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceCertificateByCaSnResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceCertificateByCaSnResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceCertificateByCaSnResponse() = default;
};
class ListDeviceCredentialClientIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> groupId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};

  ListDeviceCredentialClientIdRequest() {}

  explicit ListDeviceCredentialClientIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~ListDeviceCredentialClientIdRequest() = default;
};
class ListDeviceCredentialClientIdResponseBodyDeviceCredentialClientIdList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> clientIdList{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> pageNo{};
  shared_ptr<string> pageSize{};
  shared_ptr<string> total{};

  ListDeviceCredentialClientIdResponseBodyDeviceCredentialClientIdList() {}

  explicit ListDeviceCredentialClientIdResponseBodyDeviceCredentialClientIdList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientIdList) {
      res["ClientIdList"] = boost::any(*clientIdList);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
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
    if (m.find("ClientIdList") != m.end() && !m["ClientIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ClientIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ClientIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      clientIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<string>(boost::any_cast<string>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<string>(boost::any_cast<string>(m["Total"]));
    }
  }


  virtual ~ListDeviceCredentialClientIdResponseBodyDeviceCredentialClientIdList() = default;
};
class ListDeviceCredentialClientIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListDeviceCredentialClientIdResponseBodyDeviceCredentialClientIdList> deviceCredentialClientIdList{};
  shared_ptr<string> requestId{};

  ListDeviceCredentialClientIdResponseBody() {}

  explicit ListDeviceCredentialClientIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCredentialClientIdList) {
      res["DeviceCredentialClientIdList"] = deviceCredentialClientIdList ? boost::any(deviceCredentialClientIdList->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceCredentialClientIdList") != m.end() && !m["DeviceCredentialClientIdList"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceCredentialClientIdList"].type()) {
        ListDeviceCredentialClientIdResponseBodyDeviceCredentialClientIdList model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceCredentialClientIdList"]));
        deviceCredentialClientIdList = make_shared<ListDeviceCredentialClientIdResponseBodyDeviceCredentialClientIdList>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDeviceCredentialClientIdResponseBody() = default;
};
class ListDeviceCredentialClientIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDeviceCredentialClientIdResponseBody> body{};

  ListDeviceCredentialClientIdResponse() {}

  explicit ListDeviceCredentialClientIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDeviceCredentialClientIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDeviceCredentialClientIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListDeviceCredentialClientIdResponse() = default;
};
class ListGroupIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  ListGroupIdRequest() {}

  explicit ListGroupIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListGroupIdRequest() = default;
};
class ListGroupIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> createTime{};
  shared_ptr<string> groupId{};
  shared_ptr<bool> independentNaming{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> updateTime{};

  ListGroupIdResponseBodyData() {}

  explicit ListGroupIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (groupId) {
      res["GroupId"] = boost::any(*groupId);
    }
    if (independentNaming) {
      res["IndependentNaming"] = boost::any(*independentNaming);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("GroupId") != m.end() && !m["GroupId"].empty()) {
      groupId = make_shared<string>(boost::any_cast<string>(m["GroupId"]));
    }
    if (m.find("IndependentNaming") != m.end() && !m["IndependentNaming"].empty()) {
      independentNaming = make_shared<bool>(boost::any_cast<bool>(m["IndependentNaming"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~ListGroupIdResponseBodyData() = default;
};
class ListGroupIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListGroupIdResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  ListGroupIdResponseBody() {}

  explicit ListGroupIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListGroupIdResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListGroupIdResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListGroupIdResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListGroupIdResponseBody() = default;
};
class ListGroupIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListGroupIdResponseBody> body{};

  ListGroupIdResponse() {}

  explicit ListGroupIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListGroupIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListGroupIdResponseBody>(model1);
      }
    }
  }


  virtual ~ListGroupIdResponse() = default;
};
class QueryMqttTraceDeviceRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> clientId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mqttRegionId{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> reverse{};

  QueryMqttTraceDeviceRequest() {}

  explicit QueryMqttTraceDeviceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mqttRegionId) {
      res["MqttRegionId"] = boost::any(*mqttRegionId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MqttRegionId") != m.end() && !m["MqttRegionId"].empty()) {
      mqttRegionId = make_shared<string>(boost::any_cast<string>(m["MqttRegionId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
  }


  virtual ~QueryMqttTraceDeviceRequest() = default;
};
class QueryMqttTraceDeviceResponseBodyDeviceInfoList : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionCode{};
  shared_ptr<string> actionInfo{};
  shared_ptr<string> channelId{};
  shared_ptr<string> time{};

  QueryMqttTraceDeviceResponseBodyDeviceInfoList() {}

  explicit QueryMqttTraceDeviceResponseBodyDeviceInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (actionInfo) {
      res["ActionInfo"] = boost::any(*actionInfo);
    }
    if (channelId) {
      res["ChannelId"] = boost::any(*channelId);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("ActionInfo") != m.end() && !m["ActionInfo"].empty()) {
      actionInfo = make_shared<string>(boost::any_cast<string>(m["ActionInfo"]));
    }
    if (m.find("ChannelId") != m.end() && !m["ChannelId"].empty()) {
      channelId = make_shared<string>(boost::any_cast<string>(m["ChannelId"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QueryMqttTraceDeviceResponseBodyDeviceInfoList() = default;
};
class QueryMqttTraceDeviceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<QueryMqttTraceDeviceResponseBodyDeviceInfoList>> deviceInfoList{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  QueryMqttTraceDeviceResponseBody() {}

  explicit QueryMqttTraceDeviceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (deviceInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*deviceInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DeviceInfoList"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("DeviceInfoList") != m.end() && !m["DeviceInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["DeviceInfoList"].type()) {
        vector<QueryMqttTraceDeviceResponseBodyDeviceInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DeviceInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMqttTraceDeviceResponseBodyDeviceInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        deviceInfoList = make_shared<vector<QueryMqttTraceDeviceResponseBodyDeviceInfoList>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryMqttTraceDeviceResponseBody() = default;
};
class QueryMqttTraceDeviceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMqttTraceDeviceResponseBody> body{};

  QueryMqttTraceDeviceResponse() {}

  explicit QueryMqttTraceDeviceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMqttTraceDeviceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMqttTraceDeviceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMqttTraceDeviceResponse() = default;
};
class QueryMqttTraceMessageOfClientRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> clientId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mqttRegionId{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> reverse{};

  QueryMqttTraceMessageOfClientRequest() {}

  explicit QueryMqttTraceMessageOfClientRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mqttRegionId) {
      res["MqttRegionId"] = boost::any(*mqttRegionId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MqttRegionId") != m.end() && !m["MqttRegionId"].empty()) {
      mqttRegionId = make_shared<string>(boost::any_cast<string>(m["MqttRegionId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
  }


  virtual ~QueryMqttTraceMessageOfClientRequest() = default;
};
class QueryMqttTraceMessageOfClientResponseBodyMessageOfClientList : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionCode{};
  shared_ptr<string> actionInfo{};
  shared_ptr<string> clientId{};
  shared_ptr<string> msgId{};
  shared_ptr<string> time{};

  QueryMqttTraceMessageOfClientResponseBodyMessageOfClientList() {}

  explicit QueryMqttTraceMessageOfClientResponseBodyMessageOfClientList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (actionInfo) {
      res["ActionInfo"] = boost::any(*actionInfo);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("ActionInfo") != m.end() && !m["ActionInfo"].empty()) {
      actionInfo = make_shared<string>(boost::any_cast<string>(m["ActionInfo"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QueryMqttTraceMessageOfClientResponseBodyMessageOfClientList() = default;
};
class QueryMqttTraceMessageOfClientResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<QueryMqttTraceMessageOfClientResponseBodyMessageOfClientList>> messageOfClientList{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  QueryMqttTraceMessageOfClientResponseBody() {}

  explicit QueryMqttTraceMessageOfClientResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (messageOfClientList) {
      vector<boost::any> temp1;
      for(auto item1:*messageOfClientList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageOfClientList"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("MessageOfClientList") != m.end() && !m["MessageOfClientList"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageOfClientList"].type()) {
        vector<QueryMqttTraceMessageOfClientResponseBodyMessageOfClientList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageOfClientList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMqttTraceMessageOfClientResponseBodyMessageOfClientList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageOfClientList = make_shared<vector<QueryMqttTraceMessageOfClientResponseBodyMessageOfClientList>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryMqttTraceMessageOfClientResponseBody() = default;
};
class QueryMqttTraceMessageOfClientResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMqttTraceMessageOfClientResponseBody> body{};

  QueryMqttTraceMessageOfClientResponse() {}

  explicit QueryMqttTraceMessageOfClientResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMqttTraceMessageOfClientResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMqttTraceMessageOfClientResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMqttTraceMessageOfClientResponse() = default;
};
class QueryMqttTraceMessagePublishRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mqttRegionId{};
  shared_ptr<string> msgId{};

  QueryMqttTraceMessagePublishRequest() {}

  explicit QueryMqttTraceMessagePublishRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mqttRegionId) {
      res["MqttRegionId"] = boost::any(*mqttRegionId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MqttRegionId") != m.end() && !m["MqttRegionId"].empty()) {
      mqttRegionId = make_shared<string>(boost::any_cast<string>(m["MqttRegionId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
  }


  virtual ~QueryMqttTraceMessagePublishRequest() = default;
};
class QueryMqttTraceMessagePublishResponseBodyMessageTraceLists : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionCode{};
  shared_ptr<string> actionInfo{};
  shared_ptr<string> clientId{};
  shared_ptr<string> msgId{};
  shared_ptr<string> time{};

  QueryMqttTraceMessagePublishResponseBodyMessageTraceLists() {}

  explicit QueryMqttTraceMessagePublishResponseBodyMessageTraceLists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (actionInfo) {
      res["ActionInfo"] = boost::any(*actionInfo);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("ActionInfo") != m.end() && !m["ActionInfo"].empty()) {
      actionInfo = make_shared<string>(boost::any_cast<string>(m["ActionInfo"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QueryMqttTraceMessagePublishResponseBodyMessageTraceLists() = default;
};
class QueryMqttTraceMessagePublishResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryMqttTraceMessagePublishResponseBodyMessageTraceLists>> messageTraceLists{};
  shared_ptr<string> requestId{};

  QueryMqttTraceMessagePublishResponseBody() {}

  explicit QueryMqttTraceMessagePublishResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageTraceLists) {
      vector<boost::any> temp1;
      for(auto item1:*messageTraceLists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageTraceLists"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageTraceLists") != m.end() && !m["MessageTraceLists"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageTraceLists"].type()) {
        vector<QueryMqttTraceMessagePublishResponseBodyMessageTraceLists> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageTraceLists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMqttTraceMessagePublishResponseBodyMessageTraceLists model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageTraceLists = make_shared<vector<QueryMqttTraceMessagePublishResponseBodyMessageTraceLists>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryMqttTraceMessagePublishResponseBody() = default;
};
class QueryMqttTraceMessagePublishResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMqttTraceMessagePublishResponseBody> body{};

  QueryMqttTraceMessagePublishResponse() {}

  explicit QueryMqttTraceMessagePublishResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMqttTraceMessagePublishResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMqttTraceMessagePublishResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMqttTraceMessagePublishResponse() = default;
};
class QueryMqttTraceMessageSubscribeRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> clientId{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> endTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> mqttRegionId{};
  shared_ptr<string> msgId{};
  shared_ptr<long> pageSize{};
  shared_ptr<bool> reverse{};

  QueryMqttTraceMessageSubscribeRequest() {}

  explicit QueryMqttTraceMessageSubscribeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mqttRegionId) {
      res["MqttRegionId"] = boost::any(*mqttRegionId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (reverse) {
      res["Reverse"] = boost::any(*reverse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CurrentPage") != m.end() && !m["CurrentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["CurrentPage"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MqttRegionId") != m.end() && !m["MqttRegionId"].empty()) {
      mqttRegionId = make_shared<string>(boost::any_cast<string>(m["MqttRegionId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Reverse") != m.end() && !m["Reverse"].empty()) {
      reverse = make_shared<bool>(boost::any_cast<bool>(m["Reverse"]));
    }
  }


  virtual ~QueryMqttTraceMessageSubscribeRequest() = default;
};
class QueryMqttTraceMessageSubscribeResponseBodyMessageTraceLists : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionCode{};
  shared_ptr<string> actionInfo{};
  shared_ptr<string> clientId{};
  shared_ptr<string> msgId{};
  shared_ptr<string> time{};

  QueryMqttTraceMessageSubscribeResponseBodyMessageTraceLists() {}

  explicit QueryMqttTraceMessageSubscribeResponseBodyMessageTraceLists(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionCode) {
      res["ActionCode"] = boost::any(*actionCode);
    }
    if (actionInfo) {
      res["ActionInfo"] = boost::any(*actionInfo);
    }
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (time) {
      res["Time"] = boost::any(*time);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionCode") != m.end() && !m["ActionCode"].empty()) {
      actionCode = make_shared<string>(boost::any_cast<string>(m["ActionCode"]));
    }
    if (m.find("ActionInfo") != m.end() && !m["ActionInfo"].empty()) {
      actionInfo = make_shared<string>(boost::any_cast<string>(m["ActionInfo"]));
    }
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("Time") != m.end() && !m["Time"].empty()) {
      time = make_shared<string>(boost::any_cast<string>(m["Time"]));
    }
  }


  virtual ~QueryMqttTraceMessageSubscribeResponseBodyMessageTraceLists() = default;
};
class QueryMqttTraceMessageSubscribeResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<QueryMqttTraceMessageSubscribeResponseBodyMessageTraceLists>> messageTraceLists{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  QueryMqttTraceMessageSubscribeResponseBody() {}

  explicit QueryMqttTraceMessageSubscribeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["CurrentPage"] = boost::any(*currentPage);
    }
    if (messageTraceLists) {
      vector<boost::any> temp1;
      for(auto item1:*messageTraceLists){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["MessageTraceLists"] = boost::any(temp1);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("MessageTraceLists") != m.end() && !m["MessageTraceLists"].empty()) {
      if (typeid(vector<boost::any>) == m["MessageTraceLists"].type()) {
        vector<QueryMqttTraceMessageSubscribeResponseBodyMessageTraceLists> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["MessageTraceLists"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryMqttTraceMessageSubscribeResponseBodyMessageTraceLists model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messageTraceLists = make_shared<vector<QueryMqttTraceMessageSubscribeResponseBodyMessageTraceLists>>(expect1);
      }
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryMqttTraceMessageSubscribeResponseBody() = default;
};
class QueryMqttTraceMessageSubscribeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryMqttTraceMessageSubscribeResponseBody> body{};

  QueryMqttTraceMessageSubscribeResponse() {}

  explicit QueryMqttTraceMessageSubscribeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryMqttTraceMessageSubscribeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryMqttTraceMessageSubscribeResponseBody>(model1);
      }
    }
  }


  virtual ~QueryMqttTraceMessageSubscribeResponse() = default;
};
class QuerySessionByClientIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  QuerySessionByClientIdRequest() {}

  explicit QuerySessionByClientIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~QuerySessionByClientIdRequest() = default;
};
class QuerySessionByClientIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> onlineStatus{};
  shared_ptr<string> requestId{};

  QuerySessionByClientIdResponseBody() {}

  explicit QuerySessionByClientIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (onlineStatus) {
      res["OnlineStatus"] = boost::any(*onlineStatus);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OnlineStatus") != m.end() && !m["OnlineStatus"].empty()) {
      onlineStatus = make_shared<bool>(boost::any_cast<bool>(m["OnlineStatus"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QuerySessionByClientIdResponseBody() = default;
};
class QuerySessionByClientIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QuerySessionByClientIdResponseBody> body{};

  QuerySessionByClientIdResponse() {}

  explicit QuerySessionByClientIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySessionByClientIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySessionByClientIdResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySessionByClientIdResponse() = default;
};
class QueryTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> token{};

  QueryTokenRequest() {}

  explicit QueryTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~QueryTokenRequest() = default;
};
class QueryTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> tokenStatus{};

  QueryTokenResponseBody() {}

  explicit QueryTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tokenStatus) {
      res["TokenStatus"] = boost::any(*tokenStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TokenStatus") != m.end() && !m["TokenStatus"].empty()) {
      tokenStatus = make_shared<bool>(boost::any_cast<bool>(m["TokenStatus"]));
    }
  }


  virtual ~QueryTokenResponseBody() = default;
};
class QueryTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryTokenResponseBody> body{};

  QueryTokenResponse() {}

  explicit QueryTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryTokenResponseBody>(model1);
      }
    }
  }


  virtual ~QueryTokenResponse() = default;
};
class RefreshDeviceCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  RefreshDeviceCredentialRequest() {}

  explicit RefreshDeviceCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~RefreshDeviceCredentialRequest() = default;
};
class RefreshDeviceCredentialResponseBodyDeviceCredential : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> deviceAccessKeyId{};
  shared_ptr<string> deviceAccessKeySecret{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> updateTime{};

  RefreshDeviceCredentialResponseBodyDeviceCredential() {}

  explicit RefreshDeviceCredentialResponseBodyDeviceCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deviceAccessKeyId) {
      res["DeviceAccessKeyId"] = boost::any(*deviceAccessKeyId);
    }
    if (deviceAccessKeySecret) {
      res["DeviceAccessKeySecret"] = boost::any(*deviceAccessKeySecret);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DeviceAccessKeyId") != m.end() && !m["DeviceAccessKeyId"].empty()) {
      deviceAccessKeyId = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeyId"]));
    }
    if (m.find("DeviceAccessKeySecret") != m.end() && !m["DeviceAccessKeySecret"].empty()) {
      deviceAccessKeySecret = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeySecret"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~RefreshDeviceCredentialResponseBodyDeviceCredential() = default;
};
class RefreshDeviceCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<RefreshDeviceCredentialResponseBodyDeviceCredential> deviceCredential{};
  shared_ptr<string> requestId{};

  RefreshDeviceCredentialResponseBody() {}

  explicit RefreshDeviceCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCredential) {
      res["DeviceCredential"] = deviceCredential ? boost::any(deviceCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceCredential") != m.end() && !m["DeviceCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceCredential"].type()) {
        RefreshDeviceCredentialResponseBodyDeviceCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceCredential"]));
        deviceCredential = make_shared<RefreshDeviceCredentialResponseBodyDeviceCredential>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RefreshDeviceCredentialResponseBody() = default;
};
class RefreshDeviceCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RefreshDeviceCredentialResponseBody> body{};

  RefreshDeviceCredentialResponse() {}

  explicit RefreshDeviceCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RefreshDeviceCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RefreshDeviceCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~RefreshDeviceCredentialResponse() = default;
};
class RegisterCaCertificateRequest : public Darabonba::Model {
public:
  shared_ptr<string> caContent{};
  shared_ptr<string> caName{};
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> verificationContent{};

  RegisterCaCertificateRequest() {}

  explicit RegisterCaCertificateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caContent) {
      res["CaContent"] = boost::any(*caContent);
    }
    if (caName) {
      res["CaName"] = boost::any(*caName);
    }
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    if (verificationContent) {
      res["VerificationContent"] = boost::any(*verificationContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaContent") != m.end() && !m["CaContent"].empty()) {
      caContent = make_shared<string>(boost::any_cast<string>(m["CaContent"]));
    }
    if (m.find("CaName") != m.end() && !m["CaName"].empty()) {
      caName = make_shared<string>(boost::any_cast<string>(m["CaName"]));
    }
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("VerificationContent") != m.end() && !m["VerificationContent"].empty()) {
      verificationContent = make_shared<string>(boost::any_cast<string>(m["VerificationContent"]));
    }
  }


  virtual ~RegisterCaCertificateRequest() = default;
};
class RegisterCaCertificateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> sn{};

  RegisterCaCertificateResponseBody() {}

  explicit RegisterCaCertificateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sn) {
      res["Sn"] = boost::any(*sn);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Sn") != m.end() && !m["Sn"].empty()) {
      sn = make_shared<string>(boost::any_cast<string>(m["Sn"]));
    }
  }


  virtual ~RegisterCaCertificateResponseBody() = default;
};
class RegisterCaCertificateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterCaCertificateResponseBody> body{};

  RegisterCaCertificateResponse() {}

  explicit RegisterCaCertificateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterCaCertificateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterCaCertificateResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterCaCertificateResponse() = default;
};
class RegisterDeviceCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  RegisterDeviceCredentialRequest() {}

  explicit RegisterDeviceCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~RegisterDeviceCredentialRequest() = default;
};
class RegisterDeviceCredentialResponseBodyDeviceCredential : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> deviceAccessKeyId{};
  shared_ptr<string> deviceAccessKeySecret{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> updateTime{};

  RegisterDeviceCredentialResponseBodyDeviceCredential() {}

  explicit RegisterDeviceCredentialResponseBodyDeviceCredential(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (deviceAccessKeyId) {
      res["DeviceAccessKeyId"] = boost::any(*deviceAccessKeyId);
    }
    if (deviceAccessKeySecret) {
      res["DeviceAccessKeySecret"] = boost::any(*deviceAccessKeySecret);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (updateTime) {
      res["UpdateTime"] = boost::any(*updateTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("DeviceAccessKeyId") != m.end() && !m["DeviceAccessKeyId"].empty()) {
      deviceAccessKeyId = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeyId"]));
    }
    if (m.find("DeviceAccessKeySecret") != m.end() && !m["DeviceAccessKeySecret"].empty()) {
      deviceAccessKeySecret = make_shared<string>(boost::any_cast<string>(m["DeviceAccessKeySecret"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UpdateTime") != m.end() && !m["UpdateTime"].empty()) {
      updateTime = make_shared<long>(boost::any_cast<long>(m["UpdateTime"]));
    }
  }


  virtual ~RegisterDeviceCredentialResponseBodyDeviceCredential() = default;
};
class RegisterDeviceCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<RegisterDeviceCredentialResponseBodyDeviceCredential> deviceCredential{};
  shared_ptr<string> requestId{};

  RegisterDeviceCredentialResponseBody() {}

  explicit RegisterDeviceCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceCredential) {
      res["DeviceCredential"] = deviceCredential ? boost::any(deviceCredential->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeviceCredential") != m.end() && !m["DeviceCredential"].empty()) {
      if (typeid(map<string, boost::any>) == m["DeviceCredential"].type()) {
        RegisterDeviceCredentialResponseBodyDeviceCredential model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DeviceCredential"]));
        deviceCredential = make_shared<RegisterDeviceCredentialResponseBodyDeviceCredential>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RegisterDeviceCredentialResponseBody() = default;
};
class RegisterDeviceCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterDeviceCredentialResponseBody> body{};

  RegisterDeviceCredentialResponse() {}

  explicit RegisterDeviceCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterDeviceCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterDeviceCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterDeviceCredentialResponse() = default;
};
class RevokeTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> token{};

  RevokeTokenRequest() {}

  explicit RevokeTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~RevokeTokenRequest() = default;
};
class RevokeTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RevokeTokenResponseBody() {}

  explicit RevokeTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RevokeTokenResponseBody() = default;
};
class RevokeTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RevokeTokenResponseBody> body{};

  RevokeTokenResponse() {}

  explicit RevokeTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RevokeTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RevokeTokenResponseBody>(model1);
      }
    }
  }


  virtual ~RevokeTokenResponse() = default;
};
class SendMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> mqttTopic{};
  shared_ptr<string> payload{};

  SendMessageRequest() {}

  explicit SendMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (mqttTopic) {
      res["MqttTopic"] = boost::any(*mqttTopic);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MqttTopic") != m.end() && !m["MqttTopic"].empty()) {
      mqttTopic = make_shared<string>(boost::any_cast<string>(m["MqttTopic"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payload = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
  }


  virtual ~SendMessageRequest() = default;
};
class SendMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> msgId{};
  shared_ptr<string> requestId{};

  SendMessageResponseBody() {}

  explicit SendMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (msgId) {
      res["MsgId"] = boost::any(*msgId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MsgId") != m.end() && !m["MsgId"].empty()) {
      msgId = make_shared<string>(boost::any_cast<string>(m["MsgId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendMessageResponseBody() = default;
};
class SendMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendMessageResponseBody> body{};

  SendMessageResponse() {}

  explicit SendMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendMessageResponse() = default;
};
class UnRegisterDeviceCredentialRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientId{};
  shared_ptr<string> instanceId{};

  UnRegisterDeviceCredentialRequest() {}

  explicit UnRegisterDeviceCredentialRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientId) {
      res["ClientId"] = boost::any(*clientId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientId") != m.end() && !m["ClientId"].empty()) {
      clientId = make_shared<string>(boost::any_cast<string>(m["ClientId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UnRegisterDeviceCredentialRequest() = default;
};
class UnRegisterDeviceCredentialResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UnRegisterDeviceCredentialResponseBody() {}

  explicit UnRegisterDeviceCredentialResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UnRegisterDeviceCredentialResponseBody() = default;
};
class UnRegisterDeviceCredentialResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UnRegisterDeviceCredentialResponseBody> body{};

  UnRegisterDeviceCredentialResponse() {}

  explicit UnRegisterDeviceCredentialResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UnRegisterDeviceCredentialResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UnRegisterDeviceCredentialResponseBody>(model1);
      }
    }
  }


  virtual ~UnRegisterDeviceCredentialResponse() = default;
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
  ActiveCaCertificateResponse activeCaCertificateWithOptions(shared_ptr<ActiveCaCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActiveCaCertificateResponse activeCaCertificate(shared_ptr<ActiveCaCertificateRequest> request);
  ActiveDeviceCertificateResponse activeDeviceCertificateWithOptions(shared_ptr<ActiveDeviceCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActiveDeviceCertificateResponse activeDeviceCertificate(shared_ptr<ActiveDeviceCertificateRequest> request);
  ApplyTokenResponse applyTokenWithOptions(shared_ptr<ApplyTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ApplyTokenResponse applyToken(shared_ptr<ApplyTokenRequest> request);
  BatchQuerySessionByClientIdsResponse batchQuerySessionByClientIdsWithOptions(shared_ptr<BatchQuerySessionByClientIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchQuerySessionByClientIdsResponse batchQuerySessionByClientIds(shared_ptr<BatchQuerySessionByClientIdsRequest> request);
  CreateGroupIdResponse createGroupIdWithOptions(shared_ptr<CreateGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateGroupIdResponse createGroupId(shared_ptr<CreateGroupIdRequest> request);
  DeleteCaCertificateResponse deleteCaCertificateWithOptions(shared_ptr<DeleteCaCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCaCertificateResponse deleteCaCertificate(shared_ptr<DeleteCaCertificateRequest> request);
  DeleteDeviceCertificateResponse deleteDeviceCertificateWithOptions(shared_ptr<DeleteDeviceCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDeviceCertificateResponse deleteDeviceCertificate(shared_ptr<DeleteDeviceCertificateRequest> request);
  DeleteGroupIdResponse deleteGroupIdWithOptions(shared_ptr<DeleteGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteGroupIdResponse deleteGroupId(shared_ptr<DeleteGroupIdRequest> request);
  GetCaCertificateResponse getCaCertificateWithOptions(shared_ptr<GetCaCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetCaCertificateResponse getCaCertificate(shared_ptr<GetCaCertificateRequest> request);
  GetDeviceCertificateResponse getDeviceCertificateWithOptions(shared_ptr<GetDeviceCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceCertificateResponse getDeviceCertificate(shared_ptr<GetDeviceCertificateRequest> request);
  GetDeviceCredentialResponse getDeviceCredentialWithOptions(shared_ptr<GetDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDeviceCredentialResponse getDeviceCredential(shared_ptr<GetDeviceCredentialRequest> request);
  GetRegisterCodeResponse getRegisterCodeWithOptions(shared_ptr<GetRegisterCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRegisterCodeResponse getRegisterCode(shared_ptr<GetRegisterCodeRequest> request);
  InactivateCaCertificateResponse inactivateCaCertificateWithOptions(shared_ptr<InactivateCaCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InactivateCaCertificateResponse inactivateCaCertificate(shared_ptr<InactivateCaCertificateRequest> request);
  InactivateDeviceCertificateResponse inactivateDeviceCertificateWithOptions(shared_ptr<InactivateDeviceCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InactivateDeviceCertificateResponse inactivateDeviceCertificate(shared_ptr<InactivateDeviceCertificateRequest> request);
  ListCaCertificateResponse listCaCertificateWithOptions(shared_ptr<ListCaCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCaCertificateResponse listCaCertificate(shared_ptr<ListCaCertificateRequest> request);
  ListDeviceCertificateResponse listDeviceCertificateWithOptions(shared_ptr<ListDeviceCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceCertificateResponse listDeviceCertificate(shared_ptr<ListDeviceCertificateRequest> request);
  ListDeviceCertificateByCaSnResponse listDeviceCertificateByCaSnWithOptions(shared_ptr<ListDeviceCertificateByCaSnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceCertificateByCaSnResponse listDeviceCertificateByCaSn(shared_ptr<ListDeviceCertificateByCaSnRequest> request);
  ListDeviceCredentialClientIdResponse listDeviceCredentialClientIdWithOptions(shared_ptr<ListDeviceCredentialClientIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDeviceCredentialClientIdResponse listDeviceCredentialClientId(shared_ptr<ListDeviceCredentialClientIdRequest> request);
  ListGroupIdResponse listGroupIdWithOptions(shared_ptr<ListGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListGroupIdResponse listGroupId(shared_ptr<ListGroupIdRequest> request);
  QueryMqttTraceDeviceResponse queryMqttTraceDeviceWithOptions(shared_ptr<QueryMqttTraceDeviceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMqttTraceDeviceResponse queryMqttTraceDevice(shared_ptr<QueryMqttTraceDeviceRequest> request);
  QueryMqttTraceMessageOfClientResponse queryMqttTraceMessageOfClientWithOptions(shared_ptr<QueryMqttTraceMessageOfClientRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMqttTraceMessageOfClientResponse queryMqttTraceMessageOfClient(shared_ptr<QueryMqttTraceMessageOfClientRequest> request);
  QueryMqttTraceMessagePublishResponse queryMqttTraceMessagePublishWithOptions(shared_ptr<QueryMqttTraceMessagePublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMqttTraceMessagePublishResponse queryMqttTraceMessagePublish(shared_ptr<QueryMqttTraceMessagePublishRequest> request);
  QueryMqttTraceMessageSubscribeResponse queryMqttTraceMessageSubscribeWithOptions(shared_ptr<QueryMqttTraceMessageSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryMqttTraceMessageSubscribeResponse queryMqttTraceMessageSubscribe(shared_ptr<QueryMqttTraceMessageSubscribeRequest> request);
  QuerySessionByClientIdResponse querySessionByClientIdWithOptions(shared_ptr<QuerySessionByClientIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySessionByClientIdResponse querySessionByClientId(shared_ptr<QuerySessionByClientIdRequest> request);
  QueryTokenResponse queryTokenWithOptions(shared_ptr<QueryTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryTokenResponse queryToken(shared_ptr<QueryTokenRequest> request);
  RefreshDeviceCredentialResponse refreshDeviceCredentialWithOptions(shared_ptr<RefreshDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RefreshDeviceCredentialResponse refreshDeviceCredential(shared_ptr<RefreshDeviceCredentialRequest> request);
  RegisterCaCertificateResponse registerCaCertificateWithOptions(shared_ptr<RegisterCaCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterCaCertificateResponse registerCaCertificate(shared_ptr<RegisterCaCertificateRequest> request);
  RegisterDeviceCredentialResponse registerDeviceCredentialWithOptions(shared_ptr<RegisterDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterDeviceCredentialResponse registerDeviceCredential(shared_ptr<RegisterDeviceCredentialRequest> request);
  RevokeTokenResponse revokeTokenWithOptions(shared_ptr<RevokeTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RevokeTokenResponse revokeToken(shared_ptr<RevokeTokenRequest> request);
  SendMessageResponse sendMessageWithOptions(shared_ptr<SendMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendMessageResponse sendMessage(shared_ptr<SendMessageRequest> request);
  UnRegisterDeviceCredentialResponse unRegisterDeviceCredentialWithOptions(shared_ptr<UnRegisterDeviceCredentialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UnRegisterDeviceCredentialResponse unRegisterDeviceCredential(shared_ptr<UnRegisterDeviceCredentialRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_OnsMqtt20200420

#endif
