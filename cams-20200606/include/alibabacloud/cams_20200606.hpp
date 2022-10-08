// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CAMS20200606_H_
#define ALIBABACLOUD_CAMS20200606_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Cams20200606 {
class BeeBotAssociateRequest : public Darabonba::Model {
public:
  shared_ptr<string> chatBotInstnaceId{};
  shared_ptr<string> isvCode{};
  shared_ptr<vector<string>> perspective{};
  shared_ptr<long> recommendNum{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> utterance{};

  BeeBotAssociateRequest() {}

  explicit BeeBotAssociateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatBotInstnaceId) {
      res["ChatBotInstnaceId"] = boost::any(*chatBotInstnaceId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
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
    if (m.find("ChatBotInstnaceId") != m.end() && !m["ChatBotInstnaceId"].empty()) {
      chatBotInstnaceId = make_shared<string>(boost::any_cast<string>(m["ChatBotInstnaceId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
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


  virtual ~BeeBotAssociateRequest() = default;
};
class BeeBotAssociateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> chatBotInstnaceId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> perspectiveShrink{};
  shared_ptr<long> recommendNum{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> utterance{};

  BeeBotAssociateShrinkRequest() {}

  explicit BeeBotAssociateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatBotInstnaceId) {
      res["ChatBotInstnaceId"] = boost::any(*chatBotInstnaceId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
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
    if (m.find("ChatBotInstnaceId") != m.end() && !m["ChatBotInstnaceId"].empty()) {
      chatBotInstnaceId = make_shared<string>(boost::any_cast<string>(m["ChatBotInstnaceId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
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


  virtual ~BeeBotAssociateShrinkRequest() = default;
};
class BeeBotAssociateResponseBodyDataAssociate : public Darabonba::Model {
public:
  shared_ptr<string> meta{};
  shared_ptr<string> title{};

  BeeBotAssociateResponseBodyDataAssociate() {}

  explicit BeeBotAssociateResponseBodyDataAssociate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BeeBotAssociateResponseBodyDataAssociate() = default;
};
class BeeBotAssociateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BeeBotAssociateResponseBodyDataAssociate>> associate{};
  shared_ptr<string> messageId{};
  shared_ptr<string> sessionId{};

  BeeBotAssociateResponseBodyData() {}

  explicit BeeBotAssociateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Associate") != m.end() && !m["Associate"].empty()) {
      if (typeid(vector<boost::any>) == m["Associate"].type()) {
        vector<BeeBotAssociateResponseBodyDataAssociate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Associate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeeBotAssociateResponseBodyDataAssociate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        associate = make_shared<vector<BeeBotAssociateResponseBodyDataAssociate>>(expect1);
      }
    }
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~BeeBotAssociateResponseBodyData() = default;
};
class BeeBotAssociateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BeeBotAssociateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  BeeBotAssociateResponseBody() {}

  explicit BeeBotAssociateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BeeBotAssociateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BeeBotAssociateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BeeBotAssociateResponseBody() = default;
};
class BeeBotAssociateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BeeBotAssociateResponseBody> body{};

  BeeBotAssociateResponse() {}

  explicit BeeBotAssociateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BeeBotAssociateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BeeBotAssociateResponseBody>(model1);
      }
    }
  }


  virtual ~BeeBotAssociateResponse() = default;
};
class BeeBotChatRequest : public Darabonba::Model {
public:
  shared_ptr<string> chatBotInstnaceId{};
  shared_ptr<string> intentName{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<vector<string>> perspective{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> utterance{};
  shared_ptr<map<string, boost::any>> vendorParam{};

  BeeBotChatRequest() {}

  explicit BeeBotChatRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatBotInstnaceId) {
      res["ChatBotInstnaceId"] = boost::any(*chatBotInstnaceId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
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
    if (m.find("ChatBotInstnaceId") != m.end() && !m["ChatBotInstnaceId"].empty()) {
      chatBotInstnaceId = make_shared<string>(boost::any_cast<string>(m["ChatBotInstnaceId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
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
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["VendorParam"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      vendorParam = make_shared<map<string, boost::any>>(toMap1);
    }
  }


  virtual ~BeeBotChatRequest() = default;
};
class BeeBotChatShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> chatBotInstnaceId{};
  shared_ptr<string> intentName{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<string> perspectiveShrink{};
  shared_ptr<string> senderId{};
  shared_ptr<string> senderNick{};
  shared_ptr<string> sessionId{};
  shared_ptr<string> utterance{};
  shared_ptr<string> vendorParamShrink{};

  BeeBotChatShrinkRequest() {}

  explicit BeeBotChatShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatBotInstnaceId) {
      res["ChatBotInstnaceId"] = boost::any(*chatBotInstnaceId);
    }
    if (intentName) {
      res["IntentName"] = boost::any(*intentName);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
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
    if (vendorParamShrink) {
      res["VendorParam"] = boost::any(*vendorParamShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChatBotInstnaceId") != m.end() && !m["ChatBotInstnaceId"].empty()) {
      chatBotInstnaceId = make_shared<string>(boost::any_cast<string>(m["ChatBotInstnaceId"]));
    }
    if (m.find("IntentName") != m.end() && !m["IntentName"].empty()) {
      intentName = make_shared<string>(boost::any_cast<string>(m["IntentName"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
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
      vendorParamShrink = make_shared<string>(boost::any_cast<string>(m["VendorParam"]));
    }
  }


  virtual ~BeeBotChatShrinkRequest() = default;
};
class BeeBotChatResponseBodyDataMessagesKnowledgeRelatedKnowledges : public Darabonba::Model {
public:
  shared_ptr<string> knowledgeId{};
  shared_ptr<string> title{};

  BeeBotChatResponseBodyDataMessagesKnowledgeRelatedKnowledges() {}

  explicit BeeBotChatResponseBodyDataMessagesKnowledgeRelatedKnowledges(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BeeBotChatResponseBodyDataMessagesKnowledgeRelatedKnowledges() = default;
};
class BeeBotChatResponseBodyDataMessagesKnowledge : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> category{};
  shared_ptr<string> content{};
  shared_ptr<string> contentType{};
  shared_ptr<string> hitStatement{};
  shared_ptr<string> id{};
  shared_ptr<vector<BeeBotChatResponseBodyDataMessagesKnowledgeRelatedKnowledges>> relatedKnowledges{};
  shared_ptr<string> summary{};
  shared_ptr<string> title{};

  BeeBotChatResponseBodyDataMessagesKnowledge() {}

  explicit BeeBotChatResponseBodyDataMessagesKnowledge(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<BeeBotChatResponseBodyDataMessagesKnowledgeRelatedKnowledges> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["RelatedKnowledges"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeeBotChatResponseBodyDataMessagesKnowledgeRelatedKnowledges model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        relatedKnowledges = make_shared<vector<BeeBotChatResponseBodyDataMessagesKnowledgeRelatedKnowledges>>(expect1);
      }
    }
    if (m.find("Summary") != m.end() && !m["Summary"].empty()) {
      summary = make_shared<string>(boost::any_cast<string>(m["Summary"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~BeeBotChatResponseBodyDataMessagesKnowledge() = default;
};
class BeeBotChatResponseBodyDataMessagesRecommends : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> knowledgeId{};
  shared_ptr<string> title{};

  BeeBotChatResponseBodyDataMessagesRecommends() {}

  explicit BeeBotChatResponseBodyDataMessagesRecommends(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~BeeBotChatResponseBodyDataMessagesRecommends() = default;
};
class BeeBotChatResponseBodyDataMessagesTextSlots : public Darabonba::Model {
public:
  shared_ptr<bool> hit{};
  shared_ptr<string> name{};
  shared_ptr<string> origin{};
  shared_ptr<string> value{};

  BeeBotChatResponseBodyDataMessagesTextSlots() {}

  explicit BeeBotChatResponseBodyDataMessagesTextSlots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~BeeBotChatResponseBodyDataMessagesTextSlots() = default;
};
class BeeBotChatResponseBodyDataMessagesText : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
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
  shared_ptr<vector<BeeBotChatResponseBodyDataMessagesTextSlots>> slots{};
  shared_ptr<string> userDefinedChatTitle{};

  BeeBotChatResponseBodyDataMessagesText() {}

  explicit BeeBotChatResponseBodyDataMessagesText(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answerSource) {
      res["AnswerSource"] = boost::any(*answerSource);
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
    if (m.find("Slots") != m.end() && !m["Slots"].empty()) {
      if (typeid(vector<boost::any>) == m["Slots"].type()) {
        vector<BeeBotChatResponseBodyDataMessagesTextSlots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Slots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeeBotChatResponseBodyDataMessagesTextSlots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        slots = make_shared<vector<BeeBotChatResponseBodyDataMessagesTextSlots>>(expect1);
      }
    }
    if (m.find("UserDefinedChatTitle") != m.end() && !m["UserDefinedChatTitle"].empty()) {
      userDefinedChatTitle = make_shared<string>(boost::any_cast<string>(m["UserDefinedChatTitle"]));
    }
  }


  virtual ~BeeBotChatResponseBodyDataMessagesText() = default;
};
class BeeBotChatResponseBodyDataMessages : public Darabonba::Model {
public:
  shared_ptr<string> answerSource{};
  shared_ptr<string> answerType{};
  shared_ptr<BeeBotChatResponseBodyDataMessagesKnowledge> knowledge{};
  shared_ptr<vector<BeeBotChatResponseBodyDataMessagesRecommends>> recommends{};
  shared_ptr<BeeBotChatResponseBodyDataMessagesText> text{};

  BeeBotChatResponseBodyDataMessages() {}

  explicit BeeBotChatResponseBodyDataMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AnswerSource") != m.end() && !m["AnswerSource"].empty()) {
      answerSource = make_shared<string>(boost::any_cast<string>(m["AnswerSource"]));
    }
    if (m.find("AnswerType") != m.end() && !m["AnswerType"].empty()) {
      answerType = make_shared<string>(boost::any_cast<string>(m["AnswerType"]));
    }
    if (m.find("Knowledge") != m.end() && !m["Knowledge"].empty()) {
      if (typeid(map<string, boost::any>) == m["Knowledge"].type()) {
        BeeBotChatResponseBodyDataMessagesKnowledge model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Knowledge"]));
        knowledge = make_shared<BeeBotChatResponseBodyDataMessagesKnowledge>(model1);
      }
    }
    if (m.find("Recommends") != m.end() && !m["Recommends"].empty()) {
      if (typeid(vector<boost::any>) == m["Recommends"].type()) {
        vector<BeeBotChatResponseBodyDataMessagesRecommends> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Recommends"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeeBotChatResponseBodyDataMessagesRecommends model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        recommends = make_shared<vector<BeeBotChatResponseBodyDataMessagesRecommends>>(expect1);
      }
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      if (typeid(map<string, boost::any>) == m["Text"].type()) {
        BeeBotChatResponseBodyDataMessagesText model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Text"]));
        text = make_shared<BeeBotChatResponseBodyDataMessagesText>(model1);
      }
    }
  }


  virtual ~BeeBotChatResponseBodyDataMessages() = default;
};
class BeeBotChatResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> messageId{};
  shared_ptr<vector<BeeBotChatResponseBodyDataMessages>> messages{};
  shared_ptr<string> sessionId{};

  BeeBotChatResponseBodyData() {}

  explicit BeeBotChatResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<BeeBotChatResponseBodyDataMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BeeBotChatResponseBodyDataMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<BeeBotChatResponseBodyDataMessages>>(expect1);
      }
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~BeeBotChatResponseBodyData() = default;
};
class BeeBotChatResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BeeBotChatResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  BeeBotChatResponseBody() {}

  explicit BeeBotChatResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        BeeBotChatResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BeeBotChatResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~BeeBotChatResponseBody() = default;
};
class BeeBotChatResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BeeBotChatResponseBody> body{};

  BeeBotChatResponse() {}

  explicit BeeBotChatResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BeeBotChatResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BeeBotChatResponseBody>(model1);
      }
    }
  }


  virtual ~BeeBotChatResponse() = default;
};
class CreateChatappTemplateRequestComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  CreateChatappTemplateRequestComponentsButtons() {}

  explicit CreateChatappTemplateRequestComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~CreateChatappTemplateRequestComponentsButtons() = default;
};
class CreateChatappTemplateRequestComponents : public Darabonba::Model {
public:
  shared_ptr<vector<CreateChatappTemplateRequestComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<string> fileName{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  CreateChatappTemplateRequestComponents() {}

  explicit CreateChatappTemplateRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<CreateChatappTemplateRequestComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<CreateChatappTemplateRequestComponentsButtons>>(expect1);
      }
    }
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~CreateChatappTemplateRequestComponents() = default;
};
class CreateChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<vector<CreateChatappTemplateRequestComponents>> components{};
  shared_ptr<string> custWabaId{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<string> templateType{};

  CreateChatappTemplateRequest() {}

  explicit CreateChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (example) {
      res["Example"] = boost::any(*example);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<CreateChatappTemplateRequestComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateChatappTemplateRequestComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<CreateChatappTemplateRequestComponents>>(expect1);
      }
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Example"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      example = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~CreateChatappTemplateRequest() = default;
};
class CreateChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> componentsShrink{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> exampleShrink{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<string> templateType{};

  CreateChatappTemplateShrinkRequest() {}

  explicit CreateChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (componentsShrink) {
      res["Components"] = boost::any(*componentsShrink);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (exampleShrink) {
      res["Example"] = boost::any(*exampleShrink);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      componentsShrink = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      exampleShrink = make_shared<string>(boost::any_cast<string>(m["Example"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~CreateChatappTemplateShrinkRequest() = default;
};
class CreateChatappTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};

  CreateChatappTemplateResponseBodyData() {}

  explicit CreateChatappTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~CreateChatappTemplateResponseBodyData() = default;
};
class CreateChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateChatappTemplateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateChatappTemplateResponseBody() {}

  explicit CreateChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateChatappTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateChatappTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateChatappTemplateResponseBody() = default;
};
class CreateChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatappTemplateResponseBody> body{};

  CreateChatappTemplateResponse() {}

  explicit CreateChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatappTemplateResponse() = default;
};
class DeleteChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> templateCode{};

  DeleteChatappTemplateRequest() {}

  explicit DeleteChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~DeleteChatappTemplateRequest() = default;
};
class DeleteChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteChatappTemplateResponseBody() {}

  explicit DeleteChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~DeleteChatappTemplateResponseBody() = default;
};
class DeleteChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteChatappTemplateResponseBody> body{};

  DeleteChatappTemplateResponse() {}

  explicit DeleteChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteChatappTemplateResponse() = default;
};
class GetChatappTemplateDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> templateCode{};

  GetChatappTemplateDetailRequest() {}

  explicit GetChatappTemplateDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~GetChatappTemplateDetailRequest() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  GetChatappTemplateDetailResponseBodyDataComponentsButtons() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponentsButtons() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponents : public Darabonba::Model {
public:
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<string> fileName{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  GetChatappTemplateDetailResponseBodyDataComponents() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons>>(expect1);
      }
    }
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponents() = default;
};
class GetChatappTemplateDetailResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> category{};
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponents>> components{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<string> templateCode{};

  GetChatappTemplateDetailResponseBodyData() {}

  explicit GetChatappTemplateDetailResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (example) {
      res["Example"] = boost::any(*example);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<GetChatappTemplateDetailResponseBodyDataComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateDetailResponseBodyDataComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<GetChatappTemplateDetailResponseBodyDataComponents>>(expect1);
      }
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Example"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      example = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyData() = default;
};
class GetChatappTemplateDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetChatappTemplateDetailResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappTemplateDetailResponseBody() {}

  explicit GetChatappTemplateDetailResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetChatappTemplateDetailResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetChatappTemplateDetailResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBody() = default;
};
class GetChatappTemplateDetailResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappTemplateDetailResponseBody> body{};

  GetChatappTemplateDetailResponse() {}

  explicit GetChatappTemplateDetailResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatappTemplateDetailResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappTemplateDetailResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappTemplateDetailResponse() = default;
};
class ListChatappTemplateRequestPage : public Darabonba::Model {
public:
  shared_ptr<long> index{};
  shared_ptr<long> size{};

