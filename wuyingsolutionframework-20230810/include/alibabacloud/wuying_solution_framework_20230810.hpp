// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_WUYINGSOLUTIONFRAMEWORK20230810_H_
#define ALIBABACLOUD_WUYINGSOLUTIONFRAMEWORK20230810_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_WuyingSolutionFramework20230810 {
class SendOpsMessageToTerminalRequest : public Darabonba::Model {
public:
  shared_ptr<string> messageBody{};
  shared_ptr<string> officeRegionId{};
  shared_ptr<string> opsAction{};
  shared_ptr<string> serialNo{};
  shared_ptr<bool> waitForAck{};
  shared_ptr<bool> waitForMsg{};

  SendOpsMessageToTerminalRequest() {}

  explicit SendOpsMessageToTerminalRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageBody) {
      res["MessageBody"] = boost::any(*messageBody);
    }
    if (officeRegionId) {
      res["OfficeRegionId"] = boost::any(*officeRegionId);
    }
    if (opsAction) {
      res["OpsAction"] = boost::any(*opsAction);
    }
    if (serialNo) {
      res["SerialNo"] = boost::any(*serialNo);
    }
    if (waitForAck) {
      res["WaitForAck"] = boost::any(*waitForAck);
    }
    if (waitForMsg) {
      res["WaitForMsg"] = boost::any(*waitForMsg);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageBody") != m.end() && !m["MessageBody"].empty()) {
      messageBody = make_shared<string>(boost::any_cast<string>(m["MessageBody"]));
    }
    if (m.find("OfficeRegionId") != m.end() && !m["OfficeRegionId"].empty()) {
      officeRegionId = make_shared<string>(boost::any_cast<string>(m["OfficeRegionId"]));
    }
    if (m.find("OpsAction") != m.end() && !m["OpsAction"].empty()) {
      opsAction = make_shared<string>(boost::any_cast<string>(m["OpsAction"]));
    }
    if (m.find("SerialNo") != m.end() && !m["SerialNo"].empty()) {
      serialNo = make_shared<string>(boost::any_cast<string>(m["SerialNo"]));
    }
    if (m.find("WaitForAck") != m.end() && !m["WaitForAck"].empty()) {
      waitForAck = make_shared<bool>(boost::any_cast<bool>(m["WaitForAck"]));
    }
    if (m.find("WaitForMsg") != m.end() && !m["WaitForMsg"].empty()) {
      waitForMsg = make_shared<bool>(boost::any_cast<bool>(m["WaitForMsg"]));
    }
  }


  virtual ~SendOpsMessageToTerminalRequest() = default;
};
class SendOpsMessageToTerminalResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SendOpsMessageToTerminalResponseBody() {}

  explicit SendOpsMessageToTerminalResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SendOpsMessageToTerminalResponseBody() = default;
};
class SendOpsMessageToTerminalResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendOpsMessageToTerminalResponseBody> body{};

  SendOpsMessageToTerminalResponse() {}

  explicit SendOpsMessageToTerminalResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendOpsMessageToTerminalResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendOpsMessageToTerminalResponseBody>(model1);
      }
    }
  }


  virtual ~SendOpsMessageToTerminalResponse() = default;
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
  SendOpsMessageToTerminalResponse sendOpsMessageToTerminalWithOptions(shared_ptr<SendOpsMessageToTerminalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendOpsMessageToTerminalResponse sendOpsMessageToTerminal(shared_ptr<SendOpsMessageToTerminalRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_WuyingSolutionFramework20230810

#endif
