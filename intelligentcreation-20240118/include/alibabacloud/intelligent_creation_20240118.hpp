// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_INTELLIGENTCREATION20240118_H_
#define ALIBABACLOUD_INTELLIGENTCREATION20240118_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

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
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ActualDeductResourceResult() {}

  explicit ActualDeductResourceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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
  shared_ptr<string> deductScene{};
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
    if (deductScene) {
      res["deductScene"] = boost::any(*deductScene);
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
    if (m.find("deductScene") != m.end() && !m["deductScene"].empty()) {
      deductScene = make_shared<string>(boost::any_cast<string>(m["deductScene"]));
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
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DirectDeductResourceResult() {}

  explicit DirectDeductResourceResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
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
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
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
class ActualDeductResourceRequest : public Darabonba::Model {
public:
  shared_ptr<ActualDeductResourceCmd> body{};

  ActualDeductResourceRequest() {}

  explicit ActualDeductResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ActualDeductResourceCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActualDeductResourceCmd>(model1);
      }
    }
  }


  virtual ~ActualDeductResourceRequest() = default;
};
class ActualDeductResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActualDeductResourceResult> body{};

  ActualDeductResourceResponse() {}

  explicit ActualDeductResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActualDeductResourceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActualDeductResourceResult>(model1);
      }
    }
  }


  virtual ~ActualDeductResourceResponse() = default;
};
class ActualDeductResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<ActualDeductResourceCmd> body{};

  ActualDeductResourcesRequest() {}

  explicit ActualDeductResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ActualDeductResourceCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActualDeductResourceCmd>(model1);
      }
    }
  }


  virtual ~ActualDeductResourcesRequest() = default;
};
class ActualDeductResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ActualDeductResourceResult> body{};

  ActualDeductResourcesResponse() {}

  explicit ActualDeductResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActualDeductResourceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActualDeductResourceResult>(model1);
      }
    }
  }


  virtual ~ActualDeductResourcesResponse() = default;
};
class CopywritingQARequestHistory : public Darabonba::Model {
public:
  shared_ptr<string> bot{};
  shared_ptr<string> user{};

  CopywritingQARequestHistory() {}

  explicit CopywritingQARequestHistory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bot) {
      res["bot"] = boost::any(*bot);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bot") != m.end() && !m["bot"].empty()) {
      bot = make_shared<string>(boost::any_cast<string>(m["bot"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~CopywritingQARequestHistory() = default;
};
class CopywritingQARequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<CopywritingQARequestHistory> history{};
  shared_ptr<string> question{};
  shared_ptr<string> sessionId{};
  shared_ptr<bool> stream{};
  shared_ptr<string> subAccountId{};

  CopywritingQARequest() {}

  explicit CopywritingQARequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (history) {
      res["history"] = history ? boost::any(history->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (question) {
      res["question"] = boost::any(*question);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (subAccountId) {
      res["subAccountId"] = boost::any(*subAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("history") != m.end() && !m["history"].empty()) {
      if (typeid(map<string, boost::any>) == m["history"].type()) {
        CopywritingQARequestHistory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["history"]));
        history = make_shared<CopywritingQARequestHistory>(model1);
      }
    }
    if (m.find("question") != m.end() && !m["question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["question"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("subAccountId") != m.end() && !m["subAccountId"].empty()) {
      subAccountId = make_shared<string>(boost::any_cast<string>(m["subAccountId"]));
    }
  }


  virtual ~CopywritingQARequest() = default;
};
class CopywritingQAShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> historyShrink{};
  shared_ptr<string> question{};
  shared_ptr<string> sessionId{};
  shared_ptr<bool> stream{};
  shared_ptr<string> subAccountId{};

  CopywritingQAShrinkRequest() {}

  explicit CopywritingQAShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (historyShrink) {
      res["history"] = boost::any(*historyShrink);
    }
    if (question) {
      res["question"] = boost::any(*question);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (subAccountId) {
      res["subAccountId"] = boost::any(*subAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("history") != m.end() && !m["history"].empty()) {
      historyShrink = make_shared<string>(boost::any_cast<string>(m["history"]));
    }
    if (m.find("question") != m.end() && !m["question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["question"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("subAccountId") != m.end() && !m["subAccountId"].empty()) {
      subAccountId = make_shared<string>(boost::any_cast<string>(m["subAccountId"]));
    }
  }


  virtual ~CopywritingQAShrinkRequest() = default;
};
class CopywritingQAResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<string> sessionId{};
  shared_ptr<bool> success{};

  CopywritingQAResponseBody() {}

  explicit CopywritingQAResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~CopywritingQAResponseBody() = default;
};
class CopywritingQAResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CopywritingQAResponseBody> body{};

  CopywritingQAResponse() {}

  explicit CopywritingQAResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CopywritingQAResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CopywritingQAResponseBody>(model1);
      }
    }
  }


  virtual ~CopywritingQAResponse() = default;
};
class DirectDeductResourceRequest : public Darabonba::Model {
public:
  shared_ptr<DirectDeductResourceCmd> body{};

