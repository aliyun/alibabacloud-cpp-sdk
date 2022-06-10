// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CHATBOT20220408_H_
#define ALIBABACLOUD_CHATBOT20220408_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Chatbot20220408 {
class AssociateRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> perspective{};
  shared_ptr<long> recommendNum{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> utterance{};

  AssociateRequest() {}

  explicit AssociateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (perspective) {
      res["Perspective"] = boost::any(*perspective);
    }
    if (recommendNum) {
      res["RecommendNum"] = boost::any(*recommendNum);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Perspective") != m.end() && !m["Perspective"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Perspective"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Perspective"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspective = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RecommendNum") != m.end() && !m["RecommendNum"].empty()) {
      recommendNum = make_shared<long>(boost::any_cast<long>(m["RecommendNum"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
  }


  virtual ~AssociateRequest() = default;
};
class AssociateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> perspectiveShrink{};
  shared_ptr<long> recommendNum{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> utterance{};

  AssociateShrinkRequest() {}

  explicit AssociateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (perspectiveShrink) {
      res["Perspective"] = boost::any(*perspectiveShrink);
    }
    if (recommendNum) {
      res["RecommendNum"] = boost::any(*recommendNum);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Perspective") != m.end() && !m["Perspective"].empty()) {
      perspectiveShrink = make_shared<string>(boost::any_cast<string>(m["Perspective"]));
    }
    if (m.find("RecommendNum") != m.end() && !m["RecommendNum"].empty()) {
      recommendNum = make_shared<long>(boost::any_cast<long>(m["RecommendNum"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
  }


  virtual ~AssociateShrinkRequest() = default;
};
class AssociateResponseBodyAssociate : public Darabonba::Model {
public:
  shared_ptr<string> meta{};
  shared_ptr<string> title{};

  AssociateResponseBodyAssociate() {}

  explicit AssociateResponseBodyAssociate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (meta) {
      res["Meta"] = boost::any(*meta);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Meta") != m.end() && !m["Meta"].empty()) {
      meta = make_shared<string>(boost::any_cast<string>(m["Meta"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~AssociateResponseBodyAssociate() = default;
};
class AssociateResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AssociateResponseBodyAssociate>> associate{};
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};

  AssociateResponseBody() {}

  explicit AssociateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (associate) {
      vector<boost::any> temp1;
      for(auto item1:*associate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Associate"] = boost::any(temp1);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Associate") != m.end() && !m["Associate"].empty()) {
      if (typeid(vector<boost::any>) == m["Associate"].type()) {
        vector<AssociateResponseBodyAssociate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Associate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AssociateResponseBodyAssociate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        associate = make_shared<vector<AssociateResponseBodyAssociate>>(expect1);
      }
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~AssociateResponseBody() = default;
};
class AssociateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateResponseBody> body{};

  AssociateResponse() {}

  explicit AssociateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateResponse() = default;
};
class BeginSessionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};

  BeginSessionRequest() {}

  explicit BeginSessionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~BeginSessionRequest() = default;
};
class BeginSessionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> welcomeMessage{};

  BeginSessionResponseBody() {}

  explicit BeginSessionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (welcomeMessage) {
      res["WelcomeMessage"] = boost::any(*welcomeMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("WelcomeMessage") != m.end() && !m["WelcomeMessage"].empty()) {
      welcomeMessage = make_shared<string>(boost::any_cast<string>(m["WelcomeMessage"]));
    }
  }


  virtual ~BeginSessionResponseBody() = default;
};
class BeginSessionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BeginSessionResponseBody> body{};

  BeginSessionResponse() {}

  explicit BeginSessionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BeginSessionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BeginSessionResponseBody>(model1);
      }
    }
  }


  virtual ~BeginSessionResponse() = default;
};
class CancelInstancePublishTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};

  CancelInstancePublishTaskRequest() {}

  explicit CancelInstancePublishTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CancelInstancePublishTaskRequest() = default;
};
class CancelInstancePublishTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypeList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> response{};
  shared_ptr<string> status{};

  CancelInstancePublishTaskResponseBody() {}

  explicit CancelInstancePublishTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      response = make_shared<string>(boost::any_cast<string>(m["Response"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CancelInstancePublishTaskResponseBody() = default;
};
class CancelInstancePublishTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelInstancePublishTaskResponseBody> body{};

  CancelInstancePublishTaskResponse() {}

  explicit CancelInstancePublishTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelInstancePublishTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelInstancePublishTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelInstancePublishTaskResponse() = default;
};
class CancelPublishTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};

  CancelPublishTaskRequest() {}

  explicit CancelPublishTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~CancelPublishTaskRequest() = default;
};
class CancelPublishTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypeList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> response{};
  shared_ptr<string> status{};

  CancelPublishTaskResponseBody() {}

  explicit CancelPublishTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      response = make_shared<string>(boost::any_cast<string>(m["Response"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CancelPublishTaskResponseBody() = default;
};
class CancelPublishTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelPublishTaskResponseBody> body{};

  CancelPublishTaskResponse() {}

  explicit CancelPublishTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelPublishTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelPublishTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CancelPublishTaskResponse() = default;
};
class ChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> intentName{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<vector<string>> perspective{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> utterance{};
  shared_ptr<string> vendorParam{};

  ChatRequest() {}

  explicit ChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (perspective) {
      res["Perspective"] = boost::any(*perspective);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    if (vendorParam) {
      res["VendorParam"] = boost::any(*vendorParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<string>(boost::any_cast<string>(m["KnowledgeId"]));
    }
    if (m.find("Perspective") != m.end() && !m["Perspective"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Perspective"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Perspective"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspective = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
    if (m.find("VendorParam") != m.end() && !m["VendorParam"].empty()) {
      vendorParam = make_shared<string>(boost::any_cast<string>(m["VendorParam"]));
    }
  }


  virtual ~ChatRequest() = default;
};
class ChatShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> intentName{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<string> perspectiveShrink{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> utterance{};
  shared_ptr<string> vendorParam{};

  ChatShrinkRequest() {}

  explicit ChatShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (perspectiveShrink) {
      res["Perspective"] = boost::any(*perspectiveShrink);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    if (vendorParam) {
      res["VendorParam"] = boost::any(*vendorParam);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<string>(boost::any_cast<string>(m["KnowledgeId"]));
    }
    if (m.find("Perspective") != m.end() && !m["Perspective"].empty()) {
      perspectiveShrink = make_shared<string>(boost::any_cast<string>(m["Perspective"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
    if (m.find("VendorParam") != m.end() && !m["VendorParam"].empty()) {
      vendorParam = make_shared<string>(boost::any_cast<string>(m["VendorParam"]));
    }
  }


  virtual ~ChatShrinkRequest() = default;
};
class ChatResponseBodyMessagesCardList : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> msgType{};
  shared_ptr<string> platform{};

  ChatResponseBodyMessagesCardList() {}

  explicit ChatResponseBodyMessagesCardList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (msgType) {
      res["MsgType"] = boost::any(*msgType);
    }
    if (platform) {
      res["Platform"] = boost::any(*platform);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("MsgType") != m.end() && !m["MsgType"].empty()) {
      msgType = make_shared<string>(boost::any_cast<string>(m["MsgType"]));
    }
    if (m.find("Platform") != m.end() && !m["Platform"].empty()) {
      platform = make_shared<string>(boost::any_cast<string>(m["Platform"]));
    }
  }


  virtual ~ChatResponseBodyMessagesCardList() = default;
};
class ChatResponseBodyMessagesKnowledgeRelatedKnowledges : public Darabonba::Model {
public:
  shared_ptr<string> knowledgeId{};
  shared_ptr<string> title{};

  ChatResponseBodyMessagesKnowledgeRelatedKnowledges() {}

  explicit ChatResponseBodyMessagesKnowledgeRelatedKnowledges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<string>(boost::any_cast<string>(m["KnowledgeId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ChatResponseBodyMessagesKnowledgeRelatedKnowledges() = default;
};
class ChatResponseBodyMessagesKnowledge : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> category{};
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> hitStatement{};
  shared_ptr<string> id{};
  shared_ptr<vector<ChatResponseBodyMessagesKnowledgeRelatedKnowledges>> relatedKnowledges{};
  shared_ptr<double> score{};
  shared_ptr<string> summary{};
  shared_ptr<string> title{};

  ChatResponseBodyMessagesKnowledge() {}

  explicit ChatResponseBodyMessagesKnowledge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (hitStatement) {
      res["HitStatement"] = boost::any(*hitStatement);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (relatedKnowledges) {
      vector<boost::any> temp1;
      for(auto item1:*relatedKnowledges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedKnowledges"] = boost::any(temp1);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("HitStatement") != m.end() && !m["HitStatement"].empty()) {
      hitStatement = make_shared<string>(boost::any_cast<string>(m["HitStatement"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("RelatedKnowledges") != m.end() && !m["RelatedKnowledges"].empty()) {
      if (typeid(vector<boost::any>) == m["RelatedKnowledges"].type()) {
        vector<ChatResponseBodyMessagesKnowledgeRelatedKnowledges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedKnowledges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatResponseBodyMessagesKnowledgeRelatedKnowledges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedKnowledges = make_shared<vector<ChatResponseBodyMessagesKnowledgeRelatedKnowledges>>(expect1);
      }
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ChatResponseBodyMessagesKnowledge() = default;
};
class ChatResponseBodyMessagesRecommends : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<double> score{};
  shared_ptr<string> title{};

  ChatResponseBodyMessagesRecommends() {}

  explicit ChatResponseBodyMessagesRecommends(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<string>(boost::any_cast<string>(m["KnowledgeId"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ChatResponseBodyMessagesRecommends() = default;
};
class ChatResponseBodyMessagesTextSlots : public Darabonba::Model {
public:
  shared_ptr<bool> hit{};
  shared_ptr<string> name{};
  shared_ptr<string> origin{};
  shared_ptr<string> value{};

  ChatResponseBodyMessagesTextSlots() {}

  explicit ChatResponseBodyMessagesTextSlots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hit) {
      res["Hit"] = boost::any(*hit);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Hit") != m.end() && !m["Hit"].empty()) {
      hit = make_shared<bool>(boost::any_cast<bool>(m["Hit"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ChatResponseBodyMessagesTextSlots() = default;
};
class ChatResponseBodyMessagesText : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> articleTitle{};
  shared_ptr<map<string, boost::any>> commands{};
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> dialogName{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<map<string, boost::any>> externalFlags{};
  shared_ptr<string> hitStatement{};
  shared_ptr<string> intentName{};
  shared_ptr<string> metaData{};
  shared_ptr<string> nodeId{};
  shared_ptr<string> nodeName{};
  shared_ptr<double> score{};
  shared_ptr<vector<ChatResponseBodyMessagesTextSlots>> slots{};
  shared_ptr<string> userDefinedChatTitle{};

  ChatResponseBodyMessagesText() {}

  explicit ChatResponseBodyMessagesText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (articleTitle) {
      res["ArticleTitle"] = boost::any(*articleTitle);
    }
    if (commands) {
      res["Commands"] = boost::any(*commands);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (externalFlags) {
      res["ExternalFlags"] = boost::any(*externalFlags);
    }
    if (hitStatement) {
      res["HitStatement"] = boost::any(*hitStatement);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (metaData) {
      res["MetaData"] = boost::any(*metaData);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (slots) {
      vector<boost::any> temp1;
      for(auto item1:*slots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Slots"] = boost::any(temp1);
    }
    if (userDefinedChatTitle) {
      res["UserDefinedChatTitle"] = boost::any(*userDefinedChatTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("ArticleTitle") != m.end() && !m["ArticleTitle"].empty()) {
      articleTitle = make_shared<string>(boost::any_cast<string>(m["ArticleTitle"]));
    }
    if (m.find("Commands") != m.end() && !m["Commands"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Commands"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      commands = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<string>(boost::any_cast<string>(m["ContentType"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("ExternalFlags") != m.end() && !m["ExternalFlags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExternalFlags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      externalFlags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("HitStatement") != m.end() && !m["HitStatement"].empty()) {
      hitStatement = make_shared<string>(boost::any_cast<string>(m["HitStatement"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("MetaData") != m.end() && !m["MetaData"].empty()) {
      metaData = make_shared<string>(boost::any_cast<string>(m["MetaData"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("Slots") != m.end() && !m["Slots"].empty()) {
      if (typeid(vector<boost::any>) == m["Slots"].type()) {
        vector<ChatResponseBodyMessagesTextSlots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Slots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatResponseBodyMessagesTextSlots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slots = make_shared<vector<ChatResponseBodyMessagesTextSlots>>(expect1);
      }
    }
    if (m.find("UserDefinedChatTitle") != m.end() && !m["UserDefinedChatTitle"].empty()) {
      userDefinedChatTitle = make_shared<string>(boost::any_cast<string>(m["UserDefinedChatTitle"]));
    }
  }


  virtual ~ChatResponseBodyMessagesText() = default;
};
class ChatResponseBodyMessages : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> answerType{};
  shared_ptr<vector<ChatResponseBodyMessagesCardList>> cardList{};
  shared_ptr<ChatResponseBodyMessagesKnowledge> knowledge{};
  shared_ptr<vector<ChatResponseBodyMessagesRecommends>> recommends{};
  shared_ptr<ChatResponseBodyMessagesText> text{};
  shared_ptr<string> title{};
  shared_ptr<string> voiceTitle{};

  ChatResponseBodyMessages() {}

  explicit ChatResponseBodyMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (answerType) {
      res["AnswerType"] = boost::any(*answerType);
    }
    if (cardList) {
      vector<boost::any> temp1;
      for(auto item1:*cardList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CardList"] = boost::any(temp1);
    }
    if (knowledge) {
      res["Knowledge"] = knowledge ? boost::any(knowledge->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recommends) {
      vector<boost::any> temp1;
      for(auto item1:*recommends){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Recommends"] = boost::any(temp1);
    }
    if (text) {
      res["Text"] = text ? boost::any(text->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (voiceTitle) {
      res["VoiceTitle"] = boost::any(*voiceTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("AnswerType") != m.end() && !m["AnswerType"].empty()) {
      answerType = make_shared<string>(boost::any_cast<string>(m["AnswerType"]));
    }
    if (m.find("CardList") != m.end() && !m["CardList"].empty()) {
      if (typeid(vector<boost::any>) == m["CardList"].type()) {
        vector<ChatResponseBodyMessagesCardList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CardList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatResponseBodyMessagesCardList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cardList = make_shared<vector<ChatResponseBodyMessagesCardList>>(expect1);
      }
    }
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      if (typeid(map<string, boost::any>) == m["Knowledge"].type()) {
        ChatResponseBodyMessagesKnowledge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Knowledge"]));
        knowledge = make_shared<ChatResponseBodyMessagesKnowledge>(model1);
      }
    }
    if (m.find("Recommends") != m.end() && !m["Recommends"].empty()) {
      if (typeid(vector<boost::any>) == m["Recommends"].type()) {
        vector<ChatResponseBodyMessagesRecommends> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Recommends"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatResponseBodyMessagesRecommends model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recommends = make_shared<vector<ChatResponseBodyMessagesRecommends>>(expect1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      if (typeid(map<string, boost::any>) == m["Text"].type()) {
        ChatResponseBodyMessagesText model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Text"]));
        text = make_shared<ChatResponseBodyMessagesText>(model1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("VoiceTitle") != m.end() && !m["VoiceTitle"].empty()) {
      voiceTitle = make_shared<string>(boost::any_cast<string>(m["VoiceTitle"]));
    }
  }


  virtual ~ChatResponseBodyMessages() = default;
};
class ChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<vector<ChatResponseBodyMessages>> messages{};
  shared_ptr<vector<string>> querySegList{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sessionId{};

  ChatResponseBody() {}

  explicit ChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (messages) {
      vector<boost::any> temp1;
      for(auto item1:*messages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Messages"] = boost::any(temp1);
    }
    if (querySegList) {
      res["QuerySegList"] = boost::any(*querySegList);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<ChatResponseBodyMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatResponseBodyMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<ChatResponseBodyMessages>>(expect1);
      }
    }
    if (m.find("QuerySegList") != m.end() && !m["QuerySegList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["QuerySegList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["QuerySegList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      querySegList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~ChatResponseBody() = default;
};
class ChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatResponseBody> body{};

  ChatResponse() {}

  explicit ChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatResponseBody>(model1);
      }
    }
  }


  virtual ~ChatResponse() = default;
};
class ContinueInstancePublishTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};

  ContinueInstancePublishTaskRequest() {}

  explicit ContinueInstancePublishTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ContinueInstancePublishTaskRequest() = default;
};
class ContinueInstancePublishTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypeList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<map<string, boost::any>> errors{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> response{};
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> warnings{};

  ContinueInstancePublishTaskResponseBody() {}

  explicit ContinueInstancePublishTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (errors) {
      res["Errors"] = boost::any(*errors);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (warnings) {
      res["Warnings"] = boost::any(*warnings);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Errors"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      errors = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      response = make_shared<string>(boost::any_cast<string>(m["Response"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Warnings") != m.end() && !m["Warnings"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Warnings"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      warnings = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~ContinueInstancePublishTaskResponseBody() = default;
};
class ContinueInstancePublishTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContinueInstancePublishTaskResponseBody> body{};

  ContinueInstancePublishTaskResponse() {}

  explicit ContinueInstancePublishTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContinueInstancePublishTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContinueInstancePublishTaskResponseBody>(model1);
      }
    }
  }


  virtual ~ContinueInstancePublishTaskResponse() = default;
};
class CreateCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};

  CreateCategoryRequest() {}

  explicit CreateCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
  }


  virtual ~CreateCategoryRequest() = default;
};
class CreateCategoryResponseBodyCategory : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};
  shared_ptr<long> status{};

  CreateCategoryResponseBodyCategory() {}

  explicit CreateCategoryResponseBodyCategory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~CreateCategoryResponseBodyCategory() = default;
};
class CreateCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateCategoryResponseBodyCategory> category{};
  shared_ptr<string> requestId{};

  CreateCategoryResponseBody() {}

  explicit CreateCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = category ? boost::any(category->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      if (typeid(map<string, boost::any>) == m["Category"].type()) {
        CreateCategoryResponseBodyCategory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Category"]));
        category = make_shared<CreateCategoryResponseBodyCategory>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateCategoryResponseBody() = default;
};
class CreateCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateCategoryResponseBody> body{};

  CreateCategoryResponse() {}

  explicit CreateCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCategoryResponse() = default;
};
class CreateConnQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> connQuestionId{};
  shared_ptr<long> knowledgeId{};

  CreateConnQuestionRequest() {}

  explicit CreateConnQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (connQuestionId) {
      res["ConnQuestionId"] = boost::any(*connQuestionId);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ConnQuestionId") != m.end() && !m["ConnQuestionId"].empty()) {
      connQuestionId = make_shared<long>(boost::any_cast<long>(m["ConnQuestionId"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~CreateConnQuestionRequest() = default;
};
class CreateConnQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> outlineId{};
  shared_ptr<string> requestId{};

  CreateConnQuestionResponseBody() {}

  explicit CreateConnQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outlineId) {
      res["OutlineId"] = boost::any(*outlineId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("OutlineId") != m.end() && !m["OutlineId"].empty()) {
      outlineId = make_shared<long>(boost::any_cast<long>(m["OutlineId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateConnQuestionResponseBody() = default;
};
class CreateConnQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateConnQuestionResponseBody> body{};

  CreateConnQuestionResponse() {}

  explicit CreateConnQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConnQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConnQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConnQuestionResponse() = default;
};
class CreateDSEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> instanceId{};

  CreateDSEntityRequest() {}

  explicit CreateDSEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateDSEntityRequest() = default;
};
class CreateDSEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> requestId{};

  CreateDSEntityResponseBody() {}

  explicit CreateDSEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDSEntityResponseBody() = default;
};
class CreateDSEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDSEntityResponseBody> body{};

  CreateDSEntityResponse() {}

  explicit CreateDSEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDSEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDSEntityResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDSEntityResponse() = default;
};
class CreateDSEntityValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<long> entityId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> synonyms{};

  CreateDSEntityValueRequest() {}

  explicit CreateDSEntityValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateDSEntityValueRequest() = default;
};
class CreateDSEntityValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityValueId{};
  shared_ptr<string> requestId{};

  CreateDSEntityValueResponseBody() {}

  explicit CreateDSEntityValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityValueId) {
      res["EntityValueId"] = boost::any(*entityValueId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityValueId") != m.end() && !m["EntityValueId"].empty()) {
      entityValueId = make_shared<long>(boost::any_cast<long>(m["EntityValueId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateDSEntityValueResponseBody() = default;
};
class CreateDSEntityValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDSEntityValueResponseBody> body{};

  CreateDSEntityValueResponse() {}

  explicit CreateDSEntityValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDSEntityValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDSEntityValueResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDSEntityValueResponse() = default;
};
class CreateFaqRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};
  shared_ptr<string> endDate{};
  shared_ptr<string> solutionContent{};
  shared_ptr<long> solutionType{};
  shared_ptr<string> startDate{};
  shared_ptr<string> title{};

  CreateFaqRequest() {}

  explicit CreateFaqRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (solutionContent) {
      res["SolutionContent"] = boost::any(*solutionContent);
    }
    if (solutionType) {
      res["SolutionType"] = boost::any(*solutionType);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("SolutionContent") != m.end() && !m["SolutionContent"].empty()) {
      solutionContent = make_shared<string>(boost::any_cast<string>(m["SolutionContent"]));
    }
    if (m.find("SolutionType") != m.end() && !m["SolutionType"].empty()) {
      solutionType = make_shared<long>(boost::any_cast<long>(m["SolutionType"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateFaqRequest() = default;
};
class CreateFaqResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> knowledgeId{};
  shared_ptr<string> requestId{};

  CreateFaqResponseBody() {}

  explicit CreateFaqResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateFaqResponseBody() = default;
};
class CreateFaqResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFaqResponseBody> body{};

  CreateFaqResponse() {}

  explicit CreateFaqResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFaqResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFaqResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFaqResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> introduction{};
  shared_ptr<string> languageCode{};
  shared_ptr<string> name{};
  shared_ptr<string> robotType{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (robotType) {
      res["RobotType"] = boost::any(*robotType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RobotType") != m.end() && !m["RobotType"].empty()) {
      robotType = make_shared<string>(boost::any_cast<string>(m["RobotType"]));
    }
  }


  virtual ~CreateInstanceRequest() = default;
};
class CreateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> requestId{};

  CreateInstanceResponseBody() {}

  explicit CreateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateInstanceResponseBody() = default;
};
class CreateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstanceResponseBody> body{};

  CreateInstanceResponse() {}

  explicit CreateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class CreateInstancePublishTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};

  CreateInstancePublishTaskRequest() {}

  explicit CreateInstancePublishTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateInstancePublishTaskRequest() = default;
};
class CreateInstancePublishTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypeList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> response{};
  shared_ptr<string> status{};

  CreateInstancePublishTaskResponseBody() {}

  explicit CreateInstancePublishTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      response = make_shared<string>(boost::any_cast<string>(m["Response"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateInstancePublishTaskResponseBody() = default;
};
class CreateInstancePublishTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateInstancePublishTaskResponseBody> body{};

  CreateInstancePublishTaskResponse() {}

  explicit CreateInstancePublishTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateInstancePublishTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstancePublishTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstancePublishTaskResponse() = default;
};
class CreateIntentRequestIntentDefinitionSlotInfos : public Darabonba::Model {
public:
  shared_ptr<bool> array{};
  shared_ptr<bool> encrypt{};
  shared_ptr<bool> interactive{};
  shared_ptr<string> name{};
  shared_ptr<string> slotId{};
  shared_ptr<string> value{};

  CreateIntentRequestIntentDefinitionSlotInfos() {}

  explicit CreateIntentRequestIntentDefinitionSlotInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (array) {
      res["Array"] = boost::any(*array);
    }
    if (encrypt) {
      res["Encrypt"] = boost::any(*encrypt);
    }
    if (interactive) {
      res["Interactive"] = boost::any(*interactive);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Array") != m.end() && !m["Array"].empty()) {
      array = make_shared<bool>(boost::any_cast<bool>(m["Array"]));
    }
    if (m.find("Encrypt") != m.end() && !m["Encrypt"].empty()) {
      encrypt = make_shared<bool>(boost::any_cast<bool>(m["Encrypt"]));
    }
    if (m.find("Interactive") != m.end() && !m["Interactive"].empty()) {
      interactive = make_shared<bool>(boost::any_cast<bool>(m["Interactive"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateIntentRequestIntentDefinitionSlotInfos() = default;
};
class CreateIntentRequestIntentDefinition : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<string> intentName{};
  shared_ptr<vector<CreateIntentRequestIntentDefinitionSlotInfos>> slotInfos{};

  CreateIntentRequestIntentDefinition() {}

  explicit CreateIntentRequestIntentDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (slotInfos) {
      vector<boost::any> temp1;
      for(auto item1:*slotInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlotInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("SlotInfos") != m.end() && !m["SlotInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["SlotInfos"].type()) {
        vector<CreateIntentRequestIntentDefinitionSlotInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlotInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateIntentRequestIntentDefinitionSlotInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slotInfos = make_shared<vector<CreateIntentRequestIntentDefinitionSlotInfos>>(expect1);
      }
    }
  }


  virtual ~CreateIntentRequestIntentDefinition() = default;
};
class CreateIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<CreateIntentRequestIntentDefinition> intentDefinition{};

  CreateIntentRequest() {}

  explicit CreateIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentDefinition) {
      res["IntentDefinition"] = intentDefinition ? boost::any(intentDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["IntentDefinition"].type()) {
        CreateIntentRequestIntentDefinition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IntentDefinition"]));
        intentDefinition = make_shared<CreateIntentRequestIntentDefinition>(model1);
      }
    }
  }


  virtual ~CreateIntentRequest() = default;
};
class CreateIntentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> intentDefinitionShrink{};

  CreateIntentShrinkRequest() {}

  explicit CreateIntentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentDefinitionShrink) {
      res["IntentDefinition"] = boost::any(*intentDefinitionShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      intentDefinitionShrink = make_shared<string>(boost::any_cast<string>(m["IntentDefinition"]));
    }
  }


  virtual ~CreateIntentShrinkRequest() = default;
};
class CreateIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> requestId{};

  CreateIntentResponseBody() {}

  explicit CreateIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateIntentResponseBody() = default;
};
class CreateIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateIntentResponseBody> body{};

  CreateIntentResponse() {}

  explicit CreateIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIntentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIntentResponse() = default;
};
class CreateLgfRequestLgfDefinition : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> ruleText{};

  CreateLgfRequestLgfDefinition() {}

  explicit CreateLgfRequestLgfDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (ruleText) {
      res["RuleText"] = boost::any(*ruleText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("RuleText") != m.end() && !m["RuleText"].empty()) {
      ruleText = make_shared<string>(boost::any_cast<string>(m["RuleText"]));
    }
  }


  virtual ~CreateLgfRequestLgfDefinition() = default;
};
class CreateLgfRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<CreateLgfRequestLgfDefinition> lgfDefinition{};

  CreateLgfRequest() {}

  explicit CreateLgfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lgfDefinition) {
      res["LgfDefinition"] = lgfDefinition ? boost::any(lgfDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LgfDefinition") != m.end() && !m["LgfDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["LgfDefinition"].type()) {
        CreateLgfRequestLgfDefinition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LgfDefinition"]));
        lgfDefinition = make_shared<CreateLgfRequestLgfDefinition>(model1);
      }
    }
  }


  virtual ~CreateLgfRequest() = default;
};
class CreateLgfShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lgfDefinitionShrink{};

  CreateLgfShrinkRequest() {}

  explicit CreateLgfShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lgfDefinitionShrink) {
      res["LgfDefinition"] = boost::any(*lgfDefinitionShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LgfDefinition") != m.end() && !m["LgfDefinition"].empty()) {
      lgfDefinitionShrink = make_shared<string>(boost::any_cast<string>(m["LgfDefinition"]));
    }
  }


  virtual ~CreateLgfShrinkRequest() = default;
};
class CreateLgfResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> lgfId{};
  shared_ptr<string> requestId{};

  CreateLgfResponseBody() {}

  explicit CreateLgfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lgfId) {
      res["LgfId"] = boost::any(*lgfId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LgfId") != m.end() && !m["LgfId"].empty()) {
      lgfId = make_shared<long>(boost::any_cast<long>(m["LgfId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateLgfResponseBody() = default;
};
class CreateLgfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateLgfResponseBody> body{};

  CreateLgfResponse() {}

  explicit CreateLgfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateLgfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateLgfResponseBody>(model1);
      }
    }
  }


  virtual ~CreateLgfResponse() = default;
};
class CreatePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};

  CreatePerspectiveRequest() {}

  explicit CreatePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
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
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreatePerspectiveRequest() = default;
};
class CreatePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> perspectiveId{};
  shared_ptr<string> requestId{};

  CreatePerspectiveResponseBody() {}

  explicit CreatePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePerspectiveResponseBody() = default;
};
class CreatePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePerspectiveResponseBody> body{};

  CreatePerspectiveResponse() {}

  explicit CreatePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePerspectiveResponse() = default;
};
class CreatePublishTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> bizType{};
  shared_ptr<vector<string>> dataIdList{};

  CreatePublishTaskRequest() {}

  explicit CreatePublishTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (dataIdList) {
      res["DataIdList"] = boost::any(*dataIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("DataIdList") != m.end() && !m["DataIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreatePublishTaskRequest() = default;
};
class CreatePublishTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> bizType{};
  shared_ptr<string> dataIdListShrink{};

  CreatePublishTaskShrinkRequest() {}

  explicit CreatePublishTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (bizType) {
      res["BizType"] = boost::any(*bizType);
    }
    if (dataIdListShrink) {
      res["DataIdList"] = boost::any(*dataIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("BizType") != m.end() && !m["BizType"].empty()) {
      bizType = make_shared<string>(boost::any_cast<string>(m["BizType"]));
    }
    if (m.find("DataIdList") != m.end() && !m["DataIdList"].empty()) {
      dataIdListShrink = make_shared<string>(boost::any_cast<string>(m["DataIdList"]));
    }
  }


  virtual ~CreatePublishTaskShrinkRequest() = default;
};
class CreatePublishTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypeList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> response{};
  shared_ptr<string> status{};

  CreatePublishTaskResponseBody() {}

  explicit CreatePublishTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      response = make_shared<string>(boost::any_cast<string>(m["Response"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreatePublishTaskResponseBody() = default;
};
class CreatePublishTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePublishTaskResponseBody> body{};

  CreatePublishTaskResponse() {}

  explicit CreatePublishTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePublishTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePublishTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePublishTaskResponse() = default;
};
class CreateSimQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeId{};
  shared_ptr<string> title{};

  CreateSimQuestionRequest() {}

  explicit CreateSimQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~CreateSimQuestionRequest() = default;
};
class CreateSimQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> simQuestionId{};

  CreateSimQuestionResponseBody() {}

  explicit CreateSimQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (simQuestionId) {
      res["SimQuestionId"] = boost::any(*simQuestionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SimQuestionId") != m.end() && !m["SimQuestionId"].empty()) {
      simQuestionId = make_shared<long>(boost::any_cast<long>(m["SimQuestionId"]));
    }
  }


  virtual ~CreateSimQuestionResponseBody() = default;
};
class CreateSimQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSimQuestionResponseBody> body{};

  CreateSimQuestionResponse() {}

  explicit CreateSimQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSimQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSimQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSimQuestionResponse() = default;
};
class CreateSolutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<long> contentType{};
  shared_ptr<long> knowledgeId{};
  shared_ptr<vector<string>> perspectiveCodes{};

  CreateSolutionRequest() {}

  explicit CreateSolutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (perspectiveCodes) {
      res["PerspectiveCodes"] = boost::any(*perspectiveCodes);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<long>(boost::any_cast<long>(m["ContentType"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("PerspectiveCodes") != m.end() && !m["PerspectiveCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PerspectiveCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PerspectiveCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspectiveCodes = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateSolutionRequest() = default;
};
class CreateSolutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> solutionId{};

  CreateSolutionResponseBody() {}

  explicit CreateSolutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (solutionId) {
      res["SolutionId"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SolutionId") != m.end() && !m["SolutionId"].empty()) {
      solutionId = make_shared<long>(boost::any_cast<long>(m["SolutionId"]));
    }
  }


  virtual ~CreateSolutionResponseBody() = default;
};
class CreateSolutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateSolutionResponseBody> body{};

  CreateSolutionResponse() {}

  explicit CreateSolutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateSolutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateSolutionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateSolutionResponse() = default;
};
class CreateUserSayRequestUserSayDefinitionSlotInfos : public Darabonba::Model {
public:
  shared_ptr<long> endIndex{};
  shared_ptr<string> slotId{};
  shared_ptr<long> startIndex{};

  CreateUserSayRequestUserSayDefinitionSlotInfos() {}

  explicit CreateUserSayRequestUserSayDefinitionSlotInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endIndex) {
      res["EndIndex"] = boost::any(*endIndex);
    }
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (startIndex) {
      res["StartIndex"] = boost::any(*startIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndIndex") != m.end() && !m["EndIndex"].empty()) {
      endIndex = make_shared<long>(boost::any_cast<long>(m["EndIndex"]));
    }
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("StartIndex") != m.end() && !m["StartIndex"].empty()) {
      startIndex = make_shared<long>(boost::any_cast<long>(m["StartIndex"]));
    }
  }


  virtual ~CreateUserSayRequestUserSayDefinitionSlotInfos() = default;
};
class CreateUserSayRequestUserSayDefinition : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> intentId{};
  shared_ptr<vector<CreateUserSayRequestUserSayDefinitionSlotInfos>> slotInfos{};

  CreateUserSayRequestUserSayDefinition() {}

  explicit CreateUserSayRequestUserSayDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (slotInfos) {
      vector<boost::any> temp1;
      for(auto item1:*slotInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlotInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("SlotInfos") != m.end() && !m["SlotInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["SlotInfos"].type()) {
        vector<CreateUserSayRequestUserSayDefinitionSlotInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlotInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateUserSayRequestUserSayDefinitionSlotInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slotInfos = make_shared<vector<CreateUserSayRequestUserSayDefinitionSlotInfos>>(expect1);
      }
    }
  }


  virtual ~CreateUserSayRequestUserSayDefinition() = default;
};
class CreateUserSayRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<CreateUserSayRequestUserSayDefinition> userSayDefinition{};

  CreateUserSayRequest() {}

  explicit CreateUserSayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userSayDefinition) {
      res["UserSayDefinition"] = userSayDefinition ? boost::any(userSayDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserSayDefinition") != m.end() && !m["UserSayDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserSayDefinition"].type()) {
        CreateUserSayRequestUserSayDefinition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserSayDefinition"]));
        userSayDefinition = make_shared<CreateUserSayRequestUserSayDefinition>(model1);
      }
    }
  }


  virtual ~CreateUserSayRequest() = default;
};
class CreateUserSayShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> userSayDefinitionShrink{};

  CreateUserSayShrinkRequest() {}

  explicit CreateUserSayShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userSayDefinitionShrink) {
      res["UserSayDefinition"] = boost::any(*userSayDefinitionShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserSayDefinition") != m.end() && !m["UserSayDefinition"].empty()) {
      userSayDefinitionShrink = make_shared<string>(boost::any_cast<string>(m["UserSayDefinition"]));
    }
  }


  virtual ~CreateUserSayShrinkRequest() = default;
};
class CreateUserSayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> userSayId{};

  CreateUserSayResponseBody() {}

  explicit CreateUserSayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<long>(boost::any_cast<long>(m["UserSayId"]));
    }
  }


  virtual ~CreateUserSayResponseBody() = default;
};
class CreateUserSayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateUserSayResponseBody> body{};

  CreateUserSayResponse() {}

  explicit CreateUserSayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateUserSayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateUserSayResponseBody>(model1);
      }
    }
  }


  virtual ~CreateUserSayResponse() = default;
};
class DeleteCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};

  DeleteCategoryRequest() {}

  explicit DeleteCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
  }


  virtual ~DeleteCategoryRequest() = default;
};
class DeleteCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteCategoryResponseBody() {}

  explicit DeleteCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteCategoryResponseBody() = default;
};
class DeleteCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteCategoryResponseBody> body{};

  DeleteCategoryResponse() {}

  explicit DeleteCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCategoryResponse() = default;
};
class DeleteConnQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> outlineId{};

  DeleteConnQuestionRequest() {}

  explicit DeleteConnQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (outlineId) {
      res["OutlineId"] = boost::any(*outlineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("OutlineId") != m.end() && !m["OutlineId"].empty()) {
      outlineId = make_shared<long>(boost::any_cast<long>(m["OutlineId"]));
    }
  }


  virtual ~DeleteConnQuestionRequest() = default;
};
class DeleteConnQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteConnQuestionResponseBody() {}

  explicit DeleteConnQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteConnQuestionResponseBody() = default;
};
class DeleteConnQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteConnQuestionResponseBody> body{};

  DeleteConnQuestionResponse() {}

  explicit DeleteConnQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteConnQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteConnQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteConnQuestionResponse() = default;
};
class DeleteDSEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};
  shared_ptr<string> instanceId{};

  DeleteDSEntityRequest() {}

  explicit DeleteDSEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteDSEntityRequest() = default;
};
class DeleteDSEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> requestId{};

  DeleteDSEntityResponseBody() {}

  explicit DeleteDSEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDSEntityResponseBody() = default;
};
class DeleteDSEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDSEntityResponseBody> body{};

  DeleteDSEntityResponse() {}

  explicit DeleteDSEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDSEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDSEntityResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDSEntityResponse() = default;
};
class DeleteDSEntityValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};
  shared_ptr<long> entityValueId{};
  shared_ptr<string> instanceId{};

  DeleteDSEntityValueRequest() {}

  explicit DeleteDSEntityValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityValueId) {
      res["EntityValueId"] = boost::any(*entityValueId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityValueId") != m.end() && !m["EntityValueId"].empty()) {
      entityValueId = make_shared<long>(boost::any_cast<long>(m["EntityValueId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteDSEntityValueRequest() = default;
};
class DeleteDSEntityValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityValueId{};
  shared_ptr<string> requestId{};

  DeleteDSEntityValueResponseBody() {}

  explicit DeleteDSEntityValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityValueId) {
      res["EntityValueId"] = boost::any(*entityValueId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityValueId") != m.end() && !m["EntityValueId"].empty()) {
      entityValueId = make_shared<long>(boost::any_cast<long>(m["EntityValueId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDSEntityValueResponseBody() = default;
};
class DeleteDSEntityValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDSEntityValueResponseBody> body{};

  DeleteDSEntityValueResponse() {}

  explicit DeleteDSEntityValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDSEntityValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDSEntityValueResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDSEntityValueResponse() = default;
};
class DeleteFaqRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeId{};

  DeleteFaqRequest() {}

  explicit DeleteFaqRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~DeleteFaqRequest() = default;
};
class DeleteFaqResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFaqResponseBody() {}

  explicit DeleteFaqResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteFaqResponseBody() = default;
};
class DeleteFaqResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFaqResponseBody> body{};

  DeleteFaqResponse() {}

  explicit DeleteFaqResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFaqResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFaqResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFaqResponse() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypeList{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> error{};
  shared_ptr<long> id{};
  shared_ptr<vector<uint8_t>> requestId{};
  shared_ptr<long> response{};
  shared_ptr<string> status{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<long>(boost::any_cast<long>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      response = make_shared<long>(boost::any_cast<long>(m["Response"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DeleteInstanceResponseBody() = default;
};
class DeleteInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteInstanceResponseBody> body{};

  DeleteInstanceResponse() {}

  explicit DeleteInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DeleteIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> intentId{};

  DeleteIntentRequest() {}

  explicit DeleteIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~DeleteIntentRequest() = default;
};
class DeleteIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> requestId{};

  DeleteIntentResponseBody() {}

  explicit DeleteIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteIntentResponseBody() = default;
};
class DeleteIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteIntentResponseBody> body{};

  DeleteIntentResponse() {}

  explicit DeleteIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIntentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIntentResponse() = default;
};
class DeleteLgfRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> intentId{};
  shared_ptr<long> lgfId{};

  DeleteLgfRequest() {}

  explicit DeleteLgfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (lgfId) {
      res["LgfId"] = boost::any(*lgfId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("LgfId") != m.end() && !m["LgfId"].empty()) {
      lgfId = make_shared<long>(boost::any_cast<long>(m["LgfId"]));
    }
  }


  virtual ~DeleteLgfRequest() = default;
};
class DeleteLgfResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> lgfId{};
  shared_ptr<string> requestId{};

  DeleteLgfResponseBody() {}

  explicit DeleteLgfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lgfId) {
      res["LgfId"] = boost::any(*lgfId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LgfId") != m.end() && !m["LgfId"].empty()) {
      lgfId = make_shared<long>(boost::any_cast<long>(m["LgfId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteLgfResponseBody() = default;
};
class DeleteLgfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteLgfResponseBody> body{};

  DeleteLgfResponse() {}

  explicit DeleteLgfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteLgfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteLgfResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteLgfResponse() = default;
};
class DeletePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> perspectiveId{};

  DeletePerspectiveRequest() {}

  explicit DeletePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
  }


  virtual ~DeletePerspectiveRequest() = default;
};
class DeletePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> result{};

  DeletePerspectiveResponseBody() {}

  explicit DeletePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<bool>(boost::any_cast<bool>(m["Result"]));
    }
  }


  virtual ~DeletePerspectiveResponseBody() = default;
};
class DeletePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePerspectiveResponseBody> body{};

  DeletePerspectiveResponse() {}

  explicit DeletePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePerspectiveResponse() = default;
};
class DeleteSimQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> simQuestionId{};

  DeleteSimQuestionRequest() {}

  explicit DeleteSimQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (simQuestionId) {
      res["SimQuestionId"] = boost::any(*simQuestionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("SimQuestionId") != m.end() && !m["SimQuestionId"].empty()) {
      simQuestionId = make_shared<long>(boost::any_cast<long>(m["SimQuestionId"]));
    }
  }


  virtual ~DeleteSimQuestionRequest() = default;
};
class DeleteSimQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSimQuestionResponseBody() {}

  explicit DeleteSimQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSimQuestionResponseBody() = default;
};
class DeleteSimQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSimQuestionResponseBody> body{};

  DeleteSimQuestionResponse() {}

  explicit DeleteSimQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSimQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSimQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSimQuestionResponse() = default;
};
class DeleteSolutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> solutionId{};

  DeleteSolutionRequest() {}

  explicit DeleteSolutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (solutionId) {
      res["SolutionId"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("SolutionId") != m.end() && !m["SolutionId"].empty()) {
      solutionId = make_shared<long>(boost::any_cast<long>(m["SolutionId"]));
    }
  }


  virtual ~DeleteSolutionRequest() = default;
};
class DeleteSolutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteSolutionResponseBody() {}

  explicit DeleteSolutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteSolutionResponseBody() = default;
};
class DeleteSolutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteSolutionResponseBody> body{};

  DeleteSolutionResponse() {}

  explicit DeleteSolutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteSolutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteSolutionResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteSolutionResponse() = default;
};
class DeleteUserSayRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> intentId{};
  shared_ptr<long> userSayId{};

  DeleteUserSayRequest() {}

  explicit DeleteUserSayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<long>(boost::any_cast<long>(m["UserSayId"]));
    }
  }


  virtual ~DeleteUserSayRequest() = default;
};
class DeleteUserSayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> userSayId{};

  DeleteUserSayResponseBody() {}

  explicit DeleteUserSayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<long>(boost::any_cast<long>(m["UserSayId"]));
    }
  }


  virtual ~DeleteUserSayResponseBody() = default;
};
class DeleteUserSayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteUserSayResponseBody> body{};

  DeleteUserSayResponse() {}

  explicit DeleteUserSayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteUserSayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteUserSayResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteUserSayResponse() = default;
};
class DescribeCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};

  DescribeCategoryRequest() {}

  explicit DescribeCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
  }


  virtual ~DescribeCategoryRequest() = default;
};
class DescribeCategoryResponseBodyCategory : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};
  shared_ptr<long> status{};

  DescribeCategoryResponseBodyCategory() {}

  explicit DescribeCategoryResponseBodyCategory(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribeCategoryResponseBodyCategory() = default;
};
class DescribeCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeCategoryResponseBodyCategory> category{};
  shared_ptr<string> requestId{};

  DescribeCategoryResponseBody() {}

  explicit DescribeCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = category ? boost::any(category->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      if (typeid(map<string, boost::any>) == m["Category"].type()) {
        DescribeCategoryResponseBodyCategory model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Category"]));
        category = make_shared<DescribeCategoryResponseBodyCategory>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeCategoryResponseBody() = default;
};
class DescribeCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeCategoryResponseBody> body{};

  DescribeCategoryResponse() {}

  explicit DescribeCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCategoryResponse() = default;
};
class DescribeDSEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};
  shared_ptr<string> instanceId{};

  DescribeDSEntityRequest() {}

  explicit DescribeDSEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeDSEntityRequest() = default;
};
class DescribeDSEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> sysEntityCode{};

  DescribeDSEntityResponseBody() {}

  explicit DescribeDSEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (sysEntityCode) {
      res["SysEntityCode"] = boost::any(*sysEntityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SysEntityCode") != m.end() && !m["SysEntityCode"].empty()) {
      sysEntityCode = make_shared<string>(boost::any_cast<string>(m["SysEntityCode"]));
    }
  }


  virtual ~DescribeDSEntityResponseBody() = default;
};
class DescribeDSEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDSEntityResponseBody> body{};

  DescribeDSEntityResponse() {}

  explicit DescribeDSEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDSEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDSEntityResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDSEntityResponse() = default;
};
class DescribeFaqRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeId{};

  DescribeFaqRequest() {}

  explicit DescribeFaqRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~DescribeFaqRequest() = default;
};
class DescribeFaqResponseBodyOutlines : public Darabonba::Model {
public:
  shared_ptr<long> connQuestionId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<long> outlineId{};
  shared_ptr<string> title{};