  ListChatappTemplateRequestPage() {}

  explicit ListChatappTemplateRequestPage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<long>(boost::any_cast<long>(m["Size"]));
    }
  }


  virtual ~ListChatappTemplateRequestPage() = default;
};
class ListChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<ListChatappTemplateRequestPage> page{};

  ListChatappTemplateRequest() {}

  explicit ListChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (page) {
      res["Page"] = page ? boost::any(page->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      if (typeid(map<string, boost::any>) == m["Page"].type()) {
        ListChatappTemplateRequestPage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Page"]));
        page = make_shared<ListChatappTemplateRequestPage>(model1);
      }
    }
  }


  virtual ~ListChatappTemplateRequest() = default;
};
class ListChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<string> pageShrink{};

  ListChatappTemplateShrinkRequest() {}

  explicit ListChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageShrink) {
      res["Page"] = boost::any(*pageShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Page") != m.end() && !m["Page"].empty()) {
      pageShrink = make_shared<string>(boost::any_cast<string>(m["Page"]));
    }
  }


  virtual ~ListChatappTemplateShrinkRequest() = default;
};
class ListChatappTemplateResponseBodyListTemplate : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> category{};
  shared_ptr<string> language{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};

  ListChatappTemplateResponseBodyListTemplate() {}

  explicit ListChatappTemplateResponseBodyListTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditStatus) {
      res["AuditStatus"] = boost::any(*auditStatus);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListChatappTemplateResponseBodyListTemplate() = default;
};
class ListChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListChatappTemplateResponseBodyListTemplate>> listTemplate{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ListChatappTemplateResponseBody() {}

