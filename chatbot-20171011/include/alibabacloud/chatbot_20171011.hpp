// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CHATBOT20171011_H_
#define ALIBABACLOUD_CHATBOT20171011_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Chatbot20171011 {
class ActivatePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> perspectiveId{};

  ActivatePerspectiveRequest() {}

  explicit ActivatePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
  }


  virtual ~ActivatePerspectiveRequest() = default;
};
class ActivatePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ActivatePerspectiveResponseBody() {}

  explicit ActivatePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ActivatePerspectiveResponseBody() = default;
};
class ActivatePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ActivatePerspectiveResponseBody> body{};

  ActivatePerspectiveResponse() {}

  explicit ActivatePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ActivatePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ActivatePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~ActivatePerspectiveResponse() = default;
};
class AddSynonymRequest : public Darabonba::Model {
public:
  shared_ptr<string> coreWordName{};
  shared_ptr<string> synonym{};

  AddSynonymRequest() {}

  explicit AddSynonymRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (synonym) {
      res["Synonym"] = boost::any(*synonym);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
    if (m.find("Synonym") != m.end() && !m["Synonym"].empty()) {
      synonym = make_shared<string>(boost::any_cast<string>(m["Synonym"]));
    }
  }


  virtual ~AddSynonymRequest() = default;
};
class AddSynonymResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AddSynonymResponseBody() {}

  explicit AddSynonymResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AddSynonymResponseBody() = default;
};
class AddSynonymResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AddSynonymResponseBody> body{};

  AddSynonymResponse() {}

  explicit AddSynonymResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddSynonymResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddSynonymResponseBody>(model1);
      }
    }
  }


  virtual ~AddSynonymResponse() = default;
};
class AppendEntityMemberRequest : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> applyType{};
  shared_ptr<string> member{};

  AppendEntityMemberRequest() {}

  explicit AppendEntityMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (applyType) {
      res["ApplyType"] = boost::any(*applyType);
    }
    if (member) {
      res["Member"] = boost::any(*member);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("ApplyType") != m.end() && !m["ApplyType"].empty()) {
      applyType = make_shared<string>(boost::any_cast<string>(m["ApplyType"]));
    }
    if (m.find("Member") != m.end() && !m["Member"].empty()) {
      member = make_shared<string>(boost::any_cast<string>(m["Member"]));
    }
  }


  virtual ~AppendEntityMemberRequest() = default;
};
class AppendEntityMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> requestId{};

  AppendEntityMemberResponseBody() {}

  explicit AppendEntityMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AppendEntityMemberResponseBody() = default;
};
class AppendEntityMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AppendEntityMemberResponseBody> body{};

  AppendEntityMemberResponse() {}

  explicit AppendEntityMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AppendEntityMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AppendEntityMemberResponseBody>(model1);
      }
    }
  }


  virtual ~AppendEntityMemberResponse() = default;
};
class AssociateRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> utterance{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> businessScope{};
  shared_ptr<long> recommendNum{};
  shared_ptr<vector<string>> perspective{};

  AssociateRequest() {}

  explicit AssociateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (businessScope) {
      res["BusinessScope"] = boost::any(*businessScope);
    }
    if (recommendNum) {
      res["RecommendNum"] = boost::any(*recommendNum);
    }
    if (perspective) {
      res["Perspective"] = boost::any(*perspective);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("BusinessScope") != m.end() && !m["BusinessScope"].empty()) {
      businessScope = make_shared<string>(boost::any_cast<string>(m["BusinessScope"]));
    }
    if (m.find("RecommendNum") != m.end() && !m["RecommendNum"].empty()) {
      recommendNum = make_shared<long>(boost::any_cast<long>(m["RecommendNum"]));
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
  }


  virtual ~AssociateRequest() = default;
};
class AssociateResponseBodyAssociate : public Darabonba::Model {
public:
  shared_ptr<string> title{};

  AssociateResponseBodyAssociate() {}

  explicit AssociateResponseBodyAssociate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~AssociateResponseBodyAssociate() = default;
};
class AssociateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<AssociateResponseBodyAssociate>> associate{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> messageId{};

  AssociateResponseBody() {}