  DirectDeductResourceRequest() {}

  explicit DirectDeductResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DirectDeductResourceCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DirectDeductResourceCmd>(model1);
      }
    }
  }


  virtual ~DirectDeductResourceRequest() = default;
};
class DirectDeductResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DirectDeductResourceResult> body{};

  DirectDeductResourceResponse() {}

  explicit DirectDeductResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DirectDeductResourceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DirectDeductResourceResult>(model1);
      }
    }
  }


  virtual ~DirectDeductResourceResponse() = default;
};
class DirectDeductResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<DirectDeductResourceCmd> body{};

  DirectDeductResourcesRequest() {}

  explicit DirectDeductResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        DirectDeductResourceCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DirectDeductResourceCmd>(model1);
      }
    }
  }


  virtual ~DirectDeductResourcesRequest() = default;
};
class DirectDeductResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DirectDeductResourceResult> body{};

  DirectDeductResourcesResponse() {}

  explicit DirectDeductResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DirectDeductResourceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DirectDeductResourceResult>(model1);
      }
    }
  }


  virtual ~DirectDeductResourcesResponse() = default;
};
class ExpectDeductResourceRequest : public Darabonba::Model {
public:
  shared_ptr<ExpectDeductResourceCmd> body{};

  ExpectDeductResourceRequest() {}

  explicit ExpectDeductResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExpectDeductResourceCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExpectDeductResourceCmd>(model1);
      }
    }
  }


  virtual ~ExpectDeductResourceRequest() = default;
};
class ExpectDeductResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExpectDeductResourceResult> body{};

  ExpectDeductResourceResponse() {}

  explicit ExpectDeductResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExpectDeductResourceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExpectDeductResourceResult>(model1);
      }
    }
  }


  virtual ~ExpectDeductResourceResponse() = default;
};
class ExpectDeductResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<ExpectDeductResourceCmd> body{};

  ExpectDeductResourcesRequest() {}

  explicit ExpectDeductResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        ExpectDeductResourceCmd model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExpectDeductResourceCmd>(model1);
      }
    }
  }


  virtual ~ExpectDeductResourcesRequest() = default;
};
class ExpectDeductResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExpectDeductResourceResult> body{};

  ExpectDeductResourcesResponse() {}

  explicit ExpectDeductResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExpectDeductResourceResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExpectDeductResourceResult>(model1);
      }
    }
  }


  virtual ~ExpectDeductResourcesResponse() = default;
};
class GetRemainResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> resourceType{};
  shared_ptr<string> subAccountId{};

  GetRemainResourceRequest() {}

  explicit GetRemainResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (resourceType) {
      res["resourceType"] = boost::any(*resourceType);
    }
    if (subAccountId) {
      res["subAccountId"] = boost::any(*subAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("resourceType") != m.end() && !m["resourceType"].empty()) {
      resourceType = make_shared<string>(boost::any_cast<string>(m["resourceType"]));
    }
    if (m.find("subAccountId") != m.end() && !m["subAccountId"].empty()) {
      subAccountId = make_shared<string>(boost::any_cast<string>(m["subAccountId"]));
    }
  }


  virtual ~GetRemainResourceRequest() = default;
};
class GetRemainResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<long> remainCount{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetRemainResourceResponseBody() {}

  explicit GetRemainResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (remainCount) {
      res["remainCount"] = boost::any(*remainCount);
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
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("remainCount") != m.end() && !m["remainCount"].empty()) {
      remainCount = make_shared<long>(boost::any_cast<long>(m["remainCount"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetRemainResourceResponseBody() = default;
};
class GetRemainResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRemainResourceResponseBody> body{};

  GetRemainResourceResponse() {}

  explicit GetRemainResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRemainResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRemainResourceResponseBody>(model1);
      }
    }
  }


