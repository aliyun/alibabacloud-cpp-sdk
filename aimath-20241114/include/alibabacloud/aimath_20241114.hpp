// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AIMATH20241114_H_
#define ALIBABACLOUD_AIMATH20241114_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_AIMath20241114 {
class ChatMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> conversationId{};
  shared_ptr<string> userId{};

  ChatMessageRequest() {}

  explicit ChatMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ChatMessageRequest() = default;
};
class ChatMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> eventType{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ChatMessageResponseBody() {}

  explicit ChatMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
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
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ChatMessageResponseBody() = default;
};
class ChatMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ChatMessageResponseBody> body{};

  ChatMessageResponse() {}

  explicit ChatMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ChatMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ChatMessageResponseBody>(model1);
      }
    }
  }


  virtual ~ChatMessageResponse() = default;
};
class CreateConversationRequest : public Darabonba::Model {
public:
  shared_ptr<string> exerciseAnalysis{};
  shared_ptr<string> exerciseAnswer{};
  shared_ptr<string> exerciseContent{};
  shared_ptr<string> exerciseType{};
  shared_ptr<string> outerBizId{};
  shared_ptr<string> userId{};

  CreateConversationRequest() {}

  explicit CreateConversationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exerciseAnalysis) {
      res["ExerciseAnalysis"] = boost::any(*exerciseAnalysis);
    }
    if (exerciseAnswer) {
      res["ExerciseAnswer"] = boost::any(*exerciseAnswer);
    }
    if (exerciseContent) {
      res["ExerciseContent"] = boost::any(*exerciseContent);
    }
    if (exerciseType) {
      res["ExerciseType"] = boost::any(*exerciseType);
    }
    if (outerBizId) {
      res["OuterBizId"] = boost::any(*outerBizId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExerciseAnalysis") != m.end() && !m["ExerciseAnalysis"].empty()) {
      exerciseAnalysis = make_shared<string>(boost::any_cast<string>(m["ExerciseAnalysis"]));
    }
    if (m.find("ExerciseAnswer") != m.end() && !m["ExerciseAnswer"].empty()) {
      exerciseAnswer = make_shared<string>(boost::any_cast<string>(m["ExerciseAnswer"]));
    }
    if (m.find("ExerciseContent") != m.end() && !m["ExerciseContent"].empty()) {
      exerciseContent = make_shared<string>(boost::any_cast<string>(m["ExerciseContent"]));
    }
    if (m.find("ExerciseType") != m.end() && !m["ExerciseType"].empty()) {
      exerciseType = make_shared<string>(boost::any_cast<string>(m["ExerciseType"]));
    }
    if (m.find("OuterBizId") != m.end() && !m["OuterBizId"].empty()) {
      outerBizId = make_shared<string>(boost::any_cast<string>(m["OuterBizId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateConversationRequest() = default;
};
class CreateConversationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateConversationResponseBody() {}

  explicit CreateConversationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
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
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateConversationResponseBody() = default;
};
class CreateConversationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateConversationResponseBody> body{};

  CreateConversationResponse() {}

  explicit CreateConversationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateConversationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateConversationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateConversationResponse() = default;
};
class CreateRelatedConversationRequest : public Darabonba::Model {
public:
  shared_ptr<string> exerciseCode{};
  shared_ptr<string> outerBizId{};
  shared_ptr<string> userId{};

  CreateRelatedConversationRequest() {}

  explicit CreateRelatedConversationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exerciseCode) {
      res["ExerciseCode"] = boost::any(*exerciseCode);
    }
    if (outerBizId) {
      res["OuterBizId"] = boost::any(*outerBizId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExerciseCode") != m.end() && !m["ExerciseCode"].empty()) {
      exerciseCode = make_shared<string>(boost::any_cast<string>(m["ExerciseCode"]));
    }
    if (m.find("OuterBizId") != m.end() && !m["OuterBizId"].empty()) {
      outerBizId = make_shared<string>(boost::any_cast<string>(m["OuterBizId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateRelatedConversationRequest() = default;
};
class CreateRelatedConversationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateRelatedConversationResponseBody() {}

  explicit CreateRelatedConversationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
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
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~CreateRelatedConversationResponseBody() = default;
};
class CreateRelatedConversationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateRelatedConversationResponseBody> body{};

  CreateRelatedConversationResponse() {}

  explicit CreateRelatedConversationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateRelatedConversationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateRelatedConversationResponseBody>(model1);
      }
    }
  }


  virtual ~CreateRelatedConversationResponse() = default;
};
class GenAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> exerciseContent{};

  GenAnalysisRequest() {}

  explicit GenAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exerciseContent) {
      res["ExerciseContent"] = boost::any(*exerciseContent);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExerciseContent") != m.end() && !m["ExerciseContent"].empty()) {
      exerciseContent = make_shared<string>(boost::any_cast<string>(m["ExerciseContent"]));
    }
  }


  virtual ~GenAnalysisRequest() = default;
};
class GenAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> eventType{};
  shared_ptr<string> requestId{};

  GenAnalysisResponseBody() {}

  explicit GenAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenAnalysisResponseBody() = default;
};
class GenAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenAnalysisResponseBody> body{};

  GenAnalysisResponse() {}

  explicit GenAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~GenAnalysisResponse() = default;
};
class GenStepRequest : public Darabonba::Model {
public:
  shared_ptr<string> exerciseCode{};