  explicit AssociateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (associate) {
      vector<boost::any> temp1;
      for(auto item1:*associate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Associate"] = boost::any(temp1);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~AssociateResponseBody() = default;
};
class AssociateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<AssociateResponseBody> body{};

  AssociateResponse() {}

  explicit AssociateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateResponse() = default;
};
class ChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};
  shared_ptr<string> tag{};
  shared_ptr<string> utterance{};
  shared_ptr<bool> recommend{};
  shared_ptr<long> recommendNum{};
  shared_ptr<string> intentName{};
  shared_ptr<string> defaultPerspective{};
  shared_ptr<string> businessScope{};
  shared_ptr<string> vendorParam{};
  shared_ptr<bool> emotion{};
  shared_ptr<bool> sandBox{};
  shared_ptr<vector<string>> perspective{};

  ChatRequest() {}

  explicit ChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (senderNick) {
      res["SenderNick"] = boost::any(*senderNick);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    if (recommend) {
      res["Recommend"] = boost::any(*recommend);
    }
    if (recommendNum) {
      res["RecommendNum"] = boost::any(*recommendNum);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (defaultPerspective) {
      res["DefaultPerspective"] = boost::any(*defaultPerspective);
    }
    if (businessScope) {
      res["BusinessScope"] = boost::any(*businessScope);
    }
    if (vendorParam) {
      res["VendorParam"] = boost::any(*vendorParam);
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (sandBox) {
      res["SandBox"] = boost::any(*sandBox);
    }
    if (perspective) {
      res["Perspective"] = boost::any(*perspective);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<string>(boost::any_cast<string>(m["KnowledgeId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("SenderNick") != m.end() && !m["SenderNick"].empty()) {
      senderNick = make_shared<string>(boost::any_cast<string>(m["SenderNick"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
    if (m.find("Recommend") != m.end() && !m["Recommend"].empty()) {
      recommend = make_shared<bool>(boost::any_cast<bool>(m["Recommend"]));
    }
    if (m.find("RecommendNum") != m.end() && !m["RecommendNum"].empty()) {
      recommendNum = make_shared<long>(boost::any_cast<long>(m["RecommendNum"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("DefaultPerspective") != m.end() && !m["DefaultPerspective"].empty()) {
      defaultPerspective = make_shared<string>(boost::any_cast<string>(m["DefaultPerspective"]));
    }
    if (m.find("BusinessScope") != m.end() && !m["BusinessScope"].empty()) {
      businessScope = make_shared<string>(boost::any_cast<string>(m["BusinessScope"]));
    }
    if (m.find("VendorParam") != m.end() && !m["VendorParam"].empty()) {
      vendorParam = make_shared<string>(boost::any_cast<string>(m["VendorParam"]));
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<bool>(boost::any_cast<bool>(m["Emotion"]));
    }
    if (m.find("SandBox") != m.end() && !m["SandBox"].empty()) {
      sandBox = make_shared<bool>(boost::any_cast<bool>(m["SandBox"]));
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
  }


  virtual ~ChatRequest() = default;
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
  shared_ptr<string> hitStatement{};
  shared_ptr<string> summary{};
  shared_ptr<vector<ChatResponseBodyMessagesKnowledgeRelatedKnowledges>> relatedKnowledges{};
  shared_ptr<string> category{};
  shared_ptr<string> title{};
  shared_ptr<string> content{};
  shared_ptr<string> answerSource{};
  shared_ptr<string> id{};

  ChatResponseBodyMessagesKnowledge() {}

  explicit ChatResponseBodyMessagesKnowledge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitStatement) {
      res["HitStatement"] = boost::any(*hitStatement);
    }
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (relatedKnowledges) {
      vector<boost::any> temp1;
      for(auto item1:*relatedKnowledges){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["RelatedKnowledges"] = boost::any(temp1);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitStatement") != m.end() && !m["HitStatement"].empty()) {
      hitStatement = make_shared<string>(boost::any_cast<string>(m["HitStatement"]));
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
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
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
  }


  virtual ~ChatResponseBodyMessagesKnowledge() = default;
};
class ChatResponseBodyMessagesTextSlots : public Darabonba::Model {
public:
  shared_ptr<string> value{};
  shared_ptr<string> origin{};
  shared_ptr<string> name{};
  shared_ptr<bool> isHit{};

  ChatResponseBodyMessagesTextSlots() {}

  explicit ChatResponseBodyMessagesTextSlots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (value) {
      res["Value"] = boost::any(*value);
    }
    if (origin) {
      res["Origin"] = boost::any(*origin);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (isHit) {
      res["IsHit"] = boost::any(*isHit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
    if (m.find("Origin") != m.end() && !m["Origin"].empty()) {
      origin = make_shared<string>(boost::any_cast<string>(m["Origin"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("IsHit") != m.end() && !m["IsHit"].empty()) {
      isHit = make_shared<bool>(boost::any_cast<bool>(m["IsHit"]));
    }
  }


  virtual ~ChatResponseBodyMessagesTextSlots() = default;
};
class ChatResponseBodyMessagesText : public Darabonba::Model {
public:
  shared_ptr<string> hitStatement{};
  shared_ptr<string> dialogName{};
  shared_ptr<string> articleTitle{};
  shared_ptr<string> answerSource{};
  shared_ptr<vector<ChatResponseBodyMessagesTextSlots>> slots{};
  shared_ptr<string> intentName{};
  shared_ptr<string> metaData{};
  shared_ptr<string> nodeName{};
  shared_ptr<map<string, boost::any>> externalFlags{};
  shared_ptr<map<string, boost::any>> ext{};
  shared_ptr<string> userDefinedChatTitle{};
  shared_ptr<string> content{};
  shared_ptr<string> nodeId{};

  ChatResponseBodyMessagesText() {}

  explicit ChatResponseBodyMessagesText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (hitStatement) {
      res["HitStatement"] = boost::any(*hitStatement);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (articleTitle) {
      res["ArticleTitle"] = boost::any(*articleTitle);
    }
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (slots) {
      vector<boost::any> temp1;
      for(auto item1:*slots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Slots"] = boost::any(temp1);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (metaData) {
      res["MetaData"] = boost::any(*metaData);
    }
    if (nodeName) {
      res["NodeName"] = boost::any(*nodeName);
    }
    if (externalFlags) {
      res["ExternalFlags"] = boost::any(*externalFlags);
    }
    if (ext) {
      res["Ext"] = boost::any(*ext);
    }
    if (userDefinedChatTitle) {
      res["UserDefinedChatTitle"] = boost::any(*userDefinedChatTitle);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (nodeId) {
      res["NodeId"] = boost::any(*nodeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("HitStatement") != m.end() && !m["HitStatement"].empty()) {
      hitStatement = make_shared<string>(boost::any_cast<string>(m["HitStatement"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("ArticleTitle") != m.end() && !m["ArticleTitle"].empty()) {
      articleTitle = make_shared<string>(boost::any_cast<string>(m["ArticleTitle"]));
    }
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
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
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("MetaData") != m.end() && !m["MetaData"].empty()) {
      metaData = make_shared<string>(boost::any_cast<string>(m["MetaData"]));
    }
    if (m.find("NodeName") != m.end() && !m["NodeName"].empty()) {
      nodeName = make_shared<string>(boost::any_cast<string>(m["NodeName"]));
    }
    if (m.find("ExternalFlags") != m.end() && !m["ExternalFlags"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["ExternalFlags"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      externalFlags = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("Ext") != m.end() && !m["Ext"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Ext"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      ext = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("UserDefinedChatTitle") != m.end() && !m["UserDefinedChatTitle"].empty()) {
      userDefinedChatTitle = make_shared<string>(boost::any_cast<string>(m["UserDefinedChatTitle"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("NodeId") != m.end() && !m["NodeId"].empty()) {
      nodeId = make_shared<string>(boost::any_cast<string>(m["NodeId"]));
    }
  }


  virtual ~ChatResponseBodyMessagesText() = default;
};
class ChatResponseBodyMessagesRecommends : public Darabonba::Model {
public:
  shared_ptr<string> summary{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<string> category{};
  shared_ptr<string> title{};
  shared_ptr<string> answerSource{};
  shared_ptr<string> content{};

  ChatResponseBodyMessagesRecommends() {}

  explicit ChatResponseBodyMessagesRecommends(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (summary) {
      res["Summary"] = boost::any(*summary);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<string>(boost::any_cast<string>(m["KnowledgeId"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~ChatResponseBodyMessagesRecommends() = default;
};
class ChatResponseBodyMessages : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<ChatResponseBodyMessagesKnowledge> knowledge{};
  shared_ptr<ChatResponseBodyMessagesText> text{};
  shared_ptr<vector<ChatResponseBodyMessagesRecommends>> recommends{};

  ChatResponseBodyMessages() {}

  explicit ChatResponseBodyMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (knowledge) {
      res["Knowledge"] = knowledge ? boost::any(knowledge->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (text) {
      res["Text"] = text ? boost::any(text->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (recommends) {
      vector<boost::any> temp1;
      for(auto item1:*recommends){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Recommends"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      if (typeid(map<string, boost::any>) == m["Knowledge"].type()) {
        ChatResponseBodyMessagesKnowledge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Knowledge"]));
        knowledge = make_shared<ChatResponseBodyMessagesKnowledge>(model1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      if (typeid(map<string, boost::any>) == m["Text"].type()) {
        ChatResponseBodyMessagesText model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Text"]));
        text = make_shared<ChatResponseBodyMessagesText>(model1);
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
  }


  virtual ~ChatResponseBodyMessages() = default;
};
class ChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ChatResponseBodyMessages>> messages{};
  shared_ptr<string> requestId{};
  shared_ptr<string> tag{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> messageId{};

  ChatResponseBody() {}

  explicit ChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
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
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
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
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~ChatResponseBody() = default;
};
class ChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ChatResponseBody> body{};

  ChatResponse() {}

  explicit ChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatResponseBody>(model1);
      }
    }
  }


  virtual ~ChatResponse() = default;
};
class CreateBotRequest : public Darabonba::Model {
public:
  shared_ptr<string> languageCode{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> name{};
  shared_ptr<string> avatar{};
  shared_ptr<string> introduction{};
  shared_ptr<string> robotType{};

  CreateBotRequest() {}

  explicit CreateBotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (robotType) {
      res["RobotType"] = boost::any(*robotType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("RobotType") != m.end() && !m["RobotType"].empty()) {
      robotType = make_shared<string>(boost::any_cast<string>(m["RobotType"]));
    }
  }


  virtual ~CreateBotRequest() = default;
};
class CreateBotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> instanceId{};

  CreateBotResponseBody() {}

  explicit CreateBotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~CreateBotResponseBody() = default;
};
class CreateBotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateBotResponseBody> body{};

  CreateBotResponse() {}

  explicit CreateBotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateBotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateBotResponseBody>(model1);
      }
    }
  }


  virtual ~CreateBotResponse() = default;
};
class CreateCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> parentCategoryId{};
  shared_ptr<string> name{};

  CreateCategoryRequest() {}

  explicit CreateCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateCategoryRequest() = default;
};
class CreateCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateCategoryResponseBody() {}

  explicit CreateCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
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
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateCategoryResponseBody() = default;
};
class CreateCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCategoryResponseBody> body{};

  CreateCategoryResponse() {}

  explicit CreateCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCategoryResponse() = default;
};
class CreateCoreWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> coreWordName{};

  CreateCoreWordRequest() {}

  explicit CreateCoreWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
  }


  virtual ~CreateCoreWordRequest() = default;
};
class CreateCoreWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> coreWordCode{};

  CreateCoreWordResponseBody() {}

  explicit CreateCoreWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (coreWordCode) {
      res["CoreWordCode"] = boost::any(*coreWordCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CoreWordCode") != m.end() && !m["CoreWordCode"].empty()) {
      coreWordCode = make_shared<string>(boost::any_cast<string>(m["CoreWordCode"]));
    }
  }


  virtual ~CreateCoreWordResponseBody() = default;
};
class CreateCoreWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateCoreWordResponseBody> body{};

  CreateCoreWordResponse() {}

  explicit CreateCoreWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateCoreWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateCoreWordResponseBody>(model1);
      }
    }
  }


  virtual ~CreateCoreWordResponse() = default;
};
class CreateDialogRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> dialogName{};
  shared_ptr<string> description{};

  CreateDialogRequest() {}

  explicit CreateDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~CreateDialogRequest() = default;
};
class CreateDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> dialogId{};

  CreateDialogResponseBody() {}

  explicit CreateDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<string>(boost::any_cast<string>(m["DialogId"]));
    }
  }


  virtual ~CreateDialogResponseBody() = default;
};
class CreateDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateDialogResponseBody> body{};

  CreateDialogResponse() {}

  explicit CreateDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDialogResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDialogResponse() = default;
};
class CreateEntityRequest : public Darabonba::Model {
public:
  shared_ptr<long> dialogId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> regex{};
  shared_ptr<string> members{};

  CreateEntityRequest() {}

  explicit CreateEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      members = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
  }


  virtual ~CreateEntityRequest() = default;
};
class CreateEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> requestId{};

  CreateEntityResponseBody() {}

  explicit CreateEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateEntityResponseBody() = default;
};
class CreateEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateEntityResponseBody> body{};

  CreateEntityResponse() {}

  explicit CreateEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateEntityResponseBody>(model1);
      }
    }
  }


  virtual ~CreateEntityResponse() = default;
};
class CreateIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> intentDefinition{};
  shared_ptr<long> dialogId{};

  CreateIntentRequest() {}

  explicit CreateIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentDefinition) {
      res["IntentDefinition"] = boost::any(*intentDefinition);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      intentDefinition = make_shared<string>(boost::any_cast<string>(m["IntentDefinition"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~CreateIntentRequest() = default;
};
class CreateIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> intentId{};

  CreateIntentResponseBody() {}

  explicit CreateIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<string>(boost::any_cast<string>(m["IntentId"]));
    }
  }


  virtual ~CreateIntentResponseBody() = default;
};
class CreateIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateIntentResponseBody> body{};

  CreateIntentResponse() {}

  explicit CreateIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateIntentResponseBody>(model1);
      }
    }
  }


  virtual ~CreateIntentResponse() = default;
};
class CreateKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<string> knowledge{};

  CreateKnowledgeRequest() {}

  explicit CreateKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledge) {
      res["Knowledge"] = boost::any(*knowledge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      knowledge = make_shared<string>(boost::any_cast<string>(m["Knowledge"]));
    }
  }


  virtual ~CreateKnowledgeRequest() = default;
};
class CreateKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> knowledgeId{};

  CreateKnowledgeResponseBody() {}

  explicit CreateKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~CreateKnowledgeResponseBody() = default;
};
class CreateKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<CreateKnowledgeResponseBody> body{};

  CreateKnowledgeResponse() {}

  explicit CreateKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~CreateKnowledgeResponse() = default;
};
class DeleteBotRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteBotRequest() {}

  explicit DeleteBotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBotRequest() = default;
};
class DeleteBotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteBotResponseBody() {}

  explicit DeleteBotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteBotResponseBody() = default;
};
class DeleteBotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteBotResponseBody> body{};

  DeleteBotResponse() {}

  explicit DeleteBotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteBotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteBotResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteBotResponse() = default;
};
class DeleteCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};

  DeleteCategoryRequest() {}

  explicit DeleteCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
  }


  virtual ~DeleteCategoryRequest() = default;
};
class DeleteCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteCategoryResponseBody() = default;
};
class DeleteCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCategoryResponseBody> body{};

  DeleteCategoryResponse() {}

  explicit DeleteCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCategoryResponse() = default;
};
class DeleteCoreWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> coreWordName{};

  DeleteCoreWordRequest() {}

  explicit DeleteCoreWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
  }


  virtual ~DeleteCoreWordRequest() = default;
};
class DeleteCoreWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteCoreWordResponseBody() {}

  explicit DeleteCoreWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~DeleteCoreWordResponseBody() = default;
};
class DeleteCoreWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteCoreWordResponseBody> body{};

  DeleteCoreWordResponse() {}

  explicit DeleteCoreWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteCoreWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteCoreWordResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteCoreWordResponse() = default;
};
class DeleteDialogRequest : public Darabonba::Model {
public:
  shared_ptr<long> dialogId{};

