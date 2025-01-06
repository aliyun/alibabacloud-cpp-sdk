// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_VOICENAVIGATOR20180612_H_
#define ALIBABACLOUD_VOICENAVIGATOR20180612_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_VoiceNavigator20180612 {
class AssociateChatbotInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> chatbotInstanceId{};
  shared_ptr<string> chatbotName{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nluServiceParamsJson{};
  shared_ptr<string> nluServiceType{};
  shared_ptr<string> unionSource{};

  AssociateChatbotInstanceRequest() {}

  explicit AssociateChatbotInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatbotInstanceId) {
      res["ChatbotInstanceId"] = boost::any(*chatbotInstanceId);
    }
    if (chatbotName) {
      res["ChatbotName"] = boost::any(*chatbotName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nluServiceParamsJson) {
      res["NluServiceParamsJson"] = boost::any(*nluServiceParamsJson);
    }
    if (nluServiceType) {
      res["NluServiceType"] = boost::any(*nluServiceType);
    }
    if (unionSource) {
      res["UnionSource"] = boost::any(*unionSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChatbotInstanceId") != m.end() && !m["ChatbotInstanceId"].empty()) {
      chatbotInstanceId = make_shared<string>(boost::any_cast<string>(m["ChatbotInstanceId"]));
    }
    if (m.find("ChatbotName") != m.end() && !m["ChatbotName"].empty()) {
      chatbotName = make_shared<string>(boost::any_cast<string>(m["ChatbotName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NluServiceParamsJson") != m.end() && !m["NluServiceParamsJson"].empty()) {
      nluServiceParamsJson = make_shared<string>(boost::any_cast<string>(m["NluServiceParamsJson"]));
    }
    if (m.find("NluServiceType") != m.end() && !m["NluServiceType"].empty()) {
      nluServiceType = make_shared<string>(boost::any_cast<string>(m["NluServiceType"]));
    }
    if (m.find("UnionSource") != m.end() && !m["UnionSource"].empty()) {
      unionSource = make_shared<string>(boost::any_cast<string>(m["UnionSource"]));
    }
  }


  virtual ~AssociateChatbotInstanceRequest() = default;
};
class AssociateChatbotInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  AssociateChatbotInstanceResponseBody() {}

  explicit AssociateChatbotInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AssociateChatbotInstanceResponseBody() = default;
};
class AssociateChatbotInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AssociateChatbotInstanceResponseBody> body{};

  AssociateChatbotInstanceResponse() {}

  explicit AssociateChatbotInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AssociateChatbotInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AssociateChatbotInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~AssociateChatbotInstanceResponse() = default;
};
class AuditTTSVoiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> accessKey{};
  shared_ptr<string> appKey{};
  shared_ptr<string> engine{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pitchRate{};
  shared_ptr<string> secretKey{};
  shared_ptr<string> speechRate{};
  shared_ptr<string> text{};
  shared_ptr<string> voice{};
  shared_ptr<string> volume{};

  AuditTTSVoiceRequest() {}

  explicit AuditTTSVoiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessKey) {
      res["AccessKey"] = boost::any(*accessKey);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (pitchRate) {
      res["PitchRate"] = boost::any(*pitchRate);
    }
    if (secretKey) {
      res["SecretKey"] = boost::any(*secretKey);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (voice) {
      res["Voice"] = boost::any(*voice);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessKey") != m.end() && !m["AccessKey"].empty()) {
      accessKey = make_shared<string>(boost::any_cast<string>(m["AccessKey"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PitchRate") != m.end() && !m["PitchRate"].empty()) {
      pitchRate = make_shared<string>(boost::any_cast<string>(m["PitchRate"]));
    }
    if (m.find("SecretKey") != m.end() && !m["SecretKey"].empty()) {
      secretKey = make_shared<string>(boost::any_cast<string>(m["SecretKey"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<string>(boost::any_cast<string>(m["SpeechRate"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Voice") != m.end() && !m["Voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["Voice"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<string>(boost::any_cast<string>(m["Volume"]));
    }
  }


  virtual ~AuditTTSVoiceRequest() = default;
};
class AuditTTSVoiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> auditionUrl{};
  shared_ptr<string> requestId{};

  AuditTTSVoiceResponseBody() {}

  explicit AuditTTSVoiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditionUrl) {
      res["AuditionUrl"] = boost::any(*auditionUrl);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditionUrl") != m.end() && !m["AuditionUrl"].empty()) {
      auditionUrl = make_shared<string>(boost::any_cast<string>(m["AuditionUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~AuditTTSVoiceResponseBody() = default;
};
class AuditTTSVoiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuditTTSVoiceResponseBody> body{};

  AuditTTSVoiceResponse() {}

  explicit AuditTTSVoiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuditTTSVoiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuditTTSVoiceResponseBody>(model1);
      }
    }
  }


  virtual ~AuditTTSVoiceResponse() = default;
};
class BeginDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> conversationId{};
  shared_ptr<string> initialContext{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceOwnerId{};

  BeginDialogueRequest() {}

  explicit BeginDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (initialContext) {
      res["InitialContext"] = boost::any(*initialContext);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceOwnerId) {
      res["InstanceOwnerId"] = boost::any(*instanceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InitialContext") != m.end() && !m["InitialContext"].empty()) {
      initialContext = make_shared<string>(boost::any_cast<string>(m["InitialContext"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceOwnerId") != m.end() && !m["InstanceOwnerId"].empty()) {
      instanceOwnerId = make_shared<long>(boost::any_cast<long>(m["InstanceOwnerId"]));
    }
  }


  virtual ~BeginDialogueRequest() = default;
};
class BeginDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionParams{};
  shared_ptr<bool> interruptible{};
  shared_ptr<string> requestId{};
  shared_ptr<string> textResponse{};

  BeginDialogueResponseBody() {}

  explicit BeginDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionParams) {
      res["ActionParams"] = boost::any(*actionParams);
    }
    if (interruptible) {
      res["Interruptible"] = boost::any(*interruptible);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (textResponse) {
      res["TextResponse"] = boost::any(*textResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionParams") != m.end() && !m["ActionParams"].empty()) {
      actionParams = make_shared<string>(boost::any_cast<string>(m["ActionParams"]));
    }
    if (m.find("Interruptible") != m.end() && !m["Interruptible"].empty()) {
      interruptible = make_shared<bool>(boost::any_cast<bool>(m["Interruptible"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TextResponse") != m.end() && !m["TextResponse"].empty()) {
      textResponse = make_shared<string>(boost::any_cast<string>(m["TextResponse"]));
    }
  }


  virtual ~BeginDialogueResponseBody() = default;
};
class BeginDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BeginDialogueResponseBody> body{};

  BeginDialogueResponse() {}

  explicit BeginDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BeginDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BeginDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~BeginDialogueResponse() = default;
};
class CollectedNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> additionalContext{};
  shared_ptr<string> conversationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceOwnerId{};
  shared_ptr<string> number{};

  CollectedNumberRequest() {}

  explicit CollectedNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalContext) {
      res["AdditionalContext"] = boost::any(*additionalContext);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceOwnerId) {
      res["InstanceOwnerId"] = boost::any(*instanceOwnerId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalContext") != m.end() && !m["AdditionalContext"].empty()) {
      additionalContext = make_shared<string>(boost::any_cast<string>(m["AdditionalContext"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceOwnerId") != m.end() && !m["InstanceOwnerId"].empty()) {
      instanceOwnerId = make_shared<long>(boost::any_cast<long>(m["InstanceOwnerId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~CollectedNumberRequest() = default;
};
class CollectedNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionParams{};
  shared_ptr<bool> interruptible{};
  shared_ptr<string> requestId{};
  shared_ptr<string> textResponse{};

  CollectedNumberResponseBody() {}

  explicit CollectedNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionParams) {
      res["ActionParams"] = boost::any(*actionParams);
    }
    if (interruptible) {
      res["Interruptible"] = boost::any(*interruptible);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (textResponse) {
      res["TextResponse"] = boost::any(*textResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionParams") != m.end() && !m["ActionParams"].empty()) {
      actionParams = make_shared<string>(boost::any_cast<string>(m["ActionParams"]));
    }
    if (m.find("Interruptible") != m.end() && !m["Interruptible"].empty()) {
      interruptible = make_shared<bool>(boost::any_cast<bool>(m["Interruptible"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TextResponse") != m.end() && !m["TextResponse"].empty()) {
      textResponse = make_shared<string>(boost::any_cast<string>(m["TextResponse"]));
    }
  }


  virtual ~CollectedNumberResponseBody() = default;
};
class CollectedNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CollectedNumberResponseBody> body{};

  CollectedNumberResponse() {}

  explicit CollectedNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CollectedNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CollectedNumberResponseBody>(model1);
      }
    }
  }


  virtual ~CollectedNumberResponse() = default;
};
class CreateDownloadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> downloadTaskId{};
  shared_ptr<string> fileId{};

  CreateDownloadUrlRequest() {}

  explicit CreateDownloadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadTaskId) {
      res["DownloadTaskId"] = boost::any(*downloadTaskId);
    }
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadTaskId") != m.end() && !m["DownloadTaskId"].empty()) {
      downloadTaskId = make_shared<string>(boost::any_cast<string>(m["DownloadTaskId"]));
    }
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
  }


  virtual ~CreateDownloadUrlRequest() = default;
};
class CreateDownloadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> fileHttpUrl{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateDownloadUrlResponseBody() {}

  explicit CreateDownloadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (fileHttpUrl) {
      res["FileHttpUrl"] = boost::any(*fileHttpUrl);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("FileHttpUrl") != m.end() && !m["FileHttpUrl"].empty()) {
      fileHttpUrl = make_shared<string>(boost::any_cast<string>(m["FileHttpUrl"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~CreateDownloadUrlResponseBody() = default;
};
class CreateDownloadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDownloadUrlResponseBody> body{};

  CreateDownloadUrlResponse() {}

  explicit CreateDownloadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDownloadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDownloadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDownloadUrlResponse() = default;
};
class CreateInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> concurrency{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> nluServiceParamsJson{};
  shared_ptr<string> unionInstanceId{};
  shared_ptr<string> unionSource{};

  CreateInstanceRequest() {}

  explicit CreateInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nluServiceParamsJson) {
      res["NluServiceParamsJson"] = boost::any(*nluServiceParamsJson);
    }
    if (unionInstanceId) {
      res["UnionInstanceId"] = boost::any(*unionInstanceId);
    }
    if (unionSource) {
      res["UnionSource"] = boost::any(*unionSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NluServiceParamsJson") != m.end() && !m["NluServiceParamsJson"].empty()) {
      nluServiceParamsJson = make_shared<string>(boost::any_cast<string>(m["NluServiceParamsJson"]));
    }
    if (m.find("UnionInstanceId") != m.end() && !m["UnionInstanceId"].empty()) {
      unionInstanceId = make_shared<string>(boost::any_cast<string>(m["UnionInstanceId"]));
    }
    if (m.find("UnionSource") != m.end() && !m["UnionSource"].empty()) {
      unionSource = make_shared<string>(boost::any_cast<string>(m["UnionSource"]));
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
        CreateInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateInstanceResponse() = default;
};
class DebugBeginDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> conversationId{};
  shared_ptr<string> initialContext{};
  shared_ptr<string> instanceId{};

  DebugBeginDialogueRequest() {}

  explicit DebugBeginDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (initialContext) {
      res["InitialContext"] = boost::any(*initialContext);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InitialContext") != m.end() && !m["InitialContext"].empty()) {
      initialContext = make_shared<string>(boost::any_cast<string>(m["InitialContext"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DebugBeginDialogueRequest() = default;
};
class DebugBeginDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionParams{};
  shared_ptr<bool> interruptible{};
  shared_ptr<string> requestId{};
  shared_ptr<string> textResponse{};

  DebugBeginDialogueResponseBody() {}

  explicit DebugBeginDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionParams) {
      res["ActionParams"] = boost::any(*actionParams);
    }
    if (interruptible) {
      res["Interruptible"] = boost::any(*interruptible);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (textResponse) {
      res["TextResponse"] = boost::any(*textResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionParams") != m.end() && !m["ActionParams"].empty()) {
      actionParams = make_shared<string>(boost::any_cast<string>(m["ActionParams"]));
    }
    if (m.find("Interruptible") != m.end() && !m["Interruptible"].empty()) {
      interruptible = make_shared<bool>(boost::any_cast<bool>(m["Interruptible"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TextResponse") != m.end() && !m["TextResponse"].empty()) {
      textResponse = make_shared<string>(boost::any_cast<string>(m["TextResponse"]));
    }
  }


  virtual ~DebugBeginDialogueResponseBody() = default;
};
class DebugBeginDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DebugBeginDialogueResponseBody> body{};

  DebugBeginDialogueResponse() {}

  explicit DebugBeginDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DebugBeginDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DebugBeginDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~DebugBeginDialogueResponse() = default;
};
class DebugCollectedNumberRequest : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> number{};

  DebugCollectedNumberRequest() {}

  explicit DebugCollectedNumberRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
  }


  virtual ~DebugCollectedNumberRequest() = default;
};
class DebugCollectedNumberResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionParams{};
  shared_ptr<bool> interruptible{};
  shared_ptr<string> requestId{};
  shared_ptr<string> textResponse{};

  DebugCollectedNumberResponseBody() {}

  explicit DebugCollectedNumberResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionParams) {
      res["ActionParams"] = boost::any(*actionParams);
    }
    if (interruptible) {
      res["Interruptible"] = boost::any(*interruptible);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (textResponse) {
      res["TextResponse"] = boost::any(*textResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionParams") != m.end() && !m["ActionParams"].empty()) {
      actionParams = make_shared<string>(boost::any_cast<string>(m["ActionParams"]));
    }
    if (m.find("Interruptible") != m.end() && !m["Interruptible"].empty()) {
      interruptible = make_shared<bool>(boost::any_cast<bool>(m["Interruptible"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TextResponse") != m.end() && !m["TextResponse"].empty()) {
      textResponse = make_shared<string>(boost::any_cast<string>(m["TextResponse"]));
    }
  }


  virtual ~DebugCollectedNumberResponseBody() = default;
};
class DebugCollectedNumberResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DebugCollectedNumberResponseBody> body{};

  DebugCollectedNumberResponse() {}

  explicit DebugCollectedNumberResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DebugCollectedNumberResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DebugCollectedNumberResponseBody>(model1);
      }
    }
  }


  virtual ~DebugCollectedNumberResponse() = default;
};
class DebugDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> additionalContext{};
  shared_ptr<string> conversationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> utterance{};

  DebugDialogueRequest() {}

  explicit DebugDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalContext) {
      res["AdditionalContext"] = boost::any(*additionalContext);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
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
    if (m.find("AdditionalContext") != m.end() && !m["AdditionalContext"].empty()) {
      additionalContext = make_shared<string>(boost::any_cast<string>(m["AdditionalContext"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
  }


  virtual ~DebugDialogueRequest() = default;
};
class DebugDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionParams{};
  shared_ptr<bool> interruptible{};
  shared_ptr<string> requestId{};
  shared_ptr<string> textResponse{};

  DebugDialogueResponseBody() {}

  explicit DebugDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionParams) {
      res["ActionParams"] = boost::any(*actionParams);
    }
    if (interruptible) {
      res["Interruptible"] = boost::any(*interruptible);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (textResponse) {
      res["TextResponse"] = boost::any(*textResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionParams") != m.end() && !m["ActionParams"].empty()) {
      actionParams = make_shared<string>(boost::any_cast<string>(m["ActionParams"]));
    }
    if (m.find("Interruptible") != m.end() && !m["Interruptible"].empty()) {
      interruptible = make_shared<bool>(boost::any_cast<bool>(m["Interruptible"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TextResponse") != m.end() && !m["TextResponse"].empty()) {
      textResponse = make_shared<string>(boost::any_cast<string>(m["TextResponse"]));
    }
  }


  virtual ~DebugDialogueResponseBody() = default;
};
class DebugDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DebugDialogueResponseBody> body{};

  DebugDialogueResponse() {}

  explicit DebugDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DebugDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DebugDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~DebugDialogueResponse() = default;
};
class DeleteInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DeleteInstanceRequest() {}

  explicit DeleteInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteInstanceRequest() = default;
};
class DeleteInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteInstanceResponseBody() {}

  explicit DeleteInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteInstanceResponse() = default;
};
class DescribeConversationRequest : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> instanceId{};

  DescribeConversationRequest() {}

  explicit DescribeConversationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeConversationRequest() = default;
};
class DescribeConversationResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> conversationId{};
  shared_ptr<long> effectiveAnswerCount{};
  shared_ptr<long> endTime{};
  shared_ptr<string> requestId{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<bool> transferredToAgent{};
  shared_ptr<long> userUtteranceCount{};

  DescribeConversationResponseBody() {}

  explicit DescribeConversationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (effectiveAnswerCount) {
      res["EffectiveAnswerCount"] = boost::any(*effectiveAnswerCount);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (transferredToAgent) {
      res["TransferredToAgent"] = boost::any(*transferredToAgent);
    }
    if (userUtteranceCount) {
      res["UserUtteranceCount"] = boost::any(*userUtteranceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("EffectiveAnswerCount") != m.end() && !m["EffectiveAnswerCount"].empty()) {
      effectiveAnswerCount = make_shared<long>(boost::any_cast<long>(m["EffectiveAnswerCount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("TransferredToAgent") != m.end() && !m["TransferredToAgent"].empty()) {
      transferredToAgent = make_shared<bool>(boost::any_cast<bool>(m["TransferredToAgent"]));
    }
    if (m.find("UserUtteranceCount") != m.end() && !m["UserUtteranceCount"].empty()) {
      userUtteranceCount = make_shared<long>(boost::any_cast<long>(m["UserUtteranceCount"]));
    }
  }


  virtual ~DescribeConversationResponseBody() = default;
};
class DescribeConversationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeConversationResponseBody> body{};

  DescribeConversationResponse() {}

  explicit DescribeConversationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConversationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConversationResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConversationResponse() = default;
};
class DescribeConversationContextRequest : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> instanceId{};

  DescribeConversationContextRequest() {}

  explicit DescribeConversationContextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeConversationContextRequest() = default;
};
class DescribeConversationContextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> conversationContext{};
  shared_ptr<string> requestId{};

  DescribeConversationContextResponseBody() {}

  explicit DescribeConversationContextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationContext) {
      res["ConversationContext"] = boost::any(*conversationContext);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationContext") != m.end() && !m["ConversationContext"].empty()) {
      conversationContext = make_shared<string>(boost::any_cast<string>(m["ConversationContext"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DescribeConversationContextResponseBody() = default;
};
class DescribeConversationContextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeConversationContextResponseBody> body{};

  DescribeConversationContextResponse() {}

  explicit DescribeConversationContextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeConversationContextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeConversationContextResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeConversationContextResponse() = default;
};
class DescribeExportProgressRequest : public Darabonba::Model {
public:
  shared_ptr<string> exportTaskId{};
  shared_ptr<string> instanceId{};

  DescribeExportProgressRequest() {}

  explicit DescribeExportProgressRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTaskId) {
      res["ExportTaskId"] = boost::any(*exportTaskId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExportTaskId") != m.end() && !m["ExportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["ExportTaskId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~DescribeExportProgressRequest() = default;
};
class DescribeExportProgressResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> fileHttpUrl{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeExportProgressResponseBody() {}

  explicit DescribeExportProgressResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileHttpUrl) {
      res["FileHttpUrl"] = boost::any(*fileHttpUrl);
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
    if (m.find("FileHttpUrl") != m.end() && !m["FileHttpUrl"].empty()) {
      fileHttpUrl = make_shared<string>(boost::any_cast<string>(m["FileHttpUrl"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeExportProgressResponseBody() = default;
};
class DescribeExportProgressResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeExportProgressResponseBody> body{};

  DescribeExportProgressResponse() {}

  explicit DescribeExportProgressResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeExportProgressResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeExportProgressResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeExportProgressResponse() = default;
};
class DescribeInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeInstanceRequest() {}

  explicit DescribeInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeInstanceRequest() = default;
};
class DescribeInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> abilityType{};
  shared_ptr<vector<string>> applicableOperations{};
  shared_ptr<long> concurrency{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> name{};
  shared_ptr<string> nluServiceParamsJson{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> unionInstanceId{};
  shared_ptr<string> unionSource{};

  DescribeInstanceResponseBody() {}

  explicit DescribeInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abilityType) {
      res["AbilityType"] = boost::any(*abilityType);
    }
    if (applicableOperations) {
      res["ApplicableOperations"] = boost::any(*applicableOperations);
    }
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nluServiceParamsJson) {
      res["NluServiceParamsJson"] = boost::any(*nluServiceParamsJson);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unionInstanceId) {
      res["UnionInstanceId"] = boost::any(*unionInstanceId);
    }
    if (unionSource) {
      res["UnionSource"] = boost::any(*unionSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AbilityType") != m.end() && !m["AbilityType"].empty()) {
      abilityType = make_shared<string>(boost::any_cast<string>(m["AbilityType"]));
    }
    if (m.find("ApplicableOperations") != m.end() && !m["ApplicableOperations"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicableOperations"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicableOperations"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicableOperations = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NluServiceParamsJson") != m.end() && !m["NluServiceParamsJson"].empty()) {
      nluServiceParamsJson = make_shared<string>(boost::any_cast<string>(m["NluServiceParamsJson"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnionInstanceId") != m.end() && !m["UnionInstanceId"].empty()) {
      unionInstanceId = make_shared<string>(boost::any_cast<string>(m["UnionInstanceId"]));
    }
    if (m.find("UnionSource") != m.end() && !m["UnionSource"].empty()) {
      unionSource = make_shared<string>(boost::any_cast<string>(m["UnionSource"]));
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
        DescribeInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeInstanceResponse() = default;
};
class DescribeNavigationConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DescribeNavigationConfigRequest() {}

  explicit DescribeNavigationConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DescribeNavigationConfigRequest() = default;
};
class DescribeNavigationConfigResponseBodyGreetingConfig : public Darabonba::Model {
public:
  shared_ptr<string> greetingWords{};
  shared_ptr<string> intentTrigger{};
  shared_ptr<string> sourceType{};

  DescribeNavigationConfigResponseBodyGreetingConfig() {}

  explicit DescribeNavigationConfigResponseBodyGreetingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (greetingWords) {
      res["GreetingWords"] = boost::any(*greetingWords);
    }
    if (intentTrigger) {
      res["IntentTrigger"] = boost::any(*intentTrigger);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GreetingWords") != m.end() && !m["GreetingWords"].empty()) {
      greetingWords = make_shared<string>(boost::any_cast<string>(m["GreetingWords"]));
    }
    if (m.find("IntentTrigger") != m.end() && !m["IntentTrigger"].empty()) {
      intentTrigger = make_shared<string>(boost::any_cast<string>(m["IntentTrigger"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~DescribeNavigationConfigResponseBodyGreetingConfig() = default;
};
class DescribeNavigationConfigResponseBodySilenceTimeoutConfig : public Darabonba::Model {
public:
  shared_ptr<string> finalAction{};
  shared_ptr<string> finalActionParams{};
  shared_ptr<string> finalPrompt{};
  shared_ptr<string> intentTrigger{};
  shared_ptr<string> prompt{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> threshold{};
  shared_ptr<long> timeout{};

  DescribeNavigationConfigResponseBodySilenceTimeoutConfig() {}

  explicit DescribeNavigationConfigResponseBodySilenceTimeoutConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finalAction) {
      res["FinalAction"] = boost::any(*finalAction);
    }
    if (finalActionParams) {
      res["FinalActionParams"] = boost::any(*finalActionParams);
    }
    if (finalPrompt) {
      res["FinalPrompt"] = boost::any(*finalPrompt);
    }
    if (intentTrigger) {
      res["IntentTrigger"] = boost::any(*intentTrigger);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinalAction") != m.end() && !m["FinalAction"].empty()) {
      finalAction = make_shared<string>(boost::any_cast<string>(m["FinalAction"]));
    }
    if (m.find("FinalActionParams") != m.end() && !m["FinalActionParams"].empty()) {
      finalActionParams = make_shared<string>(boost::any_cast<string>(m["FinalActionParams"]));
    }
    if (m.find("FinalPrompt") != m.end() && !m["FinalPrompt"].empty()) {
      finalPrompt = make_shared<string>(boost::any_cast<string>(m["FinalPrompt"]));
    }
    if (m.find("IntentTrigger") != m.end() && !m["IntentTrigger"].empty()) {
      intentTrigger = make_shared<string>(boost::any_cast<string>(m["IntentTrigger"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<long>(boost::any_cast<long>(m["Threshold"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~DescribeNavigationConfigResponseBodySilenceTimeoutConfig() = default;
};
class DescribeNavigationConfigResponseBodyUnrecognizingConfig : public Darabonba::Model {
public:
  shared_ptr<string> finalAction{};
  shared_ptr<string> finalActionParams{};
  shared_ptr<string> finalPrompt{};
  shared_ptr<string> prompt{};
  shared_ptr<long> threshold{};

  DescribeNavigationConfigResponseBodyUnrecognizingConfig() {}

  explicit DescribeNavigationConfigResponseBodyUnrecognizingConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finalAction) {
      res["FinalAction"] = boost::any(*finalAction);
    }
    if (finalActionParams) {
      res["FinalActionParams"] = boost::any(*finalActionParams);
    }
    if (finalPrompt) {
      res["FinalPrompt"] = boost::any(*finalPrompt);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinalAction") != m.end() && !m["FinalAction"].empty()) {
      finalAction = make_shared<string>(boost::any_cast<string>(m["FinalAction"]));
    }
    if (m.find("FinalActionParams") != m.end() && !m["FinalActionParams"].empty()) {
      finalActionParams = make_shared<string>(boost::any_cast<string>(m["FinalActionParams"]));
    }
    if (m.find("FinalPrompt") != m.end() && !m["FinalPrompt"].empty()) {
      finalPrompt = make_shared<string>(boost::any_cast<string>(m["FinalPrompt"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<long>(boost::any_cast<long>(m["Threshold"]));
    }
  }


  virtual ~DescribeNavigationConfigResponseBodyUnrecognizingConfig() = default;
};
class DescribeNavigationConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<DescribeNavigationConfigResponseBodyGreetingConfig> greetingConfig{};
  shared_ptr<string> requestId{};
  shared_ptr<DescribeNavigationConfigResponseBodySilenceTimeoutConfig> silenceTimeoutConfig{};
  shared_ptr<DescribeNavigationConfigResponseBodyUnrecognizingConfig> unrecognizingConfig{};

  DescribeNavigationConfigResponseBody() {}

  explicit DescribeNavigationConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (greetingConfig) {
      res["GreetingConfig"] = greetingConfig ? boost::any(greetingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (silenceTimeoutConfig) {
      res["SilenceTimeoutConfig"] = silenceTimeoutConfig ? boost::any(silenceTimeoutConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (unrecognizingConfig) {
      res["UnrecognizingConfig"] = unrecognizingConfig ? boost::any(unrecognizingConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GreetingConfig") != m.end() && !m["GreetingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["GreetingConfig"].type()) {
        DescribeNavigationConfigResponseBodyGreetingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GreetingConfig"]));
        greetingConfig = make_shared<DescribeNavigationConfigResponseBodyGreetingConfig>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SilenceTimeoutConfig") != m.end() && !m["SilenceTimeoutConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["SilenceTimeoutConfig"].type()) {
        DescribeNavigationConfigResponseBodySilenceTimeoutConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["SilenceTimeoutConfig"]));
        silenceTimeoutConfig = make_shared<DescribeNavigationConfigResponseBodySilenceTimeoutConfig>(model1);
      }
    }
    if (m.find("UnrecognizingConfig") != m.end() && !m["UnrecognizingConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["UnrecognizingConfig"].type()) {
        DescribeNavigationConfigResponseBodyUnrecognizingConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["UnrecognizingConfig"]));
        unrecognizingConfig = make_shared<DescribeNavigationConfigResponseBodyUnrecognizingConfig>(model1);
      }
    }
  }


  virtual ~DescribeNavigationConfigResponseBody() = default;
};
class DescribeNavigationConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeNavigationConfigResponseBody> body{};

  DescribeNavigationConfigResponse() {}

  explicit DescribeNavigationConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeNavigationConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeNavigationConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeNavigationConfigResponse() = default;
};
class DescribeRecordingRequest : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> instanceId{};
  shared_ptr<bool> needVoiceSliceRecording{};

  DescribeRecordingRequest() {}

  explicit DescribeRecordingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (needVoiceSliceRecording) {
      res["NeedVoiceSliceRecording"] = boost::any(*needVoiceSliceRecording);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NeedVoiceSliceRecording") != m.end() && !m["NeedVoiceSliceRecording"].empty()) {
      needVoiceSliceRecording = make_shared<bool>(boost::any_cast<bool>(m["NeedVoiceSliceRecording"]));
    }
  }


  virtual ~DescribeRecordingRequest() = default;
};
class DescribeRecordingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> fileName{};
  shared_ptr<string> filePath{};
  shared_ptr<string> requestId{};
  shared_ptr<string> voiceSliceRecordingListJson{};

  DescribeRecordingResponseBody() {}

  explicit DescribeRecordingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (voiceSliceRecordingListJson) {
      res["VoiceSliceRecordingListJson"] = boost::any(*voiceSliceRecordingListJson);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("VoiceSliceRecordingListJson") != m.end() && !m["VoiceSliceRecordingListJson"].empty()) {
      voiceSliceRecordingListJson = make_shared<string>(boost::any_cast<string>(m["VoiceSliceRecordingListJson"]));
    }
  }


  virtual ~DescribeRecordingResponseBody() = default;
};
class DescribeRecordingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeRecordingResponseBody> body{};

  DescribeRecordingResponse() {}

  explicit DescribeRecordingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeRecordingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeRecordingResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeRecordingResponse() = default;
};
class DescribeStatisticalDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTimeLeftRange{};
  shared_ptr<long> beginTimeRightRange{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> timeUnit{};

  DescribeStatisticalDataRequest() {}

  explicit DescribeStatisticalDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTimeLeftRange) {
      res["BeginTimeLeftRange"] = boost::any(*beginTimeLeftRange);
    }
    if (beginTimeRightRange) {
      res["BeginTimeRightRange"] = boost::any(*beginTimeRightRange);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTimeLeftRange") != m.end() && !m["BeginTimeLeftRange"].empty()) {
      beginTimeLeftRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeLeftRange"]));
    }
    if (m.find("BeginTimeRightRange") != m.end() && !m["BeginTimeRightRange"].empty()) {
      beginTimeRightRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeRightRange"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~DescribeStatisticalDataRequest() = default;
};
class DescribeStatisticalDataResponseBodyStatisticalDataReports : public Darabonba::Model {
public:
  shared_ptr<string> dialoguePassRate{};
  shared_ptr<string> knowledgeHitRate{};
  shared_ptr<string> resolutionRate{};
  shared_ptr<long> resolvedQuestionNum{};
  shared_ptr<string> statisticalDate{};
  shared_ptr<long> totalConversationNum{};
  shared_ptr<string> validAnswerRate{};

  DescribeStatisticalDataResponseBodyStatisticalDataReports() {}

  explicit DescribeStatisticalDataResponseBodyStatisticalDataReports(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialoguePassRate) {
      res["DialoguePassRate"] = boost::any(*dialoguePassRate);
    }
    if (knowledgeHitRate) {
      res["KnowledgeHitRate"] = boost::any(*knowledgeHitRate);
    }
    if (resolutionRate) {
      res["ResolutionRate"] = boost::any(*resolutionRate);
    }
    if (resolvedQuestionNum) {
      res["ResolvedQuestionNum"] = boost::any(*resolvedQuestionNum);
    }
    if (statisticalDate) {
      res["StatisticalDate"] = boost::any(*statisticalDate);
    }
    if (totalConversationNum) {
      res["TotalConversationNum"] = boost::any(*totalConversationNum);
    }
    if (validAnswerRate) {
      res["ValidAnswerRate"] = boost::any(*validAnswerRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DialoguePassRate") != m.end() && !m["DialoguePassRate"].empty()) {
      dialoguePassRate = make_shared<string>(boost::any_cast<string>(m["DialoguePassRate"]));
    }
    if (m.find("KnowledgeHitRate") != m.end() && !m["KnowledgeHitRate"].empty()) {
      knowledgeHitRate = make_shared<string>(boost::any_cast<string>(m["KnowledgeHitRate"]));
    }
    if (m.find("ResolutionRate") != m.end() && !m["ResolutionRate"].empty()) {
      resolutionRate = make_shared<string>(boost::any_cast<string>(m["ResolutionRate"]));
    }
    if (m.find("ResolvedQuestionNum") != m.end() && !m["ResolvedQuestionNum"].empty()) {
      resolvedQuestionNum = make_shared<long>(boost::any_cast<long>(m["ResolvedQuestionNum"]));
    }
    if (m.find("StatisticalDate") != m.end() && !m["StatisticalDate"].empty()) {
      statisticalDate = make_shared<string>(boost::any_cast<string>(m["StatisticalDate"]));
    }
    if (m.find("TotalConversationNum") != m.end() && !m["TotalConversationNum"].empty()) {
      totalConversationNum = make_shared<long>(boost::any_cast<long>(m["TotalConversationNum"]));
    }
    if (m.find("ValidAnswerRate") != m.end() && !m["ValidAnswerRate"].empty()) {
      validAnswerRate = make_shared<string>(boost::any_cast<string>(m["ValidAnswerRate"]));
    }
  }


  virtual ~DescribeStatisticalDataResponseBodyStatisticalDataReports() = default;
};
class DescribeStatisticalDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> conversationTotalNum{};
  shared_ptr<string> requestId{};
  shared_ptr<long> resolvedQuestionTotalNum{};
  shared_ptr<vector<DescribeStatisticalDataResponseBodyStatisticalDataReports>> statisticalDataReports{};
  shared_ptr<string> totalDialoguePassRate{};
  shared_ptr<string> totalKnowledgeHitRate{};
  shared_ptr<string> totalResolutionRate{};
  shared_ptr<string> totalValidAnswerRate{};

  DescribeStatisticalDataResponseBody() {}

  explicit DescribeStatisticalDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationTotalNum) {
      res["ConversationTotalNum"] = boost::any(*conversationTotalNum);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (resolvedQuestionTotalNum) {
      res["ResolvedQuestionTotalNum"] = boost::any(*resolvedQuestionTotalNum);
    }
    if (statisticalDataReports) {
      vector<boost::any> temp1;
      for(auto item1:*statisticalDataReports){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["StatisticalDataReports"] = boost::any(temp1);
    }
    if (totalDialoguePassRate) {
      res["TotalDialoguePassRate"] = boost::any(*totalDialoguePassRate);
    }
    if (totalKnowledgeHitRate) {
      res["TotalKnowledgeHitRate"] = boost::any(*totalKnowledgeHitRate);
    }
    if (totalResolutionRate) {
      res["TotalResolutionRate"] = boost::any(*totalResolutionRate);
    }
    if (totalValidAnswerRate) {
      res["TotalValidAnswerRate"] = boost::any(*totalValidAnswerRate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationTotalNum") != m.end() && !m["ConversationTotalNum"].empty()) {
      conversationTotalNum = make_shared<long>(boost::any_cast<long>(m["ConversationTotalNum"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("ResolvedQuestionTotalNum") != m.end() && !m["ResolvedQuestionTotalNum"].empty()) {
      resolvedQuestionTotalNum = make_shared<long>(boost::any_cast<long>(m["ResolvedQuestionTotalNum"]));
    }
    if (m.find("StatisticalDataReports") != m.end() && !m["StatisticalDataReports"].empty()) {
      if (typeid(vector<boost::any>) == m["StatisticalDataReports"].type()) {
        vector<DescribeStatisticalDataResponseBodyStatisticalDataReports> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["StatisticalDataReports"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeStatisticalDataResponseBodyStatisticalDataReports model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        statisticalDataReports = make_shared<vector<DescribeStatisticalDataResponseBodyStatisticalDataReports>>(expect1);
      }
    }
    if (m.find("TotalDialoguePassRate") != m.end() && !m["TotalDialoguePassRate"].empty()) {
      totalDialoguePassRate = make_shared<string>(boost::any_cast<string>(m["TotalDialoguePassRate"]));
    }
    if (m.find("TotalKnowledgeHitRate") != m.end() && !m["TotalKnowledgeHitRate"].empty()) {
      totalKnowledgeHitRate = make_shared<string>(boost::any_cast<string>(m["TotalKnowledgeHitRate"]));
    }
    if (m.find("TotalResolutionRate") != m.end() && !m["TotalResolutionRate"].empty()) {
      totalResolutionRate = make_shared<string>(boost::any_cast<string>(m["TotalResolutionRate"]));
    }
    if (m.find("TotalValidAnswerRate") != m.end() && !m["TotalValidAnswerRate"].empty()) {
      totalValidAnswerRate = make_shared<string>(boost::any_cast<string>(m["TotalValidAnswerRate"]));
    }
  }


  virtual ~DescribeStatisticalDataResponseBody() = default;
};
class DescribeStatisticalDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeStatisticalDataResponseBody> body{};

  DescribeStatisticalDataResponse() {}

  explicit DescribeStatisticalDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeStatisticalDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeStatisticalDataResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeStatisticalDataResponse() = default;
};
class DescribeTTSConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceOwnerId{};

  DescribeTTSConfigRequest() {}

  explicit DescribeTTSConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceOwnerId) {
      res["InstanceOwnerId"] = boost::any(*instanceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceOwnerId") != m.end() && !m["InstanceOwnerId"].empty()) {
      instanceOwnerId = make_shared<long>(boost::any_cast<long>(m["InstanceOwnerId"]));
    }
  }


  virtual ~DescribeTTSConfigRequest() = default;
};
class DescribeTTSConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> aliCustomizedVoice{};
  shared_ptr<string> appKey{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineXunfei{};
  shared_ptr<string> nlsServiceType{};
  shared_ptr<long> pitchRate{};
  shared_ptr<string> requestId{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> voice{};
  shared_ptr<long> volume{};

  DescribeTTSConfigResponseBody() {}

  explicit DescribeTTSConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliCustomizedVoice) {
      res["AliCustomizedVoice"] = boost::any(*aliCustomizedVoice);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineXunfei) {
      res["EngineXunfei"] = boost::any(*engineXunfei);
    }
    if (nlsServiceType) {
      res["NlsServiceType"] = boost::any(*nlsServiceType);
    }
    if (pitchRate) {
      res["PitchRate"] = boost::any(*pitchRate);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (voice) {
      res["Voice"] = boost::any(*voice);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliCustomizedVoice") != m.end() && !m["AliCustomizedVoice"].empty()) {
      aliCustomizedVoice = make_shared<string>(boost::any_cast<string>(m["AliCustomizedVoice"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineXunfei") != m.end() && !m["EngineXunfei"].empty()) {
      engineXunfei = make_shared<string>(boost::any_cast<string>(m["EngineXunfei"]));
    }
    if (m.find("NlsServiceType") != m.end() && !m["NlsServiceType"].empty()) {
      nlsServiceType = make_shared<string>(boost::any_cast<string>(m["NlsServiceType"]));
    }
    if (m.find("PitchRate") != m.end() && !m["PitchRate"].empty()) {
      pitchRate = make_shared<long>(boost::any_cast<long>(m["PitchRate"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["SpeechRate"]));
    }
    if (m.find("Voice") != m.end() && !m["Voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["Voice"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<long>(boost::any_cast<long>(m["Volume"]));
    }
  }


  virtual ~DescribeTTSConfigResponseBody() = default;
};
class DescribeTTSConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeTTSConfigResponseBody> body{};

  DescribeTTSConfigResponse() {}

  explicit DescribeTTSConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeTTSConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeTTSConfigResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeTTSConfigResponse() = default;
};
class DialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> additionalContext{};
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> conversationId{};
  shared_ptr<string> emotion{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceOwnerId{};
  shared_ptr<string> utterance{};

  DialogueRequest() {}

  explicit DialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (additionalContext) {
      res["AdditionalContext"] = boost::any(*additionalContext);
    }
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (emotion) {
      res["Emotion"] = boost::any(*emotion);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceOwnerId) {
      res["InstanceOwnerId"] = boost::any(*instanceOwnerId);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AdditionalContext") != m.end() && !m["AdditionalContext"].empty()) {
      additionalContext = make_shared<string>(boost::any_cast<string>(m["AdditionalContext"]));
    }
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("Emotion") != m.end() && !m["Emotion"].empty()) {
      emotion = make_shared<string>(boost::any_cast<string>(m["Emotion"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceOwnerId") != m.end() && !m["InstanceOwnerId"].empty()) {
      instanceOwnerId = make_shared<long>(boost::any_cast<long>(m["InstanceOwnerId"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
  }


  virtual ~DialogueRequest() = default;
};
class DialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionParams{};
  shared_ptr<bool> interruptible{};
  shared_ptr<string> requestId{};
  shared_ptr<string> textResponse{};

  DialogueResponseBody() {}

  explicit DialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionParams) {
      res["ActionParams"] = boost::any(*actionParams);
    }
    if (interruptible) {
      res["Interruptible"] = boost::any(*interruptible);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (textResponse) {
      res["TextResponse"] = boost::any(*textResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionParams") != m.end() && !m["ActionParams"].empty()) {
      actionParams = make_shared<string>(boost::any_cast<string>(m["ActionParams"]));
    }
    if (m.find("Interruptible") != m.end() && !m["Interruptible"].empty()) {
      interruptible = make_shared<bool>(boost::any_cast<bool>(m["Interruptible"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TextResponse") != m.end() && !m["TextResponse"].empty()) {
      textResponse = make_shared<string>(boost::any_cast<string>(m["TextResponse"]));
    }
  }


  virtual ~DialogueResponseBody() = default;
};
class DialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DialogueResponseBody> body{};

  DialogueResponse() {}

  explicit DialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DialogueResponseBody>(model1);
      }
    }
  }


  virtual ~DialogueResponse() = default;
};
class DisableInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  DisableInstanceRequest() {}

  explicit DisableInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DisableInstanceRequest() = default;
};
class DisableInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DisableInstanceResponseBody() {}

  explicit DisableInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DisableInstanceResponseBody() = default;
};
class DisableInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DisableInstanceResponseBody> body{};

  DisableInstanceResponse() {}

  explicit DisableInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DisableInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DisableInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~DisableInstanceResponse() = default;
};
class EnableInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  EnableInstanceRequest() {}

  explicit EnableInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EnableInstanceRequest() = default;
};
class EnableInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  EnableInstanceResponseBody() {}

  explicit EnableInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~EnableInstanceResponseBody() = default;
};
class EnableInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EnableInstanceResponseBody> body{};

  EnableInstanceResponse() {}

  explicit EnableInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EnableInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EnableInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~EnableInstanceResponse() = default;
};
class EndDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> hangUpParams{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceOwnerId{};

  EndDialogueRequest() {}

  explicit EndDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (hangUpParams) {
      res["HangUpParams"] = boost::any(*hangUpParams);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceOwnerId) {
      res["InstanceOwnerId"] = boost::any(*instanceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("HangUpParams") != m.end() && !m["HangUpParams"].empty()) {
      hangUpParams = make_shared<string>(boost::any_cast<string>(m["HangUpParams"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceOwnerId") != m.end() && !m["InstanceOwnerId"].empty()) {
      instanceOwnerId = make_shared<long>(boost::any_cast<long>(m["InstanceOwnerId"]));
    }
  }


  virtual ~EndDialogueRequest() = default;
};
class EndDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  EndDialogueResponseBody() {}

  explicit EndDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~EndDialogueResponseBody() = default;
};
class EndDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EndDialogueResponseBody> body{};

  EndDialogueResponse() {}

  explicit EndDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EndDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EndDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~EndDialogueResponse() = default;
};
class ExportConversationDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTimeLeftRange{};
  shared_ptr<long> beginTimeRightRange{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> instanceId{};
  shared_ptr<vector<string>> options{};
  shared_ptr<long> result{};
  shared_ptr<long> roundsLeftRange{};
  shared_ptr<long> roundsRightRange{};

  ExportConversationDetailsRequest() {}

  explicit ExportConversationDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTimeLeftRange) {
      res["BeginTimeLeftRange"] = boost::any(*beginTimeLeftRange);
    }
    if (beginTimeRightRange) {
      res["BeginTimeRightRange"] = boost::any(*beginTimeRightRange);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (options) {
      res["Options"] = boost::any(*options);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (roundsLeftRange) {
      res["RoundsLeftRange"] = boost::any(*roundsLeftRange);
    }
    if (roundsRightRange) {
      res["RoundsRightRange"] = boost::any(*roundsRightRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTimeLeftRange") != m.end() && !m["BeginTimeLeftRange"].empty()) {
      beginTimeLeftRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeLeftRange"]));
    }
    if (m.find("BeginTimeRightRange") != m.end() && !m["BeginTimeRightRange"].empty()) {
      beginTimeRightRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeRightRange"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Options") != m.end() && !m["Options"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Options"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Options"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      options = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("RoundsLeftRange") != m.end() && !m["RoundsLeftRange"].empty()) {
      roundsLeftRange = make_shared<long>(boost::any_cast<long>(m["RoundsLeftRange"]));
    }
    if (m.find("RoundsRightRange") != m.end() && !m["RoundsRightRange"].empty()) {
      roundsRightRange = make_shared<long>(boost::any_cast<long>(m["RoundsRightRange"]));
    }
  }


  virtual ~ExportConversationDetailsRequest() = default;
};
class ExportConversationDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportTaskId{};
  shared_ptr<string> requestId{};

  ExportConversationDetailsResponseBody() {}

  explicit ExportConversationDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTaskId) {
      res["ExportTaskId"] = boost::any(*exportTaskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExportTaskId") != m.end() && !m["ExportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["ExportTaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportConversationDetailsResponseBody() = default;
};
class ExportConversationDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportConversationDetailsResponseBody> body{};

  ExportConversationDetailsResponse() {}

  explicit ExportConversationDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportConversationDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportConversationDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ExportConversationDetailsResponse() = default;
};
class ExportStatisticalDataRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTimeLeftRange{};
  shared_ptr<long> beginTimeRightRange{};
  shared_ptr<string> exportType{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> timeUnit{};

  ExportStatisticalDataRequest() {}

  explicit ExportStatisticalDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTimeLeftRange) {
      res["BeginTimeLeftRange"] = boost::any(*beginTimeLeftRange);
    }
    if (beginTimeRightRange) {
      res["BeginTimeRightRange"] = boost::any(*beginTimeRightRange);
    }
    if (exportType) {
      res["ExportType"] = boost::any(*exportType);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (timeUnit) {
      res["TimeUnit"] = boost::any(*timeUnit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTimeLeftRange") != m.end() && !m["BeginTimeLeftRange"].empty()) {
      beginTimeLeftRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeLeftRange"]));
    }
    if (m.find("BeginTimeRightRange") != m.end() && !m["BeginTimeRightRange"].empty()) {
      beginTimeRightRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeRightRange"]));
    }
    if (m.find("ExportType") != m.end() && !m["ExportType"].empty()) {
      exportType = make_shared<string>(boost::any_cast<string>(m["ExportType"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("TimeUnit") != m.end() && !m["TimeUnit"].empty()) {
      timeUnit = make_shared<string>(boost::any_cast<string>(m["TimeUnit"]));
    }
  }


  virtual ~ExportStatisticalDataRequest() = default;
};
class ExportStatisticalDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> exportTaskId{};
  shared_ptr<string> requestId{};

  ExportStatisticalDataResponseBody() {}

  explicit ExportStatisticalDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (exportTaskId) {
      res["ExportTaskId"] = boost::any(*exportTaskId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExportTaskId") != m.end() && !m["ExportTaskId"].empty()) {
      exportTaskId = make_shared<string>(boost::any_cast<string>(m["ExportTaskId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ExportStatisticalDataResponseBody() = default;
};
class ExportStatisticalDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExportStatisticalDataResponseBody> body{};

  ExportStatisticalDataResponse() {}

  explicit ExportStatisticalDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExportStatisticalDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExportStatisticalDataResponseBody>(model1);
      }
    }
  }


  virtual ~ExportStatisticalDataResponse() = default;
};
class GenerateUploadUrlRequest : public Darabonba::Model {
public:
  shared_ptr<string> callerBid{};
  shared_ptr<string> callerIp{};
  shared_ptr<long> callerParentId{};
  shared_ptr<string> callerType{};
  shared_ptr<long> callerUid{};
  shared_ptr<string> clientIp{};
  shared_ptr<long> environment{};
  shared_ptr<string> fileName{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceOwnerId{};
  shared_ptr<string> key{};
  shared_ptr<bool> mfaPresent{};
  shared_ptr<bool> proxyOriginalSecurityTransport{};
  shared_ptr<string> proxyOriginalSourceIp{};
  shared_ptr<bool> proxyTrustTransportInfo{};
  shared_ptr<string> requestId{};
  shared_ptr<string> securityToken{};
  shared_ptr<bool> securityTransport{};
  shared_ptr<long> tenantId{};
  shared_ptr<string> tenantName{};
  shared_ptr<long> userId{};
  shared_ptr<string> userName{};
  shared_ptr<long> xspaceServicerId{};
  shared_ptr<long> xspaceTenantBuId{};

  GenerateUploadUrlRequest() {}

  explicit GenerateUploadUrlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (callerBid) {
      res["CallerBid"] = boost::any(*callerBid);
    }
    if (callerIp) {
      res["CallerIp"] = boost::any(*callerIp);
    }
    if (callerParentId) {
      res["CallerParentId"] = boost::any(*callerParentId);
    }
    if (callerType) {
      res["CallerType"] = boost::any(*callerType);
    }
    if (callerUid) {
      res["CallerUid"] = boost::any(*callerUid);
    }
    if (clientIp) {
      res["ClientIp"] = boost::any(*clientIp);
    }
    if (environment) {
      res["Environment"] = boost::any(*environment);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceOwnerId) {
      res["InstanceOwnerId"] = boost::any(*instanceOwnerId);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (mfaPresent) {
      res["MfaPresent"] = boost::any(*mfaPresent);
    }
    if (proxyOriginalSecurityTransport) {
      res["ProxyOriginalSecurityTransport"] = boost::any(*proxyOriginalSecurityTransport);
    }
    if (proxyOriginalSourceIp) {
      res["ProxyOriginalSourceIp"] = boost::any(*proxyOriginalSourceIp);
    }
    if (proxyTrustTransportInfo) {
      res["ProxyTrustTransportInfo"] = boost::any(*proxyTrustTransportInfo);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (securityTransport) {
      res["SecurityTransport"] = boost::any(*securityTransport);
    }
    if (tenantId) {
      res["TenantId"] = boost::any(*tenantId);
    }
    if (tenantName) {
      res["TenantName"] = boost::any(*tenantName);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    if (userName) {
      res["UserName"] = boost::any(*userName);
    }
    if (xspaceServicerId) {
      res["XspaceServicerId"] = boost::any(*xspaceServicerId);
    }
    if (xspaceTenantBuId) {
      res["XspaceTenantBuId"] = boost::any(*xspaceTenantBuId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CallerBid") != m.end() && !m["CallerBid"].empty()) {
      callerBid = make_shared<string>(boost::any_cast<string>(m["CallerBid"]));
    }
    if (m.find("CallerIp") != m.end() && !m["CallerIp"].empty()) {
      callerIp = make_shared<string>(boost::any_cast<string>(m["CallerIp"]));
    }
    if (m.find("CallerParentId") != m.end() && !m["CallerParentId"].empty()) {
      callerParentId = make_shared<long>(boost::any_cast<long>(m["CallerParentId"]));
    }
    if (m.find("CallerType") != m.end() && !m["CallerType"].empty()) {
      callerType = make_shared<string>(boost::any_cast<string>(m["CallerType"]));
    }
    if (m.find("CallerUid") != m.end() && !m["CallerUid"].empty()) {
      callerUid = make_shared<long>(boost::any_cast<long>(m["CallerUid"]));
    }
    if (m.find("ClientIp") != m.end() && !m["ClientIp"].empty()) {
      clientIp = make_shared<string>(boost::any_cast<string>(m["ClientIp"]));
    }
    if (m.find("Environment") != m.end() && !m["Environment"].empty()) {
      environment = make_shared<long>(boost::any_cast<long>(m["Environment"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceOwnerId") != m.end() && !m["InstanceOwnerId"].empty()) {
      instanceOwnerId = make_shared<long>(boost::any_cast<long>(m["InstanceOwnerId"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("MfaPresent") != m.end() && !m["MfaPresent"].empty()) {
      mfaPresent = make_shared<bool>(boost::any_cast<bool>(m["MfaPresent"]));
    }
    if (m.find("ProxyOriginalSecurityTransport") != m.end() && !m["ProxyOriginalSecurityTransport"].empty()) {
      proxyOriginalSecurityTransport = make_shared<bool>(boost::any_cast<bool>(m["ProxyOriginalSecurityTransport"]));
    }
    if (m.find("ProxyOriginalSourceIp") != m.end() && !m["ProxyOriginalSourceIp"].empty()) {
      proxyOriginalSourceIp = make_shared<string>(boost::any_cast<string>(m["ProxyOriginalSourceIp"]));
    }
    if (m.find("ProxyTrustTransportInfo") != m.end() && !m["ProxyTrustTransportInfo"].empty()) {
      proxyTrustTransportInfo = make_shared<bool>(boost::any_cast<bool>(m["ProxyTrustTransportInfo"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("SecurityTransport") != m.end() && !m["SecurityTransport"].empty()) {
      securityTransport = make_shared<bool>(boost::any_cast<bool>(m["SecurityTransport"]));
    }
    if (m.find("TenantId") != m.end() && !m["TenantId"].empty()) {
      tenantId = make_shared<long>(boost::any_cast<long>(m["TenantId"]));
    }
    if (m.find("TenantName") != m.end() && !m["TenantName"].empty()) {
      tenantName = make_shared<string>(boost::any_cast<string>(m["TenantName"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<long>(boost::any_cast<long>(m["UserId"]));
    }
    if (m.find("UserName") != m.end() && !m["UserName"].empty()) {
      userName = make_shared<string>(boost::any_cast<string>(m["UserName"]));
    }
    if (m.find("XspaceServicerId") != m.end() && !m["XspaceServicerId"].empty()) {
      xspaceServicerId = make_shared<long>(boost::any_cast<long>(m["XspaceServicerId"]));
    }
    if (m.find("XspaceTenantBuId") != m.end() && !m["XspaceTenantBuId"].empty()) {
      xspaceTenantBuId = make_shared<long>(boost::any_cast<long>(m["XspaceTenantBuId"]));
    }
  }


  virtual ~GenerateUploadUrlRequest() = default;
};
class GenerateUploadUrlResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<long> expire{};
  shared_ptr<string> folder{};
  shared_ptr<string> host{};
  shared_ptr<string> message{};
  shared_ptr<string> policy{};
  shared_ptr<string> signature{};
  shared_ptr<bool> success{};

  GenerateUploadUrlResponseBodyData() {}

  explicit GenerateUploadUrlResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (folder) {
      res["Folder"] = boost::any(*folder);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["Expire"]));
    }
    if (m.find("Folder") != m.end() && !m["Folder"].empty()) {
      folder = make_shared<string>(boost::any_cast<string>(m["Folder"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GenerateUploadUrlResponseBodyData() = default;
};
class GenerateUploadUrlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GenerateUploadUrlResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GenerateUploadUrlResponseBody() {}

  explicit GenerateUploadUrlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GenerateUploadUrlResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GenerateUploadUrlResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~GenerateUploadUrlResponseBody() = default;
};
class GenerateUploadUrlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateUploadUrlResponseBody> body{};

  GenerateUploadUrlResponse() {}

  explicit GenerateUploadUrlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateUploadUrlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateUploadUrlResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateUploadUrlResponse() = default;
};
class GetAsrConfigRequest : public Darabonba::Model {
public:
  shared_ptr<long> configLevel{};
  shared_ptr<string> entryId{};

  GetAsrConfigRequest() {}

  explicit GetAsrConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (configLevel) {
      res["ConfigLevel"] = boost::any(*configLevel);
    }
    if (entryId) {
      res["EntryId"] = boost::any(*entryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfigLevel") != m.end() && !m["ConfigLevel"].empty()) {
      configLevel = make_shared<long>(boost::any_cast<long>(m["ConfigLevel"]));
    }
    if (m.find("EntryId") != m.end() && !m["EntryId"].empty()) {
      entryId = make_shared<string>(boost::any_cast<string>(m["EntryId"]));
    }
  }


  virtual ~GetAsrConfigRequest() = default;
};
class GetAsrConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> asrAcousticModelId{};
  shared_ptr<string> asrClassVocabularyId{};
  shared_ptr<string> asrCustomizationId{};
  shared_ptr<string> asrVocabularyId{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineXufei{};

  GetAsrConfigResponseBodyData() {}

  explicit GetAsrConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrAcousticModelId) {
      res["AsrAcousticModelId"] = boost::any(*asrAcousticModelId);
    }
    if (asrClassVocabularyId) {
      res["AsrClassVocabularyId"] = boost::any(*asrClassVocabularyId);
    }
    if (asrCustomizationId) {
      res["AsrCustomizationId"] = boost::any(*asrCustomizationId);
    }
    if (asrVocabularyId) {
      res["AsrVocabularyId"] = boost::any(*asrVocabularyId);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineXufei) {
      res["EngineXufei"] = boost::any(*engineXufei);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrAcousticModelId") != m.end() && !m["AsrAcousticModelId"].empty()) {
      asrAcousticModelId = make_shared<string>(boost::any_cast<string>(m["AsrAcousticModelId"]));
    }
    if (m.find("AsrClassVocabularyId") != m.end() && !m["AsrClassVocabularyId"].empty()) {
      asrClassVocabularyId = make_shared<string>(boost::any_cast<string>(m["AsrClassVocabularyId"]));
    }
    if (m.find("AsrCustomizationId") != m.end() && !m["AsrCustomizationId"].empty()) {
      asrCustomizationId = make_shared<string>(boost::any_cast<string>(m["AsrCustomizationId"]));
    }
    if (m.find("AsrVocabularyId") != m.end() && !m["AsrVocabularyId"].empty()) {
      asrVocabularyId = make_shared<string>(boost::any_cast<string>(m["AsrVocabularyId"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineXufei") != m.end() && !m["EngineXufei"].empty()) {
      engineXufei = make_shared<string>(boost::any_cast<string>(m["EngineXufei"]));
    }
  }


  virtual ~GetAsrConfigResponseBodyData() = default;
};
class GetAsrConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetAsrConfigResponseBodyData> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAsrConfigResponseBody() {}

  explicit GetAsrConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetAsrConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetAsrConfigResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetAsrConfigResponseBody() = default;
};
class GetAsrConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAsrConfigResponseBody> body{};

  GetAsrConfigResponse() {}

  explicit GetAsrConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsrConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsrConfigResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsrConfigResponse() = default;
};
class GetRealTimeConcurrencyRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};

  GetRealTimeConcurrencyRequest() {}

  explicit GetRealTimeConcurrencyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetRealTimeConcurrencyRequest() = default;
};
class GetRealTimeConcurrencyResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxConcurrency{};
  shared_ptr<long> realTimeConcurrency{};
  shared_ptr<string> requestId{};
  shared_ptr<long> timestamp{};

  GetRealTimeConcurrencyResponseBody() {}

  explicit GetRealTimeConcurrencyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxConcurrency) {
      res["MaxConcurrency"] = boost::any(*maxConcurrency);
    }
    if (realTimeConcurrency) {
      res["RealTimeConcurrency"] = boost::any(*realTimeConcurrency);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxConcurrency") != m.end() && !m["MaxConcurrency"].empty()) {
      maxConcurrency = make_shared<long>(boost::any_cast<long>(m["MaxConcurrency"]));
    }
    if (m.find("RealTimeConcurrency") != m.end() && !m["RealTimeConcurrency"].empty()) {
      realTimeConcurrency = make_shared<long>(boost::any_cast<long>(m["RealTimeConcurrency"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<long>(boost::any_cast<long>(m["Timestamp"]));
    }
  }


  virtual ~GetRealTimeConcurrencyResponseBody() = default;
};
class GetRealTimeConcurrencyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRealTimeConcurrencyResponseBody> body{};

  GetRealTimeConcurrencyResponse() {}

  explicit GetRealTimeConcurrencyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRealTimeConcurrencyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRealTimeConcurrencyResponseBody>(model1);
      }
    }
  }


  virtual ~GetRealTimeConcurrencyResponse() = default;
};
class ListChatbotInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceId{};
  shared_ptr<string> nluServiceParamsJson{};
  shared_ptr<string> nluServiceType{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> unionSource{};

  ListChatbotInstancesRequest() {}

  explicit ListChatbotInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nluServiceParamsJson) {
      res["NluServiceParamsJson"] = boost::any(*nluServiceParamsJson);
    }
    if (nluServiceType) {
      res["NluServiceType"] = boost::any(*nluServiceType);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (unionSource) {
      res["UnionSource"] = boost::any(*unionSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NluServiceParamsJson") != m.end() && !m["NluServiceParamsJson"].empty()) {
      nluServiceParamsJson = make_shared<string>(boost::any_cast<string>(m["NluServiceParamsJson"]));
    }
    if (m.find("NluServiceType") != m.end() && !m["NluServiceType"].empty()) {
      nluServiceType = make_shared<string>(boost::any_cast<string>(m["NluServiceType"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("UnionSource") != m.end() && !m["UnionSource"].empty()) {
      unionSource = make_shared<string>(boost::any_cast<string>(m["UnionSource"]));
    }
  }


  virtual ~ListChatbotInstancesRequest() = default;
};
class ListChatbotInstancesResponseBodyBots : public Darabonba::Model {
public:
  shared_ptr<string> avatar{};
  shared_ptr<string> createTime{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> introduction{};
  shared_ptr<string> languageCode{};
  shared_ptr<string> name{};
  shared_ptr<string> timeZone{};

  ListChatbotInstancesResponseBodyBots() {}

  explicit ListChatbotInstancesResponseBodyBots(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (timeZone) {
      res["TimeZone"] = boost::any(*timeZone);
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
    if (m.find("TimeZone") != m.end() && !m["TimeZone"].empty()) {
      timeZone = make_shared<string>(boost::any_cast<string>(m["TimeZone"]));
    }
  }


  virtual ~ListChatbotInstancesResponseBodyBots() = default;
};
class ListChatbotInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListChatbotInstancesResponseBodyBots>> bots{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListChatbotInstancesResponseBody() {}

  explicit ListChatbotInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bots) {
      vector<boost::any> temp1;
      for(auto item1:*bots){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Bots"] = boost::any(temp1);
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
    if (m.find("Bots") != m.end() && !m["Bots"].empty()) {
      if (typeid(vector<boost::any>) == m["Bots"].type()) {
        vector<ListChatbotInstancesResponseBodyBots> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Bots"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListChatbotInstancesResponseBodyBots model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bots = make_shared<vector<ListChatbotInstancesResponseBodyBots>>(expect1);
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


  virtual ~ListChatbotInstancesResponseBody() = default;
};
class ListChatbotInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListChatbotInstancesResponseBody> body{};

  ListChatbotInstancesResponse() {}

  explicit ListChatbotInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListChatbotInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListChatbotInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListChatbotInstancesResponse() = default;
};
class ListConversationDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> instanceId{};

  ListConversationDetailsRequest() {}

  explicit ListConversationDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
  }


  virtual ~ListConversationDetailsRequest() = default;
};
class ListConversationDetailsResponseBodyConversationDetails : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionParams{};
  shared_ptr<string> conversationId{};
  shared_ptr<long> createTime{};
  shared_ptr<string> sequenceId{};
  shared_ptr<string> speaker{};
  shared_ptr<string> utterance{};

  ListConversationDetailsResponseBodyConversationDetails() {}

  explicit ListConversationDetailsResponseBodyConversationDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionParams) {
      res["ActionParams"] = boost::any(*actionParams);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (sequenceId) {
      res["SequenceId"] = boost::any(*sequenceId);
    }
    if (speaker) {
      res["Speaker"] = boost::any(*speaker);
    }
    if (utterance) {
      res["Utterance"] = boost::any(*utterance);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionParams") != m.end() && !m["ActionParams"].empty()) {
      actionParams = make_shared<string>(boost::any_cast<string>(m["ActionParams"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("SequenceId") != m.end() && !m["SequenceId"].empty()) {
      sequenceId = make_shared<string>(boost::any_cast<string>(m["SequenceId"]));
    }
    if (m.find("Speaker") != m.end() && !m["Speaker"].empty()) {
      speaker = make_shared<string>(boost::any_cast<string>(m["Speaker"]));
    }
    if (m.find("Utterance") != m.end() && !m["Utterance"].empty()) {
      utterance = make_shared<string>(boost::any_cast<string>(m["Utterance"]));
    }
  }


  virtual ~ListConversationDetailsResponseBodyConversationDetails() = default;
};
class ListConversationDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListConversationDetailsResponseBodyConversationDetails>> conversationDetails{};
  shared_ptr<string> requestId{};

  ListConversationDetailsResponseBody() {}

  explicit ListConversationDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationDetails) {
      vector<boost::any> temp1;
      for(auto item1:*conversationDetails){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ConversationDetails"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationDetails") != m.end() && !m["ConversationDetails"].empty()) {
      if (typeid(vector<boost::any>) == m["ConversationDetails"].type()) {
        vector<ListConversationDetailsResponseBodyConversationDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ConversationDetails"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConversationDetailsResponseBodyConversationDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conversationDetails = make_shared<vector<ListConversationDetailsResponseBodyConversationDetails>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListConversationDetailsResponseBody() = default;
};
class ListConversationDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConversationDetailsResponseBody> body{};

  ListConversationDetailsResponse() {}

  explicit ListConversationDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConversationDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConversationDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConversationDetailsResponse() = default;
};
class ListConversationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTimeLeftRange{};
  shared_ptr<long> beginTimeRightRange{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> isSandBox{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<long> result{};
  shared_ptr<long> roundsLeftRange{};
  shared_ptr<long> roundsRightRange{};

  ListConversationsRequest() {}

  explicit ListConversationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTimeLeftRange) {
      res["BeginTimeLeftRange"] = boost::any(*beginTimeLeftRange);
    }
    if (beginTimeRightRange) {
      res["BeginTimeRightRange"] = boost::any(*beginTimeRightRange);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (isSandBox) {
      res["IsSandBox"] = boost::any(*isSandBox);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (result) {
      res["Result"] = boost::any(*result);
    }
    if (roundsLeftRange) {
      res["RoundsLeftRange"] = boost::any(*roundsLeftRange);
    }
    if (roundsRightRange) {
      res["RoundsRightRange"] = boost::any(*roundsRightRange);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTimeLeftRange") != m.end() && !m["BeginTimeLeftRange"].empty()) {
      beginTimeLeftRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeLeftRange"]));
    }
    if (m.find("BeginTimeRightRange") != m.end() && !m["BeginTimeRightRange"].empty()) {
      beginTimeRightRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeRightRange"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IsSandBox") != m.end() && !m["IsSandBox"].empty()) {
      isSandBox = make_shared<string>(boost::any_cast<string>(m["IsSandBox"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("Result") != m.end() && !m["Result"].empty()) {
      result = make_shared<long>(boost::any_cast<long>(m["Result"]));
    }
    if (m.find("RoundsLeftRange") != m.end() && !m["RoundsLeftRange"].empty()) {
      roundsLeftRange = make_shared<long>(boost::any_cast<long>(m["RoundsLeftRange"]));
    }
    if (m.find("RoundsRightRange") != m.end() && !m["RoundsRightRange"].empty()) {
      roundsRightRange = make_shared<long>(boost::any_cast<long>(m["RoundsRightRange"]));
    }
  }


  virtual ~ListConversationsRequest() = default;
};
class ListConversationsResponseBodyConversations : public Darabonba::Model {
public:
  shared_ptr<string> calledNumber{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> conversationId{};
  shared_ptr<string> dsReport{};
  shared_ptr<vector<string>> dsReportTitles{};
  shared_ptr<long> endReason{};
  shared_ptr<long> endTime{};
  shared_ptr<bool> hasLastPlaybackCompleted{};
  shared_ptr<bool> hasToAgent{};
  shared_ptr<long> rounds{};
  shared_ptr<bool> sandBox{};
  shared_ptr<string> skillGroup{};
  shared_ptr<long> startTime{};

  ListConversationsResponseBodyConversations() {}

  explicit ListConversationsResponseBodyConversations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (calledNumber) {
      res["CalledNumber"] = boost::any(*calledNumber);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (dsReport) {
      res["DsReport"] = boost::any(*dsReport);
    }
    if (dsReportTitles) {
      res["DsReportTitles"] = boost::any(*dsReportTitles);
    }
    if (endReason) {
      res["EndReason"] = boost::any(*endReason);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (hasLastPlaybackCompleted) {
      res["HasLastPlaybackCompleted"] = boost::any(*hasLastPlaybackCompleted);
    }
    if (hasToAgent) {
      res["HasToAgent"] = boost::any(*hasToAgent);
    }
    if (rounds) {
      res["Rounds"] = boost::any(*rounds);
    }
    if (sandBox) {
      res["SandBox"] = boost::any(*sandBox);
    }
    if (skillGroup) {
      res["SkillGroup"] = boost::any(*skillGroup);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CalledNumber") != m.end() && !m["CalledNumber"].empty()) {
      calledNumber = make_shared<string>(boost::any_cast<string>(m["CalledNumber"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("DsReport") != m.end() && !m["DsReport"].empty()) {
      dsReport = make_shared<string>(boost::any_cast<string>(m["DsReport"]));
    }
    if (m.find("DsReportTitles") != m.end() && !m["DsReportTitles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DsReportTitles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DsReportTitles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dsReportTitles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EndReason") != m.end() && !m["EndReason"].empty()) {
      endReason = make_shared<long>(boost::any_cast<long>(m["EndReason"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("HasLastPlaybackCompleted") != m.end() && !m["HasLastPlaybackCompleted"].empty()) {
      hasLastPlaybackCompleted = make_shared<bool>(boost::any_cast<bool>(m["HasLastPlaybackCompleted"]));
    }
    if (m.find("HasToAgent") != m.end() && !m["HasToAgent"].empty()) {
      hasToAgent = make_shared<bool>(boost::any_cast<bool>(m["HasToAgent"]));
    }
    if (m.find("Rounds") != m.end() && !m["Rounds"].empty()) {
      rounds = make_shared<long>(boost::any_cast<long>(m["Rounds"]));
    }
    if (m.find("SandBox") != m.end() && !m["SandBox"].empty()) {
      sandBox = make_shared<bool>(boost::any_cast<bool>(m["SandBox"]));
    }
    if (m.find("SkillGroup") != m.end() && !m["SkillGroup"].empty()) {
      skillGroup = make_shared<string>(boost::any_cast<string>(m["SkillGroup"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
  }


  virtual ~ListConversationsResponseBodyConversations() = default;
};
class ListConversationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListConversationsResponseBodyConversations>> conversations{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListConversationsResponseBody() {}

  explicit ListConversationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversations) {
      vector<boost::any> temp1;
      for(auto item1:*conversations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conversations"] = boost::any(temp1);
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
    if (m.find("Conversations") != m.end() && !m["Conversations"].empty()) {
      if (typeid(vector<boost::any>) == m["Conversations"].type()) {
        vector<ListConversationsResponseBodyConversations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conversations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListConversationsResponseBodyConversations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conversations = make_shared<vector<ListConversationsResponseBodyConversations>>(expect1);
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


  virtual ~ListConversationsResponseBody() = default;
};
class ListConversationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListConversationsResponseBody> body{};

  ListConversationsResponse() {}

  explicit ListConversationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListConversationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListConversationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListConversationsResponse() = default;
};
class ListDownloadTasksRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  ListDownloadTasksRequest() {}

  explicit ListDownloadTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ListDownloadTasksRequest() = default;
};
class ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};
  shared_ptr<long> progress{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles() {}

  explicit ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["FileId"] = boost::any(*fileId);
    }
    if (progress) {
      res["Progress"] = boost::any(*progress);
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
    if (m.find("FileId") != m.end() && !m["FileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["FileId"]));
    }
    if (m.find("Progress") != m.end() && !m["Progress"].empty()) {
      progress = make_shared<long>(boost::any_cast<long>(m["Progress"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles() = default;
};
class ListDownloadTasksResponseBodyDownloadTasksList : public Darabonba::Model {
public:
  shared_ptr<vector<ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles>> downloadTaskFiles{};
  shared_ptr<long> expireTime{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> title{};

  ListDownloadTasksResponseBodyDownloadTasksList() {}

  explicit ListDownloadTasksResponseBodyDownloadTasksList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (downloadTaskFiles) {
      vector<boost::any> temp1;
      for(auto item1:*downloadTaskFiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DownloadTaskFiles"] = boost::any(temp1);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DownloadTaskFiles") != m.end() && !m["DownloadTaskFiles"].empty()) {
      if (typeid(vector<boost::any>) == m["DownloadTaskFiles"].type()) {
        vector<ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DownloadTaskFiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        downloadTaskFiles = make_shared<vector<ListDownloadTasksResponseBodyDownloadTasksListDownloadTaskFiles>>(expect1);
      }
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<long>(boost::any_cast<long>(m["ExpireTime"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListDownloadTasksResponseBodyDownloadTasksList() = default;
};
class ListDownloadTasksResponseBodyDownloadTasks : public Darabonba::Model {
public:
  shared_ptr<vector<ListDownloadTasksResponseBodyDownloadTasksList>> list{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> totalCount{};

  ListDownloadTasksResponseBodyDownloadTasks() {}

  explicit ListDownloadTasksResponseBodyDownloadTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (list) {
      vector<boost::any> temp1;
      for(auto item1:*list){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["List"] = boost::any(temp1);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<ListDownloadTasksResponseBodyDownloadTasksList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDownloadTasksResponseBodyDownloadTasksList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<ListDownloadTasksResponseBodyDownloadTasksList>>(expect1);
      }
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListDownloadTasksResponseBodyDownloadTasks() = default;
};
class ListDownloadTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListDownloadTasksResponseBodyDownloadTasks> downloadTasks{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListDownloadTasksResponseBody() {}

  explicit ListDownloadTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (downloadTasks) {
      res["DownloadTasks"] = downloadTasks ? boost::any(downloadTasks->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("DownloadTasks") != m.end() && !m["DownloadTasks"].empty()) {
      if (typeid(map<string, boost::any>) == m["DownloadTasks"].type()) {
        ListDownloadTasksResponseBodyDownloadTasks model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["DownloadTasks"]));
        downloadTasks = make_shared<ListDownloadTasksResponseBodyDownloadTasks>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
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


  virtual ~ListDownloadTasksResponseBody() = default;
};
class ListDownloadTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDownloadTasksResponseBody> body{};

  ListDownloadTasksResponse() {}

  explicit ListDownloadTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDownloadTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDownloadTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListDownloadTasksResponse() = default;
};
class ListInstancesRequest : public Darabonba::Model {
public:
  shared_ptr<string> instanceIdListJsonString{};
  shared_ptr<string> name{};
  shared_ptr<string> nluServiceTypeListJsonString{};
  shared_ptr<string> number{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> status{};
  shared_ptr<string> unionInstanceId{};
  shared_ptr<string> unionSource{};

  ListInstancesRequest() {}

  explicit ListInstancesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instanceIdListJsonString) {
      res["InstanceIdListJsonString"] = boost::any(*instanceIdListJsonString);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nluServiceTypeListJsonString) {
      res["NluServiceTypeListJsonString"] = boost::any(*nluServiceTypeListJsonString);
    }
    if (number) {
      res["Number"] = boost::any(*number);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unionInstanceId) {
      res["UnionInstanceId"] = boost::any(*unionInstanceId);
    }
    if (unionSource) {
      res["UnionSource"] = boost::any(*unionSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstanceIdListJsonString") != m.end() && !m["InstanceIdListJsonString"].empty()) {
      instanceIdListJsonString = make_shared<string>(boost::any_cast<string>(m["InstanceIdListJsonString"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NluServiceTypeListJsonString") != m.end() && !m["NluServiceTypeListJsonString"].empty()) {
      nluServiceTypeListJsonString = make_shared<string>(boost::any_cast<string>(m["NluServiceTypeListJsonString"]));
    }
    if (m.find("Number") != m.end() && !m["Number"].empty()) {
      number = make_shared<string>(boost::any_cast<string>(m["Number"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnionInstanceId") != m.end() && !m["UnionInstanceId"].empty()) {
      unionInstanceId = make_shared<string>(boost::any_cast<string>(m["UnionInstanceId"]));
    }
    if (m.find("UnionSource") != m.end() && !m["UnionSource"].empty()) {
      unionSource = make_shared<string>(boost::any_cast<string>(m["UnionSource"]));
    }
  }


  virtual ~ListInstancesRequest() = default;
};
class ListInstancesResponseBodyInstances : public Darabonba::Model {
public:
  shared_ptr<vector<string>> applicableOperations{};
  shared_ptr<long> concurrency{};
  shared_ptr<long> createTime{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> modifyTime{};
  shared_ptr<string> modifyUserName{};
  shared_ptr<string> name{};
  shared_ptr<string> nluServiceParamsJson{};
  shared_ptr<vector<string>> numbers{};
  shared_ptr<string> status{};
  shared_ptr<string> unionInstanceId{};
  shared_ptr<string> unionSource{};

  ListInstancesResponseBodyInstances() {}

  explicit ListInstancesResponseBodyInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicableOperations) {
      res["ApplicableOperations"] = boost::any(*applicableOperations);
    }
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (modifyTime) {
      res["ModifyTime"] = boost::any(*modifyTime);
    }
    if (modifyUserName) {
      res["ModifyUserName"] = boost::any(*modifyUserName);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nluServiceParamsJson) {
      res["NluServiceParamsJson"] = boost::any(*nluServiceParamsJson);
    }
    if (numbers) {
      res["Numbers"] = boost::any(*numbers);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (unionInstanceId) {
      res["UnionInstanceId"] = boost::any(*unionInstanceId);
    }
    if (unionSource) {
      res["UnionSource"] = boost::any(*unionSource);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicableOperations") != m.end() && !m["ApplicableOperations"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ApplicableOperations"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ApplicableOperations"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      applicableOperations = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<long>(boost::any_cast<long>(m["CreateTime"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("ModifyTime") != m.end() && !m["ModifyTime"].empty()) {
      modifyTime = make_shared<long>(boost::any_cast<long>(m["ModifyTime"]));
    }
    if (m.find("ModifyUserName") != m.end() && !m["ModifyUserName"].empty()) {
      modifyUserName = make_shared<string>(boost::any_cast<string>(m["ModifyUserName"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NluServiceParamsJson") != m.end() && !m["NluServiceParamsJson"].empty()) {
      nluServiceParamsJson = make_shared<string>(boost::any_cast<string>(m["NluServiceParamsJson"]));
    }
    if (m.find("Numbers") != m.end() && !m["Numbers"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Numbers"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Numbers"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      numbers = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UnionInstanceId") != m.end() && !m["UnionInstanceId"].empty()) {
      unionInstanceId = make_shared<string>(boost::any_cast<string>(m["UnionInstanceId"]));
    }
    if (m.find("UnionSource") != m.end() && !m["UnionSource"].empty()) {
      unionSource = make_shared<string>(boost::any_cast<string>(m["UnionSource"]));
    }
  }


  virtual ~ListInstancesResponseBodyInstances() = default;
};
class ListInstancesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListInstancesResponseBodyInstances>> instances{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListInstancesResponseBody() {}

  explicit ListInstancesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListInstancesResponseBodyInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListInstancesResponseBodyInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<ListInstancesResponseBodyInstances>>(expect1);
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


  virtual ~ListInstancesResponseBody() = default;
};
class ListInstancesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstancesResponseBody> body{};

  ListInstancesResponse() {}

  explicit ListInstancesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstancesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstancesResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstancesResponse() = default;
};
class ModifyAsrConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> asrAcousticModelId{};
  shared_ptr<string> asrClassVocabularyId{};
  shared_ptr<string> asrCustomizationId{};
  shared_ptr<string> asrVocabularyId{};
  shared_ptr<long> configLevel{};
  shared_ptr<string> engine{};
  shared_ptr<string> entryId{};

  ModifyAsrConfigRequest() {}

  explicit ModifyAsrConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrAcousticModelId) {
      res["AsrAcousticModelId"] = boost::any(*asrAcousticModelId);
    }
    if (asrClassVocabularyId) {
      res["AsrClassVocabularyId"] = boost::any(*asrClassVocabularyId);
    }
    if (asrCustomizationId) {
      res["AsrCustomizationId"] = boost::any(*asrCustomizationId);
    }
    if (asrVocabularyId) {
      res["AsrVocabularyId"] = boost::any(*asrVocabularyId);
    }
    if (configLevel) {
      res["ConfigLevel"] = boost::any(*configLevel);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (entryId) {
      res["EntryId"] = boost::any(*entryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsrAcousticModelId") != m.end() && !m["AsrAcousticModelId"].empty()) {
      asrAcousticModelId = make_shared<string>(boost::any_cast<string>(m["AsrAcousticModelId"]));
    }
    if (m.find("AsrClassVocabularyId") != m.end() && !m["AsrClassVocabularyId"].empty()) {
      asrClassVocabularyId = make_shared<string>(boost::any_cast<string>(m["AsrClassVocabularyId"]));
    }
    if (m.find("AsrCustomizationId") != m.end() && !m["AsrCustomizationId"].empty()) {
      asrCustomizationId = make_shared<string>(boost::any_cast<string>(m["AsrCustomizationId"]));
    }
    if (m.find("AsrVocabularyId") != m.end() && !m["AsrVocabularyId"].empty()) {
      asrVocabularyId = make_shared<string>(boost::any_cast<string>(m["AsrVocabularyId"]));
    }
    if (m.find("ConfigLevel") != m.end() && !m["ConfigLevel"].empty()) {
      configLevel = make_shared<long>(boost::any_cast<long>(m["ConfigLevel"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EntryId") != m.end() && !m["EntryId"].empty()) {
      entryId = make_shared<string>(boost::any_cast<string>(m["EntryId"]));
    }
  }


  virtual ~ModifyAsrConfigRequest() = default;
};
class ModifyAsrConfigResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> affectedRows{};

  ModifyAsrConfigResponseBodyData() {}

  explicit ModifyAsrConfigResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (affectedRows) {
      res["AffectedRows"] = boost::any(*affectedRows);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AffectedRows") != m.end() && !m["AffectedRows"].empty()) {
      affectedRows = make_shared<long>(boost::any_cast<long>(m["AffectedRows"]));
    }
  }


  virtual ~ModifyAsrConfigResponseBodyData() = default;
};
class ModifyAsrConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ModifyAsrConfigResponseBodyData> data{};
  shared_ptr<string> errorMsg{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ModifyAsrConfigResponseBody() {}

  explicit ModifyAsrConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ModifyAsrConfigResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ModifyAsrConfigResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ModifyAsrConfigResponseBody() = default;
};
class ModifyAsrConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyAsrConfigResponseBody> body{};

  ModifyAsrConfigResponse() {}

  explicit ModifyAsrConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyAsrConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyAsrConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyAsrConfigResponse() = default;
};
class ModifyGreetingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> greetingWords{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> intentTrigger{};
  shared_ptr<string> sourceType{};

  ModifyGreetingConfigRequest() {}

  explicit ModifyGreetingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (greetingWords) {
      res["GreetingWords"] = boost::any(*greetingWords);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentTrigger) {
      res["IntentTrigger"] = boost::any(*intentTrigger);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("GreetingWords") != m.end() && !m["GreetingWords"].empty()) {
      greetingWords = make_shared<string>(boost::any_cast<string>(m["GreetingWords"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentTrigger") != m.end() && !m["IntentTrigger"].empty()) {
      intentTrigger = make_shared<string>(boost::any_cast<string>(m["IntentTrigger"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
  }


  virtual ~ModifyGreetingConfigRequest() = default;
};
class ModifyGreetingConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyGreetingConfigResponseBody() {}

  explicit ModifyGreetingConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyGreetingConfigResponseBody() = default;
};
class ModifyGreetingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyGreetingConfigResponseBody> body{};

  ModifyGreetingConfigResponse() {}

  explicit ModifyGreetingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyGreetingConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyGreetingConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyGreetingConfigResponse() = default;
};
class ModifyInstanceRequest : public Darabonba::Model {
public:
  shared_ptr<long> concurrency{};
  shared_ptr<string> description{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> name{};

  ModifyInstanceRequest() {}

  explicit ModifyInstanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrency) {
      res["Concurrency"] = boost::any(*concurrency);
    }
    if (description) {
      res["Description"] = boost::any(*description);
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
    if (m.find("Concurrency") != m.end() && !m["Concurrency"].empty()) {
      concurrency = make_shared<long>(boost::any_cast<long>(m["Concurrency"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~ModifyInstanceRequest() = default;
};
class ModifyInstanceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyInstanceResponseBody() {}

  explicit ModifyInstanceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyInstanceResponseBody() = default;
};
class ModifyInstanceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyInstanceResponseBody> body{};

  ModifyInstanceResponse() {}

  explicit ModifyInstanceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyInstanceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyInstanceResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyInstanceResponse() = default;
};
class ModifySilenceTimeoutConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> finalAction{};
  shared_ptr<string> finalActionParams{};
  shared_ptr<string> finalPrompt{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> intentTrigger{};
  shared_ptr<string> prompt{};
  shared_ptr<string> sourceType{};
  shared_ptr<long> threshold{};
  shared_ptr<long> timeout{};

  ModifySilenceTimeoutConfigRequest() {}

  explicit ModifySilenceTimeoutConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finalAction) {
      res["FinalAction"] = boost::any(*finalAction);
    }
    if (finalActionParams) {
      res["FinalActionParams"] = boost::any(*finalActionParams);
    }
    if (finalPrompt) {
      res["FinalPrompt"] = boost::any(*finalPrompt);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (intentTrigger) {
      res["IntentTrigger"] = boost::any(*intentTrigger);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (sourceType) {
      res["SourceType"] = boost::any(*sourceType);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    if (timeout) {
      res["Timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinalAction") != m.end() && !m["FinalAction"].empty()) {
      finalAction = make_shared<string>(boost::any_cast<string>(m["FinalAction"]));
    }
    if (m.find("FinalActionParams") != m.end() && !m["FinalActionParams"].empty()) {
      finalActionParams = make_shared<string>(boost::any_cast<string>(m["FinalActionParams"]));
    }
    if (m.find("FinalPrompt") != m.end() && !m["FinalPrompt"].empty()) {
      finalPrompt = make_shared<string>(boost::any_cast<string>(m["FinalPrompt"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("IntentTrigger") != m.end() && !m["IntentTrigger"].empty()) {
      intentTrigger = make_shared<string>(boost::any_cast<string>(m["IntentTrigger"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("SourceType") != m.end() && !m["SourceType"].empty()) {
      sourceType = make_shared<string>(boost::any_cast<string>(m["SourceType"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<long>(boost::any_cast<long>(m["Threshold"]));
    }
    if (m.find("Timeout") != m.end() && !m["Timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["Timeout"]));
    }
  }


  virtual ~ModifySilenceTimeoutConfigRequest() = default;
};
class ModifySilenceTimeoutConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifySilenceTimeoutConfigResponseBody() {}

  explicit ModifySilenceTimeoutConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifySilenceTimeoutConfigResponseBody() = default;
};
class ModifySilenceTimeoutConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifySilenceTimeoutConfigResponseBody> body{};

  ModifySilenceTimeoutConfigResponse() {}

  explicit ModifySilenceTimeoutConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifySilenceTimeoutConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifySilenceTimeoutConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifySilenceTimeoutConfigResponse() = default;
};
class ModifyTTSConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliCustomizedVoice{};
  shared_ptr<string> appKey{};
  shared_ptr<string> engine{};
  shared_ptr<string> engineXunfei{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> nlsServiceType{};
  shared_ptr<string> speechRate{};
  shared_ptr<string> voice{};
  shared_ptr<string> volume{};

  ModifyTTSConfigRequest() {}

  explicit ModifyTTSConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliCustomizedVoice) {
      res["AliCustomizedVoice"] = boost::any(*aliCustomizedVoice);
    }
    if (appKey) {
      res["AppKey"] = boost::any(*appKey);
    }
    if (engine) {
      res["Engine"] = boost::any(*engine);
    }
    if (engineXunfei) {
      res["EngineXunfei"] = boost::any(*engineXunfei);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (nlsServiceType) {
      res["NlsServiceType"] = boost::any(*nlsServiceType);
    }
    if (speechRate) {
      res["SpeechRate"] = boost::any(*speechRate);
    }
    if (voice) {
      res["Voice"] = boost::any(*voice);
    }
    if (volume) {
      res["Volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliCustomizedVoice") != m.end() && !m["AliCustomizedVoice"].empty()) {
      aliCustomizedVoice = make_shared<string>(boost::any_cast<string>(m["AliCustomizedVoice"]));
    }
    if (m.find("AppKey") != m.end() && !m["AppKey"].empty()) {
      appKey = make_shared<string>(boost::any_cast<string>(m["AppKey"]));
    }
    if (m.find("Engine") != m.end() && !m["Engine"].empty()) {
      engine = make_shared<string>(boost::any_cast<string>(m["Engine"]));
    }
    if (m.find("EngineXunfei") != m.end() && !m["EngineXunfei"].empty()) {
      engineXunfei = make_shared<string>(boost::any_cast<string>(m["EngineXunfei"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("NlsServiceType") != m.end() && !m["NlsServiceType"].empty()) {
      nlsServiceType = make_shared<string>(boost::any_cast<string>(m["NlsServiceType"]));
    }
    if (m.find("SpeechRate") != m.end() && !m["SpeechRate"].empty()) {
      speechRate = make_shared<string>(boost::any_cast<string>(m["SpeechRate"]));
    }
    if (m.find("Voice") != m.end() && !m["Voice"].empty()) {
      voice = make_shared<string>(boost::any_cast<string>(m["Voice"]));
    }
    if (m.find("Volume") != m.end() && !m["Volume"].empty()) {
      volume = make_shared<string>(boost::any_cast<string>(m["Volume"]));
    }
  }


  virtual ~ModifyTTSConfigRequest() = default;
};
class ModifyTTSConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyTTSConfigResponseBody() {}

  explicit ModifyTTSConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyTTSConfigResponseBody() = default;
};
class ModifyTTSConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyTTSConfigResponseBody> body{};

  ModifyTTSConfigResponse() {}

  explicit ModifyTTSConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyTTSConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyTTSConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyTTSConfigResponse() = default;
};
class ModifyUnrecognizingConfigRequest : public Darabonba::Model {
public:
  shared_ptr<string> finalAction{};
  shared_ptr<string> finalActionParams{};
  shared_ptr<string> finalPrompt{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> prompt{};
  shared_ptr<long> threshold{};

  ModifyUnrecognizingConfigRequest() {}

  explicit ModifyUnrecognizingConfigRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finalAction) {
      res["FinalAction"] = boost::any(*finalAction);
    }
    if (finalActionParams) {
      res["FinalActionParams"] = boost::any(*finalActionParams);
    }
    if (finalPrompt) {
      res["FinalPrompt"] = boost::any(*finalPrompt);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (threshold) {
      res["Threshold"] = boost::any(*threshold);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinalAction") != m.end() && !m["FinalAction"].empty()) {
      finalAction = make_shared<string>(boost::any_cast<string>(m["FinalAction"]));
    }
    if (m.find("FinalActionParams") != m.end() && !m["FinalActionParams"].empty()) {
      finalActionParams = make_shared<string>(boost::any_cast<string>(m["FinalActionParams"]));
    }
    if (m.find("FinalPrompt") != m.end() && !m["FinalPrompt"].empty()) {
      finalPrompt = make_shared<string>(boost::any_cast<string>(m["FinalPrompt"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Threshold") != m.end() && !m["Threshold"].empty()) {
      threshold = make_shared<long>(boost::any_cast<long>(m["Threshold"]));
    }
  }


  virtual ~ModifyUnrecognizingConfigRequest() = default;
};
class ModifyUnrecognizingConfigResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ModifyUnrecognizingConfigResponseBody() {}

  explicit ModifyUnrecognizingConfigResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ModifyUnrecognizingConfigResponseBody() = default;
};
class ModifyUnrecognizingConfigResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModifyUnrecognizingConfigResponseBody> body{};

  ModifyUnrecognizingConfigResponse() {}

  explicit ModifyUnrecognizingConfigResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModifyUnrecognizingConfigResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModifyUnrecognizingConfigResponseBody>(model1);
      }
    }
  }


  virtual ~ModifyUnrecognizingConfigResponse() = default;
};
class QueryConversationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> beginTimeLeftRange{};
  shared_ptr<long> beginTimeRightRange{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  QueryConversationsRequest() {}

  explicit QueryConversationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTimeLeftRange) {
      res["BeginTimeLeftRange"] = boost::any(*beginTimeLeftRange);
    }
    if (beginTimeRightRange) {
      res["BeginTimeRightRange"] = boost::any(*beginTimeRightRange);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
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
    if (m.find("BeginTimeLeftRange") != m.end() && !m["BeginTimeLeftRange"].empty()) {
      beginTimeLeftRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeLeftRange"]));
    }
    if (m.find("BeginTimeRightRange") != m.end() && !m["BeginTimeRightRange"].empty()) {
      beginTimeRightRange = make_shared<long>(boost::any_cast<long>(m["BeginTimeRightRange"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~QueryConversationsRequest() = default;
};
class QueryConversationsResponseBodyConversations : public Darabonba::Model {
public:
  shared_ptr<long> beginTime{};
  shared_ptr<string> callingNumber{};
  shared_ptr<string> conversationId{};
  shared_ptr<long> effectiveAnswerCount{};
  shared_ptr<long> endTime{};
  shared_ptr<string> skillGroupId{};
  shared_ptr<bool> transferredToAgent{};
  shared_ptr<long> userUtteranceCount{};

  QueryConversationsResponseBodyConversations() {}

  explicit QueryConversationsResponseBodyConversations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (callingNumber) {
      res["CallingNumber"] = boost::any(*callingNumber);
    }
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (effectiveAnswerCount) {
      res["EffectiveAnswerCount"] = boost::any(*effectiveAnswerCount);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (skillGroupId) {
      res["SkillGroupId"] = boost::any(*skillGroupId);
    }
    if (transferredToAgent) {
      res["TransferredToAgent"] = boost::any(*transferredToAgent);
    }
    if (userUtteranceCount) {
      res["UserUtteranceCount"] = boost::any(*userUtteranceCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<long>(boost::any_cast<long>(m["BeginTime"]));
    }
    if (m.find("CallingNumber") != m.end() && !m["CallingNumber"].empty()) {
      callingNumber = make_shared<string>(boost::any_cast<string>(m["CallingNumber"]));
    }
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("EffectiveAnswerCount") != m.end() && !m["EffectiveAnswerCount"].empty()) {
      effectiveAnswerCount = make_shared<long>(boost::any_cast<long>(m["EffectiveAnswerCount"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<long>(boost::any_cast<long>(m["EndTime"]));
    }
    if (m.find("SkillGroupId") != m.end() && !m["SkillGroupId"].empty()) {
      skillGroupId = make_shared<string>(boost::any_cast<string>(m["SkillGroupId"]));
    }
    if (m.find("TransferredToAgent") != m.end() && !m["TransferredToAgent"].empty()) {
      transferredToAgent = make_shared<bool>(boost::any_cast<bool>(m["TransferredToAgent"]));
    }
    if (m.find("UserUtteranceCount") != m.end() && !m["UserUtteranceCount"].empty()) {
      userUtteranceCount = make_shared<long>(boost::any_cast<long>(m["UserUtteranceCount"]));
    }
  }


  virtual ~QueryConversationsResponseBodyConversations() = default;
};
class QueryConversationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryConversationsResponseBodyConversations>> conversations{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  QueryConversationsResponseBody() {}

  explicit QueryConversationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversations) {
      vector<boost::any> temp1;
      for(auto item1:*conversations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Conversations"] = boost::any(temp1);
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
    if (m.find("Conversations") != m.end() && !m["Conversations"].empty()) {
      if (typeid(vector<boost::any>) == m["Conversations"].type()) {
        vector<QueryConversationsResponseBodyConversations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Conversations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryConversationsResponseBodyConversations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        conversations = make_shared<vector<QueryConversationsResponseBodyConversations>>(expect1);
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


  virtual ~QueryConversationsResponseBody() = default;
};
class QueryConversationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryConversationsResponseBody> body{};

  QueryConversationsResponse() {}

  explicit QueryConversationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryConversationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryConversationsResponseBody>(model1);
      }
    }
  }


  virtual ~QueryConversationsResponse() = default;
};
class SaveRecordingRequest : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> duration{};
  shared_ptr<string> fileName{};
  shared_ptr<string> filePath{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceOwnerId{};
  shared_ptr<long> startTime{};
  shared_ptr<string> type{};
  shared_ptr<string> voiceSliceRecordingList{};

  SaveRecordingRequest() {}

  explicit SaveRecordingRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (duration) {
      res["Duration"] = boost::any(*duration);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filePath) {
      res["FilePath"] = boost::any(*filePath);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceOwnerId) {
      res["InstanceOwnerId"] = boost::any(*instanceOwnerId);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (voiceSliceRecordingList) {
      res["VoiceSliceRecordingList"] = boost::any(*voiceSliceRecordingList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("Duration") != m.end() && !m["Duration"].empty()) {
      duration = make_shared<string>(boost::any_cast<string>(m["Duration"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FilePath") != m.end() && !m["FilePath"].empty()) {
      filePath = make_shared<string>(boost::any_cast<string>(m["FilePath"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceOwnerId") != m.end() && !m["InstanceOwnerId"].empty()) {
      instanceOwnerId = make_shared<long>(boost::any_cast<long>(m["InstanceOwnerId"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<long>(boost::any_cast<long>(m["StartTime"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VoiceSliceRecordingList") != m.end() && !m["VoiceSliceRecordingList"].empty()) {
      voiceSliceRecordingList = make_shared<string>(boost::any_cast<string>(m["VoiceSliceRecordingList"]));
    }
  }


  virtual ~SaveRecordingRequest() = default;
};
class SaveRecordingResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SaveRecordingResponseBody() {}

  explicit SaveRecordingResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~SaveRecordingResponseBody() = default;
};
class SaveRecordingResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SaveRecordingResponseBody> body{};

  SaveRecordingResponse() {}

  explicit SaveRecordingResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SaveRecordingResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SaveRecordingResponseBody>(model1);
      }
    }
  }


  virtual ~SaveRecordingResponse() = default;
};
class SilenceTimeoutRequest : public Darabonba::Model {
public:
  shared_ptr<string> conversationId{};
  shared_ptr<string> initialContext{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> instanceOwnerId{};

  SilenceTimeoutRequest() {}

  explicit SilenceTimeoutRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (conversationId) {
      res["ConversationId"] = boost::any(*conversationId);
    }
    if (initialContext) {
      res["InitialContext"] = boost::any(*initialContext);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (instanceOwnerId) {
      res["InstanceOwnerId"] = boost::any(*instanceOwnerId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConversationId") != m.end() && !m["ConversationId"].empty()) {
      conversationId = make_shared<string>(boost::any_cast<string>(m["ConversationId"]));
    }
    if (m.find("InitialContext") != m.end() && !m["InitialContext"].empty()) {
      initialContext = make_shared<string>(boost::any_cast<string>(m["InitialContext"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("InstanceOwnerId") != m.end() && !m["InstanceOwnerId"].empty()) {
      instanceOwnerId = make_shared<long>(boost::any_cast<long>(m["InstanceOwnerId"]));
    }
  }


  virtual ~SilenceTimeoutRequest() = default;
};
class SilenceTimeoutResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> actionParams{};
  shared_ptr<bool> interruptible{};
  shared_ptr<string> requestId{};
  shared_ptr<string> textResponse{};

  SilenceTimeoutResponseBody() {}

  explicit SilenceTimeoutResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["Action"] = boost::any(*action);
    }
    if (actionParams) {
      res["ActionParams"] = boost::any(*actionParams);
    }
    if (interruptible) {
      res["Interruptible"] = boost::any(*interruptible);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (textResponse) {
      res["TextResponse"] = boost::any(*textResponse);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Action") != m.end() && !m["Action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["Action"]));
    }
    if (m.find("ActionParams") != m.end() && !m["ActionParams"].empty()) {
      actionParams = make_shared<string>(boost::any_cast<string>(m["ActionParams"]));
    }
    if (m.find("Interruptible") != m.end() && !m["Interruptible"].empty()) {
      interruptible = make_shared<bool>(boost::any_cast<bool>(m["Interruptible"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TextResponse") != m.end() && !m["TextResponse"].empty()) {
      textResponse = make_shared<string>(boost::any_cast<string>(m["TextResponse"]));
    }
  }


  virtual ~SilenceTimeoutResponseBody() = default;
};
class SilenceTimeoutResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SilenceTimeoutResponseBody> body{};

  SilenceTimeoutResponse() {}

  explicit SilenceTimeoutResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SilenceTimeoutResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SilenceTimeoutResponseBody>(model1);
      }
    }
  }


  virtual ~SilenceTimeoutResponse() = default;
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
  AssociateChatbotInstanceResponse associateChatbotInstanceWithOptions(shared_ptr<AssociateChatbotInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AssociateChatbotInstanceResponse associateChatbotInstance(shared_ptr<AssociateChatbotInstanceRequest> request);
  AuditTTSVoiceResponse auditTTSVoiceWithOptions(shared_ptr<AuditTTSVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuditTTSVoiceResponse auditTTSVoice(shared_ptr<AuditTTSVoiceRequest> request);
  BeginDialogueResponse beginDialogueWithOptions(shared_ptr<BeginDialogueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BeginDialogueResponse beginDialogue(shared_ptr<BeginDialogueRequest> request);
  CollectedNumberResponse collectedNumberWithOptions(shared_ptr<CollectedNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CollectedNumberResponse collectedNumber(shared_ptr<CollectedNumberRequest> request);
  CreateDownloadUrlResponse createDownloadUrlWithOptions(shared_ptr<CreateDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDownloadUrlResponse createDownloadUrl(shared_ptr<CreateDownloadUrlRequest> request);
  CreateInstanceResponse createInstanceWithOptions(shared_ptr<CreateInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateInstanceResponse createInstance(shared_ptr<CreateInstanceRequest> request);
  DebugBeginDialogueResponse debugBeginDialogueWithOptions(shared_ptr<DebugBeginDialogueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DebugBeginDialogueResponse debugBeginDialogue(shared_ptr<DebugBeginDialogueRequest> request);
  DebugCollectedNumberResponse debugCollectedNumberWithOptions(shared_ptr<DebugCollectedNumberRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DebugCollectedNumberResponse debugCollectedNumber(shared_ptr<DebugCollectedNumberRequest> request);
  DebugDialogueResponse debugDialogueWithOptions(shared_ptr<DebugDialogueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DebugDialogueResponse debugDialogue(shared_ptr<DebugDialogueRequest> request);
  DeleteInstanceResponse deleteInstanceWithOptions(shared_ptr<DeleteInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteInstanceResponse deleteInstance(shared_ptr<DeleteInstanceRequest> request);
  DescribeConversationResponse describeConversationWithOptions(shared_ptr<DescribeConversationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConversationResponse describeConversation(shared_ptr<DescribeConversationRequest> request);
  DescribeConversationContextResponse describeConversationContextWithOptions(shared_ptr<DescribeConversationContextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeConversationContextResponse describeConversationContext(shared_ptr<DescribeConversationContextRequest> request);
  DescribeExportProgressResponse describeExportProgressWithOptions(shared_ptr<DescribeExportProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeExportProgressResponse describeExportProgress(shared_ptr<DescribeExportProgressRequest> request);
  DescribeInstanceResponse describeInstanceWithOptions(shared_ptr<DescribeInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeInstanceResponse describeInstance(shared_ptr<DescribeInstanceRequest> request);
  DescribeNavigationConfigResponse describeNavigationConfigWithOptions(shared_ptr<DescribeNavigationConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeNavigationConfigResponse describeNavigationConfig(shared_ptr<DescribeNavigationConfigRequest> request);
  DescribeRecordingResponse describeRecordingWithOptions(shared_ptr<DescribeRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeRecordingResponse describeRecording(shared_ptr<DescribeRecordingRequest> request);
  DescribeStatisticalDataResponse describeStatisticalDataWithOptions(shared_ptr<DescribeStatisticalDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeStatisticalDataResponse describeStatisticalData(shared_ptr<DescribeStatisticalDataRequest> request);
  DescribeTTSConfigResponse describeTTSConfigWithOptions(shared_ptr<DescribeTTSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeTTSConfigResponse describeTTSConfig(shared_ptr<DescribeTTSConfigRequest> request);
  DialogueResponse dialogueWithOptions(shared_ptr<DialogueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DialogueResponse dialogue(shared_ptr<DialogueRequest> request);
  DisableInstanceResponse disableInstanceWithOptions(shared_ptr<DisableInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DisableInstanceResponse disableInstance(shared_ptr<DisableInstanceRequest> request);
  EnableInstanceResponse enableInstanceWithOptions(shared_ptr<EnableInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EnableInstanceResponse enableInstance(shared_ptr<EnableInstanceRequest> request);
  EndDialogueResponse endDialogueWithOptions(shared_ptr<EndDialogueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EndDialogueResponse endDialogue(shared_ptr<EndDialogueRequest> request);
  ExportConversationDetailsResponse exportConversationDetailsWithOptions(shared_ptr<ExportConversationDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportConversationDetailsResponse exportConversationDetails(shared_ptr<ExportConversationDetailsRequest> request);
  ExportStatisticalDataResponse exportStatisticalDataWithOptions(shared_ptr<ExportStatisticalDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExportStatisticalDataResponse exportStatisticalData(shared_ptr<ExportStatisticalDataRequest> request);
  GenerateUploadUrlResponse generateUploadUrlWithOptions(shared_ptr<GenerateUploadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateUploadUrlResponse generateUploadUrl(shared_ptr<GenerateUploadUrlRequest> request);
  GetAsrConfigResponse getAsrConfigWithOptions(shared_ptr<GetAsrConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsrConfigResponse getAsrConfig(shared_ptr<GetAsrConfigRequest> request);
  GetRealTimeConcurrencyResponse getRealTimeConcurrencyWithOptions(shared_ptr<GetRealTimeConcurrencyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRealTimeConcurrencyResponse getRealTimeConcurrency(shared_ptr<GetRealTimeConcurrencyRequest> request);
  ListChatbotInstancesResponse listChatbotInstancesWithOptions(shared_ptr<ListChatbotInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListChatbotInstancesResponse listChatbotInstances(shared_ptr<ListChatbotInstancesRequest> request);
  ListConversationDetailsResponse listConversationDetailsWithOptions(shared_ptr<ListConversationDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConversationDetailsResponse listConversationDetails(shared_ptr<ListConversationDetailsRequest> request);
  ListConversationsResponse listConversationsWithOptions(shared_ptr<ListConversationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListConversationsResponse listConversations(shared_ptr<ListConversationsRequest> request);
  ListDownloadTasksResponse listDownloadTasksWithOptions(shared_ptr<ListDownloadTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDownloadTasksResponse listDownloadTasks(shared_ptr<ListDownloadTasksRequest> request);
  ListInstancesResponse listInstancesWithOptions(shared_ptr<ListInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstancesResponse listInstances(shared_ptr<ListInstancesRequest> request);
  ModifyAsrConfigResponse modifyAsrConfigWithOptions(shared_ptr<ModifyAsrConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyAsrConfigResponse modifyAsrConfig(shared_ptr<ModifyAsrConfigRequest> request);
  ModifyGreetingConfigResponse modifyGreetingConfigWithOptions(shared_ptr<ModifyGreetingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyGreetingConfigResponse modifyGreetingConfig(shared_ptr<ModifyGreetingConfigRequest> request);
  ModifyInstanceResponse modifyInstanceWithOptions(shared_ptr<ModifyInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyInstanceResponse modifyInstance(shared_ptr<ModifyInstanceRequest> request);
  ModifySilenceTimeoutConfigResponse modifySilenceTimeoutConfigWithOptions(shared_ptr<ModifySilenceTimeoutConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifySilenceTimeoutConfigResponse modifySilenceTimeoutConfig(shared_ptr<ModifySilenceTimeoutConfigRequest> request);
  ModifyTTSConfigResponse modifyTTSConfigWithOptions(shared_ptr<ModifyTTSConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyTTSConfigResponse modifyTTSConfig(shared_ptr<ModifyTTSConfigRequest> request);
  ModifyUnrecognizingConfigResponse modifyUnrecognizingConfigWithOptions(shared_ptr<ModifyUnrecognizingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModifyUnrecognizingConfigResponse modifyUnrecognizingConfig(shared_ptr<ModifyUnrecognizingConfigRequest> request);
  QueryConversationsResponse queryConversationsWithOptions(shared_ptr<QueryConversationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryConversationsResponse queryConversations(shared_ptr<QueryConversationsRequest> request);
  SaveRecordingResponse saveRecordingWithOptions(shared_ptr<SaveRecordingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SaveRecordingResponse saveRecording(shared_ptr<SaveRecordingRequest> request);
  SilenceTimeoutResponse silenceTimeoutWithOptions(shared_ptr<SilenceTimeoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SilenceTimeoutResponse silenceTimeout(shared_ptr<SilenceTimeoutRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_VoiceNavigator20180612

#endif
