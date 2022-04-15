// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_APPSTREAM-CENTER20220210_H_
#define ALIBABACLOUD_APPSTREAM-CENTER20220210_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Appstream-center20220210 {
class GetMqttTicketRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientOS{};
  shared_ptr<long> clientType{};
  shared_ptr<string> clientVersion{};
  shared_ptr<string> loginToken{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> uuid{};

  GetMqttTicketRequest() {}

  explicit GetMqttTicketRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientOS) {
      res["ClientOS"] = boost::any(*clientOS);
    }
    if (clientType) {
      res["ClientType"] = boost::any(*clientType);
    }
    if (clientVersion) {
      res["ClientVersion"] = boost::any(*clientVersion);
    }
    if (loginToken) {
      res["LoginToken"] = boost::any(*loginToken);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (uuid) {
      res["Uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientOS") != m.end() && !m["ClientOS"].empty()) {
      clientOS = make_shared<string>(boost::any_cast<string>(m["ClientOS"]));
    }
    if (m.find("ClientType") != m.end() && !m["ClientType"].empty()) {
      clientType = make_shared<long>(boost::any_cast<long>(m["ClientType"]));
    }
    if (m.find("ClientVersion") != m.end() && !m["ClientVersion"].empty()) {
      clientVersion = make_shared<string>(boost::any_cast<string>(m["ClientVersion"]));
    }
    if (m.find("LoginToken") != m.end() && !m["LoginToken"].empty()) {
      loginToken = make_shared<string>(boost::any_cast<string>(m["LoginToken"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Uuid") != m.end() && !m["Uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["Uuid"]));
    }
  }


  virtual ~GetMqttTicketRequest() = default;
};
class GetMqttTicketResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> expireTimeStamp{};
  shared_ptr<string> message{};
  shared_ptr<string> mqttEndpoint{};
  shared_ptr<string> mqttGroupId{};
  shared_ptr<string> mqttInstanceId{};
  shared_ptr<string> mqttPassword{};
  shared_ptr<string> mqttUsername{};
  shared_ptr<string> mqttVPCEndpoint{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};
  shared_ptr<string> topicList{};

  GetMqttTicketResponseBody() {}

  explicit GetMqttTicketResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (expireTimeStamp) {
      res["ExpireTimeStamp"] = boost::any(*expireTimeStamp);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (mqttEndpoint) {
      res["MqttEndpoint"] = boost::any(*mqttEndpoint);
    }
    if (mqttGroupId) {
      res["MqttGroupId"] = boost::any(*mqttGroupId);
    }
    if (mqttInstanceId) {
      res["MqttInstanceId"] = boost::any(*mqttInstanceId);
    }
    if (mqttPassword) {
      res["MqttPassword"] = boost::any(*mqttPassword);
    }
    if (mqttUsername) {
      res["MqttUsername"] = boost::any(*mqttUsername);
    }
    if (mqttVPCEndpoint) {
      res["MqttVPCEndpoint"] = boost::any(*mqttVPCEndpoint);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (topicList) {
      res["TopicList"] = boost::any(*topicList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ExpireTimeStamp") != m.end() && !m["ExpireTimeStamp"].empty()) {
      expireTimeStamp = make_shared<string>(boost::any_cast<string>(m["ExpireTimeStamp"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("MqttEndpoint") != m.end() && !m["MqttEndpoint"].empty()) {
      mqttEndpoint = make_shared<string>(boost::any_cast<string>(m["MqttEndpoint"]));
    }
    if (m.find("MqttGroupId") != m.end() && !m["MqttGroupId"].empty()) {
      mqttGroupId = make_shared<string>(boost::any_cast<string>(m["MqttGroupId"]));
    }
    if (m.find("MqttInstanceId") != m.end() && !m["MqttInstanceId"].empty()) {
      mqttInstanceId = make_shared<string>(boost::any_cast<string>(m["MqttInstanceId"]));
    }
    if (m.find("MqttPassword") != m.end() && !m["MqttPassword"].empty()) {
      mqttPassword = make_shared<string>(boost::any_cast<string>(m["MqttPassword"]));
    }
    if (m.find("MqttUsername") != m.end() && !m["MqttUsername"].empty()) {
      mqttUsername = make_shared<string>(boost::any_cast<string>(m["MqttUsername"]));
    }
    if (m.find("MqttVPCEndpoint") != m.end() && !m["MqttVPCEndpoint"].empty()) {
      mqttVPCEndpoint = make_shared<string>(boost::any_cast<string>(m["MqttVPCEndpoint"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["Success"]));
    }
    if (m.find("TopicList") != m.end() && !m["TopicList"].empty()) {
      topicList = make_shared<string>(boost::any_cast<string>(m["TopicList"]));
    }
  }


  virtual ~GetMqttTicketResponseBody() = default;
};
class GetMqttTicketResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetMqttTicketResponseBody> body{};

  GetMqttTicketResponse() {}

  explicit GetMqttTicketResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {
    if (!headers) {
      BOOST_THROW_EXCEPTION(boost::enable_error_info(std::runtime_error("headers is required.")));
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
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("headers") != m.end() && !m["headers"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["headers"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      headers = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        GetMqttTicketResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMqttTicketResponseBody>(model1);
      }
    }
  }


  virtual ~GetMqttTicketResponse() = default;
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
  GetMqttTicketResponse getMqttTicketWithOptions(shared_ptr<GetMqttTicketRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMqttTicketResponse getMqttTicket(shared_ptr<GetMqttTicketRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Appstream-center20220210

#endif