  DeleteDialogRequest() {}

  explicit DeleteDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~DeleteDialogRequest() = default;
};
class DeleteDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteDialogResponseBody() {}

  explicit DeleteDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteDialogResponseBody() = default;
};
class DeleteDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteDialogResponseBody> body{};

  DeleteDialogResponse() {}

  explicit DeleteDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDialogResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDialogResponse() = default;
};
class DeleteEntityRequest : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};

  DeleteEntityRequest() {}

  explicit DeleteEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
  }


  virtual ~DeleteEntityRequest() = default;
};
class DeleteEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> requestId{};

  DeleteEntityResponseBody() {}

  explicit DeleteEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteEntityResponseBody() = default;
};
class DeleteEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteEntityResponseBody> body{};

  DeleteEntityResponse() {}

  explicit DeleteEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEntityResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEntityResponse() = default;
};
class DeleteIntentRequest : public Darabonba::Model {
public:
  shared_ptr<long> intentId{};

  DeleteIntentRequest() {}

  explicit DeleteIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~DeleteIntentRequest() = default;
};
class DeleteIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> intentId{};

  DeleteIntentResponseBody() {}

  explicit DeleteIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<string>(boost::any_cast<string>(m["IntentId"]));
    }
  }


  virtual ~DeleteIntentResponseBody() = default;
};
class DeleteIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteIntentResponseBody> body{};

  DeleteIntentResponse() {}

  explicit DeleteIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteIntentResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteIntentResponse() = default;
};
class DeleteKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<long> knowledgeId{};

  DeleteKnowledgeRequest() {}

  explicit DeleteKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~DeleteKnowledgeRequest() = default;
};
class DeleteKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteKnowledgeResponseBody() {}

  explicit DeleteKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteKnowledgeResponseBody() = default;
};
class DeleteKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DeleteKnowledgeResponseBody> body{};

  DeleteKnowledgeResponse() {}

  explicit DeleteKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteKnowledgeResponse() = default;
};
class DescribeBotRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeBotRequest() {}

  explicit DescribeBotRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeBotRequest() = default;
};
class DescribeBotResponseBodyCategories : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> name{};
  shared_ptr<long> parentCategoryId{};

  DescribeBotResponseBodyCategories() {}

  explicit DescribeBotResponseBodyCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeBotResponseBodyCategories() = default;
};
class DescribeBotResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> languageCode{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> requestId{};
  shared_ptr<string> introduction{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<DescribeBotResponseBodyCategories>> categories{};
  shared_ptr<string> createTime{};
  shared_ptr<string> avatar{};
  shared_ptr<string> logo{};
  shared_ptr<string> name{};

  DescribeBotResponseBody() {}

  explicit DescribeBotResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (logo) {
      res["Logo"] = boost::any(*logo);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Categories") != m.end() && !m["Categories"].empty()) {
      if (typeid(vector<boost::any>) == m["Categories"].type()) {
        vector<DescribeBotResponseBodyCategories> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Categories"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeBotResponseBodyCategories model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categories = make_shared<vector<DescribeBotResponseBodyCategories>>(expect1);
      }
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("Logo") != m.end() && !m["Logo"].empty()) {
      logo = make_shared<string>(boost::any_cast<string>(m["Logo"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeBotResponseBody() = default;
};
class DescribeBotResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeBotResponseBody> body{};

  DescribeBotResponse() {}

  explicit DescribeBotResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeBotResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeBotResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeBotResponse() = default;
};
class DescribeCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};

  DescribeCategoryRequest() {}

  explicit DescribeCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
  }


  virtual ~DescribeCategoryRequest() = default;
};
class DescribeCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> categoryId{};
  shared_ptr<string> requestId{};
  shared_ptr<long> parentCategoryId{};
  shared_ptr<string> name{};

  DescribeCategoryResponseBody() {}

  explicit DescribeCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (parentCategoryId) {
      res["ParentCategoryId"] = boost::any(*parentCategoryId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ParentCategoryId") != m.end() && !m["ParentCategoryId"].empty()) {
      parentCategoryId = make_shared<long>(boost::any_cast<long>(m["ParentCategoryId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribeCategoryResponseBody() = default;
};
class DescribeCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCategoryResponseBody> body{};

  DescribeCategoryResponse() {}

  explicit DescribeCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCategoryResponse() = default;
};
class DescribeCoreWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> coreWordName{};

  DescribeCoreWordRequest() {}

  explicit DescribeCoreWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
  }


  virtual ~DescribeCoreWordRequest() = default;
};
class DescribeCoreWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> coreWordName{};
  shared_ptr<vector<string>> synonyms{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> coreWordCode{};

  DescribeCoreWordResponseBody() {}

  explicit DescribeCoreWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (synonyms) {
      res["Synonyms"] = boost::any(*synonyms);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (coreWordCode) {
      res["CoreWordCode"] = boost::any(*coreWordCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
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
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CoreWordCode") != m.end() && !m["CoreWordCode"].empty()) {
      coreWordCode = make_shared<string>(boost::any_cast<string>(m["CoreWordCode"]));
    }
  }


  virtual ~DescribeCoreWordResponseBody() = default;
};
class DescribeCoreWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeCoreWordResponseBody> body{};

  DescribeCoreWordResponse() {}

  explicit DescribeCoreWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeCoreWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeCoreWordResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeCoreWordResponse() = default;
};
class DescribeDialogRequest : public Darabonba::Model {
public:
  shared_ptr<long> dialogId{};

  DescribeDialogRequest() {}

  explicit DescribeDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~DescribeDialogRequest() = default;
};
class DescribeDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> description{};
  shared_ptr<string> requestId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<long> dialogId{};
  shared_ptr<string> createUserName{};
  shared_ptr<bool> isOnline{};
  shared_ptr<string> dialogName{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<bool> isSampleDialog{};

  DescribeDialogResponseBody() {}

  explicit DescribeDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (isOnline) {
      res["IsOnline"] = boost::any(*isOnline);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (isSampleDialog) {
      res["IsSampleDialog"] = boost::any(*isSampleDialog);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("IsOnline") != m.end() && !m["IsOnline"].empty()) {
      isOnline = make_shared<bool>(boost::any_cast<bool>(m["IsOnline"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("IsSampleDialog") != m.end() && !m["IsSampleDialog"].empty()) {
      isSampleDialog = make_shared<bool>(boost::any_cast<bool>(m["IsSampleDialog"]));
    }
  }


  virtual ~DescribeDialogResponseBody() = default;
};
class DescribeDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribeDialogResponseBody> body{};

  DescribeDialogResponse() {}

  explicit DescribeDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDialogResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDialogResponse() = default;
};
class DescribePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> perspectiveId{};

  DescribePerspectiveRequest() {}

  explicit DescribePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
  }


  virtual ~DescribePerspectiveRequest() = default;
};
class DescribePerspectiveResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> perspectiveCode{};
  shared_ptr<string> modifyTime{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> selfDefine{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> perspectiveId{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> name{};

  DescribePerspectiveResponseBody() {}

  explicit DescribePerspectiveResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (perspectiveCode) {
      res["PerspectiveCode"] = boost::any(*perspectiveCode);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (selfDefine) {
      res["SelfDefine"] = boost::any(*selfDefine);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("PerspectiveCode") != m.end() && !m["PerspectiveCode"].empty()) {
      perspectiveCode = make_shared<string>(boost::any_cast<string>(m["PerspectiveCode"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SelfDefine") != m.end() && !m["SelfDefine"].empty()) {
      selfDefine = make_shared<bool>(boost::any_cast<bool>(m["SelfDefine"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DescribePerspectiveResponseBody() = default;
};
class DescribePerspectiveResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DescribePerspectiveResponseBody> body{};

  DescribePerspectiveResponse() {}

  explicit DescribePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~DescribePerspectiveResponse() = default;
};
class DisableDialogFlowRequest : public Darabonba::Model {
public:
  shared_ptr<long> dialogId{};

  DisableDialogFlowRequest() {}

  explicit DisableDialogFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~DisableDialogFlowRequest() = default;
};
class DisableDialogFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableDialogFlowResponseBody() {}

  explicit DisableDialogFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableDialogFlowResponseBody() = default;
};
class DisableDialogFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableDialogFlowResponseBody> body{};

  DisableDialogFlowResponse() {}

  explicit DisableDialogFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableDialogFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableDialogFlowResponseBody>(model1);
      }
    }
  }


  virtual ~DisableDialogFlowResponse() = default;
};
class DisableKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<long> knowledgeId{};

  DisableKnowledgeRequest() {}

  explicit DisableKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~DisableKnowledgeRequest() = default;
};
class DisableKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DisableKnowledgeResponseBody() {}

  explicit DisableKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableKnowledgeResponseBody() = default;
};
class DisableKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<DisableKnowledgeResponseBody> body{};

  DisableKnowledgeResponse() {}

  explicit DisableKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~DisableKnowledgeResponse() = default;
};
class FeedbackRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> messageId{};
  shared_ptr<string> feedback{};

  FeedbackRequest() {}

  explicit FeedbackRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
  }


  virtual ~FeedbackRequest() = default;
};
class FeedbackResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> feedback{};
  shared_ptr<string> messageId{};

