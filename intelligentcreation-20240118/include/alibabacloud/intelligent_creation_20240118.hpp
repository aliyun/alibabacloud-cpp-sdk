// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_INTELLIGENTCREATION20240118_H_
#define ALIBABACLOUD_INTELLIGENTCREATION20240118_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_IntelligentCreation20240118 {
class ActualDeductResourceCmd : public Darabonba::Model {
public:
  shared_ptr<long> cost{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> idempotentId{};
  shared_ptr<string> taskId{};

  ActualDeductResourceCmd() {}

  explicit ActualDeductResourceCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (idempotentId) {
      res["idempotentId"] = boost::any(*idempotentId);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("idempotentId") != m.end() && !m["idempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["idempotentId"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ActualDeductResourceCmd() = default;
};
class ActualDeductResourceResult : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorcode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ActualDeductResourceResult() {}

  explicit ActualDeductResourceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorcode) {
      res["errorcode"] = boost::any(*errorcode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorcode") != m.end() && !m["errorcode"].empty()) {
      errorcode = make_shared<string>(boost::any_cast<string>(m["errorcode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ActualDeductResourceResult() = default;
};
class DirectDeductResourceCmd : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> cost{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> idempotentId{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> subAccountId{};
  shared_ptr<string> token{};

  DirectDeductResourceCmd() {}

  explicit DirectDeductResourceCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (idempotentId) {
      res["idempotentId"] = boost::any(*idempotentId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (subAccountId) {
      res["subAccountId"] = boost::any(*subAccountId);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("idempotentId") != m.end() && !m["idempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["idempotentId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["resourceType"]));
    }
    if (m.find("subAccountId") != m.end() && !m["subAccountId"].empty()) {
      subAccountId = make_shared<string>(boost::any_cast<string>(m["subAccountId"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~DirectDeductResourceCmd() = default;
};
class DirectDeductResourceResult : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorcode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DirectDeductResourceResult() {}

  explicit DirectDeductResourceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorcode) {
      res["errorcode"] = boost::any(*errorcode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorcode") != m.end() && !m["errorcode"].empty()) {
      errorcode = make_shared<string>(boost::any_cast<string>(m["errorcode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~DirectDeductResourceResult() = default;
};
class ExpectDeductResourceCmd : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<long> cost{};
  shared_ptr<string> extraInfo{};
  shared_ptr<string> idempotentId{};
  shared_ptr<long> resourceType{};
  shared_ptr<string> subAccountId{};
  shared_ptr<string> token{};

  ExpectDeductResourceCmd() {}

  explicit ExpectDeductResourceCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (cost) {
      res["cost"] = boost::any(*cost);
    }
    if (extraInfo) {
      res["extraInfo"] = boost::any(*extraInfo);
    }
    if (idempotentId) {
      res["idempotentId"] = boost::any(*idempotentId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (subAccountId) {
      res["subAccountId"] = boost::any(*subAccountId);
    }
    if (token) {
      res["token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("cost") != m.end() && !m["cost"].empty()) {
      cost = make_shared<long>(boost::any_cast<long>(m["cost"]));
    }
    if (m.find("extraInfo") != m.end() && !m["extraInfo"].empty()) {
      extraInfo = make_shared<string>(boost::any_cast<string>(m["extraInfo"]));
    }
    if (m.find("idempotentId") != m.end() && !m["idempotentId"].empty()) {
      idempotentId = make_shared<string>(boost::any_cast<string>(m["idempotentId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<long>(boost::any_cast<long>(m["resourceType"]));
    }
    if (m.find("subAccountId") != m.end() && !m["subAccountId"].empty()) {
      subAccountId = make_shared<string>(boost::any_cast<string>(m["subAccountId"]));
    }
    if (m.find("token") != m.end() && !m["token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["token"]));
    }
  }


  virtual ~ExpectDeductResourceCmd() = default;
};
class ExpectDeductResourceResult : public Darabonba::Model {
public:
  shared_ptr<string> errorMessage{};
  shared_ptr<string> errorcode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ExpectDeductResourceResult() {}

  explicit ExpectDeductResourceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (errorcode) {
      res["errorcode"] = boost::any(*errorcode);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("errorcode") != m.end() && !m["errorcode"].empty()) {
      errorcode = make_shared<string>(boost::any_cast<string>(m["errorcode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~ExpectDeductResourceResult() = default;
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

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IntelligentCreation20240118

#endif
