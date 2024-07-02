// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_CONTACTCENTERAI20240603_H_
#define ALIBABACLOUD_CONTACTCENTERAI20240603_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_ContactCenterAI20240603 {
class RunCompletionRequestDialogueSentences : public Darabonba::Model {
public:
  shared_ptr<string> chatId{};
  shared_ptr<string> role{};
  shared_ptr<string> text{};

  RunCompletionRequestDialogueSentences() {}

  explicit RunCompletionRequestDialogueSentences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatId) {
      res["ChatId"] = boost::any(*chatId);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChatId") != m.end() && !m["ChatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["ChatId"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RunCompletionRequestDialogueSentences() = default;
};
class RunCompletionRequestDialogue : public Darabonba::Model {
public:
  shared_ptr<vector<RunCompletionRequestDialogueSentences>> sentences{};
  shared_ptr<string> sessionId{};

  RunCompletionRequestDialogue() {}

  explicit RunCompletionRequestDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sentences) {
      vector<boost::any> temp1;
      for(auto item1:*sentences){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Sentences"] = boost::any(temp1);
    }
    if (sessionId) {
      res["SessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Sentences") != m.end() && !m["Sentences"].empty()) {
      if (typeid(vector<boost::any>) == m["Sentences"].type()) {
        vector<RunCompletionRequestDialogueSentences> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Sentences"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCompletionRequestDialogueSentences model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sentences = make_shared<vector<RunCompletionRequestDialogueSentences>>(expect1);
      }
    }
    if (m.find("SessionId") != m.end() && !m["SessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["SessionId"]));
    }
  }


  virtual ~RunCompletionRequestDialogue() = default;
};
class RunCompletionRequestFieldsEnumValues : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> enumValue{};

  RunCompletionRequestFieldsEnumValues() {}

  explicit RunCompletionRequestFieldsEnumValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (enumValue) {
      res["EnumValue"] = boost::any(*enumValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("EnumValue") != m.end() && !m["EnumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["EnumValue"]));
    }
  }


  virtual ~RunCompletionRequestFieldsEnumValues() = default;
};
class RunCompletionRequestFields : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> desc{};
  shared_ptr<vector<RunCompletionRequestFieldsEnumValues>> enumValues{};
  shared_ptr<string> name{};

  RunCompletionRequestFields() {}

  explicit RunCompletionRequestFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (desc) {
      res["Desc"] = boost::any(*desc);
    }
    if (enumValues) {
      vector<boost::any> temp1;
      for(auto item1:*enumValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["EnumValues"] = boost::any(temp1);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("Desc") != m.end() && !m["Desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["Desc"]));
    }
    if (m.find("EnumValues") != m.end() && !m["EnumValues"].empty()) {
      if (typeid(vector<boost::any>) == m["EnumValues"].type()) {
        vector<RunCompletionRequestFieldsEnumValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["EnumValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCompletionRequestFieldsEnumValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        enumValues = make_shared<vector<RunCompletionRequestFieldsEnumValues>>(expect1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~RunCompletionRequestFields() = default;
};
class RunCompletionRequestServiceInspectionInspectionContents : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> title{};

  RunCompletionRequestServiceInspectionInspectionContents() {}

  explicit RunCompletionRequestServiceInspectionInspectionContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~RunCompletionRequestServiceInspectionInspectionContents() = default;
};
class RunCompletionRequestServiceInspection : public Darabonba::Model {
public:
  shared_ptr<vector<RunCompletionRequestServiceInspectionInspectionContents>> inspectionContents{};
  shared_ptr<string> inspectionIntroduction{};
  shared_ptr<string> sceneIntroduction{};

  RunCompletionRequestServiceInspection() {}

  explicit RunCompletionRequestServiceInspection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inspectionContents) {
      vector<boost::any> temp1;
      for(auto item1:*inspectionContents){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InspectionContents"] = boost::any(temp1);
    }
    if (inspectionIntroduction) {
      res["InspectionIntroduction"] = boost::any(*inspectionIntroduction);
    }
    if (sceneIntroduction) {
      res["SceneIntroduction"] = boost::any(*sceneIntroduction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InspectionContents") != m.end() && !m["InspectionContents"].empty()) {
      if (typeid(vector<boost::any>) == m["InspectionContents"].type()) {
        vector<RunCompletionRequestServiceInspectionInspectionContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InspectionContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCompletionRequestServiceInspectionInspectionContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inspectionContents = make_shared<vector<RunCompletionRequestServiceInspectionInspectionContents>>(expect1);
      }
    }
    if (m.find("InspectionIntroduction") != m.end() && !m["InspectionIntroduction"].empty()) {
      inspectionIntroduction = make_shared<string>(boost::any_cast<string>(m["InspectionIntroduction"]));
    }
    if (m.find("SceneIntroduction") != m.end() && !m["SceneIntroduction"].empty()) {
      sceneIntroduction = make_shared<string>(boost::any_cast<string>(m["SceneIntroduction"]));
    }
  }


  virtual ~RunCompletionRequestServiceInspection() = default;
};
class RunCompletionRequest : public Darabonba::Model {
public:
  shared_ptr<RunCompletionRequestDialogue> dialogue{};
  shared_ptr<vector<RunCompletionRequestFields>> fields{};
  shared_ptr<string> modelCode{};
  shared_ptr<RunCompletionRequestServiceInspection> serviceInspection{};
  shared_ptr<bool> stream{};
  shared_ptr<vector<long>> templateIds{};

  RunCompletionRequest() {}

  explicit RunCompletionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogue) {
      res["Dialogue"] = dialogue ? boost::any(dialogue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Fields"] = boost::any(temp1);
    }
    if (modelCode) {
      res["ModelCode"] = boost::any(*modelCode);
    }
    if (serviceInspection) {
      res["ServiceInspection"] = serviceInspection ? boost::any(serviceInspection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stream) {
      res["Stream"] = boost::any(*stream);
    }
    if (templateIds) {
      res["TemplateIds"] = boost::any(*templateIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Dialogue") != m.end() && !m["Dialogue"].empty()) {
      if (typeid(map<string, boost::any>) == m["Dialogue"].type()) {
        RunCompletionRequestDialogue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Dialogue"]));
        dialogue = make_shared<RunCompletionRequestDialogue>(model1);
      }
    }
    if (m.find("Fields") != m.end() && !m["Fields"].empty()) {
      if (typeid(vector<boost::any>) == m["Fields"].type()) {
        vector<RunCompletionRequestFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCompletionRequestFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<RunCompletionRequestFields>>(expect1);
      }
    }
    if (m.find("ModelCode") != m.end() && !m["ModelCode"].empty()) {
      modelCode = make_shared<string>(boost::any_cast<string>(m["ModelCode"]));
    }
    if (m.find("ServiceInspection") != m.end() && !m["ServiceInspection"].empty()) {
      if (typeid(map<string, boost::any>) == m["ServiceInspection"].type()) {
        RunCompletionRequestServiceInspection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ServiceInspection"]));
        serviceInspection = make_shared<RunCompletionRequestServiceInspection>(model1);
      }
    }
    if (m.find("Stream") != m.end() && !m["Stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["Stream"]));
    }
    if (m.find("TemplateIds") != m.end() && !m["TemplateIds"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["TemplateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TemplateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      templateIds = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~RunCompletionRequest() = default;
};
class RunCompletionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<string> requestId{};
  shared_ptr<string> text{};

  RunCompletionResponseBody() {}

  explicit RunCompletionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["FinishReason"] = boost::any(*finishReason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinishReason") != m.end() && !m["FinishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["FinishReason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RunCompletionResponseBody() = default;
};
class RunCompletionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunCompletionResponseBody> body{};

  RunCompletionResponse() {}

  explicit RunCompletionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunCompletionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunCompletionResponseBody>(model1);
      }
    }
  }


  virtual ~RunCompletionResponse() = default;
};
class RunCompletionMessageRequestMessages : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  RunCompletionMessageRequestMessages() {}

  explicit RunCompletionMessageRequestMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (role) {
      res["Role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Role") != m.end() && !m["Role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["Role"]));
    }
  }


  virtual ~RunCompletionMessageRequestMessages() = default;
};
class RunCompletionMessageRequest : public Darabonba::Model {
public:
  shared_ptr<vector<RunCompletionMessageRequestMessages>> messages{};
  shared_ptr<string> modelCode{};
  shared_ptr<bool> stream{};

  RunCompletionMessageRequest() {}

  explicit RunCompletionMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (modelCode) {
      res["ModelCode"] = boost::any(*modelCode);
    }
    if (stream) {
      res["Stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Messages") != m.end() && !m["Messages"].empty()) {
      if (typeid(vector<boost::any>) == m["Messages"].type()) {
        vector<RunCompletionMessageRequestMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCompletionMessageRequestMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<RunCompletionMessageRequestMessages>>(expect1);
      }
    }
    if (m.find("ModelCode") != m.end() && !m["ModelCode"].empty()) {
      modelCode = make_shared<string>(boost::any_cast<string>(m["ModelCode"]));
    }
    if (m.find("Stream") != m.end() && !m["Stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["Stream"]));
    }
  }


  virtual ~RunCompletionMessageRequest() = default;
};
class RunCompletionMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<string> requestId{};
  shared_ptr<string> text{};

  RunCompletionMessageResponseBody() {}

  explicit RunCompletionMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["FinishReason"] = boost::any(*finishReason);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FinishReason") != m.end() && !m["FinishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["FinishReason"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~RunCompletionMessageResponseBody() = default;
};
class RunCompletionMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunCompletionMessageResponseBody> body{};

  RunCompletionMessageResponse() {}

  explicit RunCompletionMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunCompletionMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunCompletionMessageResponseBody>(model1);
      }
    }
  }


  virtual ~RunCompletionMessageResponse() = default;
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
  RunCompletionResponse runCompletionWithOptions(shared_ptr<string> workspaceId,
                                                 shared_ptr<string> appId,
                                                 shared_ptr<RunCompletionRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCompletionResponse runCompletion(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<RunCompletionRequest> request);
  RunCompletionMessageResponse runCompletionMessageWithOptions(shared_ptr<string> workspaceId,
                                                               shared_ptr<string> appId,
                                                               shared_ptr<RunCompletionMessageRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunCompletionMessageResponse runCompletionMessage(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<RunCompletionMessageRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ContactCenterAI20240603

#endif