  FeedbackResponseBody() {}

  explicit FeedbackResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (feedback) {
      res["Feedback"] = boost::any(*feedback);
    }
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Feedback") != m.end() && !m["Feedback"].empty()) {
      feedback = make_shared<string>(boost::any_cast<string>(m["Feedback"]));
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
  }


  virtual ~FeedbackResponseBody() = default;
};
class FeedbackResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<FeedbackResponseBody> body{};

  FeedbackResponse() {}

  explicit FeedbackResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FeedbackResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FeedbackResponseBody>(model1);
      }
    }
  }


  virtual ~FeedbackResponse() = default;
};
class GetBotChatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> measures{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};

  GetBotChatDataRequest() {}

  explicit GetBotChatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      measures = make_shared<string>(boost::any_cast<string>(m["Measures"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
  }


  virtual ~GetBotChatDataRequest() = default;
};
class GetBotChatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  GetBotChatDataResponseBody() {}

  explicit GetBotChatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetBotChatDataResponseBody() = default;
};
class GetBotChatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBotChatDataResponseBody> body{};

  GetBotChatDataResponse() {}

  explicit GetBotChatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBotChatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBotChatDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetBotChatDataResponse() = default;
};
class GetBotDsStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> measures{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};

  GetBotDsStatDataRequest() {}

  explicit GetBotDsStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      measures = make_shared<string>(boost::any_cast<string>(m["Measures"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
  }


  virtual ~GetBotDsStatDataRequest() = default;
};
class GetBotDsStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  GetBotDsStatDataResponseBody() {}

  explicit GetBotDsStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetBotDsStatDataResponseBody() = default;
};
class GetBotDsStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBotDsStatDataResponseBody> body{};

  GetBotDsStatDataResponse() {}

  explicit GetBotDsStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBotDsStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBotDsStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetBotDsStatDataResponse() = default;
};
class GetBotKnowledgeStatDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> measures{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};

  GetBotKnowledgeStatDataRequest() {}

  explicit GetBotKnowledgeStatDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      measures = make_shared<string>(boost::any_cast<string>(m["Measures"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
  }


  virtual ~GetBotKnowledgeStatDataRequest() = default;
};
class GetBotKnowledgeStatDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  GetBotKnowledgeStatDataResponseBody() {}

  explicit GetBotKnowledgeStatDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetBotKnowledgeStatDataResponseBody() = default;
};
class GetBotKnowledgeStatDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBotKnowledgeStatDataResponseBody> body{};

  GetBotKnowledgeStatDataResponse() {}

  explicit GetBotKnowledgeStatDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBotKnowledgeStatDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBotKnowledgeStatDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetBotKnowledgeStatDataResponse() = default;
};
class GetBotSessionDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> measures{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};

  GetBotSessionDataRequest() {}

  explicit GetBotSessionDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      measures = make_shared<string>(boost::any_cast<string>(m["Measures"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
  }


  virtual ~GetBotSessionDataRequest() = default;
};
class GetBotSessionDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  GetBotSessionDataResponseBody() {}

  explicit GetBotSessionDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~GetBotSessionDataResponseBody() = default;
};
class GetBotSessionDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetBotSessionDataResponseBody> body{};

  GetBotSessionDataResponse() {}

  explicit GetBotSessionDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetBotSessionDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetBotSessionDataResponseBody>(model1);
      }
    }
  }


  virtual ~GetBotSessionDataResponse() = default;
};
class GetConversationListRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> senderId{};
  shared_ptr<string> startDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> pageNumber{};
  shared_ptr<string> pageSize{};

  GetConversationListRequest() {}

  explicit GetConversationListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    if (senderId) {
      res["SenderId"] = boost::any(*senderId);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
    if (m.find("SenderId") != m.end() && !m["SenderId"].empty()) {
      senderId = make_shared<string>(boost::any_cast<string>(m["SenderId"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<string>(boost::any_cast<string>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<string>(boost::any_cast<string>(m["PageSize"]));
    }
  }


  virtual ~GetConversationListRequest() = default;
};
class GetConversationListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> messages{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> totalCounts{};

  GetConversationListResponseBody() {}

  explicit GetConversationListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (messages) {
      res["Messages"] = boost::any(*messages);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (totalCounts) {
      res["TotalCounts"] = boost::any(*totalCounts);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Messages"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      messages = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("TotalCounts") != m.end() && !m["TotalCounts"].empty()) {
      totalCounts = make_shared<long>(boost::any_cast<long>(m["TotalCounts"]));
    }
  }


  virtual ~GetConversationListResponseBody() = default;
};
class GetConversationListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<GetConversationListResponseBody> body{};

  GetConversationListResponse() {}

  explicit GetConversationListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetConversationListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetConversationListResponseBody>(model1);
      }
    }
  }


  virtual ~GetConversationListResponse() = default;
};
class ListBotChatHistorysRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> dimensions{};
  shared_ptr<bool> isDetail{};
  shared_ptr<string> orders{};
  shared_ptr<long> limit{};

  ListBotChatHistorysRequest() {}

  explicit ListBotChatHistorysRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (isDetail) {
      res["IsDetail"] = boost::any(*isDetail);
    }
    if (orders) {
      res["Orders"] = boost::any(*orders);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("IsDetail") != m.end() && !m["IsDetail"].empty()) {
      isDetail = make_shared<bool>(boost::any_cast<bool>(m["IsDetail"]));
    }
    if (m.find("Orders") != m.end() && !m["Orders"].empty()) {
      orders = make_shared<string>(boost::any_cast<string>(m["Orders"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~ListBotChatHistorysRequest() = default;
};
class ListBotChatHistorysResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  ListBotChatHistorysResponseBody() {}

  explicit ListBotChatHistorysResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListBotChatHistorysResponseBody() = default;
};
class ListBotChatHistorysResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBotChatHistorysResponseBody> body{};

  ListBotChatHistorysResponse() {}

  explicit ListBotChatHistorysResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotChatHistorysResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotChatHistorysResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotChatHistorysResponse() = default;
};
class ListBotColdDsDatasRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> dimensions{};
  shared_ptr<string> filters{};
  shared_ptr<long> limit{};

  ListBotColdDsDatasRequest() {}

  explicit ListBotColdDsDatasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (filters) {
      res["Filters"] = boost::any(*filters);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~ListBotColdDsDatasRequest() = default;
};
class ListBotColdDsDatasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  ListBotColdDsDatasResponseBody() {}

  explicit ListBotColdDsDatasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListBotColdDsDatasResponseBody() = default;
};
class ListBotColdDsDatasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBotColdDsDatasResponseBody> body{};

  ListBotColdDsDatasResponse() {}

  explicit ListBotColdDsDatasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotColdDsDatasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotColdDsDatasResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotColdDsDatasResponse() = default;
};
class ListBotColdKnowledgesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> dimensions{};
  shared_ptr<string> filters{};
  shared_ptr<long> limit{};

  ListBotColdKnowledgesRequest() {}

  explicit ListBotColdKnowledgesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (filters) {
      res["Filters"] = boost::any(*filters);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~ListBotColdKnowledgesRequest() = default;
};
class ListBotColdKnowledgesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  ListBotColdKnowledgesResponseBody() {}

  explicit ListBotColdKnowledgesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListBotColdKnowledgesResponseBody() = default;
};
class ListBotColdKnowledgesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBotColdKnowledgesResponseBody> body{};

  ListBotColdKnowledgesResponse() {}

  explicit ListBotColdKnowledgesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotColdKnowledgesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotColdKnowledgesResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotColdKnowledgesResponse() = default;
};
class ListBotDsDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> measures{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> dimensions{};
  shared_ptr<string> orders{};
  shared_ptr<long> limit{};

  ListBotDsDetailsRequest() {}