  explicit ListChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (listTemplate) {
      vector<boost::any> temp1;
      for(auto item1:*listTemplate){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ListTemplate"] = boost::any(temp1);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("ListTemplate") != m.end() && !m["ListTemplate"].empty()) {
      if (typeid(vector<boost::any>) == m["ListTemplate"].type()) {
        vector<ListChatappTemplateResponseBodyListTemplate> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ListTemplate"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChatappTemplateResponseBodyListTemplate model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        listTemplate = make_shared<vector<ListChatappTemplateResponseBodyListTemplate>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListChatappTemplateResponseBody() = default;
};
class ListChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChatappTemplateResponseBody> body{};

  ListChatappTemplateResponse() {}

  explicit ListChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatappTemplateResponse() = default;
};
class ModifyChatappTemplateRequestComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};
  shared_ptr<string> urlType{};

  ModifyChatappTemplateRequestComponentsButtons() {}

  explicit ModifyChatappTemplateRequestComponentsButtons(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    if (urlType) {
      res["UrlType"] = boost::any(*urlType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
    if (m.find("UrlType") != m.end() && !m["UrlType"].empty()) {
      urlType = make_shared<string>(boost::any_cast<string>(m["UrlType"]));
    }
  }


  virtual ~ModifyChatappTemplateRequestComponentsButtons() = default;
};
class ModifyChatappTemplateRequestComponents : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyChatappTemplateRequestComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<string> fileName{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  ModifyChatappTemplateRequestComponents() {}

  explicit ModifyChatappTemplateRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttons) {
      vector<boost::any> temp1;
      for(auto item1:*buttons){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Buttons"] = boost::any(temp1);
    }
    if (caption) {
      res["Caption"] = boost::any(*caption);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (url) {
      res["Url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Buttons") != m.end() && !m["Buttons"].empty()) {
      if (typeid(vector<boost::any>) == m["Buttons"].type()) {
        vector<ModifyChatappTemplateRequestComponentsButtons> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Buttons"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyChatappTemplateRequestComponentsButtons model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        buttons = make_shared<vector<ModifyChatappTemplateRequestComponentsButtons>>(expect1);
      }
    }
    if (m.find("Caption") != m.end() && !m["Caption"].empty()) {
      caption = make_shared<string>(boost::any_cast<string>(m["Caption"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("Url") != m.end() && !m["Url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["Url"]));
    }
  }


  virtual ~ModifyChatappTemplateRequestComponents() = default;
};
class ModifyChatappTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ModifyChatappTemplateRequestComponents>> components{};
  shared_ptr<string> custWabaId{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> templateCode{};

  ModifyChatappTemplateRequest() {}

  explicit ModifyChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (components) {
      vector<boost::any> temp1;
      for(auto item1:*components){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Components"] = boost::any(temp1);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (example) {
      res["Example"] = boost::any(*example);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      if (typeid(vector<boost::any>) == m["Components"].type()) {
        vector<ModifyChatappTemplateRequestComponents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Components"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModifyChatappTemplateRequestComponents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        components = make_shared<vector<ModifyChatappTemplateRequestComponents>>(expect1);
      }
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["Example"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      example = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~ModifyChatappTemplateRequest() = default;
};
class ModifyChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> componentsShrink{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> exampleShrink{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> templateCode{};

  ModifyChatappTemplateShrinkRequest() {}

  explicit ModifyChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (componentsShrink) {
      res["Components"] = boost::any(*componentsShrink);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (exampleShrink) {
      res["Example"] = boost::any(*exampleShrink);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      componentsShrink = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("Example") != m.end() && !m["Example"].empty()) {
      exampleShrink = make_shared<string>(boost::any_cast<string>(m["Example"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~ModifyChatappTemplateShrinkRequest() = default;
};
class ModifyChatappTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};

  ModifyChatappTemplateResponseBodyData() {}

  explicit ModifyChatappTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ModifyChatappTemplateResponseBodyData() = default;
};
class ModifyChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ModifyChatappTemplateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyChatappTemplateResponseBody() {}

  explicit ModifyChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyChatappTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyChatappTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ModifyChatappTemplateResponseBody() = default;
};
class ModifyChatappTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyChatappTemplateResponseBody> body{};

  ModifyChatappTemplateResponse() {}

  explicit ModifyChatappTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyChatappTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyChatappTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyChatappTemplateResponse() = default;
};
class SendChatappMassMessageRequestSenderList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> payload{};
  shared_ptr<map<string, string>> templateParams{};
  shared_ptr<string> to{};

  SendChatappMassMessageRequestSenderList() {}

  explicit SendChatappMassMessageRequestSenderList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (templateParams) {
      res["TemplateParams"] = boost::any(*templateParams);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Payload"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Payload"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      payload = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["TemplateParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
  }


  virtual ~SendChatappMassMessageRequestSenderList() = default;
};
class SendChatappMassMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<vector<SendChatappMassMessageRequestSenderList>> senderList{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};

  SendChatappMassMessageRequest() {}

  explicit SendChatappMassMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (senderList) {
      vector<boost::any> temp1;
      for(auto item1:*senderList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SenderList"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("SenderList") != m.end() && !m["SenderList"].empty()) {
      if (typeid(vector<boost::any>) == m["SenderList"].type()) {
        vector<SendChatappMassMessageRequestSenderList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SenderList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMassMessageRequestSenderList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        senderList = make_shared<vector<SendChatappMassMessageRequestSenderList>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~SendChatappMassMessageRequest() = default;
};
class SendChatappMassMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> senderListShrink{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};

  SendChatappMassMessageShrinkRequest() {}

  explicit SendChatappMassMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (senderListShrink) {
      res["SenderList"] = boost::any(*senderListShrink);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("SenderList") != m.end() && !m["SenderList"].empty()) {
      senderListShrink = make_shared<string>(boost::any_cast<string>(m["SenderList"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~SendChatappMassMessageShrinkRequest() = default;
};
class SendChatappMassMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> groupMessageId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SendChatappMassMessageResponseBody() {}

  explicit SendChatappMassMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (groupMessageId) {
      res["GroupMessageId"] = boost::any(*groupMessageId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("GroupMessageId") != m.end() && !m["GroupMessageId"].empty()) {
      groupMessageId = make_shared<string>(boost::any_cast<string>(m["GroupMessageId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendChatappMassMessageResponseBody() = default;
};
class SendChatappMassMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendChatappMassMessageResponseBody> body{};

  SendChatappMassMessageResponse() {}

  explicit SendChatappMassMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendChatappMassMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendChatappMassMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendChatappMassMessageResponse() = default;
};
class SendChatappMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> content{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> messageType{};
  shared_ptr<vector<string>> payload{};
  shared_ptr<string> templateCode{};
  shared_ptr<map<string, string>> templateParams{};
  shared_ptr<string> to{};
  shared_ptr<string> type{};

  SendChatappMessageRequest() {}

  explicit SendChatappMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (payload) {
      res["Payload"] = boost::any(*payload);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParams) {
      res["TemplateParams"] = boost::any(*templateParams);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Payload"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Payload"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      payload = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["TemplateParams"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      templateParams = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SendChatappMessageRequest() = default;
};
class SendChatappMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> content{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> messageType{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParamsShrink{};
  shared_ptr<string> to{};
  shared_ptr<string> type{};

  SendChatappMessageShrinkRequest() {}

  explicit SendChatappMessageShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channelType) {
      res["ChannelType"] = boost::any(*channelType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackId) {
      res["FallBackId"] = boost::any(*fallBackId);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (messageType) {
      res["MessageType"] = boost::any(*messageType);
    }
    if (payloadShrink) {
      res["Payload"] = boost::any(*payloadShrink);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateParamsShrink) {
      res["TemplateParams"] = boost::any(*templateParamsShrink);
    }
    if (to) {
      res["To"] = boost::any(*to);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackId") != m.end() && !m["FallBackId"].empty()) {
      fallBackId = make_shared<string>(boost::any_cast<string>(m["FallBackId"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("MessageType") != m.end() && !m["MessageType"].empty()) {
      messageType = make_shared<string>(boost::any_cast<string>(m["MessageType"]));
    }
    if (m.find("Payload") != m.end() && !m["Payload"].empty()) {
      payloadShrink = make_shared<string>(boost::any_cast<string>(m["Payload"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateParams") != m.end() && !m["TemplateParams"].empty()) {
      templateParamsShrink = make_shared<string>(boost::any_cast<string>(m["TemplateParams"]));
    }
    if (m.find("To") != m.end() && !m["To"].empty()) {
      to = make_shared<string>(boost::any_cast<string>(m["To"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~SendChatappMessageShrinkRequest() = default;
};
class SendChatappMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> messageId{};
  shared_ptr<string> requestId{};

  SendChatappMessageResponseBody() {}

  explicit SendChatappMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (messageId) {
      res["MessageId"] = boost::any(*messageId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
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
    if (m.find("MessageId") != m.end() && !m["MessageId"].empty()) {
      messageId = make_shared<string>(boost::any_cast<string>(m["MessageId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SendChatappMessageResponseBody() = default;
};
class SendChatappMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SendChatappMessageResponseBody> body{};

  SendChatappMessageResponse() {}

  explicit SendChatappMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SendChatappMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SendChatappMessageResponseBody>(model1);
      }
    }
  }


  virtual ~SendChatappMessageResponse() = default;
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
  BeeBotAssociateResponse beeBotAssociateWithOptions(shared_ptr<BeeBotAssociateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BeeBotAssociateResponse beeBotAssociate(shared_ptr<BeeBotAssociateRequest> request);
  BeeBotChatResponse beeBotChatWithOptions(shared_ptr<BeeBotChatRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BeeBotChatResponse beeBotChat(shared_ptr<BeeBotChatRequest> request);
  CreateChatappTemplateResponse createChatappTemplateWithOptions(shared_ptr<CreateChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatappTemplateResponse createChatappTemplate(shared_ptr<CreateChatappTemplateRequest> request);
  DeleteChatappTemplateResponse deleteChatappTemplateWithOptions(shared_ptr<DeleteChatappTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChatappTemplateResponse deleteChatappTemplate(shared_ptr<DeleteChatappTemplateRequest> request);
  GetChatappTemplateDetailResponse getChatappTemplateDetailWithOptions(shared_ptr<GetChatappTemplateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappTemplateDetailResponse getChatappTemplateDetail(shared_ptr<GetChatappTemplateDetailRequest> request);
  ListChatappTemplateResponse listChatappTemplateWithOptions(shared_ptr<ListChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatappTemplateResponse listChatappTemplate(shared_ptr<ListChatappTemplateRequest> request);
  ModifyChatappTemplateResponse modifyChatappTemplateWithOptions(shared_ptr<ModifyChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyChatappTemplateResponse modifyChatappTemplate(shared_ptr<ModifyChatappTemplateRequest> request);
  SendChatappMassMessageResponse sendChatappMassMessageWithOptions(shared_ptr<SendChatappMassMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendChatappMassMessageResponse sendChatappMassMessage(shared_ptr<SendChatappMassMessageRequest> request);
  SendChatappMessageResponse sendChatappMessageWithOptions(shared_ptr<SendChatappMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendChatappMessageResponse sendChatappMessage(shared_ptr<SendChatappMessageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cams20200606

#endif
