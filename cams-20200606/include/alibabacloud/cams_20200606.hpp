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
class AddChatappPhoneNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> cc{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> preValidateId{};
  shared_ptr<string> verifiedName{};

  AddChatappPhoneNumberRequest() {}

  explicit AddChatappPhoneNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cc) {
      res["Cc"] = boost::any(*cc);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (preValidateId) {
      res["PreValidateId"] = boost::any(*preValidateId);
    }
    if (verifiedName) {
      res["VerifiedName"] = boost::any(*verifiedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cc") != m.end() && !m["Cc"].empty()) {
      cc = make_shared<string>(boost::any_cast<string>(m["Cc"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PreValidateId") != m.end() && !m["PreValidateId"].empty()) {
      preValidateId = make_shared<string>(boost::any_cast<string>(m["PreValidateId"]));
    }
    if (m.find("VerifiedName") != m.end() && !m["VerifiedName"].empty()) {
      verifiedName = make_shared<string>(boost::any_cast<string>(m["VerifiedName"]));
    }
  }


  virtual ~AddChatappPhoneNumberRequest() = default;
};
class AddChatappPhoneNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AddChatappPhoneNumberResponseBody() {}

  explicit AddChatappPhoneNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~AddChatappPhoneNumberResponseBody() = default;
};
class AddChatappPhoneNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddChatappPhoneNumberResponseBody> body{};

  AddChatappPhoneNumberResponse() {}

  explicit AddChatappPhoneNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddChatappPhoneNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddChatappPhoneNumberResponseBody>(model1);
      }
    }
  }


  virtual ~AddChatappPhoneNumberResponse() = default;
};
class BeeBotAssociateRequest : public Darabonba::Model {
public:
  shared_ptr<string> chatBotInstanceId{};
  shared_ptr<string> custSpaceId{};
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
    if (chatBotInstanceId) {
      res["ChatBotInstanceId"] = boost::any(*chatBotInstanceId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (m.find("ChatBotInstanceId") != m.end() && !m["ChatBotInstanceId"].empty()) {
      chatBotInstanceId = make_shared<string>(boost::any_cast<string>(m["ChatBotInstanceId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
  shared_ptr<string> chatBotInstanceId{};
  shared_ptr<string> custSpaceId{};
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
    if (chatBotInstanceId) {
      res["ChatBotInstanceId"] = boost::any(*chatBotInstanceId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (m.find("ChatBotInstanceId") != m.end() && !m["ChatBotInstanceId"].empty()) {
      chatBotInstanceId = make_shared<string>(boost::any_cast<string>(m["ChatBotInstanceId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
  shared_ptr<string> accessDeniedDetail{};
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
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
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
  shared_ptr<string> chatBotInstanceId{};
  shared_ptr<string> custSpaceId{};
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
    if (chatBotInstanceId) {
      res["ChatBotInstanceId"] = boost::any(*chatBotInstanceId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (m.find("ChatBotInstanceId") != m.end() && !m["ChatBotInstanceId"].empty()) {
      chatBotInstanceId = make_shared<string>(boost::any_cast<string>(m["ChatBotInstanceId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
  shared_ptr<string> chatBotInstanceId{};
  shared_ptr<string> custSpaceId{};
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
    if (chatBotInstanceId) {
      res["ChatBotInstanceId"] = boost::any(*chatBotInstanceId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (m.find("ChatBotInstanceId") != m.end() && !m["ChatBotInstanceId"].empty()) {
      chatBotInstanceId = make_shared<string>(boost::any_cast<string>(m["ChatBotInstanceId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
  shared_ptr<string> accessDeniedDetail{};
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
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
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
class ChatappBindWabaRequest : public Darabonba::Model {
public:
  shared_ptr<string> wabaId{};

  ChatappBindWabaRequest() {}

  explicit ChatappBindWabaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~ChatappBindWabaRequest() = default;
};
class ChatappBindWabaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> wabaId{};

  ChatappBindWabaResponseBodyData() {}

  explicit ChatappBindWabaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~ChatappBindWabaResponseBodyData() = default;
};
class ChatappBindWabaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ChatappBindWabaResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChatappBindWabaResponseBody() {}

  explicit ChatappBindWabaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ChatappBindWabaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChatappBindWabaResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChatappBindWabaResponseBody() = default;
};
class ChatappBindWabaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappBindWabaResponseBody> body{};

  ChatappBindWabaResponse() {}

  explicit ChatappBindWabaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatappBindWabaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappBindWabaResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappBindWabaResponse() = default;
};
class ChatappEmbedSignUpRequest : public Darabonba::Model {
public:
  shared_ptr<string> inputToken{};

  ChatappEmbedSignUpRequest() {}

  explicit ChatappEmbedSignUpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputToken) {
      res["InputToken"] = boost::any(*inputToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputToken") != m.end() && !m["InputToken"].empty()) {
      inputToken = make_shared<string>(boost::any_cast<string>(m["InputToken"]));
    }
  }


  virtual ~ChatappEmbedSignUpRequest() = default;
};
class ChatappEmbedSignUpResponseBodyWabas : public Darabonba::Model {
public:
  shared_ptr<string> accountReviewStatus{};
  shared_ptr<string> currency{};
  shared_ptr<string> id{};
  shared_ptr<string> messageTemplateNamespace{};
  shared_ptr<string> name{};

  ChatappEmbedSignUpResponseBodyWabas() {}

  explicit ChatappEmbedSignUpResponseBodyWabas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountReviewStatus) {
      res["AccountReviewStatus"] = boost::any(*accountReviewStatus);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (messageTemplateNamespace) {
      res["MessageTemplateNamespace"] = boost::any(*messageTemplateNamespace);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountReviewStatus") != m.end() && !m["AccountReviewStatus"].empty()) {
      accountReviewStatus = make_shared<string>(boost::any_cast<string>(m["AccountReviewStatus"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MessageTemplateNamespace") != m.end() && !m["MessageTemplateNamespace"].empty()) {
      messageTemplateNamespace = make_shared<string>(boost::any_cast<string>(m["MessageTemplateNamespace"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ChatappEmbedSignUpResponseBodyWabas() = default;
};
class ChatappEmbedSignUpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ChatappEmbedSignUpResponseBodyWabas>> wabas{};

  ChatappEmbedSignUpResponseBody() {}

  explicit ChatappEmbedSignUpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    if (wabas) {
      vector<boost::any> temp1;
      for(auto item1:*wabas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Wabas"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
    if (m.find("Wabas") != m.end() && !m["Wabas"].empty()) {
      if (typeid(vector<boost::any>) == m["Wabas"].type()) {
        vector<ChatappEmbedSignUpResponseBodyWabas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Wabas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatappEmbedSignUpResponseBodyWabas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wabas = make_shared<vector<ChatappEmbedSignUpResponseBodyWabas>>(expect1);
      }
    }
  }


  virtual ~ChatappEmbedSignUpResponseBody() = default;
};
class ChatappEmbedSignUpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappEmbedSignUpResponseBody> body{};

  ChatappEmbedSignUpResponse() {}

  explicit ChatappEmbedSignUpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatappEmbedSignUpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappEmbedSignUpResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappEmbedSignUpResponse() = default;
};
class ChatappMigrationRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> phoneNumber{};

  ChatappMigrationRegisterRequest() {}

  explicit ChatappMigrationRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~ChatappMigrationRegisterRequest() = default;
};
class ChatappMigrationRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChatappMigrationRegisterResponseBody() {}

  explicit ChatappMigrationRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~ChatappMigrationRegisterResponseBody() = default;
};
class ChatappMigrationRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappMigrationRegisterResponseBody> body{};

  ChatappMigrationRegisterResponse() {}

  explicit ChatappMigrationRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatappMigrationRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappMigrationRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappMigrationRegisterResponse() = default;
};
class ChatappMigrationVerifiedRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> verifyCode{};

  ChatappMigrationVerifiedRequest() {}

  explicit ChatappMigrationVerifiedRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~ChatappMigrationVerifiedRequest() = default;
};
class ChatappMigrationVerifiedResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> phoneNumber{};

  ChatappMigrationVerifiedResponseBodyData() {}

  explicit ChatappMigrationVerifiedResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~ChatappMigrationVerifiedResponseBodyData() = default;
};
class ChatappMigrationVerifiedResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<ChatappMigrationVerifiedResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChatappMigrationVerifiedResponseBody() {}

  explicit ChatappMigrationVerifiedResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ChatappMigrationVerifiedResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ChatappMigrationVerifiedResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChatappMigrationVerifiedResponseBody() = default;
};
class ChatappMigrationVerifiedResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappMigrationVerifiedResponseBody> body{};

  ChatappMigrationVerifiedResponse() {}

  explicit ChatappMigrationVerifiedResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatappMigrationVerifiedResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappMigrationVerifiedResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappMigrationVerifiedResponse() = default;
};
class ChatappPhoneNumberDeregisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> phoneNumber{};

  ChatappPhoneNumberDeregisterRequest() {}

  explicit ChatappPhoneNumberDeregisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~ChatappPhoneNumberDeregisterRequest() = default;
};
class ChatappPhoneNumberDeregisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChatappPhoneNumberDeregisterResponseBody() {}

  explicit ChatappPhoneNumberDeregisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~ChatappPhoneNumberDeregisterResponseBody() = default;
};
class ChatappPhoneNumberDeregisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappPhoneNumberDeregisterResponseBody> body{};

  ChatappPhoneNumberDeregisterResponse() {}

  explicit ChatappPhoneNumberDeregisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatappPhoneNumberDeregisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappPhoneNumberDeregisterResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappPhoneNumberDeregisterResponse() = default;
};
class ChatappPhoneNumberRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> phoneNumber{};

  ChatappPhoneNumberRegisterRequest() {}

  explicit ChatappPhoneNumberRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~ChatappPhoneNumberRegisterRequest() = default;
};
class ChatappPhoneNumberRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChatappPhoneNumberRegisterResponseBody() {}

  explicit ChatappPhoneNumberRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~ChatappPhoneNumberRegisterResponseBody() = default;
};
class ChatappPhoneNumberRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappPhoneNumberRegisterResponseBody> body{};

  ChatappPhoneNumberRegisterResponse() {}

  explicit ChatappPhoneNumberRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatappPhoneNumberRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappPhoneNumberRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappPhoneNumberRegisterResponse() = default;
};
class ChatappSyncPhoneNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};

  ChatappSyncPhoneNumberRequest() {}

  explicit ChatappSyncPhoneNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
  }


  virtual ~ChatappSyncPhoneNumberRequest() = default;
};
class ChatappSyncPhoneNumberResponseBodyPhoneNumbers : public Darabonba::Model {
public:
  shared_ptr<string> codeVerificationStatus{};
  shared_ptr<string> messagingLimitTier{};
  shared_ptr<string> nameStatus{};
  shared_ptr<string> newNameStatus{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> qualityRating{};
  shared_ptr<string> status{};
  shared_ptr<string> statusCallbackUrl{};
  shared_ptr<string> statusQueue{};
  shared_ptr<string> upCallbackUrl{};
  shared_ptr<string> upQueue{};
  shared_ptr<string> verifiedName{};

  ChatappSyncPhoneNumberResponseBodyPhoneNumbers() {}

  explicit ChatappSyncPhoneNumberResponseBodyPhoneNumbers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeVerificationStatus) {
      res["CodeVerificationStatus"] = boost::any(*codeVerificationStatus);
    }
    if (messagingLimitTier) {
      res["MessagingLimitTier"] = boost::any(*messagingLimitTier);
    }
    if (nameStatus) {
      res["NameStatus"] = boost::any(*nameStatus);
    }
    if (newNameStatus) {
      res["NewNameStatus"] = boost::any(*newNameStatus);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (qualityRating) {
      res["QualityRating"] = boost::any(*qualityRating);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusCallbackUrl) {
      res["StatusCallbackUrl"] = boost::any(*statusCallbackUrl);
    }
    if (statusQueue) {
      res["StatusQueue"] = boost::any(*statusQueue);
    }
    if (upCallbackUrl) {
      res["UpCallbackUrl"] = boost::any(*upCallbackUrl);
    }
    if (upQueue) {
      res["UpQueue"] = boost::any(*upQueue);
    }
    if (verifiedName) {
      res["VerifiedName"] = boost::any(*verifiedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeVerificationStatus") != m.end() && !m["CodeVerificationStatus"].empty()) {
      codeVerificationStatus = make_shared<string>(boost::any_cast<string>(m["CodeVerificationStatus"]));
    }
    if (m.find("MessagingLimitTier") != m.end() && !m["MessagingLimitTier"].empty()) {
      messagingLimitTier = make_shared<string>(boost::any_cast<string>(m["MessagingLimitTier"]));
    }
    if (m.find("NameStatus") != m.end() && !m["NameStatus"].empty()) {
      nameStatus = make_shared<string>(boost::any_cast<string>(m["NameStatus"]));
    }
    if (m.find("NewNameStatus") != m.end() && !m["NewNameStatus"].empty()) {
      newNameStatus = make_shared<string>(boost::any_cast<string>(m["NewNameStatus"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QualityRating") != m.end() && !m["QualityRating"].empty()) {
      qualityRating = make_shared<string>(boost::any_cast<string>(m["QualityRating"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusCallbackUrl") != m.end() && !m["StatusCallbackUrl"].empty()) {
      statusCallbackUrl = make_shared<string>(boost::any_cast<string>(m["StatusCallbackUrl"]));
    }
    if (m.find("StatusQueue") != m.end() && !m["StatusQueue"].empty()) {
      statusQueue = make_shared<string>(boost::any_cast<string>(m["StatusQueue"]));
    }
    if (m.find("UpCallbackUrl") != m.end() && !m["UpCallbackUrl"].empty()) {
      upCallbackUrl = make_shared<string>(boost::any_cast<string>(m["UpCallbackUrl"]));
    }
    if (m.find("UpQueue") != m.end() && !m["UpQueue"].empty()) {
      upQueue = make_shared<string>(boost::any_cast<string>(m["UpQueue"]));
    }
    if (m.find("VerifiedName") != m.end() && !m["VerifiedName"].empty()) {
      verifiedName = make_shared<string>(boost::any_cast<string>(m["VerifiedName"]));
    }
  }


  virtual ~ChatappSyncPhoneNumberResponseBodyPhoneNumbers() = default;
};
class ChatappSyncPhoneNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<ChatappSyncPhoneNumberResponseBodyPhoneNumbers>> phoneNumbers{};
  shared_ptr<string> requestId{};

  ChatappSyncPhoneNumberResponseBody() {}

  explicit ChatappSyncPhoneNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phoneNumbers) {
      vector<boost::any> temp1;
      for(auto item1:*phoneNumbers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PhoneNumbers"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<ChatappSyncPhoneNumberResponseBodyPhoneNumbers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PhoneNumbers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ChatappSyncPhoneNumberResponseBodyPhoneNumbers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        phoneNumbers = make_shared<vector<ChatappSyncPhoneNumberResponseBodyPhoneNumbers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ChatappSyncPhoneNumberResponseBody() = default;
};
class ChatappSyncPhoneNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappSyncPhoneNumberResponseBody> body{};

  ChatappSyncPhoneNumberResponse() {}

  explicit ChatappSyncPhoneNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatappSyncPhoneNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappSyncPhoneNumberResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappSyncPhoneNumberResponse() = default;
};
class ChatappVerifyAndRegisterRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> verifyCode{};

  ChatappVerifyAndRegisterRequest() {}

  explicit ChatappVerifyAndRegisterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~ChatappVerifyAndRegisterRequest() = default;
};
class ChatappVerifyAndRegisterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ChatappVerifyAndRegisterResponseBody() {}

  explicit ChatappVerifyAndRegisterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~ChatappVerifyAndRegisterResponseBody() = default;
};
class ChatappVerifyAndRegisterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatappVerifyAndRegisterResponseBody> body{};

  ChatappVerifyAndRegisterResponse() {}

  explicit ChatappVerifyAndRegisterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatappVerifyAndRegisterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatappVerifyAndRegisterResponseBody>(model1);
      }
    }
  }


  virtual ~ChatappVerifyAndRegisterResponse() = default;
};
class CreateChatappMigrationInitiateRequest : public Darabonba::Model {
public:
  shared_ptr<string> countryCode{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> mobileNumber{};

  CreateChatappMigrationInitiateRequest() {}

  explicit CreateChatappMigrationInitiateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (countryCode) {
      res["CountryCode"] = boost::any(*countryCode);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (mobileNumber) {
      res["MobileNumber"] = boost::any(*mobileNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CountryCode") != m.end() && !m["CountryCode"].empty()) {
      countryCode = make_shared<string>(boost::any_cast<string>(m["CountryCode"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("MobileNumber") != m.end() && !m["MobileNumber"].empty()) {
      mobileNumber = make_shared<string>(boost::any_cast<string>(m["MobileNumber"]));
    }
  }


  virtual ~CreateChatappMigrationInitiateRequest() = default;
};
class CreateChatappMigrationInitiateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> status{};

  CreateChatappMigrationInitiateResponseBodyData() {}

  explicit CreateChatappMigrationInitiateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateChatappMigrationInitiateResponseBodyData() = default;
};
class CreateChatappMigrationInitiateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<CreateChatappMigrationInitiateResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  CreateChatappMigrationInitiateResponseBody() {}

  explicit CreateChatappMigrationInitiateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateChatappMigrationInitiateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateChatappMigrationInitiateResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateChatappMigrationInitiateResponseBody() = default;
};
class CreateChatappMigrationInitiateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateChatappMigrationInitiateResponseBody> body{};

  CreateChatappMigrationInitiateResponse() {}

  explicit CreateChatappMigrationInitiateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateChatappMigrationInitiateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateChatappMigrationInitiateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateChatappMigrationInitiateResponse() = default;
};
class CreateChatappTemplateRequestComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> autofillText{};
  shared_ptr<bool> isOptOut{};
  shared_ptr<string> packageName{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> signatureHash{};
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
    if (autofillText) {
      res["AutofillText"] = boost::any(*autofillText);
    }
    if (isOptOut) {
      res["IsOptOut"] = boost::any(*isOptOut);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (signatureHash) {
      res["SignatureHash"] = boost::any(*signatureHash);
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
    if (m.find("AutofillText") != m.end() && !m["AutofillText"].empty()) {
      autofillText = make_shared<string>(boost::any_cast<string>(m["AutofillText"]));
    }
    if (m.find("IsOptOut") != m.end() && !m["IsOptOut"].empty()) {
      isOptOut = make_shared<bool>(boost::any_cast<bool>(m["IsOptOut"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SignatureHash") != m.end() && !m["SignatureHash"].empty()) {
      signatureHash = make_shared<string>(boost::any_cast<string>(m["SignatureHash"]));
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
  shared_ptr<bool> addSecretRecommendation{};
  shared_ptr<vector<CreateChatappTemplateRequestComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<long> codeExpirationMinutes{};
  shared_ptr<long> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> thumbUrl{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  CreateChatappTemplateRequestComponents() {}

  explicit CreateChatappTemplateRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addSecretRecommendation) {
      res["AddSecretRecommendation"] = boost::any(*addSecretRecommendation);
    }
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
    if (codeExpirationMinutes) {
      res["CodeExpirationMinutes"] = boost::any(*codeExpirationMinutes);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (thumbUrl) {
      res["ThumbUrl"] = boost::any(*thumbUrl);
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
    if (m.find("AddSecretRecommendation") != m.end() && !m["AddSecretRecommendation"].empty()) {
      addSecretRecommendation = make_shared<bool>(boost::any_cast<bool>(m["AddSecretRecommendation"]));
    }
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
    if (m.find("CodeExpirationMinutes") != m.end() && !m["CodeExpirationMinutes"].empty()) {
      codeExpirationMinutes = make_shared<long>(boost::any_cast<long>(m["CodeExpirationMinutes"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("ThumbUrl") != m.end() && !m["ThumbUrl"].empty()) {
      thumbUrl = make_shared<string>(boost::any_cast<string>(m["ThumbUrl"]));
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
  shared_ptr<bool> allowCategoryChange{};
  shared_ptr<string> category{};
  shared_ptr<vector<CreateChatappTemplateRequestComponents>> components{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> name{};
  shared_ptr<string> templateType{};

  CreateChatappTemplateRequest() {}

  explicit CreateChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCategoryChange) {
      res["AllowCategoryChange"] = boost::any(*allowCategoryChange);
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
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
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
    if (m.find("AllowCategoryChange") != m.end() && !m["AllowCategoryChange"].empty()) {
      allowCategoryChange = make_shared<bool>(boost::any_cast<bool>(m["AllowCategoryChange"]));
    }
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
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
  shared_ptr<bool> allowCategoryChange{};
  shared_ptr<string> category{};
  shared_ptr<string> componentsShrink{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> exampleShrink{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> name{};
  shared_ptr<string> templateType{};

  CreateChatappTemplateShrinkRequest() {}

  explicit CreateChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (allowCategoryChange) {
      res["AllowCategoryChange"] = boost::any(*allowCategoryChange);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (componentsShrink) {
      res["Components"] = boost::any(*componentsShrink);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
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
    if (m.find("AllowCategoryChange") != m.end() && !m["AllowCategoryChange"].empty()) {
      allowCategoryChange = make_shared<bool>(boost::any_cast<bool>(m["AllowCategoryChange"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Components") != m.end() && !m["Components"].empty()) {
      componentsShrink = make_shared<string>(boost::any_cast<string>(m["Components"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
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
  shared_ptr<string> accessDeniedDetail{};
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
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
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
  shared_ptr<string> custSpaceId{};
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
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
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
  shared_ptr<string> accessDeniedDetail{};
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
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
class EnableWhatsappROIMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> isvCode{};

  EnableWhatsappROIMetricRequest() {}

  explicit EnableWhatsappROIMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
  }


  virtual ~EnableWhatsappROIMetricRequest() = default;
};
class EnableWhatsappROIMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  EnableWhatsappROIMetricResponseBody() {}

  explicit EnableWhatsappROIMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~EnableWhatsappROIMetricResponseBody() = default;
};
class EnableWhatsappROIMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableWhatsappROIMetricResponseBody> body{};

  EnableWhatsappROIMetricResponse() {}

  explicit EnableWhatsappROIMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableWhatsappROIMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableWhatsappROIMetricResponseBody>(model1);
      }
    }
  }


  virtual ~EnableWhatsappROIMetricResponse() = default;
};
class GetChatappPhoneNumberMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> end{};
  shared_ptr<string> granularity{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<long> start{};

  GetChatappPhoneNumberMetricRequest() {}

  explicit GetChatappPhoneNumberMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~GetChatappPhoneNumberMetricRequest() = default;
};
class GetChatappPhoneNumberMetricResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> deliveredCount{};
  shared_ptr<long> end{};
  shared_ptr<string> granularity{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<long> sentCount{};
  shared_ptr<long> start{};

  GetChatappPhoneNumberMetricResponseBodyData() {}

  explicit GetChatappPhoneNumberMetricResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deliveredCount) {
      res["DeliveredCount"] = boost::any(*deliveredCount);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (sentCount) {
      res["SentCount"] = boost::any(*sentCount);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DeliveredCount") != m.end() && !m["DeliveredCount"].empty()) {
      deliveredCount = make_shared<long>(boost::any_cast<long>(m["DeliveredCount"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SentCount") != m.end() && !m["SentCount"].empty()) {
      sentCount = make_shared<long>(boost::any_cast<long>(m["SentCount"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
  }


  virtual ~GetChatappPhoneNumberMetricResponseBodyData() = default;
};
class GetChatappPhoneNumberMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<GetChatappPhoneNumberMetricResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappPhoneNumberMetricResponseBody() {}

  explicit GetChatappPhoneNumberMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetChatappPhoneNumberMetricResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappPhoneNumberMetricResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetChatappPhoneNumberMetricResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetChatappPhoneNumberMetricResponseBody() = default;
};
class GetChatappPhoneNumberMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappPhoneNumberMetricResponseBody> body{};

  GetChatappPhoneNumberMetricResponse() {}

  explicit GetChatappPhoneNumberMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatappPhoneNumberMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappPhoneNumberMetricResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappPhoneNumberMetricResponse() = default;
};
class GetChatappTemplateDetailRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateType{};

  GetChatappTemplateDetailRequest() {}

  explicit GetChatappTemplateDetailRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~GetChatappTemplateDetailRequest() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> intentCode{};
  shared_ptr<string> nextLanguageCode{};
  shared_ptr<string> nextTemplateCode{};
  shared_ptr<string> nextTemplateName{};

  GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (intentCode) {
      res["IntentCode"] = boost::any(*intentCode);
    }
    if (nextLanguageCode) {
      res["NextLanguageCode"] = boost::any(*nextLanguageCode);
    }
    if (nextTemplateCode) {
      res["NextTemplateCode"] = boost::any(*nextTemplateCode);
    }
    if (nextTemplateName) {
      res["NextTemplateName"] = boost::any(*nextTemplateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("IntentCode") != m.end() && !m["IntentCode"].empty()) {
      intentCode = make_shared<string>(boost::any_cast<string>(m["IntentCode"]));
    }
    if (m.find("NextLanguageCode") != m.end() && !m["NextLanguageCode"].empty()) {
      nextLanguageCode = make_shared<string>(boost::any_cast<string>(m["NextLanguageCode"]));
    }
    if (m.find("NextTemplateCode") != m.end() && !m["NextTemplateCode"].empty()) {
      nextTemplateCode = make_shared<string>(boost::any_cast<string>(m["NextTemplateCode"]));
    }
    if (m.find("NextTemplateName") != m.end() && !m["NextTemplateName"].empty()) {
      nextTemplateName = make_shared<string>(boost::any_cast<string>(m["NextTemplateName"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs() = default;
};
class GetChatappTemplateDetailResponseBodyDataComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> autofillText{};
  shared_ptr<GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs> extendAttrs{};
  shared_ptr<bool> isOptOut{};
  shared_ptr<string> packageName{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> signatureHash{};
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
    if (autofillText) {
      res["AutofillText"] = boost::any(*autofillText);
    }
    if (extendAttrs) {
      res["ExtendAttrs"] = extendAttrs ? boost::any(extendAttrs->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (isOptOut) {
      res["IsOptOut"] = boost::any(*isOptOut);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (signatureHash) {
      res["SignatureHash"] = boost::any(*signatureHash);
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
    if (m.find("AutofillText") != m.end() && !m["AutofillText"].empty()) {
      autofillText = make_shared<string>(boost::any_cast<string>(m["AutofillText"]));
    }
    if (m.find("ExtendAttrs") != m.end() && !m["ExtendAttrs"].empty()) {
      if (typeid(map<string, boost::any>) == m["ExtendAttrs"].type()) {
        GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ExtendAttrs"]));
        extendAttrs = make_shared<GetChatappTemplateDetailResponseBodyDataComponentsButtonsExtendAttrs>(model1);
      }
    }
    if (m.find("IsOptOut") != m.end() && !m["IsOptOut"].empty()) {
      isOptOut = make_shared<bool>(boost::any_cast<bool>(m["IsOptOut"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SignatureHash") != m.end() && !m["SignatureHash"].empty()) {
      signatureHash = make_shared<string>(boost::any_cast<string>(m["SignatureHash"]));
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
  shared_ptr<bool> addSecretRecommendation{};
  shared_ptr<vector<GetChatappTemplateDetailResponseBodyDataComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<long> codeExpirationMinutes{};
  shared_ptr<long> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> format{};
  shared_ptr<string> latitude{};
  shared_ptr<string> locationAddress{};
  shared_ptr<string> locationName{};
  shared_ptr<string> longitude{};
  shared_ptr<string> text{};
  shared_ptr<string> thumbUrl{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  GetChatappTemplateDetailResponseBodyDataComponents() {}

  explicit GetChatappTemplateDetailResponseBodyDataComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addSecretRecommendation) {
      res["AddSecretRecommendation"] = boost::any(*addSecretRecommendation);
    }
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
    if (codeExpirationMinutes) {
      res["CodeExpirationMinutes"] = boost::any(*codeExpirationMinutes);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (latitude) {
      res["Latitude"] = boost::any(*latitude);
    }
    if (locationAddress) {
      res["LocationAddress"] = boost::any(*locationAddress);
    }
    if (locationName) {
      res["LocationName"] = boost::any(*locationName);
    }
    if (longitude) {
      res["Longitude"] = boost::any(*longitude);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (thumbUrl) {
      res["ThumbUrl"] = boost::any(*thumbUrl);
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
    if (m.find("AddSecretRecommendation") != m.end() && !m["AddSecretRecommendation"].empty()) {
      addSecretRecommendation = make_shared<bool>(boost::any_cast<bool>(m["AddSecretRecommendation"]));
    }
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
    if (m.find("CodeExpirationMinutes") != m.end() && !m["CodeExpirationMinutes"].empty()) {
      codeExpirationMinutes = make_shared<long>(boost::any_cast<long>(m["CodeExpirationMinutes"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Latitude") != m.end() && !m["Latitude"].empty()) {
      latitude = make_shared<string>(boost::any_cast<string>(m["Latitude"]));
    }
    if (m.find("LocationAddress") != m.end() && !m["LocationAddress"].empty()) {
      locationAddress = make_shared<string>(boost::any_cast<string>(m["LocationAddress"]));
    }
    if (m.find("LocationName") != m.end() && !m["LocationName"].empty()) {
      locationName = make_shared<string>(boost::any_cast<string>(m["LocationName"]));
    }
    if (m.find("Longitude") != m.end() && !m["Longitude"].empty()) {
      longitude = make_shared<string>(boost::any_cast<string>(m["Longitude"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("ThumbUrl") != m.end() && !m["ThumbUrl"].empty()) {
      thumbUrl = make_shared<string>(boost::any_cast<string>(m["ThumbUrl"]));
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
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> name{};
  shared_ptr<string> qualityScore{};
  shared_ptr<string> reason{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateType{};

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
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (qualityScore) {
      res["QualityScore"] = boost::any(*qualityScore);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
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
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("QualityScore") != m.end() && !m["QualityScore"].empty()) {
      qualityScore = make_shared<string>(boost::any_cast<string>(m["QualityScore"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~GetChatappTemplateDetailResponseBodyData() = default;
};
class GetChatappTemplateDetailResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
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
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
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
class GetChatappTemplateMetricRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> end{};
  shared_ptr<string> granularity{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> start{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateType{};

  GetChatappTemplateMetricRequest() {}

  explicit GetChatappTemplateMetricRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (granularity) {
      res["Granularity"] = boost::any(*granularity);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Granularity") != m.end() && !m["Granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["Granularity"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~GetChatappTemplateMetricRequest() = default;
};
class GetChatappTemplateMetricResponseBodyDataCliented : public Darabonba::Model {
public:
  shared_ptr<string> buttonContent{};
  shared_ptr<long> count{};
  shared_ptr<string> type{};

  GetChatappTemplateMetricResponseBodyDataCliented() {}

  explicit GetChatappTemplateMetricResponseBodyDataCliented(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buttonContent) {
      res["ButtonContent"] = boost::any(*buttonContent);
    }
    if (count) {
      res["Count"] = boost::any(*count);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ButtonContent") != m.end() && !m["ButtonContent"].empty()) {
      buttonContent = make_shared<string>(boost::any_cast<string>(m["ButtonContent"]));
    }
    if (m.find("Count") != m.end() && !m["Count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["Count"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~GetChatappTemplateMetricResponseBodyDataCliented() = default;
};
class GetChatappTemplateMetricResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetChatappTemplateMetricResponseBodyDataCliented>> cliented{};
  shared_ptr<long> deliveredCount{};
  shared_ptr<long> end{};
  shared_ptr<string> language{};
  shared_ptr<long> readCount{};
  shared_ptr<long> sentCount{};
  shared_ptr<long> start{};
  shared_ptr<string> templateCode{};

  GetChatappTemplateMetricResponseBodyData() {}

  explicit GetChatappTemplateMetricResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cliented) {
      vector<boost::any> temp1;
      for(auto item1:*cliented){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Cliented"] = boost::any(temp1);
    }
    if (deliveredCount) {
      res["DeliveredCount"] = boost::any(*deliveredCount);
    }
    if (end) {
      res["End"] = boost::any(*end);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (readCount) {
      res["ReadCount"] = boost::any(*readCount);
    }
    if (sentCount) {
      res["SentCount"] = boost::any(*sentCount);
    }
    if (start) {
      res["Start"] = boost::any(*start);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cliented") != m.end() && !m["Cliented"].empty()) {
      if (typeid(vector<boost::any>) == m["Cliented"].type()) {
        vector<GetChatappTemplateMetricResponseBodyDataCliented> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Cliented"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateMetricResponseBodyDataCliented model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        cliented = make_shared<vector<GetChatappTemplateMetricResponseBodyDataCliented>>(expect1);
      }
    }
    if (m.find("DeliveredCount") != m.end() && !m["DeliveredCount"].empty()) {
      deliveredCount = make_shared<long>(boost::any_cast<long>(m["DeliveredCount"]));
    }
    if (m.find("End") != m.end() && !m["End"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["End"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("ReadCount") != m.end() && !m["ReadCount"].empty()) {
      readCount = make_shared<long>(boost::any_cast<long>(m["ReadCount"]));
    }
    if (m.find("SentCount") != m.end() && !m["SentCount"].empty()) {
      sentCount = make_shared<long>(boost::any_cast<long>(m["SentCount"]));
    }
    if (m.find("Start") != m.end() && !m["Start"].empty()) {
      start = make_shared<long>(boost::any_cast<long>(m["Start"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
  }


  virtual ~GetChatappTemplateMetricResponseBodyData() = default;
};
class GetChatappTemplateMetricResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<GetChatappTemplateMetricResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappTemplateMetricResponseBody() {}

  explicit GetChatappTemplateMetricResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetChatappTemplateMetricResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetChatappTemplateMetricResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetChatappTemplateMetricResponseBodyData>>(expect1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetChatappTemplateMetricResponseBody() = default;
};
class GetChatappTemplateMetricResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappTemplateMetricResponseBody> body{};

  GetChatappTemplateMetricResponse() {}

  explicit GetChatappTemplateMetricResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatappTemplateMetricResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappTemplateMetricResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappTemplateMetricResponse() = default;
};
class GetChatappUploadAuthorizationRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};

  GetChatappUploadAuthorizationRequest() {}

  explicit GetChatappUploadAuthorizationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
  }


  virtual ~GetChatappUploadAuthorizationRequest() = default;
};
class GetChatappUploadAuthorizationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessKeyId{};
  shared_ptr<string> accessKeySecret{};
  shared_ptr<string> bucketName{};
  shared_ptr<string> dir{};
  shared_ptr<string> endPoint{};
  shared_ptr<long> expire{};
  shared_ptr<string> securityToken{};

  GetChatappUploadAuthorizationResponseBodyData() {}

  explicit GetChatappUploadAuthorizationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (bucketName) {
      res["BucketName"] = boost::any(*bucketName);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (endPoint) {
      res["EndPoint"] = boost::any(*endPoint);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
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
    if (m.find("BucketName") != m.end() && !m["BucketName"].empty()) {
      bucketName = make_shared<string>(boost::any_cast<string>(m["BucketName"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("EndPoint") != m.end() && !m["EndPoint"].empty()) {
      endPoint = make_shared<string>(boost::any_cast<string>(m["EndPoint"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
  }


  virtual ~GetChatappUploadAuthorizationResponseBodyData() = default;
};
class GetChatappUploadAuthorizationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetChatappUploadAuthorizationResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappUploadAuthorizationResponseBody() {}

  explicit GetChatappUploadAuthorizationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetChatappUploadAuthorizationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetChatappUploadAuthorizationResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetChatappUploadAuthorizationResponseBody() = default;
};
class GetChatappUploadAuthorizationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappUploadAuthorizationResponseBody> body{};

  GetChatappUploadAuthorizationResponse() {}

  explicit GetChatappUploadAuthorizationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatappUploadAuthorizationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappUploadAuthorizationResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappUploadAuthorizationResponse() = default;
};
class GetChatappVerifyCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> locale{};
  shared_ptr<string> method{};
  shared_ptr<string> phoneNumber{};

  GetChatappVerifyCodeRequest() {}

  explicit GetChatappVerifyCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~GetChatappVerifyCodeRequest() = default;
};
class GetChatappVerifyCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetChatappVerifyCodeResponseBody() {}

  explicit GetChatappVerifyCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~GetChatappVerifyCodeResponseBody() = default;
};
class GetChatappVerifyCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetChatappVerifyCodeResponseBody> body{};

  GetChatappVerifyCodeResponse() {}

  explicit GetChatappVerifyCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetChatappVerifyCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetChatappVerifyCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetChatappVerifyCodeResponse() = default;
};
class GetMigrationVerifyCodeRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> locale{};
  shared_ptr<string> method{};
  shared_ptr<string> phoneNumber{};

  GetMigrationVerifyCodeRequest() {}

  explicit GetMigrationVerifyCodeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (locale) {
      res["Locale"] = boost::any(*locale);
    }
    if (method) {
      res["Method"] = boost::any(*method);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Locale") != m.end() && !m["Locale"].empty()) {
      locale = make_shared<string>(boost::any_cast<string>(m["Locale"]));
    }
    if (m.find("Method") != m.end() && !m["Method"].empty()) {
      method = make_shared<string>(boost::any_cast<string>(m["Method"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~GetMigrationVerifyCodeRequest() = default;
};
class GetMigrationVerifyCodeResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<string> phoneNumber{};

  GetMigrationVerifyCodeResponseBodyData() {}

  explicit GetMigrationVerifyCodeResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~GetMigrationVerifyCodeResponseBodyData() = default;
};
class GetMigrationVerifyCodeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<GetMigrationVerifyCodeResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetMigrationVerifyCodeResponseBody() {}

  explicit GetMigrationVerifyCodeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetMigrationVerifyCodeResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetMigrationVerifyCodeResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetMigrationVerifyCodeResponseBody() = default;
};
class GetMigrationVerifyCodeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetMigrationVerifyCodeResponseBody> body{};

  GetMigrationVerifyCodeResponse() {}

  explicit GetMigrationVerifyCodeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetMigrationVerifyCodeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetMigrationVerifyCodeResponseBody>(model1);
      }
    }
  }


  virtual ~GetMigrationVerifyCodeResponse() = default;
};
class GetPhoneNumberVerificationStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> phoneNumber{};

  GetPhoneNumberVerificationStatusRequest() {}

  explicit GetPhoneNumberVerificationStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~GetPhoneNumberVerificationStatusRequest() = default;
};
class GetPhoneNumberVerificationStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> codeVerificationStatus{};
  shared_ptr<string> id{};
  shared_ptr<string> phoneNumber{};

  GetPhoneNumberVerificationStatusResponseBodyData() {}

  explicit GetPhoneNumberVerificationStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeVerificationStatus) {
      res["CodeVerificationStatus"] = boost::any(*codeVerificationStatus);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeVerificationStatus") != m.end() && !m["CodeVerificationStatus"].empty()) {
      codeVerificationStatus = make_shared<string>(boost::any_cast<string>(m["CodeVerificationStatus"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~GetPhoneNumberVerificationStatusResponseBodyData() = default;
};
class GetPhoneNumberVerificationStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPhoneNumberVerificationStatusResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPhoneNumberVerificationStatusResponseBody() {}

  explicit GetPhoneNumberVerificationStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPhoneNumberVerificationStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPhoneNumberVerificationStatusResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPhoneNumberVerificationStatusResponseBody() = default;
};
class GetPhoneNumberVerificationStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPhoneNumberVerificationStatusResponseBody> body{};

  GetPhoneNumberVerificationStatusResponse() {}

  explicit GetPhoneNumberVerificationStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPhoneNumberVerificationStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPhoneNumberVerificationStatusResponseBody>(model1);
      }
    }
  }


  virtual ~GetPhoneNumberVerificationStatusResponse() = default;
};
class GetPreValidatePhoneIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> verifyCode{};

  GetPreValidatePhoneIdRequest() {}

  explicit GetPreValidatePhoneIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (verifyCode) {
      res["VerifyCode"] = boost::any(*verifyCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("VerifyCode") != m.end() && !m["VerifyCode"].empty()) {
      verifyCode = make_shared<string>(boost::any_cast<string>(m["VerifyCode"]));
    }
  }


  virtual ~GetPreValidatePhoneIdRequest() = default;
};
class GetPreValidatePhoneIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> phoneNumberId{};

  GetPreValidatePhoneIdResponseBodyData() {}

  explicit GetPreValidatePhoneIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (phoneNumberId) {
      res["PhoneNumberId"] = boost::any(*phoneNumberId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("PhoneNumberId") != m.end() && !m["PhoneNumberId"].empty()) {
      phoneNumberId = make_shared<string>(boost::any_cast<string>(m["PhoneNumberId"]));
    }
  }


  virtual ~GetPreValidatePhoneIdResponseBodyData() = default;
};
class GetPreValidatePhoneIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPreValidatePhoneIdResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetPreValidatePhoneIdResponseBody() {}

  explicit GetPreValidatePhoneIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPreValidatePhoneIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPreValidatePhoneIdResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPreValidatePhoneIdResponseBody() = default;
};
class GetPreValidatePhoneIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPreValidatePhoneIdResponseBody> body{};

  GetPreValidatePhoneIdResponse() {}

  explicit GetPreValidatePhoneIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPreValidatePhoneIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPreValidatePhoneIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetPreValidatePhoneIdResponse() = default;
};
class GetWhatsappConnectionCatalogRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  GetWhatsappConnectionCatalogRequest() {}

  explicit GetWhatsappConnectionCatalogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~GetWhatsappConnectionCatalogRequest() = default;
};
class GetWhatsappConnectionCatalogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<map<string, boost::any>> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetWhatsappConnectionCatalogResponseBody() {}

  explicit GetWhatsappConnectionCatalogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = boost::any(*model);
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      map<string, boost::any> map1 = boost::any_cast<map<string, boost::any>>(m["Model"]);
      map<string, boost::any> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      model = make_shared<map<string, boost::any>>(toMap1);
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetWhatsappConnectionCatalogResponseBody() = default;
};
class GetWhatsappConnectionCatalogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetWhatsappConnectionCatalogResponseBody> body{};

  GetWhatsappConnectionCatalogResponse() {}

  explicit GetWhatsappConnectionCatalogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetWhatsappConnectionCatalogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetWhatsappConnectionCatalogResponseBody>(model1);
      }
    }
  }


  virtual ~GetWhatsappConnectionCatalogResponse() = default;
};
class IsvGetAppIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> type{};

  IsvGetAppIdRequest() {}

  explicit IsvGetAppIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~IsvGetAppIdRequest() = default;
};
class IsvGetAppIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> appId{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  IsvGetAppIdResponseBody() {}

  explicit IsvGetAppIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
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
  }


  virtual ~IsvGetAppIdResponseBody() = default;
};
class IsvGetAppIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<IsvGetAppIdResponseBody> body{};

  IsvGetAppIdResponse() {}

  explicit IsvGetAppIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        IsvGetAppIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<IsvGetAppIdResponseBody>(model1);
      }
    }
  }


  virtual ~IsvGetAppIdResponse() = default;
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
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<ListChatappTemplateRequestPage> page{};
  shared_ptr<string> templateType{};

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
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ListChatappTemplateRequest() = default;
};
class ListChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<string> name{};
  shared_ptr<string> pageShrink{};
  shared_ptr<string> templateType{};

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
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditStatus") != m.end() && !m["AuditStatus"].empty()) {
      auditStatus = make_shared<string>(boost::any_cast<string>(m["AuditStatus"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ListChatappTemplateShrinkRequest() = default;
};
class ListChatappTemplateResponseBodyListTemplate : public Darabonba::Model {
public:
  shared_ptr<string> auditStatus{};
  shared_ptr<string> category{};
  shared_ptr<string> language{};
  shared_ptr<string> reason{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};

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
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
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
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ListChatappTemplateResponseBodyListTemplate() = default;
};
class ListChatappTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<vector<ListChatappTemplateResponseBodyListTemplate>> listTemplate{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListChatappTemplateResponseBody() {}

  explicit ListChatappTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
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
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
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
class ListProductRequest : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> before{};
  shared_ptr<string> catalogId{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> fields{};
  shared_ptr<long> limit{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};
  shared_ptr<string> wabaId{};

  ListProductRequest() {}

  explicit ListProductRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["After"] = boost::any(*after);
    }
    if (before) {
      res["Before"] = boost::any(*before);
    }
    if (catalogId) {
      res["CatalogId"] = boost::any(*catalogId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("After") != m.end() && !m["After"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["After"]));
    }
    if (m.find("Before") != m.end() && !m["Before"].empty()) {
      before = make_shared<string>(boost::any_cast<string>(m["Before"]));
    }
    if (m.find("CatalogId") != m.end() && !m["CatalogId"].empty()) {
      catalogId = make_shared<string>(boost::any_cast<string>(m["CatalogId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      fields = make_shared<string>(boost::any_cast<string>(m["Fields"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~ListProductRequest() = default;
};
class ListProductResponseBodyModelPagingCursors : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> before{};

  ListProductResponseBodyModelPagingCursors() {}

  explicit ListProductResponseBodyModelPagingCursors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["After"] = boost::any(*after);
    }
    if (before) {
      res["Before"] = boost::any(*before);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("After") != m.end() && !m["After"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["After"]));
    }
    if (m.find("Before") != m.end() && !m["Before"].empty()) {
      before = make_shared<string>(boost::any_cast<string>(m["Before"]));
    }
  }


  virtual ~ListProductResponseBodyModelPagingCursors() = default;
};
class ListProductResponseBodyModelPaging : public Darabonba::Model {
public:
  shared_ptr<ListProductResponseBodyModelPagingCursors> cursors{};

  ListProductResponseBodyModelPaging() {}

  explicit ListProductResponseBodyModelPaging(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursors) {
      res["Cursors"] = cursors ? boost::any(cursors->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cursors") != m.end() && !m["Cursors"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cursors"].type()) {
        ListProductResponseBodyModelPagingCursors model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cursors"]));
        cursors = make_shared<ListProductResponseBodyModelPagingCursors>(model1);
      }
    }
  }


  virtual ~ListProductResponseBodyModelPaging() = default;
};
class ListProductResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<ListProductResponseBodyModelPaging> paging{};

  ListProductResponseBodyModel() {}

  explicit ListProductResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (paging) {
      res["Paging"] = paging ? boost::any(paging->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Paging") != m.end() && !m["Paging"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paging"].type()) {
        ListProductResponseBodyModelPaging model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paging"]));
        paging = make_shared<ListProductResponseBodyModelPaging>(model1);
      }
    }
  }


  virtual ~ListProductResponseBodyModel() = default;
};
class ListProductResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ListProductResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListProductResponseBody() {}

  explicit ListProductResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        ListProductResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<ListProductResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListProductResponseBody() = default;
};
class ListProductResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductResponseBody> body{};

  ListProductResponse() {}

  explicit ListProductResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductResponse() = default;
};
class ListProductCatalogRequest : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> before{};
  shared_ptr<long> businessId{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> fields{};
  shared_ptr<long> limit{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> resourceOwnerAccount{};
  shared_ptr<long> resourceOwnerId{};

  ListProductCatalogRequest() {}

  explicit ListProductCatalogRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["After"] = boost::any(*after);
    }
    if (before) {
      res["Before"] = boost::any(*before);
    }
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (fields) {
      res["Fields"] = boost::any(*fields);
    }
    if (limit) {
      res["Limit"] = boost::any(*limit);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (resourceOwnerAccount) {
      res["ResourceOwnerAccount"] = boost::any(*resourceOwnerAccount);
    }
    if (resourceOwnerId) {
      res["ResourceOwnerId"] = boost::any(*resourceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("After") != m.end() && !m["After"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["After"]));
    }
    if (m.find("Before") != m.end() && !m["Before"].empty()) {
      before = make_shared<string>(boost::any_cast<string>(m["Before"]));
    }
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<long>(boost::any_cast<long>(m["BusinessId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      fields = make_shared<string>(boost::any_cast<string>(m["Fields"]));
    }
    if (m.find("Limit") != m.end() && !m["Limit"].empty()) {
      limit = make_shared<long>(boost::any_cast<long>(m["Limit"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("ResourceOwnerAccount") != m.end() && !m["ResourceOwnerAccount"].empty()) {
      resourceOwnerAccount = make_shared<string>(boost::any_cast<string>(m["ResourceOwnerAccount"]));
    }
    if (m.find("ResourceOwnerId") != m.end() && !m["ResourceOwnerId"].empty()) {
      resourceOwnerId = make_shared<long>(boost::any_cast<long>(m["ResourceOwnerId"]));
    }
  }


  virtual ~ListProductCatalogRequest() = default;
};
class ListProductCatalogResponseBodyModelPagingCursors : public Darabonba::Model {
public:
  shared_ptr<string> after{};
  shared_ptr<string> before{};

  ListProductCatalogResponseBodyModelPagingCursors() {}

  explicit ListProductCatalogResponseBodyModelPagingCursors(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (after) {
      res["After"] = boost::any(*after);
    }
    if (before) {
      res["Before"] = boost::any(*before);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("After") != m.end() && !m["After"].empty()) {
      after = make_shared<string>(boost::any_cast<string>(m["After"]));
    }
    if (m.find("Before") != m.end() && !m["Before"].empty()) {
      before = make_shared<string>(boost::any_cast<string>(m["Before"]));
    }
  }


  virtual ~ListProductCatalogResponseBodyModelPagingCursors() = default;
};
class ListProductCatalogResponseBodyModelPaging : public Darabonba::Model {
public:
  shared_ptr<ListProductCatalogResponseBodyModelPagingCursors> cursors{};

  ListProductCatalogResponseBodyModelPaging() {}

  explicit ListProductCatalogResponseBodyModelPaging(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cursors) {
      res["Cursors"] = cursors ? boost::any(cursors->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Cursors") != m.end() && !m["Cursors"].empty()) {
      if (typeid(map<string, boost::any>) == m["Cursors"].type()) {
        ListProductCatalogResponseBodyModelPagingCursors model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Cursors"]));
        cursors = make_shared<ListProductCatalogResponseBodyModelPagingCursors>(model1);
      }
    }
  }


  virtual ~ListProductCatalogResponseBodyModelPaging() = default;
};
class ListProductCatalogResponseBodyModel : public Darabonba::Model {
public:
  shared_ptr<vector<map<string, boost::any>>> data{};
  shared_ptr<ListProductCatalogResponseBodyModelPaging> paging{};

  ListProductCatalogResponseBodyModel() {}

  explicit ListProductCatalogResponseBodyModel(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
    }
    if (paging) {
      res["Paging"] = paging ? boost::any(paging->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Data"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      data = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("Paging") != m.end() && !m["Paging"].empty()) {
      if (typeid(map<string, boost::any>) == m["Paging"].type()) {
        ListProductCatalogResponseBodyModelPaging model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Paging"]));
        paging = make_shared<ListProductCatalogResponseBodyModelPaging>(model1);
      }
    }
  }


  virtual ~ListProductCatalogResponseBodyModel() = default;
};
class ListProductCatalogResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<ListProductCatalogResponseBodyModel> model{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListProductCatalogResponseBody() {}

  explicit ListProductCatalogResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (model) {
      res["Model"] = model ? boost::any(model->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      if (typeid(map<string, boost::any>) == m["Model"].type()) {
        ListProductCatalogResponseBodyModel model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Model"]));
        model = make_shared<ListProductCatalogResponseBodyModel>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ListProductCatalogResponseBody() = default;
};
class ListProductCatalogResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListProductCatalogResponseBody> body{};

  ListProductCatalogResponse() {}

  explicit ListProductCatalogResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListProductCatalogResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListProductCatalogResponseBody>(model1);
      }
    }
  }


  virtual ~ListProductCatalogResponse() = default;
};
class ModifyChatappTemplateRequestComponentsButtons : public Darabonba::Model {
public:
  shared_ptr<string> autofillText{};
  shared_ptr<bool> isOptOut{};
  shared_ptr<string> packageName{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> signatureHash{};
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
    if (autofillText) {
      res["AutofillText"] = boost::any(*autofillText);
    }
    if (isOptOut) {
      res["IsOptOut"] = boost::any(*isOptOut);
    }
    if (packageName) {
      res["PackageName"] = boost::any(*packageName);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (signatureHash) {
      res["SignatureHash"] = boost::any(*signatureHash);
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
    if (m.find("AutofillText") != m.end() && !m["AutofillText"].empty()) {
      autofillText = make_shared<string>(boost::any_cast<string>(m["AutofillText"]));
    }
    if (m.find("IsOptOut") != m.end() && !m["IsOptOut"].empty()) {
      isOptOut = make_shared<bool>(boost::any_cast<bool>(m["IsOptOut"]));
    }
    if (m.find("PackageName") != m.end() && !m["PackageName"].empty()) {
      packageName = make_shared<string>(boost::any_cast<string>(m["PackageName"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("SignatureHash") != m.end() && !m["SignatureHash"].empty()) {
      signatureHash = make_shared<string>(boost::any_cast<string>(m["SignatureHash"]));
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
  shared_ptr<bool> addSecretRecommendation{};
  shared_ptr<vector<ModifyChatappTemplateRequestComponentsButtons>> buttons{};
  shared_ptr<string> caption{};
  shared_ptr<long> codeExpirationMinutes{};
  shared_ptr<long> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> fileType{};
  shared_ptr<string> format{};
  shared_ptr<string> text{};
  shared_ptr<string> thumbUrl{};
  shared_ptr<string> type{};
  shared_ptr<string> url{};

  ModifyChatappTemplateRequestComponents() {}

  explicit ModifyChatappTemplateRequestComponents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (addSecretRecommendation) {
      res["AddSecretRecommendation"] = boost::any(*addSecretRecommendation);
    }
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
    if (codeExpirationMinutes) {
      res["CodeExpirationMinutes"] = boost::any(*codeExpirationMinutes);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (format) {
      res["Format"] = boost::any(*format);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (thumbUrl) {
      res["ThumbUrl"] = boost::any(*thumbUrl);
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
    if (m.find("AddSecretRecommendation") != m.end() && !m["AddSecretRecommendation"].empty()) {
      addSecretRecommendation = make_shared<bool>(boost::any_cast<bool>(m["AddSecretRecommendation"]));
    }
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
    if (m.find("CodeExpirationMinutes") != m.end() && !m["CodeExpirationMinutes"].empty()) {
      codeExpirationMinutes = make_shared<long>(boost::any_cast<long>(m["CodeExpirationMinutes"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<long>(boost::any_cast<long>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("Format") != m.end() && !m["Format"].empty()) {
      format = make_shared<string>(boost::any_cast<string>(m["Format"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("ThumbUrl") != m.end() && !m["ThumbUrl"].empty()) {
      thumbUrl = make_shared<string>(boost::any_cast<string>(m["ThumbUrl"]));
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
  shared_ptr<string> category{};
  shared_ptr<vector<ModifyChatappTemplateRequestComponents>> components{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<map<string, string>> example{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateType{};

  ModifyChatappTemplateRequest() {}

  explicit ModifyChatappTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ModifyChatappTemplateRequest() = default;
};
class ModifyChatappTemplateShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> componentsShrink{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> exampleShrink{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> language{};
  shared_ptr<long> messageSendTtlSeconds{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateType{};

  ModifyChatappTemplateShrinkRequest() {}

  explicit ModifyChatappTemplateShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
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
    if (messageSendTtlSeconds) {
      res["MessageSendTtlSeconds"] = boost::any(*messageSendTtlSeconds);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
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
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
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
    if (m.find("MessageSendTtlSeconds") != m.end() && !m["MessageSendTtlSeconds"].empty()) {
      messageSendTtlSeconds = make_shared<long>(boost::any_cast<long>(m["MessageSendTtlSeconds"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
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
  shared_ptr<string> accessDeniedDetail{};
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
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
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
class ModifyPhoneBusinessProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> description{};
  shared_ptr<string> email{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> profilePictureUrl{};
  shared_ptr<string> vertical{};
  shared_ptr<vector<string>> websites{};

  ModifyPhoneBusinessProfileRequest() {}

  explicit ModifyPhoneBusinessProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (profilePictureUrl) {
      res["ProfilePictureUrl"] = boost::any(*profilePictureUrl);
    }
    if (vertical) {
      res["Vertical"] = boost::any(*vertical);
    }
    if (websites) {
      res["Websites"] = boost::any(*websites);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ProfilePictureUrl") != m.end() && !m["ProfilePictureUrl"].empty()) {
      profilePictureUrl = make_shared<string>(boost::any_cast<string>(m["ProfilePictureUrl"]));
    }
    if (m.find("Vertical") != m.end() && !m["Vertical"].empty()) {
      vertical = make_shared<string>(boost::any_cast<string>(m["Vertical"]));
    }
    if (m.find("Websites") != m.end() && !m["Websites"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Websites"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Websites"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      websites = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ModifyPhoneBusinessProfileRequest() = default;
};
class ModifyPhoneBusinessProfileShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> description{};
  shared_ptr<string> email{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> profilePictureUrl{};
  shared_ptr<string> vertical{};
  shared_ptr<string> websitesShrink{};

  ModifyPhoneBusinessProfileShrinkRequest() {}

  explicit ModifyPhoneBusinessProfileShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (profilePictureUrl) {
      res["ProfilePictureUrl"] = boost::any(*profilePictureUrl);
    }
    if (vertical) {
      res["Vertical"] = boost::any(*vertical);
    }
    if (websitesShrink) {
      res["Websites"] = boost::any(*websitesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("ProfilePictureUrl") != m.end() && !m["ProfilePictureUrl"].empty()) {
      profilePictureUrl = make_shared<string>(boost::any_cast<string>(m["ProfilePictureUrl"]));
    }
    if (m.find("Vertical") != m.end() && !m["Vertical"].empty()) {
      vertical = make_shared<string>(boost::any_cast<string>(m["Vertical"]));
    }
    if (m.find("Websites") != m.end() && !m["Websites"].empty()) {
      websitesShrink = make_shared<string>(boost::any_cast<string>(m["Websites"]));
    }
  }


  virtual ~ModifyPhoneBusinessProfileShrinkRequest() = default;
};
class ModifyPhoneBusinessProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  ModifyPhoneBusinessProfileResponseBody() {}

  explicit ModifyPhoneBusinessProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~ModifyPhoneBusinessProfileResponseBody() = default;
};
class ModifyPhoneBusinessProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyPhoneBusinessProfileResponseBody> body{};

  ModifyPhoneBusinessProfileResponse() {}

  explicit ModifyPhoneBusinessProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyPhoneBusinessProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyPhoneBusinessProfileResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyPhoneBusinessProfileResponse() = default;
};
class QueryChatappBindWabaRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> isvCode{};

  QueryChatappBindWabaRequest() {}

  explicit QueryChatappBindWabaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
  }


  virtual ~QueryChatappBindWabaRequest() = default;
};
class QueryChatappBindWabaResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accountReviewStatus{};
  shared_ptr<string> currency{};
  shared_ptr<string> id{};
  shared_ptr<string> messageTemplateNamespace{};
  shared_ptr<string> name{};

  QueryChatappBindWabaResponseBodyData() {}

  explicit QueryChatappBindWabaResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accountReviewStatus) {
      res["AccountReviewStatus"] = boost::any(*accountReviewStatus);
    }
    if (currency) {
      res["Currency"] = boost::any(*currency);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (messageTemplateNamespace) {
      res["MessageTemplateNamespace"] = boost::any(*messageTemplateNamespace);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccountReviewStatus") != m.end() && !m["AccountReviewStatus"].empty()) {
      accountReviewStatus = make_shared<string>(boost::any_cast<string>(m["AccountReviewStatus"]));
    }
    if (m.find("Currency") != m.end() && !m["Currency"].empty()) {
      currency = make_shared<string>(boost::any_cast<string>(m["Currency"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("MessageTemplateNamespace") != m.end() && !m["MessageTemplateNamespace"].empty()) {
      messageTemplateNamespace = make_shared<string>(boost::any_cast<string>(m["MessageTemplateNamespace"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~QueryChatappBindWabaResponseBodyData() = default;
};
class QueryChatappBindWabaResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<QueryChatappBindWabaResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryChatappBindWabaResponseBody() {}

  explicit QueryChatappBindWabaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryChatappBindWabaResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryChatappBindWabaResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryChatappBindWabaResponseBody() = default;
};
class QueryChatappBindWabaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryChatappBindWabaResponseBody> body{};

  QueryChatappBindWabaResponse() {}

  explicit QueryChatappBindWabaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryChatappBindWabaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryChatappBindWabaResponseBody>(model1);
      }
    }
  }


  virtual ~QueryChatappBindWabaResponse() = default;
};
class QueryChatappPhoneNumbersRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> isvCode{};

  QueryChatappPhoneNumbersRequest() {}

  explicit QueryChatappPhoneNumbersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (isvCode) {
      res["IsvCode"] = boost::any(*isvCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("IsvCode") != m.end() && !m["IsvCode"].empty()) {
      isvCode = make_shared<string>(boost::any_cast<string>(m["IsvCode"]));
    }
  }


  virtual ~QueryChatappPhoneNumbersRequest() = default;
};
class QueryChatappPhoneNumbersResponseBodyPhoneNumbers : public Darabonba::Model {
public:
  shared_ptr<string> codeVerificationStatus{};
  shared_ptr<string> messagingLimitTier{};
  shared_ptr<string> nameStatus{};
  shared_ptr<string> newNameStatus{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> qualityRating{};
  shared_ptr<string> status{};
  shared_ptr<string> statusCallbackUrl{};
  shared_ptr<string> statusQueue{};
  shared_ptr<string> upCallbackUrl{};
  shared_ptr<string> upQueue{};
  shared_ptr<string> verifiedName{};

  QueryChatappPhoneNumbersResponseBodyPhoneNumbers() {}

  explicit QueryChatappPhoneNumbersResponseBodyPhoneNumbers(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (codeVerificationStatus) {
      res["CodeVerificationStatus"] = boost::any(*codeVerificationStatus);
    }
    if (messagingLimitTier) {
      res["MessagingLimitTier"] = boost::any(*messagingLimitTier);
    }
    if (nameStatus) {
      res["NameStatus"] = boost::any(*nameStatus);
    }
    if (newNameStatus) {
      res["NewNameStatus"] = boost::any(*newNameStatus);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (qualityRating) {
      res["QualityRating"] = boost::any(*qualityRating);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusCallbackUrl) {
      res["StatusCallbackUrl"] = boost::any(*statusCallbackUrl);
    }
    if (statusQueue) {
      res["StatusQueue"] = boost::any(*statusQueue);
    }
    if (upCallbackUrl) {
      res["UpCallbackUrl"] = boost::any(*upCallbackUrl);
    }
    if (upQueue) {
      res["UpQueue"] = boost::any(*upQueue);
    }
    if (verifiedName) {
      res["VerifiedName"] = boost::any(*verifiedName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CodeVerificationStatus") != m.end() && !m["CodeVerificationStatus"].empty()) {
      codeVerificationStatus = make_shared<string>(boost::any_cast<string>(m["CodeVerificationStatus"]));
    }
    if (m.find("MessagingLimitTier") != m.end() && !m["MessagingLimitTier"].empty()) {
      messagingLimitTier = make_shared<string>(boost::any_cast<string>(m["MessagingLimitTier"]));
    }
    if (m.find("NameStatus") != m.end() && !m["NameStatus"].empty()) {
      nameStatus = make_shared<string>(boost::any_cast<string>(m["NameStatus"]));
    }
    if (m.find("NewNameStatus") != m.end() && !m["NewNameStatus"].empty()) {
      newNameStatus = make_shared<string>(boost::any_cast<string>(m["NewNameStatus"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QualityRating") != m.end() && !m["QualityRating"].empty()) {
      qualityRating = make_shared<string>(boost::any_cast<string>(m["QualityRating"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusCallbackUrl") != m.end() && !m["StatusCallbackUrl"].empty()) {
      statusCallbackUrl = make_shared<string>(boost::any_cast<string>(m["StatusCallbackUrl"]));
    }
    if (m.find("StatusQueue") != m.end() && !m["StatusQueue"].empty()) {
      statusQueue = make_shared<string>(boost::any_cast<string>(m["StatusQueue"]));
    }
    if (m.find("UpCallbackUrl") != m.end() && !m["UpCallbackUrl"].empty()) {
      upCallbackUrl = make_shared<string>(boost::any_cast<string>(m["UpCallbackUrl"]));
    }
    if (m.find("UpQueue") != m.end() && !m["UpQueue"].empty()) {
      upQueue = make_shared<string>(boost::any_cast<string>(m["UpQueue"]));
    }
    if (m.find("VerifiedName") != m.end() && !m["VerifiedName"].empty()) {
      verifiedName = make_shared<string>(boost::any_cast<string>(m["VerifiedName"]));
    }
  }


  virtual ~QueryChatappPhoneNumbersResponseBodyPhoneNumbers() = default;
};
class QueryChatappPhoneNumbersResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<vector<QueryChatappPhoneNumbersResponseBodyPhoneNumbers>> phoneNumbers{};
  shared_ptr<string> requestId{};

  QueryChatappPhoneNumbersResponseBody() {}

  explicit QueryChatappPhoneNumbersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (phoneNumbers) {
      vector<boost::any> temp1;
      for(auto item1:*phoneNumbers){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PhoneNumbers"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("PhoneNumbers") != m.end() && !m["PhoneNumbers"].empty()) {
      if (typeid(vector<boost::any>) == m["PhoneNumbers"].type()) {
        vector<QueryChatappPhoneNumbersResponseBodyPhoneNumbers> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PhoneNumbers"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryChatappPhoneNumbersResponseBodyPhoneNumbers model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        phoneNumbers = make_shared<vector<QueryChatappPhoneNumbersResponseBodyPhoneNumbers>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryChatappPhoneNumbersResponseBody() = default;
};
class QueryChatappPhoneNumbersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryChatappPhoneNumbersResponseBody> body{};

  QueryChatappPhoneNumbersResponse() {}

  explicit QueryChatappPhoneNumbersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryChatappPhoneNumbersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryChatappPhoneNumbersResponseBody>(model1);
      }
    }
  }


  virtual ~QueryChatappPhoneNumbersResponse() = default;
};
class QueryPhoneBusinessProfileRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> phoneNumber{};

  QueryPhoneBusinessProfileRequest() {}

  explicit QueryPhoneBusinessProfileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
  }


  virtual ~QueryPhoneBusinessProfileRequest() = default;
};
class QueryPhoneBusinessProfileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> address{};
  shared_ptr<string> description{};
  shared_ptr<string> email{};
  shared_ptr<string> profilePictureUrl{};
  shared_ptr<string> vertical{};
  shared_ptr<vector<string>> websites{};

  QueryPhoneBusinessProfileResponseBodyData() {}

  explicit QueryPhoneBusinessProfileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (address) {
      res["Address"] = boost::any(*address);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (email) {
      res["Email"] = boost::any(*email);
    }
    if (profilePictureUrl) {
      res["ProfilePictureUrl"] = boost::any(*profilePictureUrl);
    }
    if (vertical) {
      res["Vertical"] = boost::any(*vertical);
    }
    if (websites) {
      res["Websites"] = boost::any(*websites);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Address") != m.end() && !m["Address"].empty()) {
      address = make_shared<string>(boost::any_cast<string>(m["Address"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Email") != m.end() && !m["Email"].empty()) {
      email = make_shared<string>(boost::any_cast<string>(m["Email"]));
    }
    if (m.find("ProfilePictureUrl") != m.end() && !m["ProfilePictureUrl"].empty()) {
      profilePictureUrl = make_shared<string>(boost::any_cast<string>(m["ProfilePictureUrl"]));
    }
    if (m.find("Vertical") != m.end() && !m["Vertical"].empty()) {
      vertical = make_shared<string>(boost::any_cast<string>(m["Vertical"]));
    }
    if (m.find("Websites") != m.end() && !m["Websites"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Websites"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Websites"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      websites = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryPhoneBusinessProfileResponseBodyData() = default;
};
class QueryPhoneBusinessProfileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<QueryPhoneBusinessProfileResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryPhoneBusinessProfileResponseBody() {}

  explicit QueryPhoneBusinessProfileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryPhoneBusinessProfileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryPhoneBusinessProfileResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryPhoneBusinessProfileResponseBody() = default;
};
class QueryPhoneBusinessProfileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPhoneBusinessProfileResponseBody> body{};

  QueryPhoneBusinessProfileResponse() {}

  explicit QueryPhoneBusinessProfileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPhoneBusinessProfileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPhoneBusinessProfileResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPhoneBusinessProfileResponse() = default;
};
class QueryWabaBusinessInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> wabaId{};

  QueryWabaBusinessInfoRequest() {}

  explicit QueryWabaBusinessInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (wabaId) {
      res["WabaId"] = boost::any(*wabaId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("WabaId") != m.end() && !m["WabaId"].empty()) {
      wabaId = make_shared<string>(boost::any_cast<string>(m["WabaId"]));
    }
  }


  virtual ~QueryWabaBusinessInfoRequest() = default;
};
class QueryWabaBusinessInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> businessId{};
  shared_ptr<string> businessName{};
  shared_ptr<string> verificationStatus{};
  shared_ptr<string> vertical{};

  QueryWabaBusinessInfoResponseBodyData() {}

  explicit QueryWabaBusinessInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessId) {
      res["BusinessId"] = boost::any(*businessId);
    }
    if (businessName) {
      res["BusinessName"] = boost::any(*businessName);
    }
    if (verificationStatus) {
      res["VerificationStatus"] = boost::any(*verificationStatus);
    }
    if (vertical) {
      res["Vertical"] = boost::any(*vertical);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessId") != m.end() && !m["BusinessId"].empty()) {
      businessId = make_shared<string>(boost::any_cast<string>(m["BusinessId"]));
    }
    if (m.find("BusinessName") != m.end() && !m["BusinessName"].empty()) {
      businessName = make_shared<string>(boost::any_cast<string>(m["BusinessName"]));
    }
    if (m.find("VerificationStatus") != m.end() && !m["VerificationStatus"].empty()) {
      verificationStatus = make_shared<string>(boost::any_cast<string>(m["VerificationStatus"]));
    }
    if (m.find("Vertical") != m.end() && !m["Vertical"].empty()) {
      vertical = make_shared<string>(boost::any_cast<string>(m["Vertical"]));
    }
  }


  virtual ~QueryWabaBusinessInfoResponseBodyData() = default;
};
class QueryWabaBusinessInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<QueryWabaBusinessInfoResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  QueryWabaBusinessInfoResponseBody() {}

  explicit QueryWabaBusinessInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryWabaBusinessInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryWabaBusinessInfoResponseBodyData>(model1);
      }
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~QueryWabaBusinessInfoResponseBody() = default;
};
class QueryWabaBusinessInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryWabaBusinessInfoResponseBody> body{};

  QueryWabaBusinessInfoResponse() {}

  explicit QueryWabaBusinessInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryWabaBusinessInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryWabaBusinessInfoResponseBody>(model1);
      }
    }
  }


  virtual ~QueryWabaBusinessInfoResponse() = default;
};
class SendChatappMassMessageRequestSenderListProductActionSectionsProductItems : public Darabonba::Model {
public:
  shared_ptr<string> productRetailerId{};

  SendChatappMassMessageRequestSenderListProductActionSectionsProductItems() {}

  explicit SendChatappMassMessageRequestSenderListProductActionSectionsProductItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productRetailerId) {
      res["ProductRetailerId"] = boost::any(*productRetailerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductRetailerId") != m.end() && !m["ProductRetailerId"].empty()) {
      productRetailerId = make_shared<string>(boost::any_cast<string>(m["ProductRetailerId"]));
    }
  }


  virtual ~SendChatappMassMessageRequestSenderListProductActionSectionsProductItems() = default;
};
class SendChatappMassMessageRequestSenderListProductActionSections : public Darabonba::Model {
public:
  shared_ptr<vector<SendChatappMassMessageRequestSenderListProductActionSectionsProductItems>> productItems{};
  shared_ptr<string> title{};

  SendChatappMassMessageRequestSenderListProductActionSections() {}

  explicit SendChatappMassMessageRequestSenderListProductActionSections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productItems) {
      vector<boost::any> temp1;
      for(auto item1:*productItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductItems"] = boost::any(temp1);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductItems") != m.end() && !m["ProductItems"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductItems"].type()) {
        vector<SendChatappMassMessageRequestSenderListProductActionSectionsProductItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMassMessageRequestSenderListProductActionSectionsProductItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productItems = make_shared<vector<SendChatappMassMessageRequestSenderListProductActionSectionsProductItems>>(expect1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~SendChatappMassMessageRequestSenderListProductActionSections() = default;
};
class SendChatappMassMessageRequestSenderListProductAction : public Darabonba::Model {
public:
  shared_ptr<vector<SendChatappMassMessageRequestSenderListProductActionSections>> sections{};
  shared_ptr<string> thumbnailProductRetailerId{};

  SendChatappMassMessageRequestSenderListProductAction() {}

  explicit SendChatappMassMessageRequestSenderListProductAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sections) {
      vector<boost::any> temp1;
      for(auto item1:*sections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sections"] = boost::any(temp1);
    }
    if (thumbnailProductRetailerId) {
      res["ThumbnailProductRetailerId"] = boost::any(*thumbnailProductRetailerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sections") != m.end() && !m["Sections"].empty()) {
      if (typeid(vector<boost::any>) == m["Sections"].type()) {
        vector<SendChatappMassMessageRequestSenderListProductActionSections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMassMessageRequestSenderListProductActionSections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sections = make_shared<vector<SendChatappMassMessageRequestSenderListProductActionSections>>(expect1);
      }
    }
    if (m.find("ThumbnailProductRetailerId") != m.end() && !m["ThumbnailProductRetailerId"].empty()) {
      thumbnailProductRetailerId = make_shared<string>(boost::any_cast<string>(m["ThumbnailProductRetailerId"]));
    }
  }


  virtual ~SendChatappMassMessageRequestSenderListProductAction() = default;
};
class SendChatappMassMessageRequestSenderList : public Darabonba::Model {
public:
  shared_ptr<vector<string>> payload{};
  shared_ptr<SendChatappMassMessageRequestSenderListProductAction> productAction{};
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
    if (productAction) {
      res["ProductAction"] = productAction ? boost::any(productAction->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("ProductAction") != m.end() && !m["ProductAction"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductAction"].type()) {
        SendChatappMassMessageRequestSenderListProductAction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductAction"]));
        productAction = make_shared<SendChatappMassMessageRequestSenderListProductAction>(model1);
      }
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
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<long> fallBackDuration{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> label{};
  shared_ptr<string> language{};
  shared_ptr<vector<SendChatappMassMessageRequestSenderList>> senderList{};
  shared_ptr<string> tag{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};
  shared_ptr<long> ttl{};

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
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackDuration) {
      res["FallBackDuration"] = boost::any(*fallBackDuration);
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
    if (label) {
      res["Label"] = boost::any(*label);
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
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackDuration") != m.end() && !m["FallBackDuration"].empty()) {
      fallBackDuration = make_shared<long>(boost::any_cast<long>(m["FallBackDuration"]));
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
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
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
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~SendChatappMassMessageRequest() = default;
};
class SendChatappMassMessageShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<long> fallBackDuration{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> label{};
  shared_ptr<string> language{};
  shared_ptr<string> senderListShrink{};
  shared_ptr<string> tag{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};
  shared_ptr<long> ttl{};

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
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackDuration) {
      res["FallBackDuration"] = boost::any(*fallBackDuration);
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
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (language) {
      res["Language"] = boost::any(*language);
    }
    if (senderListShrink) {
      res["SenderList"] = boost::any(*senderListShrink);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (templateCode) {
      res["TemplateCode"] = boost::any(*templateCode);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChannelType") != m.end() && !m["ChannelType"].empty()) {
      channelType = make_shared<string>(boost::any_cast<string>(m["ChannelType"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackDuration") != m.end() && !m["FallBackDuration"].empty()) {
      fallBackDuration = make_shared<long>(boost::any_cast<long>(m["FallBackDuration"]));
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
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Language") != m.end() && !m["Language"].empty()) {
      language = make_shared<string>(boost::any_cast<string>(m["Language"]));
    }
    if (m.find("SenderList") != m.end() && !m["SenderList"].empty()) {
      senderListShrink = make_shared<string>(boost::any_cast<string>(m["SenderList"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TemplateCode") != m.end() && !m["TemplateCode"].empty()) {
      templateCode = make_shared<string>(boost::any_cast<string>(m["TemplateCode"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
    }
  }


  virtual ~SendChatappMassMessageShrinkRequest() = default;
};
class SendChatappMassMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
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
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
    }
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
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
    }
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
class SendChatappMessageRequestProductActionSectionsProductItems : public Darabonba::Model {
public:
  shared_ptr<string> productRetailerId{};

  SendChatappMessageRequestProductActionSectionsProductItems() {}

  explicit SendChatappMessageRequestProductActionSectionsProductItems(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productRetailerId) {
      res["ProductRetailerId"] = boost::any(*productRetailerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductRetailerId") != m.end() && !m["ProductRetailerId"].empty()) {
      productRetailerId = make_shared<string>(boost::any_cast<string>(m["ProductRetailerId"]));
    }
  }


  virtual ~SendChatappMessageRequestProductActionSectionsProductItems() = default;
};
class SendChatappMessageRequestProductActionSections : public Darabonba::Model {
public:
  shared_ptr<vector<SendChatappMessageRequestProductActionSectionsProductItems>> productItems{};
  shared_ptr<string> title{};

  SendChatappMessageRequestProductActionSections() {}

  explicit SendChatappMessageRequestProductActionSections(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (productItems) {
      vector<boost::any> temp1;
      for(auto item1:*productItems){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProductItems"] = boost::any(temp1);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProductItems") != m.end() && !m["ProductItems"].empty()) {
      if (typeid(vector<boost::any>) == m["ProductItems"].type()) {
        vector<SendChatappMessageRequestProductActionSectionsProductItems> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProductItems"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMessageRequestProductActionSectionsProductItems model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        productItems = make_shared<vector<SendChatappMessageRequestProductActionSectionsProductItems>>(expect1);
      }
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~SendChatappMessageRequestProductActionSections() = default;
};
class SendChatappMessageRequestProductAction : public Darabonba::Model {
public:
  shared_ptr<vector<SendChatappMessageRequestProductActionSections>> sections{};
  shared_ptr<string> thumbnailProductRetailerId{};

  SendChatappMessageRequestProductAction() {}

  explicit SendChatappMessageRequestProductAction(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sections) {
      vector<boost::any> temp1;
      for(auto item1:*sections){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sections"] = boost::any(temp1);
    }
    if (thumbnailProductRetailerId) {
      res["ThumbnailProductRetailerId"] = boost::any(*thumbnailProductRetailerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sections") != m.end() && !m["Sections"].empty()) {
      if (typeid(vector<boost::any>) == m["Sections"].type()) {
        vector<SendChatappMessageRequestProductActionSections> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sections"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SendChatappMessageRequestProductActionSections model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sections = make_shared<vector<SendChatappMessageRequestProductActionSections>>(expect1);
      }
    }
    if (m.find("ThumbnailProductRetailerId") != m.end() && !m["ThumbnailProductRetailerId"].empty()) {
      thumbnailProductRetailerId = make_shared<string>(boost::any_cast<string>(m["ThumbnailProductRetailerId"]));
    }
  }


  virtual ~SendChatappMessageRequestProductAction() = default;
};
class SendChatappMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> channelType{};
  shared_ptr<string> content{};
  shared_ptr<string> contextMessageId{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<long> fallBackDuration{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> label{};
  shared_ptr<string> language{};
  shared_ptr<string> messageType{};
  shared_ptr<vector<string>> payload{};
  shared_ptr<SendChatappMessageRequestProductAction> productAction{};
  shared_ptr<string> tag{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};
  shared_ptr<map<string, string>> templateParams{};
  shared_ptr<string> to{};
  shared_ptr<string> trackingData{};
  shared_ptr<long> ttl{};
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
    if (contextMessageId) {
      res["ContextMessageId"] = boost::any(*contextMessageId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackDuration) {
      res["FallBackDuration"] = boost::any(*fallBackDuration);
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
    if (label) {
      res["Label"] = boost::any(*label);
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
    if (productAction) {
      res["ProductAction"] = productAction ? boost::any(productAction->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (trackingData) {
      res["TrackingData"] = boost::any(*trackingData);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
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
    if (m.find("ContextMessageId") != m.end() && !m["ContextMessageId"].empty()) {
      contextMessageId = make_shared<string>(boost::any_cast<string>(m["ContextMessageId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackDuration") != m.end() && !m["FallBackDuration"].empty()) {
      fallBackDuration = make_shared<long>(boost::any_cast<long>(m["FallBackDuration"]));
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
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
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
    if (m.find("ProductAction") != m.end() && !m["ProductAction"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProductAction"].type()) {
        SendChatappMessageRequestProductAction model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProductAction"]));
        productAction = make_shared<SendChatappMessageRequestProductAction>(model1);
      }
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
    if (m.find("TrackingData") != m.end() && !m["TrackingData"].empty()) {
      trackingData = make_shared<string>(boost::any_cast<string>(m["TrackingData"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
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
  shared_ptr<string> contextMessageId{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> custWabaId{};
  shared_ptr<string> fallBackContent{};
  shared_ptr<long> fallBackDuration{};
  shared_ptr<string> fallBackId{};
  shared_ptr<string> from{};
  shared_ptr<string> isvCode{};
  shared_ptr<string> label{};
  shared_ptr<string> language{};
  shared_ptr<string> messageType{};
  shared_ptr<string> payloadShrink{};
  shared_ptr<string> productActionShrink{};
  shared_ptr<string> tag{};
  shared_ptr<string> taskId{};
  shared_ptr<string> templateCode{};
  shared_ptr<string> templateParamsShrink{};
  shared_ptr<string> to{};
  shared_ptr<string> trackingData{};
  shared_ptr<long> ttl{};
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
    if (contextMessageId) {
      res["ContextMessageId"] = boost::any(*contextMessageId);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (custWabaId) {
      res["CustWabaId"] = boost::any(*custWabaId);
    }
    if (fallBackContent) {
      res["FallBackContent"] = boost::any(*fallBackContent);
    }
    if (fallBackDuration) {
      res["FallBackDuration"] = boost::any(*fallBackDuration);
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
    if (label) {
      res["Label"] = boost::any(*label);
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
    if (productActionShrink) {
      res["ProductAction"] = boost::any(*productActionShrink);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (trackingData) {
      res["TrackingData"] = boost::any(*trackingData);
    }
    if (ttl) {
      res["Ttl"] = boost::any(*ttl);
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
    if (m.find("ContextMessageId") != m.end() && !m["ContextMessageId"].empty()) {
      contextMessageId = make_shared<string>(boost::any_cast<string>(m["ContextMessageId"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("CustWabaId") != m.end() && !m["CustWabaId"].empty()) {
      custWabaId = make_shared<string>(boost::any_cast<string>(m["CustWabaId"]));
    }
    if (m.find("FallBackContent") != m.end() && !m["FallBackContent"].empty()) {
      fallBackContent = make_shared<string>(boost::any_cast<string>(m["FallBackContent"]));
    }
    if (m.find("FallBackDuration") != m.end() && !m["FallBackDuration"].empty()) {
      fallBackDuration = make_shared<long>(boost::any_cast<long>(m["FallBackDuration"]));
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
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
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
    if (m.find("ProductAction") != m.end() && !m["ProductAction"].empty()) {
      productActionShrink = make_shared<string>(boost::any_cast<string>(m["ProductAction"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
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
    if (m.find("TrackingData") != m.end() && !m["TrackingData"].empty()) {
      trackingData = make_shared<string>(boost::any_cast<string>(m["TrackingData"]));
    }
    if (m.find("Ttl") != m.end() && !m["Ttl"].empty()) {
      ttl = make_shared<long>(boost::any_cast<long>(m["Ttl"]));
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
class SubmitIsvCustomerTermsRequest : public Darabonba::Model {
public:
  shared_ptr<string> businessDesc{};
  shared_ptr<string> contactMail{};
  shared_ptr<string> countryId{};
  shared_ptr<string> custName{};
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> isvTerms{};
  shared_ptr<string> officeAddress{};

  SubmitIsvCustomerTermsRequest() {}

  explicit SubmitIsvCustomerTermsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (businessDesc) {
      res["BusinessDesc"] = boost::any(*businessDesc);
    }
    if (contactMail) {
      res["ContactMail"] = boost::any(*contactMail);
    }
    if (countryId) {
      res["CountryId"] = boost::any(*countryId);
    }
    if (custName) {
      res["CustName"] = boost::any(*custName);
    }
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (isvTerms) {
      res["IsvTerms"] = boost::any(*isvTerms);
    }
    if (officeAddress) {
      res["OfficeAddress"] = boost::any(*officeAddress);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BusinessDesc") != m.end() && !m["BusinessDesc"].empty()) {
      businessDesc = make_shared<string>(boost::any_cast<string>(m["BusinessDesc"]));
    }
    if (m.find("ContactMail") != m.end() && !m["ContactMail"].empty()) {
      contactMail = make_shared<string>(boost::any_cast<string>(m["ContactMail"]));
    }
    if (m.find("CountryId") != m.end() && !m["CountryId"].empty()) {
      countryId = make_shared<string>(boost::any_cast<string>(m["CountryId"]));
    }
    if (m.find("CustName") != m.end() && !m["CustName"].empty()) {
      custName = make_shared<string>(boost::any_cast<string>(m["CustName"]));
    }
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("IsvTerms") != m.end() && !m["IsvTerms"].empty()) {
      isvTerms = make_shared<string>(boost::any_cast<string>(m["IsvTerms"]));
    }
    if (m.find("OfficeAddress") != m.end() && !m["OfficeAddress"].empty()) {
      officeAddress = make_shared<string>(boost::any_cast<string>(m["OfficeAddress"]));
    }
  }


  virtual ~SubmitIsvCustomerTermsRequest() = default;
};
class SubmitIsvCustomerTermsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  SubmitIsvCustomerTermsResponseBody() {}

  explicit SubmitIsvCustomerTermsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~SubmitIsvCustomerTermsResponseBody() = default;
};
class SubmitIsvCustomerTermsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitIsvCustomerTermsResponseBody> body{};

  SubmitIsvCustomerTermsResponse() {}

  explicit SubmitIsvCustomerTermsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitIsvCustomerTermsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitIsvCustomerTermsResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitIsvCustomerTermsResponse() = default;
};
class UpdateAccountWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> httpFlag{};
  shared_ptr<string> queueFlag{};
  shared_ptr<string> statusCallbackUrl{};

  UpdateAccountWebhookRequest() {}

  explicit UpdateAccountWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (httpFlag) {
      res["HttpFlag"] = boost::any(*httpFlag);
    }
    if (queueFlag) {
      res["QueueFlag"] = boost::any(*queueFlag);
    }
    if (statusCallbackUrl) {
      res["StatusCallbackUrl"] = boost::any(*statusCallbackUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("HttpFlag") != m.end() && !m["HttpFlag"].empty()) {
      httpFlag = make_shared<string>(boost::any_cast<string>(m["HttpFlag"]));
    }
    if (m.find("QueueFlag") != m.end() && !m["QueueFlag"].empty()) {
      queueFlag = make_shared<string>(boost::any_cast<string>(m["QueueFlag"]));
    }
    if (m.find("StatusCallbackUrl") != m.end() && !m["StatusCallbackUrl"].empty()) {
      statusCallbackUrl = make_shared<string>(boost::any_cast<string>(m["StatusCallbackUrl"]));
    }
  }


  virtual ~UpdateAccountWebhookRequest() = default;
};
class UpdateAccountWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateAccountWebhookResponseBody() {}

  explicit UpdateAccountWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~UpdateAccountWebhookResponseBody() = default;
};
class UpdateAccountWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAccountWebhookResponseBody> body{};

  UpdateAccountWebhookResponse() {}

  explicit UpdateAccountWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAccountWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAccountWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAccountWebhookResponse() = default;
};
class UpdatePhoneWebhookRequest : public Darabonba::Model {
public:
  shared_ptr<string> custSpaceId{};
  shared_ptr<string> httpFlag{};
  shared_ptr<string> phoneNumber{};
  shared_ptr<string> queueFlag{};
  shared_ptr<string> statusCallbackUrl{};
  shared_ptr<string> upCallbackUrl{};

  UpdatePhoneWebhookRequest() {}

  explicit UpdatePhoneWebhookRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (custSpaceId) {
      res["CustSpaceId"] = boost::any(*custSpaceId);
    }
    if (httpFlag) {
      res["HttpFlag"] = boost::any(*httpFlag);
    }
    if (phoneNumber) {
      res["PhoneNumber"] = boost::any(*phoneNumber);
    }
    if (queueFlag) {
      res["QueueFlag"] = boost::any(*queueFlag);
    }
    if (statusCallbackUrl) {
      res["StatusCallbackUrl"] = boost::any(*statusCallbackUrl);
    }
    if (upCallbackUrl) {
      res["UpCallbackUrl"] = boost::any(*upCallbackUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CustSpaceId") != m.end() && !m["CustSpaceId"].empty()) {
      custSpaceId = make_shared<string>(boost::any_cast<string>(m["CustSpaceId"]));
    }
    if (m.find("HttpFlag") != m.end() && !m["HttpFlag"].empty()) {
      httpFlag = make_shared<string>(boost::any_cast<string>(m["HttpFlag"]));
    }
    if (m.find("PhoneNumber") != m.end() && !m["PhoneNumber"].empty()) {
      phoneNumber = make_shared<string>(boost::any_cast<string>(m["PhoneNumber"]));
    }
    if (m.find("QueueFlag") != m.end() && !m["QueueFlag"].empty()) {
      queueFlag = make_shared<string>(boost::any_cast<string>(m["QueueFlag"]));
    }
    if (m.find("StatusCallbackUrl") != m.end() && !m["StatusCallbackUrl"].empty()) {
      statusCallbackUrl = make_shared<string>(boost::any_cast<string>(m["StatusCallbackUrl"]));
    }
    if (m.find("UpCallbackUrl") != m.end() && !m["UpCallbackUrl"].empty()) {
      upCallbackUrl = make_shared<string>(boost::any_cast<string>(m["UpCallbackUrl"]));
    }
  }


  virtual ~UpdatePhoneWebhookRequest() = default;
};
class UpdatePhoneWebhookResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> accessDeniedDetail{};
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdatePhoneWebhookResponseBody() {}

  explicit UpdatePhoneWebhookResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessDeniedDetail) {
      res["AccessDeniedDetail"] = boost::any(*accessDeniedDetail);
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessDeniedDetail") != m.end() && !m["AccessDeniedDetail"].empty()) {
      accessDeniedDetail = make_shared<string>(boost::any_cast<string>(m["AccessDeniedDetail"]));
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
  }


  virtual ~UpdatePhoneWebhookResponseBody() = default;
};
class UpdatePhoneWebhookResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePhoneWebhookResponseBody> body{};

  UpdatePhoneWebhookResponse() {}

  explicit UpdatePhoneWebhookResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePhoneWebhookResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePhoneWebhookResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePhoneWebhookResponse() = default;
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
  AddChatappPhoneNumberResponse addChatappPhoneNumberWithOptions(shared_ptr<AddChatappPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddChatappPhoneNumberResponse addChatappPhoneNumber(shared_ptr<AddChatappPhoneNumberRequest> request);
  BeeBotAssociateResponse beeBotAssociateWithOptions(shared_ptr<BeeBotAssociateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BeeBotAssociateResponse beeBotAssociate(shared_ptr<BeeBotAssociateRequest> request);
  BeeBotChatResponse beeBotChatWithOptions(shared_ptr<BeeBotChatRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BeeBotChatResponse beeBotChat(shared_ptr<BeeBotChatRequest> request);
  ChatappBindWabaResponse chatappBindWabaWithOptions(shared_ptr<ChatappBindWabaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappBindWabaResponse chatappBindWaba(shared_ptr<ChatappBindWabaRequest> request);
  ChatappEmbedSignUpResponse chatappEmbedSignUpWithOptions(shared_ptr<ChatappEmbedSignUpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappEmbedSignUpResponse chatappEmbedSignUp(shared_ptr<ChatappEmbedSignUpRequest> request);
  ChatappMigrationRegisterResponse chatappMigrationRegisterWithOptions(shared_ptr<ChatappMigrationRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappMigrationRegisterResponse chatappMigrationRegister(shared_ptr<ChatappMigrationRegisterRequest> request);
  ChatappMigrationVerifiedResponse chatappMigrationVerifiedWithOptions(shared_ptr<ChatappMigrationVerifiedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappMigrationVerifiedResponse chatappMigrationVerified(shared_ptr<ChatappMigrationVerifiedRequest> request);
  ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregisterWithOptions(shared_ptr<ChatappPhoneNumberDeregisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappPhoneNumberDeregisterResponse chatappPhoneNumberDeregister(shared_ptr<ChatappPhoneNumberDeregisterRequest> request);
  ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegisterWithOptions(shared_ptr<ChatappPhoneNumberRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappPhoneNumberRegisterResponse chatappPhoneNumberRegister(shared_ptr<ChatappPhoneNumberRegisterRequest> request);
  ChatappSyncPhoneNumberResponse chatappSyncPhoneNumberWithOptions(shared_ptr<ChatappSyncPhoneNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappSyncPhoneNumberResponse chatappSyncPhoneNumber(shared_ptr<ChatappSyncPhoneNumberRequest> request);
  ChatappVerifyAndRegisterResponse chatappVerifyAndRegisterWithOptions(shared_ptr<ChatappVerifyAndRegisterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatappVerifyAndRegisterResponse chatappVerifyAndRegister(shared_ptr<ChatappVerifyAndRegisterRequest> request);
  CreateChatappMigrationInitiateResponse createChatappMigrationInitiateWithOptions(shared_ptr<CreateChatappMigrationInitiateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatappMigrationInitiateResponse createChatappMigrationInitiate(shared_ptr<CreateChatappMigrationInitiateRequest> request);
  CreateChatappTemplateResponse createChatappTemplateWithOptions(shared_ptr<CreateChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateChatappTemplateResponse createChatappTemplate(shared_ptr<CreateChatappTemplateRequest> request);
  DeleteChatappTemplateResponse deleteChatappTemplateWithOptions(shared_ptr<DeleteChatappTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteChatappTemplateResponse deleteChatappTemplate(shared_ptr<DeleteChatappTemplateRequest> request);
  EnableWhatsappROIMetricResponse enableWhatsappROIMetricWithOptions(shared_ptr<EnableWhatsappROIMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableWhatsappROIMetricResponse enableWhatsappROIMetric(shared_ptr<EnableWhatsappROIMetricRequest> request);
  GetChatappPhoneNumberMetricResponse getChatappPhoneNumberMetricWithOptions(shared_ptr<GetChatappPhoneNumberMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappPhoneNumberMetricResponse getChatappPhoneNumberMetric(shared_ptr<GetChatappPhoneNumberMetricRequest> request);
  GetChatappTemplateDetailResponse getChatappTemplateDetailWithOptions(shared_ptr<GetChatappTemplateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappTemplateDetailResponse getChatappTemplateDetail(shared_ptr<GetChatappTemplateDetailRequest> request);
  GetChatappTemplateMetricResponse getChatappTemplateMetricWithOptions(shared_ptr<GetChatappTemplateMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappTemplateMetricResponse getChatappTemplateMetric(shared_ptr<GetChatappTemplateMetricRequest> request);
  GetChatappUploadAuthorizationResponse getChatappUploadAuthorizationWithOptions(shared_ptr<GetChatappUploadAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappUploadAuthorizationResponse getChatappUploadAuthorization(shared_ptr<GetChatappUploadAuthorizationRequest> request);
  GetChatappVerifyCodeResponse getChatappVerifyCodeWithOptions(shared_ptr<GetChatappVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetChatappVerifyCodeResponse getChatappVerifyCode(shared_ptr<GetChatappVerifyCodeRequest> request);
  GetMigrationVerifyCodeResponse getMigrationVerifyCodeWithOptions(shared_ptr<GetMigrationVerifyCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetMigrationVerifyCodeResponse getMigrationVerifyCode(shared_ptr<GetMigrationVerifyCodeRequest> request);
  GetPhoneNumberVerificationStatusResponse getPhoneNumberVerificationStatusWithOptions(shared_ptr<GetPhoneNumberVerificationStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPhoneNumberVerificationStatusResponse getPhoneNumberVerificationStatus(shared_ptr<GetPhoneNumberVerificationStatusRequest> request);
  GetPreValidatePhoneIdResponse getPreValidatePhoneIdWithOptions(shared_ptr<GetPreValidatePhoneIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPreValidatePhoneIdResponse getPreValidatePhoneId(shared_ptr<GetPreValidatePhoneIdRequest> request);
  GetWhatsappConnectionCatalogResponse getWhatsappConnectionCatalogWithOptions(shared_ptr<GetWhatsappConnectionCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetWhatsappConnectionCatalogResponse getWhatsappConnectionCatalog(shared_ptr<GetWhatsappConnectionCatalogRequest> request);
  IsvGetAppIdResponse isvGetAppIdWithOptions(shared_ptr<IsvGetAppIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  IsvGetAppIdResponse isvGetAppId(shared_ptr<IsvGetAppIdRequest> request);
  ListChatappTemplateResponse listChatappTemplateWithOptions(shared_ptr<ListChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatappTemplateResponse listChatappTemplate(shared_ptr<ListChatappTemplateRequest> request);
  ListProductResponse listProductWithOptions(shared_ptr<ListProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductResponse listProduct(shared_ptr<ListProductRequest> request);
  ListProductCatalogResponse listProductCatalogWithOptions(shared_ptr<ListProductCatalogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListProductCatalogResponse listProductCatalog(shared_ptr<ListProductCatalogRequest> request);
  ModifyChatappTemplateResponse modifyChatappTemplateWithOptions(shared_ptr<ModifyChatappTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyChatappTemplateResponse modifyChatappTemplate(shared_ptr<ModifyChatappTemplateRequest> request);
  ModifyPhoneBusinessProfileResponse modifyPhoneBusinessProfileWithOptions(shared_ptr<ModifyPhoneBusinessProfileRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyPhoneBusinessProfileResponse modifyPhoneBusinessProfile(shared_ptr<ModifyPhoneBusinessProfileRequest> request);
  QueryChatappBindWabaResponse queryChatappBindWabaWithOptions(shared_ptr<QueryChatappBindWabaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryChatappBindWabaResponse queryChatappBindWaba(shared_ptr<QueryChatappBindWabaRequest> request);
  QueryChatappPhoneNumbersResponse queryChatappPhoneNumbersWithOptions(shared_ptr<QueryChatappPhoneNumbersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryChatappPhoneNumbersResponse queryChatappPhoneNumbers(shared_ptr<QueryChatappPhoneNumbersRequest> request);
  QueryPhoneBusinessProfileResponse queryPhoneBusinessProfileWithOptions(shared_ptr<QueryPhoneBusinessProfileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPhoneBusinessProfileResponse queryPhoneBusinessProfile(shared_ptr<QueryPhoneBusinessProfileRequest> request);
  QueryWabaBusinessInfoResponse queryWabaBusinessInfoWithOptions(shared_ptr<QueryWabaBusinessInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryWabaBusinessInfoResponse queryWabaBusinessInfo(shared_ptr<QueryWabaBusinessInfoRequest> request);
  SendChatappMassMessageResponse sendChatappMassMessageWithOptions(shared_ptr<SendChatappMassMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendChatappMassMessageResponse sendChatappMassMessage(shared_ptr<SendChatappMassMessageRequest> request);
  SendChatappMessageResponse sendChatappMessageWithOptions(shared_ptr<SendChatappMessageRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SendChatappMessageResponse sendChatappMessage(shared_ptr<SendChatappMessageRequest> request);
  SubmitIsvCustomerTermsResponse submitIsvCustomerTermsWithOptions(shared_ptr<SubmitIsvCustomerTermsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitIsvCustomerTermsResponse submitIsvCustomerTerms(shared_ptr<SubmitIsvCustomerTermsRequest> request);
  UpdateAccountWebhookResponse updateAccountWebhookWithOptions(shared_ptr<UpdateAccountWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAccountWebhookResponse updateAccountWebhook(shared_ptr<UpdateAccountWebhookRequest> request);
  UpdatePhoneWebhookResponse updatePhoneWebhookWithOptions(shared_ptr<UpdatePhoneWebhookRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePhoneWebhookResponse updatePhoneWebhook(shared_ptr<UpdatePhoneWebhookRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Cams20200606

#endif