  explicit ListBotDsDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (orders) {
      res["Orders"] = boost::any(*orders);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      measures = make_shared<string>(boost::any_cast<string>(m["Measures"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("Orders") != m.end() && !m["Orders"].empty()) {
      orders = make_shared<string>(boost::any_cast<string>(m["Orders"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~ListBotDsDetailsRequest() = default;
};
class ListBotDsDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  ListBotDsDetailsResponseBody() {}

  explicit ListBotDsDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListBotDsDetailsResponseBody() = default;
};
class ListBotDsDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBotDsDetailsResponseBody> body{};

  ListBotDsDetailsResponse() {}

  explicit ListBotDsDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotDsDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotDsDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotDsDetailsResponse() = default;
};
class ListBotHotDsDatasRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> measures{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> orders{};
  shared_ptr<string> dimensions{};
  shared_ptr<string> filters{};
  shared_ptr<long> limit{};

  ListBotHotDsDatasRequest() {}

  explicit ListBotHotDsDatasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (orders) {
      res["Orders"] = boost::any(*orders);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (filters) {
      res["Filters"] = boost::any(*filters);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      measures = make_shared<string>(boost::any_cast<string>(m["Measures"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("Orders") != m.end() && !m["Orders"].empty()) {
      orders = make_shared<string>(boost::any_cast<string>(m["Orders"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~ListBotHotDsDatasRequest() = default;
};
class ListBotHotDsDatasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  ListBotHotDsDatasResponseBody() {}

  explicit ListBotHotDsDatasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListBotHotDsDatasResponseBody() = default;
};
class ListBotHotDsDatasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBotHotDsDatasResponseBody> body{};

  ListBotHotDsDatasResponse() {}

  explicit ListBotHotDsDatasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotHotDsDatasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotHotDsDatasResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotHotDsDatasResponse() = default;
};
class ListBotHotKnowledgesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> dimensions{};
  shared_ptr<string> orders{};
  shared_ptr<string> measures{};
  shared_ptr<string> filters{};
  shared_ptr<long> limit{};

  ListBotHotKnowledgesRequest() {}

  explicit ListBotHotKnowledgesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (orders) {
      res["Orders"] = boost::any(*orders);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (filters) {
      res["Filters"] = boost::any(*filters);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("Orders") != m.end() && !m["Orders"].empty()) {
      orders = make_shared<string>(boost::any_cast<string>(m["Orders"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      measures = make_shared<string>(boost::any_cast<string>(m["Measures"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filters = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
  }


  virtual ~ListBotHotKnowledgesRequest() = default;
};
class ListBotHotKnowledgesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  ListBotHotKnowledgesResponseBody() {}

  explicit ListBotHotKnowledgesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListBotHotKnowledgesResponseBody() = default;
};
class ListBotHotKnowledgesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBotHotKnowledgesResponseBody> body{};

  ListBotHotKnowledgesResponse() {}

  explicit ListBotHotKnowledgesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotHotKnowledgesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotHotKnowledgesResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotHotKnowledgesResponse() = default;
};
class ListBotKnowledgeDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> measures{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> limit{};
  shared_ptr<string> dimensions{};
  shared_ptr<string> orders{};

  ListBotKnowledgeDetailsRequest() {}

  explicit ListBotKnowledgeDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    if (orders) {
      res["Orders"] = boost::any(*orders);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      measures = make_shared<string>(boost::any_cast<string>(m["Measures"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<string>(boost::any_cast<string>(m["Limit"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
    if (m.find("Orders") != m.end() && !m["Orders"].empty()) {
      orders = make_shared<string>(boost::any_cast<string>(m["Orders"]));
    }
  }


  virtual ~ListBotKnowledgeDetailsRequest() = default;
};
class ListBotKnowledgeDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  ListBotKnowledgeDetailsResponseBody() {}

  explicit ListBotKnowledgeDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListBotKnowledgeDetailsResponseBody() = default;
};
class ListBotKnowledgeDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBotKnowledgeDetailsResponseBody> body{};

  ListBotKnowledgeDetailsResponse() {}

  explicit ListBotKnowledgeDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotKnowledgeDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotKnowledgeDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotKnowledgeDetailsResponse() = default;
};
class ListBotReceptionDetailDatasRequest : public Darabonba::Model {
public:
  shared_ptr<string> cubeId{};
  shared_ptr<string> measures{};
  shared_ptr<string> startTime{};
  shared_ptr<string> endTime{};
  shared_ptr<string> robotInstanceId{};
  shared_ptr<string> dimensions{};

  ListBotReceptionDetailDatasRequest() {}

  explicit ListBotReceptionDetailDatasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cubeId) {
      res["CubeId"] = boost::any(*cubeId);
    }
    if (measures) {
      res["Measures"] = boost::any(*measures);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (robotInstanceId) {
      res["RobotInstanceId"] = boost::any(*robotInstanceId);
    }
    if (dimensions) {
      res["Dimensions"] = boost::any(*dimensions);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CubeId") != m.end() && !m["CubeId"].empty()) {
      cubeId = make_shared<string>(boost::any_cast<string>(m["CubeId"]));
    }
    if (m.find("Measures") != m.end() && !m["Measures"].empty()) {
      measures = make_shared<string>(boost::any_cast<string>(m["Measures"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("RobotInstanceId") != m.end() && !m["RobotInstanceId"].empty()) {
      robotInstanceId = make_shared<string>(boost::any_cast<string>(m["RobotInstanceId"]));
    }
    if (m.find("Dimensions") != m.end() && !m["Dimensions"].empty()) {
      dimensions = make_shared<string>(boost::any_cast<string>(m["Dimensions"]));
    }
  }


  virtual ~ListBotReceptionDetailDatasRequest() = default;
};
class ListBotReceptionDetailDatasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> costTime{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> datas{};

  ListBotReceptionDetailDatasResponseBody() {}

  explicit ListBotReceptionDetailDatasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (costTime) {
      res["CostTime"] = boost::any(*costTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (datas) {
      res["Datas"] = boost::any(*datas);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CostTime") != m.end() && !m["CostTime"].empty()) {
      costTime = make_shared<string>(boost::any_cast<string>(m["CostTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Datas") != m.end() && !m["Datas"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Datas"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Datas"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      datas = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
  }


  virtual ~ListBotReceptionDetailDatasResponseBody() = default;
};
class ListBotReceptionDetailDatasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListBotReceptionDetailDatasResponseBody> body{};

  ListBotReceptionDetailDatasResponse() {}

  explicit ListBotReceptionDetailDatasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListBotReceptionDetailDatasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListBotReceptionDetailDatasResponseBody>(model1);
      }
    }
  }


  virtual ~ListBotReceptionDetailDatasResponse() = default;
};
class ListConversationLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> sessionId{};

  ListConversationLogsRequest() {}

  explicit ListConversationLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~ListConversationLogsRequest() = default;
};
class ListConversationLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<map<string, boost::any>>> chatLogs{};
  shared_ptr<long> rounds{};

  ListConversationLogsResponseBody() {}

  explicit ListConversationLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (chatLogs) {
      res["ChatLogs"] = boost::any(*chatLogs);
    }
    if (rounds) {
      res["Rounds"] = boost::any(*rounds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ChatLogs") != m.end() && !m["ChatLogs"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["ChatLogs"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ChatLogs"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      chatLogs = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Rounds") != m.end() && !m["Rounds"].empty()) {
      rounds = make_shared<long>(boost::any_cast<long>(m["Rounds"]));
    }
  }


  virtual ~ListConversationLogsResponseBody() = default;
};
class ListConversationLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<ListConversationLogsResponseBody> body{};

  ListConversationLogsResponse() {}

  explicit ListConversationLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConversationLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConversationLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConversationLogsResponse() = default;
};
class MoveKnowledgeCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<long> knowledgeId{};
  shared_ptr<long> categoryId{};

  MoveKnowledgeCategoryRequest() {}

  explicit MoveKnowledgeCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
  }


  virtual ~MoveKnowledgeCategoryRequest() = default;
};
class MoveKnowledgeCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  MoveKnowledgeCategoryResponseBody() {}

  explicit MoveKnowledgeCategoryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~MoveKnowledgeCategoryResponseBody() = default;
};
class MoveKnowledgeCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<MoveKnowledgeCategoryResponseBody> body{};

  MoveKnowledgeCategoryResponse() {}

  explicit MoveKnowledgeCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        MoveKnowledgeCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<MoveKnowledgeCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~MoveKnowledgeCategoryResponse() = default;
};
class PublishDialogFlowRequest : public Darabonba::Model {
public:
  shared_ptr<long> dialogId{};

  PublishDialogFlowRequest() {}

  explicit PublishDialogFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~PublishDialogFlowRequest() = default;
};
class PublishDialogFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PublishDialogFlowResponseBody() {}

  explicit PublishDialogFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PublishDialogFlowResponseBody() = default;
};
class PublishDialogFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PublishDialogFlowResponseBody> body{};

  PublishDialogFlowResponse() {}

  explicit PublishDialogFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishDialogFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishDialogFlowResponseBody>(model1);
      }
    }
  }


  virtual ~PublishDialogFlowResponse() = default;
};
class PublishKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<long> knowledgeId{};

  PublishKnowledgeRequest() {}

  explicit PublishKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~PublishKnowledgeRequest() = default;
};
class PublishKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  PublishKnowledgeResponseBody() {}

  explicit PublishKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~PublishKnowledgeResponseBody() = default;
};
class PublishKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<PublishKnowledgeResponseBody> body{};

  PublishKnowledgeResponse() {}

  explicit PublishKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PublishKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PublishKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~PublishKnowledgeResponse() = default;
};
class QueryBotsRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryBotsRequest() {}

  explicit QueryBotsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryBotsRequest() = default;
};
class QueryBotsResponseBodyBots : public Darabonba::Model {
public:
  shared_ptr<string> introduction{};
  shared_ptr<string> avatar{};
  shared_ptr<string> timeZone{};
  shared_ptr<string> createTime{};
  shared_ptr<string> languageCode{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

  QueryBotsResponseBodyBots() {}

  explicit QueryBotsResponseBodyBots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (introduction) {
      res["Introduction"] = boost::any(*introduction);
    }
    if (avatar) {
      res["Avatar"] = boost::any(*avatar);
    }
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (languageCode) {
      res["LanguageCode"] = boost::any(*languageCode);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Introduction") != m.end() && !m["Introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["Introduction"]));
    }
    if (m.find("Avatar") != m.end() && !m["Avatar"].empty()) {
      avatar = make_shared<string>(boost::any_cast<string>(m["Avatar"]));
    }
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("LanguageCode") != m.end() && !m["LanguageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["LanguageCode"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~QueryBotsResponseBodyBots() = default;
};
class QueryBotsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<vector<QueryBotsResponseBodyBots>> bots{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};

  QueryBotsResponseBody() {}

  explicit QueryBotsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (bots) {
      vector<boost::any> temp1;
      for(auto item1:*bots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bots"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Bots") != m.end() && !m["Bots"].empty()) {
      if (typeid(vector<boost::any>) == m["Bots"].type()) {
        vector<QueryBotsResponseBodyBots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryBotsResponseBodyBots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bots = make_shared<vector<QueryBotsResponseBodyBots>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
  }


  virtual ~QueryBotsResponseBody() = default;
};
class QueryBotsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryBotsResponseBody> body{};

  QueryBotsResponse() {}

  explicit QueryBotsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryBotsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryBotsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryBotsResponse() = default;
};
class QueryDialogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> dialogName{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryDialogsRequest() {}

  explicit QueryDialogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
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
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryDialogsRequest() = default;
};
class QueryDialogsResponseBodyDialogs : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> dialogName{};
  shared_ptr<string> modifyUserId{};
  shared_ptr<bool> isOnline{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> description{};
  shared_ptr<long> dialogId{};
  shared_ptr<bool> isSampleDialog{};
  shared_ptr<string> modifyTime{};

  QueryDialogsResponseBodyDialogs() {}

  explicit QueryDialogsResponseBodyDialogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (modifyUserId) {
      res["ModifyUserId"] = boost::any(*modifyUserId);
    }
    if (isOnline) {
      res["IsOnline"] = boost::any(*isOnline);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (isSampleDialog) {
      res["IsSampleDialog"] = boost::any(*isSampleDialog);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("ModifyUserId") != m.end() && !m["ModifyUserId"].empty()) {
      modifyUserId = make_shared<string>(boost::any_cast<string>(m["ModifyUserId"]));
    }
    if (m.find("IsOnline") != m.end() && !m["IsOnline"].empty()) {
      isOnline = make_shared<bool>(boost::any_cast<bool>(m["IsOnline"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("IsSampleDialog") != m.end() && !m["IsSampleDialog"].empty()) {
      isSampleDialog = make_shared<bool>(boost::any_cast<bool>(m["IsSampleDialog"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~QueryDialogsResponseBodyDialogs() = default;
};
class QueryDialogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> totalCount{};
  shared_ptr<string> requestId{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> pageNumber{};
  shared_ptr<vector<QueryDialogsResponseBodyDialogs>> dialogs{};

  QueryDialogsResponseBody() {}

  explicit QueryDialogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (dialogs) {
      vector<boost::any> temp1;
      for(auto item1:*dialogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Dialogs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("Dialogs") != m.end() && !m["Dialogs"].empty()) {
      if (typeid(vector<boost::any>) == m["Dialogs"].type()) {
        vector<QueryDialogsResponseBodyDialogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Dialogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryDialogsResponseBodyDialogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogs = make_shared<vector<QueryDialogsResponseBodyDialogs>>(expect1);
      }
    }
  }


  virtual ~QueryDialogsResponseBody() = default;
};
class QueryDialogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryDialogsResponseBody> body{};

  QueryDialogsResponse() {}

  explicit QueryDialogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryDialogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryDialogsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryDialogsResponse() = default;
};
class QueryPerspectivesResponseBodyPerspectives : public Darabonba::Model {
public:
  shared_ptr<long> status{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> createUserName{};
  shared_ptr<string> createTime{};
  shared_ptr<string> perspectiveId{};
  shared_ptr<string> selfDefine{};
  shared_ptr<string> name{};
  shared_ptr<string> perspectiveCode{};
  shared_ptr<string> modifyTime{};

  QueryPerspectivesResponseBodyPerspectives() {}

  explicit QueryPerspectivesResponseBodyPerspectives(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (createUserName) {
      res["CreateUserName"] = boost::any(*createUserName);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    if (selfDefine) {
      res["SelfDefine"] = boost::any(*selfDefine);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (perspectiveCode) {
      res["PerspectiveCode"] = boost::any(*perspectiveCode);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("CreateUserName") != m.end() && !m["CreateUserName"].empty()) {
      createUserName = make_shared<string>(boost::any_cast<string>(m["CreateUserName"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
    if (m.find("SelfDefine") != m.end() && !m["SelfDefine"].empty()) {
      selfDefine = make_shared<string>(boost::any_cast<string>(m["SelfDefine"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PerspectiveCode") != m.end() && !m["PerspectiveCode"].empty()) {
      perspectiveCode = make_shared<string>(boost::any_cast<string>(m["PerspectiveCode"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<string>(boost::any_cast<string>(m["ModifyTime"]));
    }
  }


  virtual ~QueryPerspectivesResponseBodyPerspectives() = default;
};
class QueryPerspectivesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<vector<QueryPerspectivesResponseBodyPerspectives>> perspectives{};

  QueryPerspectivesResponseBody() {}

  explicit QueryPerspectivesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (perspectives) {
      vector<boost::any> temp1;
      for(auto item1:*perspectives){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Perspectives"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
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
  }


  virtual ~QueryPerspectivesResponseBody() = default;
};
class QueryPerspectivesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QueryPerspectivesResponseBody> body{};

  QueryPerspectivesResponse() {}

  explicit QueryPerspectivesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPerspectivesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPerspectivesResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPerspectivesResponse() = default;
};
class QuerySystemEntitiesRequest : public Darabonba::Model {
public:
  shared_ptr<string> entityName{};

  QuerySystemEntitiesRequest() {}

  explicit QuerySystemEntitiesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~QuerySystemEntitiesRequest() = default;
};
class QuerySystemEntitiesResponseBodySystemEntities : public Darabonba::Model {
public:
  shared_ptr<string> defaultQuestion{};
  shared_ptr<string> entityCode{};
  shared_ptr<string> entityName{};

  QuerySystemEntitiesResponseBodySystemEntities() {}

  explicit QuerySystemEntitiesResponseBodySystemEntities(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (defaultQuestion) {
      res["DefaultQuestion"] = boost::any(*defaultQuestion);
    }
    if (entityCode) {
      res["EntityCode"] = boost::any(*entityCode);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DefaultQuestion") != m.end() && !m["DefaultQuestion"].empty()) {
      defaultQuestion = make_shared<string>(boost::any_cast<string>(m["DefaultQuestion"]));
    }
    if (m.find("EntityCode") != m.end() && !m["EntityCode"].empty()) {
      entityCode = make_shared<string>(boost::any_cast<string>(m["EntityCode"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
  }


  virtual ~QuerySystemEntitiesResponseBodySystemEntities() = default;
};
class QuerySystemEntitiesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QuerySystemEntitiesResponseBodySystemEntities>> systemEntities{};
  shared_ptr<string> requestId{};

  QuerySystemEntitiesResponseBody() {}

  explicit QuerySystemEntitiesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (systemEntities) {
      vector<boost::any> temp1;
      for(auto item1:*systemEntities){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SystemEntities"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SystemEntities") != m.end() && !m["SystemEntities"].empty()) {
      if (typeid(vector<boost::any>) == m["SystemEntities"].type()) {
        vector<QuerySystemEntitiesResponseBodySystemEntities> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SystemEntities"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QuerySystemEntitiesResponseBodySystemEntities model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        systemEntities = make_shared<vector<QuerySystemEntitiesResponseBodySystemEntities>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QuerySystemEntitiesResponseBody() = default;
};
class QuerySystemEntitiesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<QuerySystemEntitiesResponseBody> body{};

  QuerySystemEntitiesResponse() {}

  explicit QuerySystemEntitiesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QuerySystemEntitiesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QuerySystemEntitiesResponseBody>(model1);
      }
    }
  }


  virtual ~QuerySystemEntitiesResponse() = default;
};
class RemoveEntityMemberRequest : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> removeType{};
  shared_ptr<string> member{};

  RemoveEntityMemberRequest() {}

  explicit RemoveEntityMemberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (removeType) {
      res["RemoveType"] = boost::any(*removeType);
    }
    if (member) {
      res["Member"] = boost::any(*member);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("RemoveType") != m.end() && !m["RemoveType"].empty()) {
      removeType = make_shared<string>(boost::any_cast<string>(m["RemoveType"]));
    }
    if (m.find("Member") != m.end() && !m["Member"].empty()) {
      member = make_shared<string>(boost::any_cast<string>(m["Member"]));
    }
  }


  virtual ~RemoveEntityMemberRequest() = default;
};
class RemoveEntityMemberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> requestId{};

  RemoveEntityMemberResponseBody() {}

  explicit RemoveEntityMemberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RemoveEntityMemberResponseBody() = default;
};
class RemoveEntityMemberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveEntityMemberResponseBody> body{};

  RemoveEntityMemberResponse() {}

  explicit RemoveEntityMemberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveEntityMemberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveEntityMemberResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveEntityMemberResponse() = default;
};
class RemoveSynonymRequest : public Darabonba::Model {
public:
  shared_ptr<string> coreWordName{};
  shared_ptr<string> synonym{};

  RemoveSynonymRequest() {}

  explicit RemoveSynonymRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (synonym) {
      res["Synonym"] = boost::any(*synonym);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
    if (m.find("Synonym") != m.end() && !m["Synonym"].empty()) {
      synonym = make_shared<string>(boost::any_cast<string>(m["Synonym"]));
    }
  }


  virtual ~RemoveSynonymRequest() = default;
};
class RemoveSynonymResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  RemoveSynonymResponseBody() {}

  explicit RemoveSynonymResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RemoveSynonymResponseBody() = default;
};
class RemoveSynonymResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<RemoveSynonymResponseBody> body{};

  RemoveSynonymResponse() {}

  explicit RemoveSynonymResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RemoveSynonymResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RemoveSynonymResponseBody>(model1);
      }
    }
  }


  virtual ~RemoveSynonymResponse() = default;
};
class TestDialogFlowRequest : public Darabonba::Model {
public:
  shared_ptr<long> dialogId{};

  TestDialogFlowRequest() {}

  explicit TestDialogFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
  }


  virtual ~TestDialogFlowRequest() = default;
};
class TestDialogFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TestDialogFlowResponseBody() {}

  explicit TestDialogFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~TestDialogFlowResponseBody() = default;
};
class TestDialogFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<TestDialogFlowResponseBody> body{};

  TestDialogFlowResponse() {}

  explicit TestDialogFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TestDialogFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TestDialogFlowResponseBody>(model1);
      }
    }
  }


  virtual ~TestDialogFlowResponse() = default;
};
class UpdateCategoryRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> categoryId{};

  UpdateCategoryRequest() {}

  explicit UpdateCategoryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (categoryId) {
      res["CategoryId"] = boost::any(*categoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("CategoryId") != m.end() && !m["CategoryId"].empty()) {
      categoryId = make_shared<long>(boost::any_cast<long>(m["CategoryId"]));
    }
  }


  virtual ~UpdateCategoryRequest() = default;
};
class UpdateCategoryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

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
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateCategoryResponseBody() = default;
};
class UpdateCategoryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCategoryResponseBody> body{};

  UpdateCategoryResponse() {}

  explicit UpdateCategoryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCategoryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCategoryResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCategoryResponse() = default;
};
class UpdateCoreWordRequest : public Darabonba::Model {
public:
  shared_ptr<string> coreWordName{};
  shared_ptr<string> coreWordCode{};

  UpdateCoreWordRequest() {}

  explicit UpdateCoreWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (coreWordName) {
      res["CoreWordName"] = boost::any(*coreWordName);
    }
    if (coreWordCode) {
      res["CoreWordCode"] = boost::any(*coreWordCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CoreWordName") != m.end() && !m["CoreWordName"].empty()) {
      coreWordName = make_shared<string>(boost::any_cast<string>(m["CoreWordName"]));
    }
    if (m.find("CoreWordCode") != m.end() && !m["CoreWordCode"].empty()) {
      coreWordCode = make_shared<string>(boost::any_cast<string>(m["CoreWordCode"]));
    }
  }


  virtual ~UpdateCoreWordRequest() = default;
};
class UpdateCoreWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateCoreWordResponseBody() {}

  explicit UpdateCoreWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateCoreWordResponseBody() = default;
};
class UpdateCoreWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateCoreWordResponseBody> body{};

  UpdateCoreWordResponse() {}

  explicit UpdateCoreWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateCoreWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateCoreWordResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateCoreWordResponse() = default;
};
class UpdateDialogRequest : public Darabonba::Model {
public:
  shared_ptr<long> dialogId{};
  shared_ptr<string> dialogName{};
  shared_ptr<string> description{};

  UpdateDialogRequest() {}

  explicit UpdateDialogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (dialogName) {
      res["DialogName"] = boost::any(*dialogName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("DialogName") != m.end() && !m["DialogName"].empty()) {
      dialogName = make_shared<string>(boost::any_cast<string>(m["DialogName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
  }


  virtual ~UpdateDialogRequest() = default;
};
class UpdateDialogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDialogResponseBody() {}

  explicit UpdateDialogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDialogResponseBody() = default;
};
class UpdateDialogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateDialogResponseBody> body{};

  UpdateDialogResponse() {}

  explicit UpdateDialogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDialogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDialogResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDialogResponse() = default;
};
class UpdateDialogFlowRequest : public Darabonba::Model {
public:
  shared_ptr<long> dialogId{};
  shared_ptr<string> moduleDefinition{};

  UpdateDialogFlowRequest() {}

  explicit UpdateDialogFlowRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogId) {
      res["DialogId"] = boost::any(*dialogId);
    }
    if (moduleDefinition) {
      res["ModuleDefinition"] = boost::any(*moduleDefinition);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialogId") != m.end() && !m["DialogId"].empty()) {
      dialogId = make_shared<long>(boost::any_cast<long>(m["DialogId"]));
    }
    if (m.find("ModuleDefinition") != m.end() && !m["ModuleDefinition"].empty()) {
      moduleDefinition = make_shared<string>(boost::any_cast<string>(m["ModuleDefinition"]));
    }
  }


  virtual ~UpdateDialogFlowRequest() = default;
};
class UpdateDialogFlowResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  UpdateDialogFlowResponseBody() {}

  explicit UpdateDialogFlowResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateDialogFlowResponseBody() = default;
};
class UpdateDialogFlowResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateDialogFlowResponseBody> body{};

  UpdateDialogFlowResponse() {}

  explicit UpdateDialogFlowResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDialogFlowResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDialogFlowResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDialogFlowResponse() = default;
};
class UpdateEntityRequest : public Darabonba::Model {
public:
  shared_ptr<long> entityId{};
  shared_ptr<string> entityName{};
  shared_ptr<string> entityType{};
  shared_ptr<string> regex{};
  shared_ptr<string> members{};

  UpdateEntityRequest() {}

  explicit UpdateEntityRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (entityId) {
      res["EntityId"] = boost::any(*entityId);
    }
    if (entityName) {
      res["EntityName"] = boost::any(*entityName);
    }
    if (entityType) {
      res["EntityType"] = boost::any(*entityType);
    }
    if (regex) {
      res["Regex"] = boost::any(*regex);
    }
    if (members) {
      res["Members"] = boost::any(*members);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EntityId") != m.end() && !m["EntityId"].empty()) {
      entityId = make_shared<long>(boost::any_cast<long>(m["EntityId"]));
    }
    if (m.find("EntityName") != m.end() && !m["EntityName"].empty()) {
      entityName = make_shared<string>(boost::any_cast<string>(m["EntityName"]));
    }
    if (m.find("EntityType") != m.end() && !m["EntityType"].empty()) {
      entityType = make_shared<string>(boost::any_cast<string>(m["EntityType"]));
    }
    if (m.find("Regex") != m.end() && !m["Regex"].empty()) {
      regex = make_shared<string>(boost::any_cast<string>(m["Regex"]));
    }
    if (m.find("Members") != m.end() && !m["Members"].empty()) {
      members = make_shared<string>(boost::any_cast<string>(m["Members"]));
    }
  }


  virtual ~UpdateEntityRequest() = default;
};
class UpdateEntityResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> entityId{};
  shared_ptr<string> requestId{};

  UpdateEntityResponseBody() {}

  explicit UpdateEntityResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      entityId = make_shared<string>(boost::any_cast<string>(m["EntityId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateEntityResponseBody() = default;
};
class UpdateEntityResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateEntityResponseBody> body{};

  UpdateEntityResponse() {}

  explicit UpdateEntityResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEntityResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEntityResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEntityResponse() = default;
};
class UpdateIntentRequest : public Darabonba::Model {
public:
  shared_ptr<string> intentDefinition{};
  shared_ptr<long> intentId{};

  UpdateIntentRequest() {}

  explicit UpdateIntentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (intentDefinition) {
      res["IntentDefinition"] = boost::any(*intentDefinition);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("IntentDefinition") != m.end() && !m["IntentDefinition"].empty()) {
      intentDefinition = make_shared<string>(boost::any_cast<string>(m["IntentDefinition"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<long>(boost::any_cast<long>(m["IntentId"]));
    }
  }


  virtual ~UpdateIntentRequest() = default;
};
class UpdateIntentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> intentId{};

  UpdateIntentResponseBody() {}

  explicit UpdateIntentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (intentId) {
      res["IntentId"] = boost::any(*intentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("IntentId") != m.end() && !m["IntentId"].empty()) {
      intentId = make_shared<string>(boost::any_cast<string>(m["IntentId"]));
    }
  }


  virtual ~UpdateIntentResponseBody() = default;
};
class UpdateIntentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateIntentResponseBody> body{};

  UpdateIntentResponse() {}

  explicit UpdateIntentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateIntentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateIntentResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateIntentResponse() = default;
};
class UpdateKnowledgeRequest : public Darabonba::Model {
public:
  shared_ptr<string> knowledge{};

  UpdateKnowledgeRequest() {}

  explicit UpdateKnowledgeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (knowledge) {
      res["Knowledge"] = boost::any(*knowledge);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      knowledge = make_shared<string>(boost::any_cast<string>(m["Knowledge"]));
    }
  }


  virtual ~UpdateKnowledgeRequest() = default;
};
class UpdateKnowledgeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> knowledgeId{};

  UpdateKnowledgeResponseBody() {}

  explicit UpdateKnowledgeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (knowledgeId) {
      res["KnowledgeId"] = boost::any(*knowledgeId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("KnowledgeId") != m.end() && !m["KnowledgeId"].empty()) {
      knowledgeId = make_shared<long>(boost::any_cast<long>(m["KnowledgeId"]));
    }
  }


  virtual ~UpdateKnowledgeResponseBody() = default;
};
class UpdateKnowledgeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<UpdateKnowledgeResponseBody> body{};