  DescribeFaqResponseBodyOutlines() {}

  explicit DescribeFaqResponseBodyOutlines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connQuestionId) {
      res["ConnQuestionId"] = boost::any(*connQuestionId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (outlineId) {
      res["OutlineId"] = boost::any(*outlineId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnQuestionId") != m.end() && !m["ConnQuestionId"].empty()) {
      connQuestionId = make_shared<long>(boost::any_cast<long>(m["ConnQuestionId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("OutlineId") != m.end() && !m["OutlineId"].empty()) {
      outlineId = make_shared<long>(boost::any_cast<long>(m["OutlineId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeFaqResponseBodyOutlines() = default;
};
class DescribeFaqResponseBodySimQuestions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<long> simQuestionId{};
  shared_ptr<string> title{};

  DescribeFaqResponseBodySimQuestions() {}

  explicit DescribeFaqResponseBodySimQuestions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (simQuestionId) {
      res["SimQuestionId"] = boost::any(*simQuestionId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("SimQuestionId") != m.end() && !m["SimQuestionId"].empty()) {
      simQuestionId = make_shared<long>(boost::any_cast<long>(m["SimQuestionId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeFaqResponseBodySimQuestions() = default;
};
class DescribeFaqResponseBodySolutions : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> contentType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<string>> perspectiveCodes{};
  shared_ptr<string> plainText{};
  shared_ptr<long> solutionId{};

  DescribeFaqResponseBodySolutions() {}

  explicit DescribeFaqResponseBodySolutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (perspectiveCodes) {
      res["PerspectiveCodes"] = boost::any(*perspectiveCodes);
    }
    if (plainText) {
      res["PlainText"] = boost::any(*plainText);
    }
    if (solutionId) {
      res["SolutionId"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<long>(boost::any_cast<long>(m["ContentType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("PerspectiveCodes") != m.end() && !m["PerspectiveCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PerspectiveCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PerspectiveCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspectiveCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlainText") != m.end() && !m["PlainText"].empty()) {
      plainText = make_shared<string>(boost::any_cast<string>(m["PlainText"]));
    }
    if (m.find("SolutionId") != m.end() && !m["SolutionId"].empty()) {
      solutionId = make_shared<long>(boost::any_cast<long>(m["SolutionId"]));
    }
  }


  virtual ~DescribeFaqResponseBodySolutions() = default;
};
class DescribeFaqResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> effectStatus{};
  shared_ptr<string> endDate{};
  shared_ptr<long> knowledgeId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<vector<DescribeFaqResponseBodyOutlines>> outlines{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeFaqResponseBodySimQuestions>> simQuestions{};
  shared_ptr<vector<DescribeFaqResponseBodySolutions>> solutions{};
  shared_ptr<string> startDate{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};

  DescribeFaqResponseBody() {}

  explicit DescribeFaqResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (effectStatus) {
      res["EffectStatus"] = boost::any(*effectStatus);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (outlines) {
      vector<boost::any> temp1;
      for(auto item1:*outlines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outlines"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (simQuestions) {
      vector<boost::any> temp1;
      for(auto item1:*simQuestions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimQuestions"] = boost::any(temp1);
    }
    if (solutions) {
      vector<boost::any> temp1;
      for(auto item1:*solutions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Solutions"] = boost::any(temp1);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EffectStatus") != m.end() && !m["EffectStatus"].empty()) {
      effectStatus = make_shared<long>(boost::any_cast<long>(m["EffectStatus"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Outlines") != m.end() && !m["Outlines"].empty()) {
      if (typeid(vector<boost::any>) == m["Outlines"].type()) {
        vector<DescribeFaqResponseBodyOutlines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outlines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaqResponseBodyOutlines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outlines = make_shared<vector<DescribeFaqResponseBodyOutlines>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SimQuestions") != m.end() && !m["SimQuestions"].empty()) {
      if (typeid(vector<boost::any>) == m["SimQuestions"].type()) {
        vector<DescribeFaqResponseBodySimQuestions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimQuestions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaqResponseBodySimQuestions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        simQuestions = make_shared<vector<DescribeFaqResponseBodySimQuestions>>(expect1);
      }
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      if (typeid(vector<boost::any>) == m["Solutions"].type()) {
        vector<DescribeFaqResponseBodySolutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Solutions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeFaqResponseBodySolutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        solutions = make_shared<vector<DescribeFaqResponseBodySolutions>>(expect1);
      }
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~DescribeFaqResponseBody() = default;
};
class DescribeFaqResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFaqResponseBody> body{};

  DescribeFaqResponse() {}

  explicit DescribeFaqResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFaqResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFaqResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFaqResponse() = default;
};
class DescribeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};

  DescribeInstanceRequest() {}

  explicit DescribeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeInstanceRequest() = default;
};
class DescribeInstanceResponseBodyCategories : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};

  DescribeInstanceResponseBodyCategories() {}

  explicit DescribeInstanceResponseBodyCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
  }


  virtual ~DescribeInstanceResponseBodyCategories() = default;
};
class DescribeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<vector<DescribeInstanceResponseBodyCategories>> categories{};
  shared_ptr<string> createTime{};
  shared_ptr<string> editStatus{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> introduction{};
  shared_ptr<string> languageCode{};
  shared_ptr<string> name{};
  shared_ptr<string> requestId{};
  shared_ptr<string> robotType{};
  shared_ptr<string> timeZone{};

  DescribeInstanceResponseBody() {}

  explicit DescribeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (editStatus) {
      res["EditStatus"] = boost::any(*editStatus);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (robotType) {
      res["RobotType"] = boost::any(*robotType);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<DescribeInstanceResponseBodyCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeInstanceResponseBodyCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<DescribeInstanceResponseBodyCategories>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EditStatus") != m.end() && !m["EditStatus"].empty()) {
      editStatus = make_shared<string>(boost::any_cast<string>(m["EditStatus"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("RobotType") != m.end() && !m["RobotType"].empty()) {
      robotType = make_shared<string>(boost::any_cast<string>(m["RobotType"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~DescribeInstanceResponseBody() = default;
};
class DescribeInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeInstanceResponseBody> body{};

  DescribeInstanceResponse() {}

  explicit DescribeInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponse() = default;
};
class DescribeIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> intentId{};

  DescribeIntentRequest() {}

  explicit DescribeIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~DescribeIntentRequest() = default;
};
class DescribeIntentResponseBodySlotInfos : public Darabonba::Model {
public:
  shared_ptr<bool> array{};
  shared_ptr<bool> encrypt{};
  shared_ptr<bool> interactive{};
  shared_ptr<string> name{};
  shared_ptr<string> slotId{};
  shared_ptr<string> value{};

  DescribeIntentResponseBodySlotInfos() {}

  explicit DescribeIntentResponseBodySlotInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (array) {
      res["Array"] = boost::any(*array);
    }
    if (encrypt) {
      res["Encrypt"] = boost::any(*encrypt);
    }
    if (interactive) {
      res["Interactive"] = boost::any(*interactive);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Array") != m.end() && !m["Array"].empty()) {
      array = make_shared<bool>(boost::any_cast<bool>(m["Array"]));
    }
    if (m.find("Encrypt") != m.end() && !m["Encrypt"].empty()) {
      encrypt = make_shared<bool>(boost::any_cast<bool>(m["Encrypt"]));
    }
    if (m.find("Interactive") != m.end() && !m["Interactive"].empty()) {
      interactive = make_shared<bool>(boost::any_cast<bool>(m["Interactive"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~DescribeIntentResponseBodySlotInfos() = default;
};
class DescribeIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> intentId{};
  shared_ptr<string> intentName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<DescribeIntentResponseBodySlotInfos>> slotInfos{};

  DescribeIntentResponseBody() {}

  explicit DescribeIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (slotInfos) {
      vector<boost::any> temp1;
      for(auto item1:*slotInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlotInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SlotInfos") != m.end() && !m["SlotInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["SlotInfos"].type()) {
        vector<DescribeIntentResponseBodySlotInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlotInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeIntentResponseBodySlotInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slotInfos = make_shared<vector<DescribeIntentResponseBodySlotInfos>>(expect1);
      }
    }
  }


  virtual ~DescribeIntentResponseBody() = default;
};
class DescribeIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeIntentResponseBody> body{};

  DescribeIntentResponse() {}

  explicit DescribeIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeIntentResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeIntentResponse() = default;
};
class DescribePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> perspectiveId{};

  DescribePerspectiveRequest() {}

  explicit DescribePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
  }


  virtual ~DescribePerspectiveRequest() = default;
};
class DescribePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> perspectiveCode{};
  shared_ptr<string> perspectiveId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> selfDefine{};
  shared_ptr<long> status{};

  DescribePerspectiveResponseBody() {}

  explicit DescribePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (perspectiveCode) {
      res["PerspectiveCode"] = boost::any(*perspectiveCode);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (selfDefine) {
      res["SelfDefine"] = boost::any(*selfDefine);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PerspectiveCode") != m.end() && !m["PerspectiveCode"].empty()) {
      perspectiveCode = make_shared<string>(boost::any_cast<string>(m["PerspectiveCode"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SelfDefine") != m.end() && !m["SelfDefine"].empty()) {
      selfDefine = make_shared<bool>(boost::any_cast<bool>(m["SelfDefine"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~DescribePerspectiveResponseBody() = default;
};
class DescribePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribePerspectiveResponseBody> body{};

  DescribePerspectiveResponse() {}

  explicit DescribePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePerspectiveResponse() = default;
};
class FeedbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> feedback{};
  shared_ptr<string> feedbackContent{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> messageId{};
  shared_ptr<string> sessionId{};

  FeedbackRequest() {}

  explicit FeedbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (feedbackContent) {
      res["FeedbackContent"] = boost::any(*feedbackContent);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
    if (m.find("FeedbackContent") != m.end() && !m["FeedbackContent"].empty()) {
      feedbackContent = make_shared<string>(boost::any_cast<string>(m["FeedbackContent"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~FeedbackRequest() = default;
};
class FeedbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> feedback{};
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  FeedbackResponseBody() {}

  explicit FeedbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FeedbackResponseBody() = default;
};
class FeedbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FeedbackResponseBody> body{};

  FeedbackResponse() {}

  explicit FeedbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FeedbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FeedbackResponseBody>(model1);
      }
    }
  }


  virtual ~FeedbackResponse() = default;
};
class GetAsyncResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> taskId{};

  GetAsyncResultRequest() {}

  explicit GetAsyncResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetAsyncResultRequest() = default;
};
class GetAsyncResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  GetAsyncResultResponseBody() {}

  explicit GetAsyncResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~GetAsyncResultResponseBody() = default;
};
class GetAsyncResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAsyncResultResponseBody> body{};

  GetAsyncResultResponse() {}

  explicit GetAsyncResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncResultResponse() = default;
};
class GetInstancePublishTaskStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};
  shared_ptr<string> instanceId{};

  GetInstancePublishTaskStateRequest() {}

  explicit GetInstancePublishTaskStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~GetInstancePublishTaskStateRequest() = default;
};
class GetInstancePublishTaskStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypeList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<map<string, boost::any>> errors{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> response{};
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> warnings{};

  GetInstancePublishTaskStateResponseBody() {}

  explicit GetInstancePublishTaskStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (errors) {
      res["Errors"] = boost::any(*errors);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (warnings) {
      res["Warnings"] = boost::any(*warnings);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Errors"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      errors = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      response = make_shared<string>(boost::any_cast<string>(m["Response"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Warnings") != m.end() && !m["Warnings"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Warnings"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      warnings = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetInstancePublishTaskStateResponseBody() = default;
};
class GetInstancePublishTaskStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetInstancePublishTaskStateResponseBody> body{};

  GetInstancePublishTaskStateResponse() {}

  explicit GetInstancePublishTaskStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetInstancePublishTaskStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetInstancePublishTaskStateResponseBody>(model1);
      }
    }
  }


  virtual ~GetInstancePublishTaskStateResponse() = default;
};
class GetPublishTaskStateRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> id{};

  GetPublishTaskStateRequest() {}

  explicit GetPublishTaskStateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
  }


  virtual ~GetPublishTaskStateRequest() = default;
};
class GetPublishTaskStateResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<string>> bizTypeList{};
  shared_ptr<string> createTime{};
  shared_ptr<string> error{};
  shared_ptr<map<string, boost::any>> errors{};
  shared_ptr<long> id{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> response{};
  shared_ptr<string> status{};
  shared_ptr<map<string, boost::any>> warnings{};

  GetPublishTaskStateResponseBody() {}

  explicit GetPublishTaskStateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizTypeList) {
      res["BizTypeList"] = boost::any(*bizTypeList);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (error) {
      res["Error"] = boost::any(*error);
    }
    if (errors) {
      res["Errors"] = boost::any(*errors);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (response) {
      res["Response"] = boost::any(*response);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (warnings) {
      res["Warnings"] = boost::any(*warnings);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizTypeList") != m.end() && !m["BizTypeList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["BizTypeList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["BizTypeList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      bizTypeList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Error") != m.end() && !m["Error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["Error"]));
    }
    if (m.find("Errors") != m.end() && !m["Errors"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Errors"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      errors = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Response") != m.end() && !m["Response"].empty()) {
      response = make_shared<string>(boost::any_cast<string>(m["Response"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Warnings") != m.end() && !m["Warnings"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Warnings"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      warnings = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~GetPublishTaskStateResponseBody() = default;
};
class GetPublishTaskStateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPublishTaskStateResponseBody> body{};

  GetPublishTaskStateResponse() {}

  explicit GetPublishTaskStateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublishTaskStateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublishTaskStateResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublishTaskStateResponse() = default;
};
class LinkInstanceCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> categoryIds{};
  shared_ptr<string> instanceId{};

  LinkInstanceCategoryRequest() {}

  explicit LinkInstanceCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryIds) {
      res["CategoryIds"] = boost::any(*categoryIds);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      categoryIds = make_shared<string>(boost::any_cast<string>(m["CategoryIds"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~LinkInstanceCategoryRequest() = default;
};
class LinkInstanceCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  LinkInstanceCategoryResponseBody() {}

  explicit LinkInstanceCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~LinkInstanceCategoryResponseBody() = default;
};
class LinkInstanceCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<LinkInstanceCategoryResponseBody> body{};

  LinkInstanceCategoryResponse() {}

  explicit LinkInstanceCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        LinkInstanceCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<LinkInstanceCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~LinkInstanceCategoryResponse() = default;
};
class ListAgentRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListAgentRequest() {}

  explicit ListAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListAgentRequest() = default;
};
class ListAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> agentId{};
  shared_ptr<string> agentKey{};
  shared_ptr<string> agentName{};

  ListAgentResponseBodyData() {}

  explicit ListAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (agentName) {
      res["AgentName"] = boost::any(*agentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<long>(boost::any_cast<long>(m["AgentId"]));
    }
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("AgentName") != m.end() && !m["AgentName"].empty()) {
      agentName = make_shared<string>(boost::any_cast<string>(m["AgentName"]));
    }
  }


  virtual ~ListAgentResponseBodyData() = default;
};
class ListAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListAgentResponseBodyData>> data{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListAgentResponseBody() {}

  explicit ListAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<ListAgentResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAgentResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAgentResponseBodyData>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListAgentResponseBody() = default;
};
class ListAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAgentResponseBody> body{};

  ListAgentResponse() {}

  explicit ListAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAgentResponseBody>(model1);
      }
    }
  }


  virtual ~ListAgentResponse() = default;
};
class ListCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> parentCategoryId{};

  ListCategoryRequest() {}

  explicit ListCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
  }


  virtual ~ListCategoryRequest() = default;
};
class ListCategoryResponseBodyCategories : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};
  shared_ptr<long> status{};

  ListCategoryResponseBodyCategories() {}

  explicit ListCategoryResponseBodyCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~ListCategoryResponseBodyCategories() = default;
};
class ListCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListCategoryResponseBodyCategories>> categories{};
  shared_ptr<string> requestId{};

  ListCategoryResponseBody() {}

  explicit ListCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categories) {
      vector<boost::any> temp1;
      for(auto item1:*categories){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Categories"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<ListCategoryResponseBodyCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListCategoryResponseBodyCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<ListCategoryResponseBodyCategories>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListCategoryResponseBody() = default;
};
class ListCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListCategoryResponseBody> body{};

  ListCategoryResponse() {}

  explicit ListCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~ListCategoryResponse() = default;
};
class ListConnQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeId{};

  ListConnQuestionRequest() {}

  explicit ListConnQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~ListConnQuestionRequest() = default;
};
class ListConnQuestionResponseBodyOutlines : public Darabonba::Model {
public:
  shared_ptr<long> connQuestionId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<long> outlineId{};
  shared_ptr<string> title{};

  ListConnQuestionResponseBodyOutlines() {}

  explicit ListConnQuestionResponseBodyOutlines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (connQuestionId) {
      res["ConnQuestionId"] = boost::any(*connQuestionId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (outlineId) {
      res["OutlineId"] = boost::any(*outlineId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConnQuestionId") != m.end() && !m["ConnQuestionId"].empty()) {
      connQuestionId = make_shared<long>(boost::any_cast<long>(m["ConnQuestionId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("OutlineId") != m.end() && !m["OutlineId"].empty()) {
      outlineId = make_shared<long>(boost::any_cast<long>(m["OutlineId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListConnQuestionResponseBodyOutlines() = default;
};
class ListConnQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListConnQuestionResponseBodyOutlines>> outlines{};
  shared_ptr<string> requestId{};

  ListConnQuestionResponseBody() {}

  explicit ListConnQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (outlines) {
      vector<boost::any> temp1;
      for(auto item1:*outlines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Outlines"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Outlines") != m.end() && !m["Outlines"].empty()) {
      if (typeid(vector<boost::any>) == m["Outlines"].type()) {
        vector<ListConnQuestionResponseBodyOutlines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Outlines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConnQuestionResponseBodyOutlines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        outlines = make_shared<vector<ListConnQuestionResponseBodyOutlines>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListConnQuestionResponseBody() = default;
};
class ListConnQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConnQuestionResponseBody> body{};

  ListConnQuestionResponse() {}

  explicit ListConnQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConnQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConnQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~ListConnQuestionResponse() = default;
};
class ListDSEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> entityType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDSEntityRequest() {}

  explicit ListDSEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
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
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDSEntityRequest() = default;
};
class ListDSEntityResponseBodyEntities : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> sysEntityCode{};

  ListDSEntityResponseBodyEntities() {}

  explicit ListDSEntityResponseBodyEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (sysEntityCode) {
      res["SysEntityCode"] = boost::any(*sysEntityCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("SysEntityCode") != m.end() && !m["SysEntityCode"].empty()) {
      sysEntityCode = make_shared<string>(boost::any_cast<string>(m["SysEntityCode"]));
    }
  }


  virtual ~ListDSEntityResponseBodyEntities() = default;
};
class ListDSEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDSEntityResponseBodyEntities>> entities{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDSEntityResponseBody() {}

  explicit ListDSEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entities) {
      vector<boost::any> temp1;
      for(auto item1:*entities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Entities"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Entities") != m.end() && !m["Entities"].empty()) {
      if (typeid(vector<boost::any>) == m["Entities"].type()) {
        vector<ListDSEntityResponseBodyEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Entities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDSEntityResponseBodyEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entities = make_shared<vector<ListDSEntityResponseBodyEntities>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDSEntityResponseBody() = default;
};
class ListDSEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDSEntityResponseBody> body{};

  ListDSEntityResponse() {}

  explicit ListDSEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDSEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDSEntityResponseBody>(model1);
      }
    }
  }


  virtual ~ListDSEntityResponse() = default;
};
class ListDSEntityValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};
  shared_ptr<long> entityValueId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDSEntityValueRequest() {}

  explicit ListDSEntityValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityValueId) {
      res["EntityValueId"] = boost::any(*entityValueId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
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
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityValueId") != m.end() && !m["EntityValueId"].empty()) {
      entityValueId = make_shared<long>(boost::any_cast<long>(m["EntityValueId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListDSEntityValueRequest() = default;
};
class ListDSEntityValueResponseBodyEntityValues : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<long> entityId{};
  shared_ptr<long> entityValueId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<string>> synonyms{};

  ListDSEntityValueResponseBodyEntityValues() {}

  explicit ListDSEntityValueResponseBodyEntityValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityValueId) {
      res["EntityValueId"] = boost::any(*entityValueId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityValueId") != m.end() && !m["EntityValueId"].empty()) {
      entityValueId = make_shared<long>(boost::any_cast<long>(m["EntityValueId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDSEntityValueResponseBodyEntityValues() = default;
};
class ListDSEntityValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDSEntityValueResponseBodyEntityValues>> entityValues{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListDSEntityValueResponseBody() {}

  explicit ListDSEntityValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityValues) {
      vector<boost::any> temp1;
      for(auto item1:*entityValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EntityValues"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityValues") != m.end() && !m["EntityValues"].empty()) {
      if (typeid(vector<boost::any>) == m["EntityValues"].type()) {
        vector<ListDSEntityValueResponseBodyEntityValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EntityValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDSEntityValueResponseBodyEntityValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityValues = make_shared<vector<ListDSEntityValueResponseBodyEntityValues>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDSEntityValueResponseBody() = default;
};
class ListDSEntityValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDSEntityValueResponseBody> body{};

  ListDSEntityValueResponse() {}

  explicit ListDSEntityValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDSEntityValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDSEntityValueResponseBody>(model1);
      }
    }
  }


  virtual ~ListDSEntityValueResponse() = default;
};
class ListDsMenusRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> robotEnv{};
  shared_ptr<string> tags{};

  ListDsMenusRequest() {}

  explicit ListDsMenusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (robotEnv) {
      res["RobotEnv"] = boost::any(*robotEnv);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("RobotEnv") != m.end() && !m["RobotEnv"].empty()) {
      robotEnv = make_shared<long>(boost::any_cast<long>(m["RobotEnv"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ListDsMenusRequest() = default;
};
class ListDsMenusResponseBodyMenus : public Darabonba::Model {
public:
  shared_ptr<string> tag{};
  shared_ptr<string> title{};
  shared_ptr<string> titleEn{};
  shared_ptr<string> url{};

  ListDsMenusResponseBodyMenus() {}

  explicit ListDsMenusResponseBodyMenus(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (titleEn) {
      res["TitleEn"] = boost::any(*titleEn);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TitleEn") != m.end() && !m["TitleEn"].empty()) {
      titleEn = make_shared<string>(boost::any_cast<string>(m["TitleEn"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ListDsMenusResponseBodyMenus() = default;
};
class ListDsMenusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> ext{};
  shared_ptr<vector<ListDsMenusResponseBodyMenus>> menus{};
  shared_ptr<string> requestId{};

  ListDsMenusResponseBody() {}

  explicit ListDsMenusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (menus) {
      vector<boost::any> temp1;
      for(auto item1:*menus){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Menus"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      ext = make_shared<string>(boost::any_cast<string>(m["Ext"]));
    }
    if (m.find("Menus") != m.end() && !m["Menus"].empty()) {
      if (typeid(vector<boost::any>) == m["Menus"].type()) {
        vector<ListDsMenusResponseBodyMenus> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Menus"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDsMenusResponseBodyMenus model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        menus = make_shared<vector<ListDsMenusResponseBodyMenus>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDsMenusResponseBody() = default;
};
class ListDsMenusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDsMenusResponseBody> body{};

  ListDsMenusResponse() {}

  explicit ListDsMenusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDsMenusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDsMenusResponseBody>(model1);
      }
    }
  }


  virtual ~ListDsMenusResponse() = default;
};
class ListInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> robotType{};

  ListInstanceRequest() {}

  explicit ListInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
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
    if (robotType) {
      res["RobotType"] = boost::any(*robotType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
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
    if (m.find("RobotType") != m.end() && !m["RobotType"].empty()) {
      robotType = make_shared<string>(boost::any_cast<string>(m["RobotType"]));
    }
  }


  virtual ~ListInstanceRequest() = default;
};
class ListInstanceResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> introduction{};
  shared_ptr<string> languageCode{};
  shared_ptr<string> name{};
  shared_ptr<string> robotType{};

  ListInstanceResponseBodyInstances() {}

  explicit ListInstanceResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (robotType) {
      res["RobotType"] = boost::any(*robotType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RobotType") != m.end() && !m["RobotType"].empty()) {
      robotType = make_shared<string>(boost::any_cast<string>(m["RobotType"]));
    }
  }


  virtual ~ListInstanceResponseBodyInstances() = default;
};
class ListInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstanceResponseBodyInstances>> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInstanceResponseBody() {}

  explicit ListInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Instances"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Instances") != m.end() && !m["Instances"].empty()) {
      if (typeid(vector<boost::any>) == m["Instances"].type()) {
        vector<ListInstanceResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstanceResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstanceResponseBodyInstances>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListInstanceResponseBody() = default;
};
class ListInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceResponseBody> body{};

  ListInstanceResponse() {}

  explicit ListInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceResponse() = default;
};
class ListIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> intentName{};

  ListIntentRequest() {}

  explicit ListIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
  }


  virtual ~ListIntentRequest() = default;
};
class ListIntentResponseBodyIntentsSlotInfos : public Darabonba::Model {
public:
  shared_ptr<bool> array{};
  shared_ptr<bool> encrypt{};
  shared_ptr<bool> interactive{};
  shared_ptr<string> name{};
  shared_ptr<string> slotId{};
  shared_ptr<string> value{};

  ListIntentResponseBodyIntentsSlotInfos() {}

  explicit ListIntentResponseBodyIntentsSlotInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (array) {
      res["Array"] = boost::any(*array);
    }
    if (encrypt) {
      res["Encrypt"] = boost::any(*encrypt);
    }
    if (interactive) {
      res["Interactive"] = boost::any(*interactive);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Array") != m.end() && !m["Array"].empty()) {
      array = make_shared<bool>(boost::any_cast<bool>(m["Array"]));
    }
    if (m.find("Encrypt") != m.end() && !m["Encrypt"].empty()) {
      encrypt = make_shared<bool>(boost::any_cast<bool>(m["Encrypt"]));
    }
    if (m.find("Interactive") != m.end() && !m["Interactive"].empty()) {
      interactive = make_shared<bool>(boost::any_cast<bool>(m["Interactive"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListIntentResponseBodyIntentsSlotInfos() = default;
};
class ListIntentResponseBodyIntents : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> intentId{};
  shared_ptr<string> intentName{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<vector<ListIntentResponseBodyIntentsSlotInfos>> slotInfos{};

  ListIntentResponseBodyIntents() {}

  explicit ListIntentResponseBodyIntents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (slotInfos) {
      vector<boost::any> temp1;
      for(auto item1:*slotInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlotInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("SlotInfos") != m.end() && !m["SlotInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["SlotInfos"].type()) {
        vector<ListIntentResponseBodyIntentsSlotInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlotInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIntentResponseBodyIntentsSlotInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slotInfos = make_shared<vector<ListIntentResponseBodyIntentsSlotInfos>>(expect1);
      }
    }
  }


  virtual ~ListIntentResponseBodyIntents() = default;
};
class ListIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListIntentResponseBodyIntents>> intents{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListIntentResponseBody() {}

  explicit ListIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intents) {
      vector<boost::any> temp1;
      for(auto item1:*intents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Intents"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Intents") != m.end() && !m["Intents"].empty()) {
      if (typeid(vector<boost::any>) == m["Intents"].type()) {
        vector<ListIntentResponseBodyIntents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Intents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListIntentResponseBodyIntents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        intents = make_shared<vector<ListIntentResponseBodyIntents>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListIntentResponseBody() = default;
};
class ListIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListIntentResponseBody> body{};

  ListIntentResponse() {}

  explicit ListIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListIntentResponseBody>(model1);
      }
    }
  }


  virtual ~ListIntentResponse() = default;
};
class ListLgfRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> intentId{};
  shared_ptr<string> lgfText{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListLgfRequest() {}

  explicit ListLgfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (lgfText) {
      res["LgfText"] = boost::any(*lgfText);
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
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("LgfText") != m.end() && !m["LgfText"].empty()) {
      lgfText = make_shared<string>(boost::any_cast<string>(m["LgfText"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListLgfRequest() = default;
};
class ListLgfResponseBodyLgfs : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<long> intentId{};
  shared_ptr<long> lgfId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> ruleText{};

  ListLgfResponseBodyLgfs() {}

  explicit ListLgfResponseBodyLgfs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (lgfId) {
      res["LgfId"] = boost::any(*lgfId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (ruleText) {
      res["RuleText"] = boost::any(*ruleText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("LgfId") != m.end() && !m["LgfId"].empty()) {
      lgfId = make_shared<long>(boost::any_cast<long>(m["LgfId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RuleText") != m.end() && !m["RuleText"].empty()) {
      ruleText = make_shared<string>(boost::any_cast<string>(m["RuleText"]));
    }
  }


  virtual ~ListLgfResponseBodyLgfs() = default;
};
class ListLgfResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListLgfResponseBodyLgfs>> lgfs{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListLgfResponseBody() {}

  explicit ListLgfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lgfs) {
      vector<boost::any> temp1;
      for(auto item1:*lgfs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Lgfs"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Lgfs") != m.end() && !m["Lgfs"].empty()) {
      if (typeid(vector<boost::any>) == m["Lgfs"].type()) {
        vector<ListLgfResponseBodyLgfs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Lgfs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListLgfResponseBodyLgfs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lgfs = make_shared<vector<ListLgfResponseBodyLgfs>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListLgfResponseBody() = default;
};
class ListLgfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListLgfResponseBody> body{};

  ListLgfResponse() {}

  explicit ListLgfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListLgfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListLgfResponseBody>(model1);
      }
    }
  }


  virtual ~ListLgfResponse() = default;
};
class ListSimQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeId{};

  ListSimQuestionRequest() {}

  explicit ListSimQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~ListSimQuestionRequest() = default;
};
class ListSimQuestionResponseBodySimQuestions : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<long> simQuestionId{};
  shared_ptr<string> title{};

  ListSimQuestionResponseBodySimQuestions() {}

  explicit ListSimQuestionResponseBodySimQuestions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (simQuestionId) {
      res["SimQuestionId"] = boost::any(*simQuestionId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("SimQuestionId") != m.end() && !m["SimQuestionId"].empty()) {
      simQuestionId = make_shared<long>(boost::any_cast<long>(m["SimQuestionId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListSimQuestionResponseBodySimQuestions() = default;
};
class ListSimQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSimQuestionResponseBodySimQuestions>> simQuestions{};

  ListSimQuestionResponseBody() {}

  explicit ListSimQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (simQuestions) {
      vector<boost::any> temp1;
      for(auto item1:*simQuestions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SimQuestions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SimQuestions") != m.end() && !m["SimQuestions"].empty()) {
      if (typeid(vector<boost::any>) == m["SimQuestions"].type()) {
        vector<ListSimQuestionResponseBodySimQuestions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SimQuestions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSimQuestionResponseBodySimQuestions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        simQuestions = make_shared<vector<ListSimQuestionResponseBodySimQuestions>>(expect1);
      }
    }
  }


  virtual ~ListSimQuestionResponseBody() = default;
};
class ListSimQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSimQuestionResponseBody> body{};

  ListSimQuestionResponse() {}

  explicit ListSimQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSimQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSimQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~ListSimQuestionResponse() = default;
};
class ListSolutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> knowledgeId{};

  ListSolutionRequest() {}

  explicit ListSolutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~ListSolutionRequest() = default;
};
class ListSolutionResponseBodySolutions : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> contentType{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<string>> perspectiveCodes{};
  shared_ptr<string> plainText{};
  shared_ptr<long> solutionId{};

  ListSolutionResponseBodySolutions() {}

  explicit ListSolutionResponseBodySolutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (perspectiveCodes) {
      res["PerspectiveCodes"] = boost::any(*perspectiveCodes);
    }
    if (plainText) {
      res["PlainText"] = boost::any(*plainText);
    }
    if (solutionId) {
      res["SolutionId"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<long>(boost::any_cast<long>(m["ContentType"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("PerspectiveCodes") != m.end() && !m["PerspectiveCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PerspectiveCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PerspectiveCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspectiveCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("PlainText") != m.end() && !m["PlainText"].empty()) {
      plainText = make_shared<string>(boost::any_cast<string>(m["PlainText"]));
    }
    if (m.find("SolutionId") != m.end() && !m["SolutionId"].empty()) {
      solutionId = make_shared<long>(boost::any_cast<long>(m["SolutionId"]));
    }
  }


  virtual ~ListSolutionResponseBodySolutions() = default;
};
class ListSolutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListSolutionResponseBodySolutions>> solutions{};

  ListSolutionResponseBody() {}

  explicit ListSolutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (solutions) {
      vector<boost::any> temp1;
      for(auto item1:*solutions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Solutions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Solutions") != m.end() && !m["Solutions"].empty()) {
      if (typeid(vector<boost::any>) == m["Solutions"].type()) {
        vector<ListSolutionResponseBodySolutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Solutions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSolutionResponseBodySolutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        solutions = make_shared<vector<ListSolutionResponseBodySolutions>>(expect1);
      }
    }
  }


  virtual ~ListSolutionResponseBody() = default;
};
class ListSolutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSolutionResponseBody> body{};

  ListSolutionResponse() {}

  explicit ListSolutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSolutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSolutionResponseBody>(model1);
      }
    }
  }


  virtual ~ListSolutionResponse() = default;
};
class ListUserSayRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> intentId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListUserSayRequest() {}

  explicit ListUserSayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
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
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListUserSayRequest() = default;
};
class ListUserSayResponseBodyUserSaysSlotInfos : public Darabonba::Model {
public:
  shared_ptr<long> endIndex{};
  shared_ptr<string> slotId{};
  shared_ptr<long> startIndex{};

  ListUserSayResponseBodyUserSaysSlotInfos() {}

  explicit ListUserSayResponseBodyUserSaysSlotInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endIndex) {
      res["EndIndex"] = boost::any(*endIndex);
    }
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (startIndex) {
      res["StartIndex"] = boost::any(*startIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndIndex") != m.end() && !m["EndIndex"].empty()) {
      endIndex = make_shared<long>(boost::any_cast<long>(m["EndIndex"]));
    }
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("StartIndex") != m.end() && !m["StartIndex"].empty()) {
      startIndex = make_shared<long>(boost::any_cast<long>(m["StartIndex"]));
    }
  }


  virtual ~ListUserSayResponseBodyUserSaysSlotInfos() = default;
};
class ListUserSayResponseBodyUserSays : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> createTime{};
  shared_ptr<long> intentId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<vector<ListUserSayResponseBodyUserSaysSlotInfos>> slotInfos{};
  shared_ptr<long> userSayId{};

  ListUserSayResponseBodyUserSays() {}

  explicit ListUserSayResponseBodyUserSays(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (slotInfos) {
      vector<boost::any> temp1;
      for(auto item1:*slotInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlotInfos"] = boost::any(temp1);
    }
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("SlotInfos") != m.end() && !m["SlotInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["SlotInfos"].type()) {
        vector<ListUserSayResponseBodyUserSaysSlotInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlotInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserSayResponseBodyUserSaysSlotInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slotInfos = make_shared<vector<ListUserSayResponseBodyUserSaysSlotInfos>>(expect1);
      }
    }
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<long>(boost::any_cast<long>(m["UserSayId"]));
    }
  }


  virtual ~ListUserSayResponseBodyUserSays() = default;
};
class ListUserSayResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<ListUserSayResponseBodyUserSays>> userSays{};

  ListUserSayResponseBody() {}

  explicit ListUserSayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (userSays) {
      vector<boost::any> temp1;
      for(auto item1:*userSays){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["UserSays"] = boost::any(temp1);
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("UserSays") != m.end() && !m["UserSays"].empty()) {
      if (typeid(vector<boost::any>) == m["UserSays"].type()) {
        vector<ListUserSayResponseBodyUserSays> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["UserSays"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserSayResponseBodyUserSays model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userSays = make_shared<vector<ListUserSayResponseBodyUserSays>>(expect1);
      }
    }
  }


  virtual ~ListUserSayResponseBody() = default;
};
class ListUserSayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserSayResponseBody> body{};

  ListUserSayResponse() {}

  explicit ListUserSayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserSayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserSayResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserSayResponse() = default;
};
class NluRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> utterance{};

  NluRequest() {}

  explicit NluRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
  }


  virtual ~NluRequest() = default;
};
class NluResponseBodyMessagesDialogHubNluInfoGlobalDictList : public Darabonba::Model {
public:
  shared_ptr<string> standardWord{};
  shared_ptr<string> word{};

  NluResponseBodyMessagesDialogHubNluInfoGlobalDictList() {}

  explicit NluResponseBodyMessagesDialogHubNluInfoGlobalDictList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (standardWord) {
      res["StandardWord"] = boost::any(*standardWord);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StandardWord") != m.end() && !m["StandardWord"].empty()) {
      standardWord = make_shared<string>(boost::any_cast<string>(m["StandardWord"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~NluResponseBodyMessagesDialogHubNluInfoGlobalDictList() = default;
};
class NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList : public Darabonba::Model {
public:
  shared_ptr<string> standardWord{};
  shared_ptr<string> word{};

  NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList() {}

  explicit NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (standardWord) {
      res["StandardWord"] = boost::any(*standardWord);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("StandardWord") != m.end() && !m["StandardWord"].empty()) {
      standardWord = make_shared<string>(boost::any_cast<string>(m["StandardWord"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList() = default;
};
class NluResponseBodyMessagesDialogHubNluInfo : public Darabonba::Model {
public:
  shared_ptr<vector<NluResponseBodyMessagesDialogHubNluInfoGlobalDictList>> globalDictList{};
  shared_ptr<vector<NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList>> globalSensitiveWordList{};

  NluResponseBodyMessagesDialogHubNluInfo() {}

  explicit NluResponseBodyMessagesDialogHubNluInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (globalDictList) {
      vector<boost::any> temp1;
      for(auto item1:*globalDictList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GlobalDictList"] = boost::any(temp1);
    }
    if (globalSensitiveWordList) {
      vector<boost::any> temp1;
      for(auto item1:*globalSensitiveWordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["GlobalSensitiveWordList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GlobalDictList") != m.end() && !m["GlobalDictList"].empty()) {
      if (typeid(vector<boost::any>) == m["GlobalDictList"].type()) {
        vector<NluResponseBodyMessagesDialogHubNluInfoGlobalDictList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GlobalDictList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NluResponseBodyMessagesDialogHubNluInfoGlobalDictList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        globalDictList = make_shared<vector<NluResponseBodyMessagesDialogHubNluInfoGlobalDictList>>(expect1);
      }
    }
    if (m.find("GlobalSensitiveWordList") != m.end() && !m["GlobalSensitiveWordList"].empty()) {
      if (typeid(vector<boost::any>) == m["GlobalSensitiveWordList"].type()) {
        vector<NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["GlobalSensitiveWordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        globalSensitiveWordList = make_shared<vector<NluResponseBodyMessagesDialogHubNluInfoGlobalSensitiveWordList>>(expect1);
      }
    }
  }


  virtual ~NluResponseBodyMessagesDialogHubNluInfo() = default;
};
class NluResponseBodyMessagesDsNluInfoEntityList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> origin{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  NluResponseBodyMessagesDsNluInfoEntityList() {}

  explicit NluResponseBodyMessagesDsNluInfoEntityList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~NluResponseBodyMessagesDsNluInfoEntityList() = default;
};
class NluResponseBodyMessagesDsNluInfoIntentListSlotList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> origin{};
  shared_ptr<string> type{};
  shared_ptr<string> value{};

  NluResponseBodyMessagesDsNluInfoIntentListSlotList() {}

  explicit NluResponseBodyMessagesDsNluInfoIntentListSlotList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~NluResponseBodyMessagesDsNluInfoIntentListSlotList() = default;
};
class NluResponseBodyMessagesDsNluInfoIntentList : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> matchDetail{};
  shared_ptr<string> matchType{};
  shared_ptr<string> name{};
  shared_ptr<double> score{};
  shared_ptr<vector<NluResponseBodyMessagesDsNluInfoIntentListSlotList>> slotList{};

  NluResponseBodyMessagesDsNluInfoIntentList() {}

  explicit NluResponseBodyMessagesDsNluInfoIntentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (matchDetail) {
      res["MatchDetail"] = boost::any(*matchDetail);
    }
    if (matchType) {
      res["MatchType"] = boost::any(*matchType);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (slotList) {
      vector<boost::any> temp1;
      for(auto item1:*slotList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlotList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("MatchDetail") != m.end() && !m["MatchDetail"].empty()) {
      matchDetail = make_shared<string>(boost::any_cast<string>(m["MatchDetail"]));
    }
    if (m.find("MatchType") != m.end() && !m["MatchType"].empty()) {
      matchType = make_shared<string>(boost::any_cast<string>(m["MatchType"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["Score"]));
    }
    if (m.find("SlotList") != m.end() && !m["SlotList"].empty()) {
      if (typeid(vector<boost::any>) == m["SlotList"].type()) {
        vector<NluResponseBodyMessagesDsNluInfoIntentListSlotList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlotList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NluResponseBodyMessagesDsNluInfoIntentListSlotList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slotList = make_shared<vector<NluResponseBodyMessagesDsNluInfoIntentListSlotList>>(expect1);
      }
    }
  }


  virtual ~NluResponseBodyMessagesDsNluInfoIntentList() = default;
};
class NluResponseBodyMessagesDsNluInfo : public Darabonba::Model {
public:
  shared_ptr<vector<NluResponseBodyMessagesDsNluInfoEntityList>> entityList{};
  shared_ptr<vector<NluResponseBodyMessagesDsNluInfoIntentList>> intentList{};

  NluResponseBodyMessagesDsNluInfo() {}

  explicit NluResponseBodyMessagesDsNluInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityList) {
      vector<boost::any> temp1;
      for(auto item1:*entityList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EntityList"] = boost::any(temp1);
    }
    if (intentList) {
      vector<boost::any> temp1;
      for(auto item1:*intentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["IntentList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityList") != m.end() && !m["EntityList"].empty()) {
      if (typeid(vector<boost::any>) == m["EntityList"].type()) {
        vector<NluResponseBodyMessagesDsNluInfoEntityList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EntityList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NluResponseBodyMessagesDsNluInfoEntityList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        entityList = make_shared<vector<NluResponseBodyMessagesDsNluInfoEntityList>>(expect1);
      }
    }
    if (m.find("IntentList") != m.end() && !m["IntentList"].empty()) {
      if (typeid(vector<boost::any>) == m["IntentList"].type()) {
        vector<NluResponseBodyMessagesDsNluInfoIntentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["IntentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NluResponseBodyMessagesDsNluInfoIntentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        intentList = make_shared<vector<NluResponseBodyMessagesDsNluInfoIntentList>>(expect1);
      }
    }
  }


  virtual ~NluResponseBodyMessagesDsNluInfo() = default;
};
class NluResponseBodyMessages : public Darabonba::Model {
public:
  shared_ptr<NluResponseBodyMessagesDialogHubNluInfo> dialogHubNluInfo{};
  shared_ptr<NluResponseBodyMessagesDsNluInfo> dsNluInfo{};

  NluResponseBodyMessages() {}

  explicit NluResponseBodyMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogHubNluInfo) {
      res["DialogHubNluInfo"] = dialogHubNluInfo ? boost::any(dialogHubNluInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (dsNluInfo) {
      res["DsNluInfo"] = dsNluInfo ? boost::any(dsNluInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogHubNluInfo") != m.end() && !m["DialogHubNluInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DialogHubNluInfo"].type()) {
        NluResponseBodyMessagesDialogHubNluInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DialogHubNluInfo"]));
        dialogHubNluInfo = make_shared<NluResponseBodyMessagesDialogHubNluInfo>(model1);
      }
    }
    if (m.find("DsNluInfo") != m.end() && !m["DsNluInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["DsNluInfo"].type()) {
        NluResponseBodyMessagesDsNluInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DsNluInfo"]));
        dsNluInfo = make_shared<NluResponseBodyMessagesDsNluInfo>(model1);
      }
    }
  }


  virtual ~NluResponseBodyMessages() = default;
};
class NluResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<vector<NluResponseBodyMessages>> messages{};
  shared_ptr<string> requestId{};

  NluResponseBody() {}

  explicit NluResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (messages) {
      vector<boost::any> temp1;
      for(auto item1:*messages){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Messages"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<NluResponseBodyMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            NluResponseBodyMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<NluResponseBodyMessages>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~NluResponseBody() = default;
};
class NluResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<NluResponseBody> body{};

  NluResponse() {}

  explicit NluResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        NluResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<NluResponseBody>(model1);
      }
    }
  }


  virtual ~NluResponse() = default;
};
class QueryPerspectivesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};

  QueryPerspectivesRequest() {}

  explicit QueryPerspectivesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
  }


  virtual ~QueryPerspectivesRequest() = default;
};
class QueryPerspectivesResponseBodyPerspectives : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> name{};
  shared_ptr<string> perspectiveCode{};
  shared_ptr<string> perspectiveId{};
  shared_ptr<bool> selfDefine{};
  shared_ptr<long> status{};

  QueryPerspectivesResponseBodyPerspectives() {}

  explicit QueryPerspectivesResponseBodyPerspectives(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (perspectiveCode) {
      res["PerspectiveCode"] = boost::any(*perspectiveCode);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    if (selfDefine) {
      res["SelfDefine"] = boost::any(*selfDefine);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PerspectiveCode") != m.end() && !m["PerspectiveCode"].empty()) {
      perspectiveCode = make_shared<string>(boost::any_cast<string>(m["PerspectiveCode"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
    if (m.find("SelfDefine") != m.end() && !m["SelfDefine"].empty()) {
      selfDefine = make_shared<bool>(boost::any_cast<bool>(m["SelfDefine"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~QueryPerspectivesResponseBodyPerspectives() = default;
};
class QueryPerspectivesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryPerspectivesResponseBodyPerspectives>> perspectives{};
  shared_ptr<string> requestId{};

  QueryPerspectivesResponseBody() {}

  explicit QueryPerspectivesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (perspectives) {
      vector<boost::any> temp1;
      for(auto item1:*perspectives){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Perspectives"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Perspectives") != m.end() && !m["Perspectives"].empty()) {
      if (typeid(vector<boost::any>) == m["Perspectives"].type()) {
        vector<QueryPerspectivesResponseBodyPerspectives> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Perspectives"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryPerspectivesResponseBodyPerspectives model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        perspectives = make_shared<vector<QueryPerspectivesResponseBodyPerspectives>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPerspectivesResponseBody() = default;
};
class QueryPerspectivesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPerspectivesResponseBody> body{};

  QueryPerspectivesResponse() {}

  explicit QueryPerspectivesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPerspectivesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPerspectivesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPerspectivesResponse() = default;
};
class SearchFaqRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<vector<long>> categoryIds{};
  shared_ptr<string> createTimeBegin{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> endTimeBegin{};
  shared_ptr<string> endTimeEnd{};
  shared_ptr<string> keyword{};
  shared_ptr<string> modifyTimeBegin{};
  shared_ptr<string> modifyTimeEnd{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> searchScope{};
  shared_ptr<string> startTimeBegin{};
  shared_ptr<string> startTimeEnd{};
  shared_ptr<long> status{};

  SearchFaqRequest() {}

  explicit SearchFaqRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryIds) {
      res["CategoryIds"] = boost::any(*categoryIds);
    }
    if (createTimeBegin) {
      res["CreateTimeBegin"] = boost::any(*createTimeBegin);
    }
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (endTimeBegin) {
      res["EndTimeBegin"] = boost::any(*endTimeBegin);
    }
    if (endTimeEnd) {
      res["EndTimeEnd"] = boost::any(*endTimeEnd);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (modifyTimeBegin) {
      res["ModifyTimeBegin"] = boost::any(*modifyTimeBegin);
    }
    if (modifyTimeEnd) {
      res["ModifyTimeEnd"] = boost::any(*modifyTimeEnd);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchScope) {
      res["SearchScope"] = boost::any(*searchScope);
    }
    if (startTimeBegin) {
      res["StartTimeBegin"] = boost::any(*startTimeBegin);
    }
    if (startTimeEnd) {
      res["StartTimeEnd"] = boost::any(*startTimeEnd);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["CategoryIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["CategoryIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      categoryIds = make_shared<vector<long>>(toVec1);
    }
    if (m.find("CreateTimeBegin") != m.end() && !m["CreateTimeBegin"].empty()) {
      createTimeBegin = make_shared<string>(boost::any_cast<string>(m["CreateTimeBegin"]));
    }
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EndTimeBegin") != m.end() && !m["EndTimeBegin"].empty()) {
      endTimeBegin = make_shared<string>(boost::any_cast<string>(m["EndTimeBegin"]));
    }
    if (m.find("EndTimeEnd") != m.end() && !m["EndTimeEnd"].empty()) {
      endTimeEnd = make_shared<string>(boost::any_cast<string>(m["EndTimeEnd"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("ModifyTimeBegin") != m.end() && !m["ModifyTimeBegin"].empty()) {
      modifyTimeBegin = make_shared<string>(boost::any_cast<string>(m["ModifyTimeBegin"]));
    }
    if (m.find("ModifyTimeEnd") != m.end() && !m["ModifyTimeEnd"].empty()) {
      modifyTimeEnd = make_shared<string>(boost::any_cast<string>(m["ModifyTimeEnd"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchScope") != m.end() && !m["SearchScope"].empty()) {
      searchScope = make_shared<long>(boost::any_cast<long>(m["SearchScope"]));
    }
    if (m.find("StartTimeBegin") != m.end() && !m["StartTimeBegin"].empty()) {
      startTimeBegin = make_shared<string>(boost::any_cast<string>(m["StartTimeBegin"]));
    }
    if (m.find("StartTimeEnd") != m.end() && !m["StartTimeEnd"].empty()) {
      startTimeEnd = make_shared<string>(boost::any_cast<string>(m["StartTimeEnd"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~SearchFaqRequest() = default;
};
class SearchFaqShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> categoryIdsShrink{};
  shared_ptr<string> createTimeBegin{};
  shared_ptr<string> createTimeEnd{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> endTimeBegin{};
  shared_ptr<string> endTimeEnd{};
  shared_ptr<string> keyword{};
  shared_ptr<string> modifyTimeBegin{};
  shared_ptr<string> modifyTimeEnd{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> searchScope{};
  shared_ptr<string> startTimeBegin{};
  shared_ptr<string> startTimeEnd{};
  shared_ptr<long> status{};

  SearchFaqShrinkRequest() {}

  explicit SearchFaqShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryIdsShrink) {
      res["CategoryIds"] = boost::any(*categoryIdsShrink);
    }
    if (createTimeBegin) {
      res["CreateTimeBegin"] = boost::any(*createTimeBegin);
    }
    if (createTimeEnd) {
      res["CreateTimeEnd"] = boost::any(*createTimeEnd);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (endTimeBegin) {
      res["EndTimeBegin"] = boost::any(*endTimeBegin);
    }
    if (endTimeEnd) {
      res["EndTimeEnd"] = boost::any(*endTimeEnd);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (modifyTimeBegin) {
      res["ModifyTimeBegin"] = boost::any(*modifyTimeBegin);
    }
    if (modifyTimeEnd) {
      res["ModifyTimeEnd"] = boost::any(*modifyTimeEnd);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (searchScope) {
      res["SearchScope"] = boost::any(*searchScope);
    }
    if (startTimeBegin) {
      res["StartTimeBegin"] = boost::any(*startTimeBegin);
    }
    if (startTimeEnd) {
      res["StartTimeEnd"] = boost::any(*startTimeEnd);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryIds") != m.end() && !m["CategoryIds"].empty()) {
      categoryIdsShrink = make_shared<string>(boost::any_cast<string>(m["CategoryIds"]));
    }
    if (m.find("CreateTimeBegin") != m.end() && !m["CreateTimeBegin"].empty()) {
      createTimeBegin = make_shared<string>(boost::any_cast<string>(m["CreateTimeBegin"]));
    }
    if (m.find("CreateTimeEnd") != m.end() && !m["CreateTimeEnd"].empty()) {
      createTimeEnd = make_shared<string>(boost::any_cast<string>(m["CreateTimeEnd"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EndTimeBegin") != m.end() && !m["EndTimeBegin"].empty()) {
      endTimeBegin = make_shared<string>(boost::any_cast<string>(m["EndTimeBegin"]));
    }
    if (m.find("EndTimeEnd") != m.end() && !m["EndTimeEnd"].empty()) {
      endTimeEnd = make_shared<string>(boost::any_cast<string>(m["EndTimeEnd"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("ModifyTimeBegin") != m.end() && !m["ModifyTimeBegin"].empty()) {
      modifyTimeBegin = make_shared<string>(boost::any_cast<string>(m["ModifyTimeBegin"]));
    }
    if (m.find("ModifyTimeEnd") != m.end() && !m["ModifyTimeEnd"].empty()) {
      modifyTimeEnd = make_shared<string>(boost::any_cast<string>(m["ModifyTimeEnd"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SearchScope") != m.end() && !m["SearchScope"].empty()) {
      searchScope = make_shared<long>(boost::any_cast<long>(m["SearchScope"]));
    }
    if (m.find("StartTimeBegin") != m.end() && !m["StartTimeBegin"].empty()) {
      startTimeBegin = make_shared<string>(boost::any_cast<string>(m["StartTimeBegin"]));
    }
    if (m.find("StartTimeEnd") != m.end() && !m["StartTimeEnd"].empty()) {
      startTimeEnd = make_shared<string>(boost::any_cast<string>(m["StartTimeEnd"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~SearchFaqShrinkRequest() = default;
};
class SearchFaqResponseBodyFaqHits : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> createTime{};
  shared_ptr<long> createUserId{};
  shared_ptr<string> createUserName{};
  shared_ptr<long> effectStatus{};
  shared_ptr<vector<string>> hitSimilarTitles{};
  shared_ptr<vector<string>> hitSolutions{};
  shared_ptr<long> knowledgeId{};
  shared_ptr<string> modifyTime{};
  shared_ptr<long> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<long> status{};
  shared_ptr<string> title{};

  SearchFaqResponseBodyFaqHits() {}

  explicit SearchFaqResponseBodyFaqHits(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (effectStatus) {
      res["EffectStatus"] = boost::any(*effectStatus);
    }
    if (hitSimilarTitles) {
      res["HitSimilarTitles"] = boost::any(*hitSimilarTitles);
    }
    if (hitSolutions) {
      res["HitSolutions"] = boost::any(*hitSolutions);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<long>(boost::any_cast<long>(m["CreateUserId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("EffectStatus") != m.end() && !m["EffectStatus"].empty()) {
      effectStatus = make_shared<long>(boost::any_cast<long>(m["EffectStatus"]));
    }
    if (m.find("HitSimilarTitles") != m.end() && !m["HitSimilarTitles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HitSimilarTitles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HitSimilarTitles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hitSimilarTitles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("HitSolutions") != m.end() && !m["HitSolutions"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["HitSolutions"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["HitSolutions"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      hitSolutions = make_shared<vector<string>>(toVec1);
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<long>(boost::any_cast<long>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~SearchFaqResponseBodyFaqHits() = default;
};
class SearchFaqResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchFaqResponseBodyFaqHits>> faqHits{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  SearchFaqResponseBody() {}

  explicit SearchFaqResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (faqHits) {
      vector<boost::any> temp1;
      for(auto item1:*faqHits){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FaqHits"] = boost::any(temp1);
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FaqHits") != m.end() && !m["FaqHits"].empty()) {
      if (typeid(vector<boost::any>) == m["FaqHits"].type()) {
        vector<SearchFaqResponseBodyFaqHits> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FaqHits"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchFaqResponseBodyFaqHits model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        faqHits = make_shared<vector<SearchFaqResponseBodyFaqHits>>(expect1);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~SearchFaqResponseBody() = default;
};
class SearchFaqResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchFaqResponseBody> body{};

  SearchFaqResponse() {}

  explicit SearchFaqResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchFaqResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchFaqResponseBody>(model1);
      }
    }
  }


  virtual ~SearchFaqResponse() = default;
};
class UpdateCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};
  shared_ptr<string> name{};

  UpdateCategoryRequest() {}

  explicit UpdateCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateCategoryRequest() = default;
};
class UpdateCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateCategoryResponseBody() {}

  explicit UpdateCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateCategoryResponseBody() = default;
};
class UpdateCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateCategoryResponseBody> body{};

  UpdateCategoryResponse() {}

  explicit UpdateCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCategoryResponse() = default;
};
class UpdateConnQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> connQuestionId{};
  shared_ptr<long> outlineId{};

  UpdateConnQuestionRequest() {}

  explicit UpdateConnQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (connQuestionId) {
      res["ConnQuestionId"] = boost::any(*connQuestionId);
    }
    if (outlineId) {
      res["OutlineId"] = boost::any(*outlineId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ConnQuestionId") != m.end() && !m["ConnQuestionId"].empty()) {
      connQuestionId = make_shared<long>(boost::any_cast<long>(m["ConnQuestionId"]));
    }
    if (m.find("OutlineId") != m.end() && !m["OutlineId"].empty()) {
      outlineId = make_shared<long>(boost::any_cast<long>(m["OutlineId"]));
    }
  }


  virtual ~UpdateConnQuestionRequest() = default;
};
class UpdateConnQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateConnQuestionResponseBody() {}

  explicit UpdateConnQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateConnQuestionResponseBody() = default;
};
class UpdateConnQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateConnQuestionResponseBody> body{};

  UpdateConnQuestionResponse() {}

  explicit UpdateConnQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateConnQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateConnQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateConnQuestionResponse() = default;
};
class UpdateDSEntityRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> instanceId{};

  UpdateDSEntityRequest() {}

  explicit UpdateDSEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~UpdateDSEntityRequest() = default;
};
class UpdateDSEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> requestId{};

  UpdateDSEntityResponseBody() {}

  explicit UpdateDSEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDSEntityResponseBody() = default;
};
class UpdateDSEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDSEntityResponseBody> body{};

  UpdateDSEntityResponse() {}

  explicit UpdateDSEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDSEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDSEntityResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDSEntityResponse() = default;
};
class UpdateDSEntityValueRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<long> entityId{};
  shared_ptr<long> entityValueId{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> synonyms{};

  UpdateDSEntityValueRequest() {}

  explicit UpdateDSEntityValueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityValueId) {
      res["EntityValueId"] = boost::any(*entityValueId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityValueId") != m.end() && !m["EntityValueId"].empty()) {
      entityValueId = make_shared<long>(boost::any_cast<long>(m["EntityValueId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Synonyms") != m.end() && !m["Synonyms"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Synonyms"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Synonyms"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      synonyms = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateDSEntityValueRequest() = default;
};
class UpdateDSEntityValueResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> entityValueId{};
  shared_ptr<string> requestId{};

  UpdateDSEntityValueResponseBody() {}

  explicit UpdateDSEntityValueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityValueId) {
      res["EntityValueId"] = boost::any(*entityValueId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityValueId") != m.end() && !m["EntityValueId"].empty()) {
      entityValueId = make_shared<long>(boost::any_cast<long>(m["EntityValueId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDSEntityValueResponseBody() = default;
};
class UpdateDSEntityValueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDSEntityValueResponseBody> body{};

  UpdateDSEntityValueResponse() {}

  explicit UpdateDSEntityValueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDSEntityValueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDSEntityValueResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDSEntityValueResponse() = default;
};
class UpdateFaqRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> categoryId{};
  shared_ptr<string> endDate{};
  shared_ptr<long> knowledgeId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> title{};

  UpdateFaqRequest() {}

  explicit UpdateFaqRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateFaqRequest() = default;
};
class UpdateFaqResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateFaqResponseBody() {}

  explicit UpdateFaqResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateFaqResponseBody() = default;
};
class UpdateFaqResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateFaqResponseBody> body{};

  UpdateFaqResponse() {}

  explicit UpdateFaqResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateFaqResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateFaqResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateFaqResponse() = default;
};
class UpdateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> introduction{};
  shared_ptr<string> name{};

  UpdateInstanceRequest() {}

  explicit UpdateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~UpdateInstanceRequest() = default;
};
class UpdateInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateInstanceResponseBody() {}

  explicit UpdateInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateInstanceResponseBody() = default;
};
class UpdateInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateInstanceResponseBody> body{};

  UpdateInstanceResponse() {}

  explicit UpdateInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateInstanceResponse() = default;
};
class UpdateIntentRequestIntentDefinitionSlotInfos : public Darabonba::Model {
public:
  shared_ptr<bool> array{};
  shared_ptr<bool> encrypt{};
  shared_ptr<bool> interactive{};
  shared_ptr<string> name{};
  shared_ptr<string> slotId{};
  shared_ptr<string> value{};

  UpdateIntentRequestIntentDefinitionSlotInfos() {}

  explicit UpdateIntentRequestIntentDefinitionSlotInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (array) {
      res["Array"] = boost::any(*array);
    }
    if (encrypt) {
      res["Encrypt"] = boost::any(*encrypt);
    }
    if (interactive) {
      res["Interactive"] = boost::any(*interactive);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Array") != m.end() && !m["Array"].empty()) {
      array = make_shared<bool>(boost::any_cast<bool>(m["Array"]));
    }
    if (m.find("Encrypt") != m.end() && !m["Encrypt"].empty()) {
      encrypt = make_shared<bool>(boost::any_cast<bool>(m["Encrypt"]));
    }
    if (m.find("Interactive") != m.end() && !m["Interactive"].empty()) {
      interactive = make_shared<bool>(boost::any_cast<bool>(m["Interactive"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateIntentRequestIntentDefinitionSlotInfos() = default;
};
class UpdateIntentRequestIntentDefinition : public Darabonba::Model {
public:
  shared_ptr<string> aliasName{};
  shared_ptr<string> intentName{};
  shared_ptr<vector<UpdateIntentRequestIntentDefinitionSlotInfos>> slotInfos{};

  UpdateIntentRequestIntentDefinition() {}

  explicit UpdateIntentRequestIntentDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliasName) {
      res["AliasName"] = boost::any(*aliasName);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (slotInfos) {
      vector<boost::any> temp1;
      for(auto item1:*slotInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlotInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliasName") != m.end() && !m["AliasName"].empty()) {
      aliasName = make_shared<string>(boost::any_cast<string>(m["AliasName"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("SlotInfos") != m.end() && !m["SlotInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["SlotInfos"].type()) {
        vector<UpdateIntentRequestIntentDefinitionSlotInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlotInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateIntentRequestIntentDefinitionSlotInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slotInfos = make_shared<vector<UpdateIntentRequestIntentDefinitionSlotInfos>>(expect1);
      }
    }
  }


  virtual ~UpdateIntentRequestIntentDefinition() = default;
};
class UpdateIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<UpdateIntentRequestIntentDefinition> intentDefinition{};
  shared_ptr<long> intentId{};

  UpdateIntentRequest() {}

  explicit UpdateIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentDefinition) {
      res["IntentDefinition"] = intentDefinition ? boost::any(intentDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["IntentDefinition"].type()) {
        UpdateIntentRequestIntentDefinition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["IntentDefinition"]));
        intentDefinition = make_shared<UpdateIntentRequestIntentDefinition>(model1);
      }
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~UpdateIntentRequest() = default;
};
class UpdateIntentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> intentDefinitionShrink{};
  shared_ptr<long> intentId{};

  UpdateIntentShrinkRequest() {}

  explicit UpdateIntentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentDefinitionShrink) {
      res["IntentDefinition"] = boost::any(*intentDefinitionShrink);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      intentDefinitionShrink = make_shared<string>(boost::any_cast<string>(m["IntentDefinition"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~UpdateIntentShrinkRequest() = default;
};
class UpdateIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> requestId{};

  UpdateIntentResponseBody() {}

  explicit UpdateIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateIntentResponseBody() = default;
};
class UpdateIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateIntentResponseBody> body{};

  UpdateIntentResponse() {}

  explicit UpdateIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIntentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIntentResponse() = default;
};
class UpdateLgfRequestLgfDefinition : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};
  shared_ptr<string> ruleText{};

  UpdateLgfRequestLgfDefinition() {}

  explicit UpdateLgfRequestLgfDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (ruleText) {
      res["RuleText"] = boost::any(*ruleText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("RuleText") != m.end() && !m["RuleText"].empty()) {
      ruleText = make_shared<string>(boost::any_cast<string>(m["RuleText"]));
    }
  }


  virtual ~UpdateLgfRequestLgfDefinition() = default;
};
class UpdateLgfRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<UpdateLgfRequestLgfDefinition> lgfDefinition{};
  shared_ptr<long> lgfId{};

  UpdateLgfRequest() {}

  explicit UpdateLgfRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lgfDefinition) {
      res["LgfDefinition"] = lgfDefinition ? boost::any(lgfDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (lgfId) {
      res["LgfId"] = boost::any(*lgfId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LgfDefinition") != m.end() && !m["LgfDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["LgfDefinition"].type()) {
        UpdateLgfRequestLgfDefinition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["LgfDefinition"]));
        lgfDefinition = make_shared<UpdateLgfRequestLgfDefinition>(model1);
      }
    }
    if (m.find("LgfId") != m.end() && !m["LgfId"].empty()) {
      lgfId = make_shared<long>(boost::any_cast<long>(m["LgfId"]));
    }
  }


  virtual ~UpdateLgfRequest() = default;
};
class UpdateLgfShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> lgfDefinitionShrink{};
  shared_ptr<long> lgfId{};

  UpdateLgfShrinkRequest() {}

  explicit UpdateLgfShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (lgfDefinitionShrink) {
      res["LgfDefinition"] = boost::any(*lgfDefinitionShrink);
    }
    if (lgfId) {
      res["LgfId"] = boost::any(*lgfId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("LgfDefinition") != m.end() && !m["LgfDefinition"].empty()) {
      lgfDefinitionShrink = make_shared<string>(boost::any_cast<string>(m["LgfDefinition"]));
    }
    if (m.find("LgfId") != m.end() && !m["LgfId"].empty()) {
      lgfId = make_shared<long>(boost::any_cast<long>(m["LgfId"]));
    }
  }


  virtual ~UpdateLgfShrinkRequest() = default;
};
class UpdateLgfResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> lgfId{};
  shared_ptr<string> requestId{};

  UpdateLgfResponseBody() {}

  explicit UpdateLgfResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lgfId) {
      res["LgfId"] = boost::any(*lgfId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LgfId") != m.end() && !m["LgfId"].empty()) {
      lgfId = make_shared<long>(boost::any_cast<long>(m["LgfId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateLgfResponseBody() = default;
};
class UpdateLgfResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateLgfResponseBody> body{};

  UpdateLgfResponse() {}

  explicit UpdateLgfResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateLgfResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateLgfResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateLgfResponse() = default;
};
class UpdatePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};
  shared_ptr<string> perspectiveId{};

  UpdatePerspectiveRequest() {}

  explicit UpdatePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
  }


  virtual ~UpdatePerspectiveRequest() = default;
};
class UpdatePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdatePerspectiveResponseBody() {}

  explicit UpdatePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdatePerspectiveResponseBody() = default;
};
class UpdatePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePerspectiveResponseBody> body{};

  UpdatePerspectiveResponse() {}

  explicit UpdatePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePerspectiveResponse() = default;
};
class UpdateSimQuestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> simQuestionId{};
  shared_ptr<string> title{};

  UpdateSimQuestionRequest() {}

  explicit UpdateSimQuestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (simQuestionId) {
      res["SimQuestionId"] = boost::any(*simQuestionId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("SimQuestionId") != m.end() && !m["SimQuestionId"].empty()) {
      simQuestionId = make_shared<long>(boost::any_cast<long>(m["SimQuestionId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~UpdateSimQuestionRequest() = default;
};
class UpdateSimQuestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateSimQuestionResponseBody() {}

  explicit UpdateSimQuestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSimQuestionResponseBody() = default;
};
class UpdateSimQuestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSimQuestionResponseBody> body{};

  UpdateSimQuestionResponse() {}

  explicit UpdateSimQuestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSimQuestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSimQuestionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSimQuestionResponse() = default;
};
class UpdateSolutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> content{};
  shared_ptr<long> contentType{};
  shared_ptr<vector<string>> perspectiveCodes{};
  shared_ptr<long> solutionId{};

  UpdateSolutionRequest() {}

  explicit UpdateSolutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentType) {
      res["ContentType"] = boost::any(*contentType);
    }
    if (perspectiveCodes) {
      res["PerspectiveCodes"] = boost::any(*perspectiveCodes);
    }
    if (solutionId) {
      res["SolutionId"] = boost::any(*solutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentType") != m.end() && !m["ContentType"].empty()) {
      contentType = make_shared<long>(boost::any_cast<long>(m["ContentType"]));
    }
    if (m.find("PerspectiveCodes") != m.end() && !m["PerspectiveCodes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["PerspectiveCodes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["PerspectiveCodes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      perspectiveCodes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SolutionId") != m.end() && !m["SolutionId"].empty()) {
      solutionId = make_shared<long>(boost::any_cast<long>(m["SolutionId"]));
    }
  }


  virtual ~UpdateSolutionRequest() = default;
};
class UpdateSolutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateSolutionResponseBody() {}

  explicit UpdateSolutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateSolutionResponseBody() = default;
};
class UpdateSolutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateSolutionResponseBody> body{};

  UpdateSolutionResponse() {}

  explicit UpdateSolutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateSolutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateSolutionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateSolutionResponse() = default;
};
class UpdateUserSayRequestUserSayDefinitionSlotInfos : public Darabonba::Model {
public:
  shared_ptr<long> endIndex{};
  shared_ptr<string> slotId{};
  shared_ptr<long> startIndex{};

  UpdateUserSayRequestUserSayDefinitionSlotInfos() {}

  explicit UpdateUserSayRequestUserSayDefinitionSlotInfos(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endIndex) {
      res["EndIndex"] = boost::any(*endIndex);
    }
    if (slotId) {
      res["SlotId"] = boost::any(*slotId);
    }
    if (startIndex) {
      res["StartIndex"] = boost::any(*startIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndIndex") != m.end() && !m["EndIndex"].empty()) {
      endIndex = make_shared<long>(boost::any_cast<long>(m["EndIndex"]));
    }
    if (m.find("SlotId") != m.end() && !m["SlotId"].empty()) {
      slotId = make_shared<string>(boost::any_cast<string>(m["SlotId"]));
    }
    if (m.find("StartIndex") != m.end() && !m["StartIndex"].empty()) {
      startIndex = make_shared<long>(boost::any_cast<long>(m["StartIndex"]));
    }
  }


  virtual ~UpdateUserSayRequestUserSayDefinitionSlotInfos() = default;
};
class UpdateUserSayRequestUserSayDefinition : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<long> intentId{};
  shared_ptr<vector<UpdateUserSayRequestUserSayDefinitionSlotInfos>> slotInfos{};

  UpdateUserSayRequestUserSayDefinition() {}

  explicit UpdateUserSayRequestUserSayDefinition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    if (slotInfos) {
      vector<boost::any> temp1;
      for(auto item1:*slotInfos){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SlotInfos"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
    if (m.find("SlotInfos") != m.end() && !m["SlotInfos"].empty()) {
      if (typeid(vector<boost::any>) == m["SlotInfos"].type()) {
        vector<UpdateUserSayRequestUserSayDefinitionSlotInfos> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SlotInfos"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateUserSayRequestUserSayDefinitionSlotInfos model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slotInfos = make_shared<vector<UpdateUserSayRequestUserSayDefinitionSlotInfos>>(expect1);
      }
    }
  }


  virtual ~UpdateUserSayRequestUserSayDefinition() = default;
};
class UpdateUserSayRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<UpdateUserSayRequestUserSayDefinition> userSayDefinition{};
  shared_ptr<long> userSayId{};

  UpdateUserSayRequest() {}

  explicit UpdateUserSayRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userSayDefinition) {
      res["UserSayDefinition"] = userSayDefinition ? boost::any(userSayDefinition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserSayDefinition") != m.end() && !m["UserSayDefinition"].empty()) {
      if (typeid(map<string, boost::any>) == m["UserSayDefinition"].type()) {
        UpdateUserSayRequestUserSayDefinition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UserSayDefinition"]));
        userSayDefinition = make_shared<UpdateUserSayRequestUserSayDefinition>(model1);
      }
    }
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<long>(boost::any_cast<long>(m["UserSayId"]));
    }
  }


  virtual ~UpdateUserSayRequest() = default;
};
class UpdateUserSayShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> userSayDefinitionShrink{};
  shared_ptr<long> userSayId{};

  UpdateUserSayShrinkRequest() {}

  explicit UpdateUserSayShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (userSayDefinitionShrink) {
      res["UserSayDefinition"] = boost::any(*userSayDefinitionShrink);
    }
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("UserSayDefinition") != m.end() && !m["UserSayDefinition"].empty()) {
      userSayDefinitionShrink = make_shared<string>(boost::any_cast<string>(m["UserSayDefinition"]));
    }
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<long>(boost::any_cast<long>(m["UserSayId"]));
    }
  }


  virtual ~UpdateUserSayShrinkRequest() = default;
};
class UpdateUserSayResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> userSayId{};

  UpdateUserSayResponseBody() {}

  explicit UpdateUserSayResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (userSayId) {
      res["UserSayId"] = boost::any(*userSayId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("UserSayId") != m.end() && !m["UserSayId"].empty()) {
      userSayId = make_shared<long>(boost::any_cast<long>(m["UserSayId"]));
    }
  }


  virtual ~UpdateUserSayResponseBody() = default;
};
class UpdateUserSayResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateUserSayResponseBody> body{};

  UpdateUserSayResponse() {}

  explicit UpdateUserSayResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateUserSayResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateUserSayResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateUserSayResponse() = default;
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
  AssociateResponse associateWithOptions(shared_ptr<AssociateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateResponse associate(shared_ptr<AssociateRequest> request);
  BeginSessionResponse beginSessionWithOptions(shared_ptr<BeginSessionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BeginSessionResponse beginSession(shared_ptr<BeginSessionRequest> request);
  CancelInstancePublishTaskResponse cancelInstancePublishTaskWithOptions(shared_ptr<CancelInstancePublishTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelInstancePublishTaskResponse cancelInstancePublishTask(shared_ptr<CancelInstancePublishTaskRequest> request);
  CancelPublishTaskResponse cancelPublishTaskWithOptions(shared_ptr<CancelPublishTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelPublishTaskResponse cancelPublishTask(shared_ptr<CancelPublishTaskRequest> request);
  ChatResponse chatWithOptions(shared_ptr<ChatRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatResponse chat(shared_ptr<ChatRequest> request);
  ContinueInstancePublishTaskResponse continueInstancePublishTaskWithOptions(shared_ptr<ContinueInstancePublishTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContinueInstancePublishTaskResponse continueInstancePublishTask(shared_ptr<ContinueInstancePublishTaskRequest> request);
  CreateCategoryResponse createCategoryWithOptions(shared_ptr<CreateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCategoryResponse createCategory(shared_ptr<CreateCategoryRequest> request);
  CreateConnQuestionResponse createConnQuestionWithOptions(shared_ptr<CreateConnQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConnQuestionResponse createConnQuestion(shared_ptr<CreateConnQuestionRequest> request);
  CreateDSEntityResponse createDSEntityWithOptions(shared_ptr<CreateDSEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDSEntityResponse createDSEntity(shared_ptr<CreateDSEntityRequest> request);
  CreateDSEntityValueResponse createDSEntityValueWithOptions(shared_ptr<CreateDSEntityValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDSEntityValueResponse createDSEntityValue(shared_ptr<CreateDSEntityValueRequest> request);
  CreateFaqResponse createFaqWithOptions(shared_ptr<CreateFaqRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFaqResponse createFaq(shared_ptr<CreateFaqRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  CreateInstancePublishTaskResponse createInstancePublishTaskWithOptions(shared_ptr<CreateInstancePublishTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstancePublishTaskResponse createInstancePublishTask(shared_ptr<CreateInstancePublishTaskRequest> request);
  CreateIntentResponse createIntentWithOptions(shared_ptr<CreateIntentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIntentResponse createIntent(shared_ptr<CreateIntentRequest> request);
  CreateLgfResponse createLgfWithOptions(shared_ptr<CreateLgfRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateLgfResponse createLgf(shared_ptr<CreateLgfRequest> request);
  CreatePerspectiveResponse createPerspectiveWithOptions(shared_ptr<CreatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePerspectiveResponse createPerspective(shared_ptr<CreatePerspectiveRequest> request);
  CreatePublishTaskResponse createPublishTaskWithOptions(shared_ptr<CreatePublishTaskRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePublishTaskResponse createPublishTask(shared_ptr<CreatePublishTaskRequest> request);
  CreateSimQuestionResponse createSimQuestionWithOptions(shared_ptr<CreateSimQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSimQuestionResponse createSimQuestion(shared_ptr<CreateSimQuestionRequest> request);
  CreateSolutionResponse createSolutionWithOptions(shared_ptr<CreateSolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateSolutionResponse createSolution(shared_ptr<CreateSolutionRequest> request);
  CreateUserSayResponse createUserSayWithOptions(shared_ptr<CreateUserSayRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateUserSayResponse createUserSay(shared_ptr<CreateUserSayRequest> request);
  DeleteCategoryResponse deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCategoryResponse deleteCategory(shared_ptr<DeleteCategoryRequest> request);
  DeleteConnQuestionResponse deleteConnQuestionWithOptions(shared_ptr<DeleteConnQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteConnQuestionResponse deleteConnQuestion(shared_ptr<DeleteConnQuestionRequest> request);
  DeleteDSEntityResponse deleteDSEntityWithOptions(shared_ptr<DeleteDSEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDSEntityResponse deleteDSEntity(shared_ptr<DeleteDSEntityRequest> request);
  DeleteDSEntityValueResponse deleteDSEntityValueWithOptions(shared_ptr<DeleteDSEntityValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDSEntityValueResponse deleteDSEntityValue(shared_ptr<DeleteDSEntityValueRequest> request);
  DeleteFaqResponse deleteFaqWithOptions(shared_ptr<DeleteFaqRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFaqResponse deleteFaq(shared_ptr<DeleteFaqRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DeleteIntentResponse deleteIntentWithOptions(shared_ptr<DeleteIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIntentResponse deleteIntent(shared_ptr<DeleteIntentRequest> request);
  DeleteLgfResponse deleteLgfWithOptions(shared_ptr<DeleteLgfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteLgfResponse deleteLgf(shared_ptr<DeleteLgfRequest> request);
  DeletePerspectiveResponse deletePerspectiveWithOptions(shared_ptr<DeletePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePerspectiveResponse deletePerspective(shared_ptr<DeletePerspectiveRequest> request);
  DeleteSimQuestionResponse deleteSimQuestionWithOptions(shared_ptr<DeleteSimQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSimQuestionResponse deleteSimQuestion(shared_ptr<DeleteSimQuestionRequest> request);
  DeleteSolutionResponse deleteSolutionWithOptions(shared_ptr<DeleteSolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteSolutionResponse deleteSolution(shared_ptr<DeleteSolutionRequest> request);
  DeleteUserSayResponse deleteUserSayWithOptions(shared_ptr<DeleteUserSayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteUserSayResponse deleteUserSay(shared_ptr<DeleteUserSayRequest> request);
  DescribeCategoryResponse describeCategoryWithOptions(shared_ptr<DescribeCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCategoryResponse describeCategory(shared_ptr<DescribeCategoryRequest> request);
  DescribeDSEntityResponse describeDSEntityWithOptions(shared_ptr<DescribeDSEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDSEntityResponse describeDSEntity(shared_ptr<DescribeDSEntityRequest> request);
  DescribeFaqResponse describeFaqWithOptions(shared_ptr<DescribeFaqRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFaqResponse describeFaq(shared_ptr<DescribeFaqRequest> request);
  DescribeInstanceResponse describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceResponse describeInstance(shared_ptr<DescribeInstanceRequest> request);
  DescribeIntentResponse describeIntentWithOptions(shared_ptr<DescribeIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeIntentResponse describeIntent(shared_ptr<DescribeIntentRequest> request);
  DescribePerspectiveResponse describePerspectiveWithOptions(shared_ptr<DescribePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePerspectiveResponse describePerspective(shared_ptr<DescribePerspectiveRequest> request);
  FeedbackResponse feedbackWithOptions(shared_ptr<FeedbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FeedbackResponse feedback(shared_ptr<FeedbackRequest> request);
  GetAsyncResultResponse getAsyncResultWithOptions(shared_ptr<GetAsyncResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncResultResponse getAsyncResult(shared_ptr<GetAsyncResultRequest> request);
  GetInstancePublishTaskStateResponse getInstancePublishTaskStateWithOptions(shared_ptr<GetInstancePublishTaskStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetInstancePublishTaskStateResponse getInstancePublishTaskState(shared_ptr<GetInstancePublishTaskStateRequest> request);
  GetPublishTaskStateResponse getPublishTaskStateWithOptions(shared_ptr<GetPublishTaskStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublishTaskStateResponse getPublishTaskState(shared_ptr<GetPublishTaskStateRequest> request);
  LinkInstanceCategoryResponse linkInstanceCategoryWithOptions(shared_ptr<LinkInstanceCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  LinkInstanceCategoryResponse linkInstanceCategory(shared_ptr<LinkInstanceCategoryRequest> request);
  ListAgentResponse listAgentWithOptions(shared_ptr<ListAgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAgentResponse listAgent(shared_ptr<ListAgentRequest> request);
  ListCategoryResponse listCategoryWithOptions(shared_ptr<ListCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListCategoryResponse listCategory(shared_ptr<ListCategoryRequest> request);
  ListConnQuestionResponse listConnQuestionWithOptions(shared_ptr<ListConnQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConnQuestionResponse listConnQuestion(shared_ptr<ListConnQuestionRequest> request);
  ListDSEntityResponse listDSEntityWithOptions(shared_ptr<ListDSEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDSEntityResponse listDSEntity(shared_ptr<ListDSEntityRequest> request);
  ListDSEntityValueResponse listDSEntityValueWithOptions(shared_ptr<ListDSEntityValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDSEntityValueResponse listDSEntityValue(shared_ptr<ListDSEntityValueRequest> request);
  ListDsMenusResponse listDsMenusWithOptions(shared_ptr<ListDsMenusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDsMenusResponse listDsMenus(shared_ptr<ListDsMenusRequest> request);
  ListInstanceResponse listInstanceWithOptions(shared_ptr<ListInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceResponse listInstance(shared_ptr<ListInstanceRequest> request);
  ListIntentResponse listIntentWithOptions(shared_ptr<ListIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListIntentResponse listIntent(shared_ptr<ListIntentRequest> request);
  ListLgfResponse listLgfWithOptions(shared_ptr<ListLgfRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListLgfResponse listLgf(shared_ptr<ListLgfRequest> request);
  ListSimQuestionResponse listSimQuestionWithOptions(shared_ptr<ListSimQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSimQuestionResponse listSimQuestion(shared_ptr<ListSimQuestionRequest> request);
  ListSolutionResponse listSolutionWithOptions(shared_ptr<ListSolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSolutionResponse listSolution(shared_ptr<ListSolutionRequest> request);
  ListUserSayResponse listUserSayWithOptions(shared_ptr<ListUserSayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserSayResponse listUserSay(shared_ptr<ListUserSayRequest> request);
  NluResponse nluWithOptions(shared_ptr<NluRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  NluResponse nlu(shared_ptr<NluRequest> request);
  QueryPerspectivesResponse queryPerspectivesWithOptions(shared_ptr<QueryPerspectivesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPerspectivesResponse queryPerspectives(shared_ptr<QueryPerspectivesRequest> request);
  SearchFaqResponse searchFaqWithOptions(shared_ptr<SearchFaqRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchFaqResponse searchFaq(shared_ptr<SearchFaqRequest> request);
  UpdateCategoryResponse updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCategoryResponse updateCategory(shared_ptr<UpdateCategoryRequest> request);
  UpdateConnQuestionResponse updateConnQuestionWithOptions(shared_ptr<UpdateConnQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateConnQuestionResponse updateConnQuestion(shared_ptr<UpdateConnQuestionRequest> request);
  UpdateDSEntityResponse updateDSEntityWithOptions(shared_ptr<UpdateDSEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDSEntityResponse updateDSEntity(shared_ptr<UpdateDSEntityRequest> request);
  UpdateDSEntityValueResponse updateDSEntityValueWithOptions(shared_ptr<UpdateDSEntityValueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDSEntityValueResponse updateDSEntityValue(shared_ptr<UpdateDSEntityValueRequest> request);
  UpdateFaqResponse updateFaqWithOptions(shared_ptr<UpdateFaqRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateFaqResponse updateFaq(shared_ptr<UpdateFaqRequest> request);
  UpdateInstanceResponse updateInstanceWithOptions(shared_ptr<UpdateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateInstanceResponse updateInstance(shared_ptr<UpdateInstanceRequest> request);
  UpdateIntentResponse updateIntentWithOptions(shared_ptr<UpdateIntentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIntentResponse updateIntent(shared_ptr<UpdateIntentRequest> request);
  UpdateLgfResponse updateLgfWithOptions(shared_ptr<UpdateLgfRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateLgfResponse updateLgf(shared_ptr<UpdateLgfRequest> request);
  UpdatePerspectiveResponse updatePerspectiveWithOptions(shared_ptr<UpdatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePerspectiveResponse updatePerspective(shared_ptr<UpdatePerspectiveRequest> request);
  UpdateSimQuestionResponse updateSimQuestionWithOptions(shared_ptr<UpdateSimQuestionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSimQuestionResponse updateSimQuestion(shared_ptr<UpdateSimQuestionRequest> request);
  UpdateSolutionResponse updateSolutionWithOptions(shared_ptr<UpdateSolutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateSolutionResponse updateSolution(shared_ptr<UpdateSolutionRequest> request);
  UpdateUserSayResponse updateUserSayWithOptions(shared_ptr<UpdateUserSayRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateUserSayResponse updateUserSay(shared_ptr<UpdateUserSayRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Chatbot20220408

#endif