  virtual ~GetRemainResourceResponse() = default;
};
class SubmitBulletQuestionsRequestQuestions : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> id{};
  shared_ptr<string> username{};

  SubmitBulletQuestionsRequestQuestions() {}

  explicit SubmitBulletQuestionsRequestQuestions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (username) {
      res["username"] = boost::any(*username);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("username") != m.end() && !m["username"].empty()) {
      username = make_shared<string>(boost::any_cast<string>(m["username"]));
    }
  }


  virtual ~SubmitBulletQuestionsRequestQuestions() = default;
};
class SubmitBulletQuestionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<vector<SubmitBulletQuestionsRequestQuestions>> questions{};
  shared_ptr<string> roomId{};
  shared_ptr<string> subAccountId{};

  SubmitBulletQuestionsRequest() {}

  explicit SubmitBulletQuestionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (questions) {
      vector<boost::any> temp1;
      for(auto item1:*questions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["questions"] = boost::any(temp1);
    }
    if (roomId) {
      res["roomId"] = boost::any(*roomId);
    }
    if (subAccountId) {
      res["subAccountId"] = boost::any(*subAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("questions") != m.end() && !m["questions"].empty()) {
      if (typeid(vector<boost::any>) == m["questions"].type()) {
        vector<SubmitBulletQuestionsRequestQuestions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["questions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitBulletQuestionsRequestQuestions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        questions = make_shared<vector<SubmitBulletQuestionsRequestQuestions>>(expect1);
      }
    }
    if (m.find("roomId") != m.end() && !m["roomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["roomId"]));
    }
    if (m.find("subAccountId") != m.end() && !m["subAccountId"].empty()) {
      subAccountId = make_shared<string>(boost::any_cast<string>(m["subAccountId"]));
    }
  }


  virtual ~SubmitBulletQuestionsRequest() = default;
};
class SubmitBulletQuestionsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> accountId{};
  shared_ptr<string> questionsShrink{};
  shared_ptr<string> roomId{};
  shared_ptr<string> subAccountId{};

  SubmitBulletQuestionsShrinkRequest() {}

  explicit SubmitBulletQuestionsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountId) {
      res["accountId"] = boost::any(*accountId);
    }
    if (questionsShrink) {
      res["questions"] = boost::any(*questionsShrink);
    }
    if (roomId) {
      res["roomId"] = boost::any(*roomId);
    }
    if (subAccountId) {
      res["subAccountId"] = boost::any(*subAccountId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("accountId") != m.end() && !m["accountId"].empty()) {
      accountId = make_shared<string>(boost::any_cast<string>(m["accountId"]));
    }
    if (m.find("questions") != m.end() && !m["questions"].empty()) {
      questionsShrink = make_shared<string>(boost::any_cast<string>(m["questions"]));
    }
    if (m.find("roomId") != m.end() && !m["roomId"].empty()) {
      roomId = make_shared<string>(boost::any_cast<string>(m["roomId"]));
    }
    if (m.find("subAccountId") != m.end() && !m["subAccountId"].empty()) {
      subAccountId = make_shared<string>(boost::any_cast<string>(m["subAccountId"]));
    }
  }


  virtual ~SubmitBulletQuestionsShrinkRequest() = default;
};
class SubmitBulletQuestionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};
  shared_ptr<bool> success{};

  SubmitBulletQuestionsResponseBody() {}

  explicit SubmitBulletQuestionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorMessage) {
      res["errorMessage"] = boost::any(*errorMessage);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorMessage") != m.end() && !m["errorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["errorMessage"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~SubmitBulletQuestionsResponseBody() = default;
};
class SubmitBulletQuestionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitBulletQuestionsResponseBody> body{};

  SubmitBulletQuestionsResponse() {}

  explicit SubmitBulletQuestionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitBulletQuestionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitBulletQuestionsResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitBulletQuestionsResponse() = default;
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
  ActualDeductResourceResponse actualDeductResourceWithOptions(shared_ptr<ActualDeductResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActualDeductResourceResponse actualDeductResource(shared_ptr<ActualDeductResourceRequest> request);
  ActualDeductResourcesResponse actualDeductResourcesWithOptions(shared_ptr<ActualDeductResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActualDeductResourcesResponse actualDeductResources(shared_ptr<ActualDeductResourcesRequest> request);
  CopywritingQAResponse copywritingQAWithOptions(shared_ptr<CopywritingQARequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CopywritingQAResponse copywritingQA(shared_ptr<CopywritingQARequest> request);
  DirectDeductResourceResponse directDeductResourceWithOptions(shared_ptr<DirectDeductResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DirectDeductResourceResponse directDeductResource(shared_ptr<DirectDeductResourceRequest> request);
  DirectDeductResourcesResponse directDeductResourcesWithOptions(shared_ptr<DirectDeductResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DirectDeductResourcesResponse directDeductResources(shared_ptr<DirectDeductResourcesRequest> request);
  ExpectDeductResourceResponse expectDeductResourceWithOptions(shared_ptr<ExpectDeductResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExpectDeductResourceResponse expectDeductResource(shared_ptr<ExpectDeductResourceRequest> request);
  ExpectDeductResourcesResponse expectDeductResourcesWithOptions(shared_ptr<ExpectDeductResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExpectDeductResourcesResponse expectDeductResources(shared_ptr<ExpectDeductResourcesRequest> request);
  GetRemainResourceResponse getRemainResourceWithOptions(shared_ptr<GetRemainResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRemainResourceResponse getRemainResource(shared_ptr<GetRemainResourceRequest> request);
  SubmitBulletQuestionsResponse submitBulletQuestionsWithOptions(shared_ptr<SubmitBulletQuestionsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitBulletQuestionsResponse submitBulletQuestions(shared_ptr<SubmitBulletQuestionsRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_IntelligentCreation20240118

#endif