  UpdateKnowledgeResponse() {}

  explicit UpdateKnowledgeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateKnowledgeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateKnowledgeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateKnowledgeResponse() = default;
};
class UpdatePerspectiveRequest : public Darabonba::Model {
public:
  shared_ptr<string> perspectiveId{};
  shared_ptr<string> name{};

  UpdatePerspectiveRequest() {}

  explicit UpdatePerspectiveRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (perspectiveId) {
      res["PerspectiveId"] = boost::any(*perspectiveId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PerspectiveId") != m.end() && !m["PerspectiveId"].empty()) {
      perspectiveId = make_shared<string>(boost::any_cast<string>(m["PerspectiveId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
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
  shared_ptr<UpdatePerspectiveResponseBody> body{};

  UpdatePerspectiveResponse() {}

  explicit UpdatePerspectiveResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePerspectiveResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePerspectiveResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePerspectiveResponse() = default;
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
  ActivatePerspectiveResponse activatePerspectiveWithOptions(shared_ptr<ActivatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ActivatePerspectiveResponse activatePerspective(shared_ptr<ActivatePerspectiveRequest> request);
  AddSynonymResponse addSynonymWithOptions(shared_ptr<AddSynonymRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddSynonymResponse addSynonym(shared_ptr<AddSynonymRequest> request);
  AppendEntityMemberResponse appendEntityMemberWithOptions(shared_ptr<AppendEntityMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AppendEntityMemberResponse appendEntityMember(shared_ptr<AppendEntityMemberRequest> request);
  AssociateResponse associateWithOptions(shared_ptr<AssociateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateResponse associate(shared_ptr<AssociateRequest> request);
  ChatResponse chatWithOptions(shared_ptr<ChatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatResponse chat(shared_ptr<ChatRequest> request);
  CreateBotResponse createBotWithOptions(shared_ptr<CreateBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateBotResponse createBot(shared_ptr<CreateBotRequest> request);
  CreateCategoryResponse createCategoryWithOptions(shared_ptr<CreateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCategoryResponse createCategory(shared_ptr<CreateCategoryRequest> request);
  CreateCoreWordResponse createCoreWordWithOptions(shared_ptr<CreateCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateCoreWordResponse createCoreWord(shared_ptr<CreateCoreWordRequest> request);
  CreateDialogResponse createDialogWithOptions(shared_ptr<CreateDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDialogResponse createDialog(shared_ptr<CreateDialogRequest> request);
  CreateEntityResponse createEntityWithOptions(shared_ptr<CreateEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateEntityResponse createEntity(shared_ptr<CreateEntityRequest> request);
  CreateIntentResponse createIntentWithOptions(shared_ptr<CreateIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateIntentResponse createIntent(shared_ptr<CreateIntentRequest> request);
  CreateKnowledgeResponse createKnowledgeWithOptions(shared_ptr<CreateKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateKnowledgeResponse createKnowledge(shared_ptr<CreateKnowledgeRequest> request);
  DeleteBotResponse deleteBotWithOptions(shared_ptr<DeleteBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteBotResponse deleteBot(shared_ptr<DeleteBotRequest> request);
  DeleteCategoryResponse deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCategoryResponse deleteCategory(shared_ptr<DeleteCategoryRequest> request);
  DeleteCoreWordResponse deleteCoreWordWithOptions(shared_ptr<DeleteCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteCoreWordResponse deleteCoreWord(shared_ptr<DeleteCoreWordRequest> request);
  DeleteDialogResponse deleteDialogWithOptions(shared_ptr<DeleteDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDialogResponse deleteDialog(shared_ptr<DeleteDialogRequest> request);
  DeleteEntityResponse deleteEntityWithOptions(shared_ptr<DeleteEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEntityResponse deleteEntity(shared_ptr<DeleteEntityRequest> request);
  DeleteIntentResponse deleteIntentWithOptions(shared_ptr<DeleteIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteIntentResponse deleteIntent(shared_ptr<DeleteIntentRequest> request);
  DeleteKnowledgeResponse deleteKnowledgeWithOptions(shared_ptr<DeleteKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteKnowledgeResponse deleteKnowledge(shared_ptr<DeleteKnowledgeRequest> request);
  DescribeBotResponse describeBotWithOptions(shared_ptr<DescribeBotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeBotResponse describeBot(shared_ptr<DescribeBotRequest> request);
  DescribeCategoryResponse describeCategoryWithOptions(shared_ptr<DescribeCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCategoryResponse describeCategory(shared_ptr<DescribeCategoryRequest> request);
  DescribeCoreWordResponse describeCoreWordWithOptions(shared_ptr<DescribeCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeCoreWordResponse describeCoreWord(shared_ptr<DescribeCoreWordRequest> request);
  DescribeDialogResponse describeDialogWithOptions(shared_ptr<DescribeDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDialogResponse describeDialog(shared_ptr<DescribeDialogRequest> request);
  DescribePerspectiveResponse describePerspectiveWithOptions(shared_ptr<DescribePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribePerspectiveResponse describePerspective(shared_ptr<DescribePerspectiveRequest> request);
  DisableDialogFlowResponse disableDialogFlowWithOptions(shared_ptr<DisableDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableDialogFlowResponse disableDialogFlow(shared_ptr<DisableDialogFlowRequest> request);
  DisableKnowledgeResponse disableKnowledgeWithOptions(shared_ptr<DisableKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableKnowledgeResponse disableKnowledge(shared_ptr<DisableKnowledgeRequest> request);
  FeedbackResponse feedbackWithOptions(shared_ptr<FeedbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FeedbackResponse feedback(shared_ptr<FeedbackRequest> request);
  GetBotChatDataResponse getBotChatDataWithOptions(shared_ptr<GetBotChatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBotChatDataResponse getBotChatData(shared_ptr<GetBotChatDataRequest> request);
  GetBotDsStatDataResponse getBotDsStatDataWithOptions(shared_ptr<GetBotDsStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBotDsStatDataResponse getBotDsStatData(shared_ptr<GetBotDsStatDataRequest> request);
  GetBotKnowledgeStatDataResponse getBotKnowledgeStatDataWithOptions(shared_ptr<GetBotKnowledgeStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBotKnowledgeStatDataResponse getBotKnowledgeStatData(shared_ptr<GetBotKnowledgeStatDataRequest> request);
  GetBotSessionDataResponse getBotSessionDataWithOptions(shared_ptr<GetBotSessionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetBotSessionDataResponse getBotSessionData(shared_ptr<GetBotSessionDataRequest> request);
  GetConversationListResponse getConversationListWithOptions(shared_ptr<GetConversationListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetConversationListResponse getConversationList(shared_ptr<GetConversationListRequest> request);
  ListBotChatHistorysResponse listBotChatHistorysWithOptions(shared_ptr<ListBotChatHistorysRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotChatHistorysResponse listBotChatHistorys(shared_ptr<ListBotChatHistorysRequest> request);
  ListBotColdDsDatasResponse listBotColdDsDatasWithOptions(shared_ptr<ListBotColdDsDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotColdDsDatasResponse listBotColdDsDatas(shared_ptr<ListBotColdDsDatasRequest> request);
  ListBotColdKnowledgesResponse listBotColdKnowledgesWithOptions(shared_ptr<ListBotColdKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotColdKnowledgesResponse listBotColdKnowledges(shared_ptr<ListBotColdKnowledgesRequest> request);
  ListBotDsDetailsResponse listBotDsDetailsWithOptions(shared_ptr<ListBotDsDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotDsDetailsResponse listBotDsDetails(shared_ptr<ListBotDsDetailsRequest> request);
  ListBotHotDsDatasResponse listBotHotDsDatasWithOptions(shared_ptr<ListBotHotDsDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotHotDsDatasResponse listBotHotDsDatas(shared_ptr<ListBotHotDsDatasRequest> request);
  ListBotHotKnowledgesResponse listBotHotKnowledgesWithOptions(shared_ptr<ListBotHotKnowledgesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotHotKnowledgesResponse listBotHotKnowledges(shared_ptr<ListBotHotKnowledgesRequest> request);
  ListBotKnowledgeDetailsResponse listBotKnowledgeDetailsWithOptions(shared_ptr<ListBotKnowledgeDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotKnowledgeDetailsResponse listBotKnowledgeDetails(shared_ptr<ListBotKnowledgeDetailsRequest> request);
  ListBotReceptionDetailDatasResponse listBotReceptionDetailDatasWithOptions(shared_ptr<ListBotReceptionDetailDatasRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListBotReceptionDetailDatasResponse listBotReceptionDetailDatas(shared_ptr<ListBotReceptionDetailDatasRequest> request);
  ListConversationLogsResponse listConversationLogsWithOptions(shared_ptr<ListConversationLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConversationLogsResponse listConversationLogs(shared_ptr<ListConversationLogsRequest> request);
  MoveKnowledgeCategoryResponse moveKnowledgeCategoryWithOptions(shared_ptr<MoveKnowledgeCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  MoveKnowledgeCategoryResponse moveKnowledgeCategory(shared_ptr<MoveKnowledgeCategoryRequest> request);
  PublishDialogFlowResponse publishDialogFlowWithOptions(shared_ptr<PublishDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishDialogFlowResponse publishDialogFlow(shared_ptr<PublishDialogFlowRequest> request);
  PublishKnowledgeResponse publishKnowledgeWithOptions(shared_ptr<PublishKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PublishKnowledgeResponse publishKnowledge(shared_ptr<PublishKnowledgeRequest> request);
  QueryBotsResponse queryBotsWithOptions(shared_ptr<QueryBotsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryBotsResponse queryBots(shared_ptr<QueryBotsRequest> request);
  QueryDialogsResponse queryDialogsWithOptions(shared_ptr<QueryDialogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryDialogsResponse queryDialogs(shared_ptr<QueryDialogsRequest> request);
  QueryPerspectivesResponse queryPerspectivesWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPerspectivesResponse queryPerspectives();
  QuerySystemEntitiesResponse querySystemEntitiesWithOptions(shared_ptr<QuerySystemEntitiesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QuerySystemEntitiesResponse querySystemEntities(shared_ptr<QuerySystemEntitiesRequest> request);
  RemoveEntityMemberResponse removeEntityMemberWithOptions(shared_ptr<RemoveEntityMemberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveEntityMemberResponse removeEntityMember(shared_ptr<RemoveEntityMemberRequest> request);
  RemoveSynonymResponse removeSynonymWithOptions(shared_ptr<RemoveSynonymRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RemoveSynonymResponse removeSynonym(shared_ptr<RemoveSynonymRequest> request);
  TestDialogFlowResponse testDialogFlowWithOptions(shared_ptr<TestDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TestDialogFlowResponse testDialogFlow(shared_ptr<TestDialogFlowRequest> request);
  UpdateCategoryResponse updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCategoryResponse updateCategory(shared_ptr<UpdateCategoryRequest> request);
  UpdateCoreWordResponse updateCoreWordWithOptions(shared_ptr<UpdateCoreWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateCoreWordResponse updateCoreWord(shared_ptr<UpdateCoreWordRequest> request);
  UpdateDialogResponse updateDialogWithOptions(shared_ptr<UpdateDialogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDialogResponse updateDialog(shared_ptr<UpdateDialogRequest> request);
  UpdateDialogFlowResponse updateDialogFlowWithOptions(shared_ptr<UpdateDialogFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDialogFlowResponse updateDialogFlow(shared_ptr<UpdateDialogFlowRequest> request);
  UpdateEntityResponse updateEntityWithOptions(shared_ptr<UpdateEntityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEntityResponse updateEntity(shared_ptr<UpdateEntityRequest> request);
  UpdateIntentResponse updateIntentWithOptions(shared_ptr<UpdateIntentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateIntentResponse updateIntent(shared_ptr<UpdateIntentRequest> request);
  UpdateKnowledgeResponse updateKnowledgeWithOptions(shared_ptr<UpdateKnowledgeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateKnowledgeResponse updateKnowledge(shared_ptr<UpdateKnowledgeRequest> request);
  UpdatePerspectiveResponse updatePerspectiveWithOptions(shared_ptr<UpdatePerspectiveRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePerspectiveResponse updatePerspective(shared_ptr<UpdatePerspectiveRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Chatbot20171011

#endif