  GenStepRequest() {}

  explicit GenStepRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exerciseCode) {
      res["ExerciseCode"] = boost::any(*exerciseCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExerciseCode") != m.end() && !m["ExerciseCode"].empty()) {
      exerciseCode = make_shared<string>(boost::any_cast<string>(m["ExerciseCode"]));
    }
  }


  virtual ~GenStepRequest() = default;
};
class GenStepResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> eventType{};
  shared_ptr<string> requestId{};

  GenStepResponseBody() {}

  explicit GenStepResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
    }
    if (eventType) {
      res["EventType"] = boost::any(*eventType);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("EventType") != m.end() && !m["EventType"].empty()) {
      eventType = make_shared<string>(boost::any_cast<string>(m["EventType"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GenStepResponseBody() = default;
};
class GenStepResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenStepResponseBody> body{};

  GenStepResponse() {}

  explicit GenStepResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenStepResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenStepResponseBody>(model1);
      }
    }
  }


  virtual ~GenStepResponse() = default;
};
class GlobalConfirmRequest : public Darabonba::Model {
public:
  shared_ptr<string> exerciseCode{};
  shared_ptr<string> tag{};

  GlobalConfirmRequest() {}

  explicit GlobalConfirmRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exerciseCode) {
      res["ExerciseCode"] = boost::any(*exerciseCode);
    }
    if (tag) {
      res["Tag"] = boost::any(*tag);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExerciseCode") != m.end() && !m["ExerciseCode"].empty()) {
      exerciseCode = make_shared<string>(boost::any_cast<string>(m["ExerciseCode"]));
    }
    if (m.find("Tag") != m.end() && !m["Tag"].empty()) {
      tag = make_shared<string>(boost::any_cast<string>(m["Tag"]));
    }
  }


  virtual ~GlobalConfirmRequest() = default;
};
class GlobalConfirmResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GlobalConfirmResponseBody() {}

  explicit GlobalConfirmResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GlobalConfirmResponseBody() = default;
};
class GlobalConfirmResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GlobalConfirmResponseBody> body{};

  GlobalConfirmResponse() {}

  explicit GlobalConfirmResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GlobalConfirmResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GlobalConfirmResponseBody>(model1);
      }
    }
  }


  virtual ~GlobalConfirmResponse() = default;
};
class UpdateAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentCode{};
  shared_ptr<string> exerciseCode{};

  UpdateAnalysisRequest() {}

  explicit UpdateAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentCode) {
      res["ContentCode"] = boost::any(*contentCode);
    }
    if (exerciseCode) {
      res["ExerciseCode"] = boost::any(*exerciseCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentCode") != m.end() && !m["ContentCode"].empty()) {
      contentCode = make_shared<string>(boost::any_cast<string>(m["ContentCode"]));
    }
    if (m.find("ExerciseCode") != m.end() && !m["ExerciseCode"].empty()) {
      exerciseCode = make_shared<string>(boost::any_cast<string>(m["ExerciseCode"]));
    }
  }


  virtual ~UpdateAnalysisRequest() = default;
};
class UpdateAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateAnalysisResponseBody() {}

  explicit UpdateAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateAnalysisResponseBody() = default;
};
class UpdateAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateAnalysisResponseBody> body{};

  UpdateAnalysisResponse() {}

  explicit UpdateAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateAnalysisResponse() = default;
};
class UpdateStepRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> contentCode{};
  shared_ptr<string> exerciseCode{};

  UpdateStepRequest() {}

  explicit UpdateStepRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (contentCode) {
      res["ContentCode"] = boost::any(*contentCode);
    }
    if (exerciseCode) {
      res["ExerciseCode"] = boost::any(*exerciseCode);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("ContentCode") != m.end() && !m["ContentCode"].empty()) {
      contentCode = make_shared<string>(boost::any_cast<string>(m["ContentCode"]));
    }
    if (m.find("ExerciseCode") != m.end() && !m["ExerciseCode"].empty()) {
      exerciseCode = make_shared<string>(boost::any_cast<string>(m["ExerciseCode"]));
    }
  }


  virtual ~UpdateStepRequest() = default;
};
class UpdateStepResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errCode{};
  shared_ptr<string> errMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateStepResponseBody() {}

  explicit UpdateStepResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errCode) {
      res["ErrCode"] = boost::any(*errCode);
    }
    if (errMsg) {
      res["ErrMsg"] = boost::any(*errMsg);
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
    if (m.find("ErrCode") != m.end() && !m["ErrCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["ErrCode"]));
    }
    if (m.find("ErrMsg") != m.end() && !m["ErrMsg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["ErrMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~UpdateStepResponseBody() = default;
};
class UpdateStepResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateStepResponseBody> body{};

  UpdateStepResponse() {}

  explicit UpdateStepResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateStepResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateStepResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateStepResponse() = default;
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
  ChatMessageResponse chatMessageWithOptions(shared_ptr<ChatMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ChatMessageResponse chatMessage(shared_ptr<ChatMessageRequest> request);
  CreateConversationResponse createConversationWithOptions(shared_ptr<CreateConversationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateConversationResponse createConversation(shared_ptr<CreateConversationRequest> request);
  CreateRelatedConversationResponse createRelatedConversationWithOptions(shared_ptr<CreateRelatedConversationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateRelatedConversationResponse createRelatedConversation(shared_ptr<CreateRelatedConversationRequest> request);
  GenAnalysisResponse genAnalysisWithOptions(shared_ptr<GenAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenAnalysisResponse genAnalysis(shared_ptr<GenAnalysisRequest> request);
  GenStepResponse genStepWithOptions(shared_ptr<GenStepRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenStepResponse genStep(shared_ptr<GenStepRequest> request);
  GlobalConfirmResponse globalConfirmWithOptions(shared_ptr<GlobalConfirmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GlobalConfirmResponse globalConfirm(shared_ptr<GlobalConfirmRequest> request);
  UpdateAnalysisResponse updateAnalysisWithOptions(shared_ptr<UpdateAnalysisRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateAnalysisResponse updateAnalysis(shared_ptr<UpdateAnalysisRequest> request);
  UpdateStepResponse updateStepWithOptions(shared_ptr<UpdateStepRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateStepResponse updateStep(shared_ptr<UpdateStepRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AIMath20241114

#endif
