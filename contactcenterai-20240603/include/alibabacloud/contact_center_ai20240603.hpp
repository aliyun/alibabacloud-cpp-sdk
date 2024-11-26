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
class AnalyzeConversationRequestCategoryTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDesc{};
  shared_ptr<string> tagName{};

  AnalyzeConversationRequestCategoryTags() {}

  explicit AnalyzeConversationRequestCategoryTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagDesc) {
      res["tagDesc"] = boost::any(*tagDesc);
    }
    if (tagName) {
      res["tagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("tagDesc") != m.end() && !m["tagDesc"].empty()) {
      tagDesc = make_shared<string>(boost::any_cast<string>(m["tagDesc"]));
    }
    if (m.find("tagName") != m.end() && !m["tagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["tagName"]));
    }
  }


  virtual ~AnalyzeConversationRequestCategoryTags() = default;
};
class AnalyzeConversationRequestDialogueSentences : public Darabonba::Model {
public:
  shared_ptr<string> role{};
  shared_ptr<string> text{};

  AnalyzeConversationRequestDialogueSentences() {}

  explicit AnalyzeConversationRequestDialogueSentences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~AnalyzeConversationRequestDialogueSentences() = default;
};
class AnalyzeConversationRequestDialogue : public Darabonba::Model {
public:
  shared_ptr<vector<AnalyzeConversationRequestDialogueSentences>> sentences{};
  shared_ptr<string> sessionId{};

  AnalyzeConversationRequestDialogue() {}

  explicit AnalyzeConversationRequestDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["sentences"] = boost::any(temp1);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sentences") != m.end() && !m["sentences"].empty()) {
      if (typeid(vector<boost::any>) == m["sentences"].type()) {
        vector<AnalyzeConversationRequestDialogueSentences> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sentences"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeConversationRequestDialogueSentences model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sentences = make_shared<vector<AnalyzeConversationRequestDialogueSentences>>(expect1);
      }
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~AnalyzeConversationRequestDialogue() = default;
};
class AnalyzeConversationRequestExamplesSentences : public Darabonba::Model {
public:
  shared_ptr<string> chatId{};
  shared_ptr<string> role{};
  shared_ptr<string> text{};

  AnalyzeConversationRequestExamplesSentences() {}

  explicit AnalyzeConversationRequestExamplesSentences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~AnalyzeConversationRequestExamplesSentences() = default;
};
class AnalyzeConversationRequestExamples : public Darabonba::Model {
public:
  shared_ptr<string> output{};
  shared_ptr<vector<AnalyzeConversationRequestExamplesSentences>> sentences{};

  AnalyzeConversationRequestExamples() {}

  explicit AnalyzeConversationRequestExamples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = boost::any(*output);
    }
    if (sentences) {
      vector<boost::any> temp1;
      for(auto item1:*sentences){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sentences"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["output"]));
    }
    if (m.find("sentences") != m.end() && !m["sentences"].empty()) {
      if (typeid(vector<boost::any>) == m["sentences"].type()) {
        vector<AnalyzeConversationRequestExamplesSentences> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sentences"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeConversationRequestExamplesSentences model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sentences = make_shared<vector<AnalyzeConversationRequestExamplesSentences>>(expect1);
      }
    }
  }


  virtual ~AnalyzeConversationRequestExamples() = default;
};
class AnalyzeConversationRequestFieldsEnumValues : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> enumValue{};

  AnalyzeConversationRequestFieldsEnumValues() {}

  explicit AnalyzeConversationRequestFieldsEnumValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (enumValue) {
      res["enumValue"] = boost::any(*enumValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("enumValue") != m.end() && !m["enumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["enumValue"]));
    }
  }


  virtual ~AnalyzeConversationRequestFieldsEnumValues() = default;
};
class AnalyzeConversationRequestFields : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> desc{};
  shared_ptr<vector<AnalyzeConversationRequestFieldsEnumValues>> enumValues{};
  shared_ptr<string> name{};

  AnalyzeConversationRequestFields() {}

  explicit AnalyzeConversationRequestFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (enumValues) {
      vector<boost::any> temp1;
      for(auto item1:*enumValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["enumValues"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("enumValues") != m.end() && !m["enumValues"].empty()) {
      if (typeid(vector<boost::any>) == m["enumValues"].type()) {
        vector<AnalyzeConversationRequestFieldsEnumValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["enumValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeConversationRequestFieldsEnumValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        enumValues = make_shared<vector<AnalyzeConversationRequestFieldsEnumValues>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~AnalyzeConversationRequestFields() = default;
};
class AnalyzeConversationRequestServiceInspectionInspectionContents : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> title{};

  AnalyzeConversationRequestServiceInspectionInspectionContents() {}

  explicit AnalyzeConversationRequestServiceInspectionInspectionContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~AnalyzeConversationRequestServiceInspectionInspectionContents() = default;
};
class AnalyzeConversationRequestServiceInspection : public Darabonba::Model {
public:
  shared_ptr<vector<AnalyzeConversationRequestServiceInspectionInspectionContents>> inspectionContents{};
  shared_ptr<string> inspectionIntroduction{};
  shared_ptr<string> sceneIntroduction{};

  AnalyzeConversationRequestServiceInspection() {}

  explicit AnalyzeConversationRequestServiceInspection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["inspectionContents"] = boost::any(temp1);
    }
    if (inspectionIntroduction) {
      res["inspectionIntroduction"] = boost::any(*inspectionIntroduction);
    }
    if (sceneIntroduction) {
      res["sceneIntroduction"] = boost::any(*sceneIntroduction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inspectionContents") != m.end() && !m["inspectionContents"].empty()) {
      if (typeid(vector<boost::any>) == m["inspectionContents"].type()) {
        vector<AnalyzeConversationRequestServiceInspectionInspectionContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["inspectionContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeConversationRequestServiceInspectionInspectionContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inspectionContents = make_shared<vector<AnalyzeConversationRequestServiceInspectionInspectionContents>>(expect1);
      }
    }
    if (m.find("inspectionIntroduction") != m.end() && !m["inspectionIntroduction"].empty()) {
      inspectionIntroduction = make_shared<string>(boost::any_cast<string>(m["inspectionIntroduction"]));
    }
    if (m.find("sceneIntroduction") != m.end() && !m["sceneIntroduction"].empty()) {
      sceneIntroduction = make_shared<string>(boost::any_cast<string>(m["sceneIntroduction"]));
    }
  }


  virtual ~AnalyzeConversationRequestServiceInspection() = default;
};
class AnalyzeConversationRequestUserProfiles : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> value{};

  AnalyzeConversationRequestUserProfiles() {}

  explicit AnalyzeConversationRequestUserProfiles(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["value"]));
    }
  }


  virtual ~AnalyzeConversationRequestUserProfiles() = default;
};
class AnalyzeConversationRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AnalyzeConversationRequestCategoryTags>> categoryTags{};
  shared_ptr<AnalyzeConversationRequestDialogue> dialogue{};
  shared_ptr<vector<AnalyzeConversationRequestExamples>> examples{};
  shared_ptr<vector<AnalyzeConversationRequestFields>> fields{};
  shared_ptr<string> modelCode{};
  shared_ptr<vector<string>> resultTypes{};
  shared_ptr<string> sceneName{};
  shared_ptr<AnalyzeConversationRequestServiceInspection> serviceInspection{};
  shared_ptr<bool> stream{};
  shared_ptr<vector<string>> timeConstraintList{};
  shared_ptr<vector<AnalyzeConversationRequestUserProfiles>> userProfiles{};

  AnalyzeConversationRequest() {}

  explicit AnalyzeConversationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryTags) {
      vector<boost::any> temp1;
      for(auto item1:*categoryTags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["categoryTags"] = boost::any(temp1);
    }
    if (dialogue) {
      res["dialogue"] = dialogue ? boost::any(dialogue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (examples) {
      vector<boost::any> temp1;
      for(auto item1:*examples){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["examples"] = boost::any(temp1);
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["fields"] = boost::any(temp1);
    }
    if (modelCode) {
      res["modelCode"] = boost::any(*modelCode);
    }
    if (resultTypes) {
      res["resultTypes"] = boost::any(*resultTypes);
    }
    if (sceneName) {
      res["sceneName"] = boost::any(*sceneName);
    }
    if (serviceInspection) {
      res["serviceInspection"] = serviceInspection ? boost::any(serviceInspection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (timeConstraintList) {
      res["timeConstraintList"] = boost::any(*timeConstraintList);
    }
    if (userProfiles) {
      vector<boost::any> temp1;
      for(auto item1:*userProfiles){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["userProfiles"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categoryTags") != m.end() && !m["categoryTags"].empty()) {
      if (typeid(vector<boost::any>) == m["categoryTags"].type()) {
        vector<AnalyzeConversationRequestCategoryTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["categoryTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeConversationRequestCategoryTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categoryTags = make_shared<vector<AnalyzeConversationRequestCategoryTags>>(expect1);
      }
    }
    if (m.find("dialogue") != m.end() && !m["dialogue"].empty()) {
      if (typeid(map<string, boost::any>) == m["dialogue"].type()) {
        AnalyzeConversationRequestDialogue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dialogue"]));
        dialogue = make_shared<AnalyzeConversationRequestDialogue>(model1);
      }
    }
    if (m.find("examples") != m.end() && !m["examples"].empty()) {
      if (typeid(vector<boost::any>) == m["examples"].type()) {
        vector<AnalyzeConversationRequestExamples> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["examples"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeConversationRequestExamples model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        examples = make_shared<vector<AnalyzeConversationRequestExamples>>(expect1);
      }
    }
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<AnalyzeConversationRequestFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeConversationRequestFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<AnalyzeConversationRequestFields>>(expect1);
      }
    }
    if (m.find("modelCode") != m.end() && !m["modelCode"].empty()) {
      modelCode = make_shared<string>(boost::any_cast<string>(m["modelCode"]));
    }
    if (m.find("resultTypes") != m.end() && !m["resultTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sceneName") != m.end() && !m["sceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["sceneName"]));
    }
    if (m.find("serviceInspection") != m.end() && !m["serviceInspection"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceInspection"].type()) {
        AnalyzeConversationRequestServiceInspection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceInspection"]));
        serviceInspection = make_shared<AnalyzeConversationRequestServiceInspection>(model1);
      }
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("timeConstraintList") != m.end() && !m["timeConstraintList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["timeConstraintList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["timeConstraintList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      timeConstraintList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("userProfiles") != m.end() && !m["userProfiles"].empty()) {
      if (typeid(vector<boost::any>) == m["userProfiles"].type()) {
        vector<AnalyzeConversationRequestUserProfiles> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["userProfiles"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeConversationRequestUserProfiles model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        userProfiles = make_shared<vector<AnalyzeConversationRequestUserProfiles>>(expect1);
      }
    }
  }


  virtual ~AnalyzeConversationRequest() = default;
};
class AnalyzeConversationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorInfo{};
  shared_ptr<string> finishReason{};
  shared_ptr<string> inputTokens{};
  shared_ptr<string> outputTokens{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> text{};
  shared_ptr<string> totalTokens{};

  AnalyzeConversationResponseBody() {}

  explicit AnalyzeConversationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (errorInfo) {
      res["errorInfo"] = boost::any(*errorInfo);
    }
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["errorCode"]));
    }
    if (m.find("errorInfo") != m.end() && !m["errorInfo"].empty()) {
      errorInfo = make_shared<string>(boost::any_cast<string>(m["errorInfo"]));
    }
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<string>(boost::any_cast<string>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<string>(boost::any_cast<string>(m["outputTokens"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<string>(boost::any_cast<string>(m["totalTokens"]));
    }
  }


  virtual ~AnalyzeConversationResponseBody() = default;
};
class AnalyzeConversationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AnalyzeConversationResponseBody> body{};

  AnalyzeConversationResponse() {}

  explicit AnalyzeConversationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AnalyzeConversationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AnalyzeConversationResponseBody>(model1);
      }
    }
  }


  virtual ~AnalyzeConversationResponse() = default;
};
class AnalyzeImageRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imageUrls{};
  shared_ptr<vector<string>> resultTypes{};
  shared_ptr<bool> stream{};

  AnalyzeImageRequest() {}

  explicit AnalyzeImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrls) {
      res["imageUrls"] = boost::any(*imageUrls);
    }
    if (resultTypes) {
      res["resultTypes"] = boost::any(*resultTypes);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("imageUrls") != m.end() && !m["imageUrls"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["imageUrls"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["imageUrls"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrls = make_shared<vector<string>>(toVec1);
    }
    if (m.find("resultTypes") != m.end() && !m["resultTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
  }


  virtual ~AnalyzeImageRequest() = default;
};
class AnalyzeImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<string> inputTokens{};
  shared_ptr<string> outputTokens{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> text{};
  shared_ptr<string> totalTokens{};

  AnalyzeImageResponseBody() {}

  explicit AnalyzeImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (finishReason) {
      res["finishReason"] = boost::any(*finishReason);
    }
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("finishReason") != m.end() && !m["finishReason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finishReason"]));
    }
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<string>(boost::any_cast<string>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<string>(boost::any_cast<string>(m["outputTokens"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<string>(boost::any_cast<string>(m["totalTokens"]));
    }
  }


  virtual ~AnalyzeImageResponseBody() = default;
};
class AnalyzeImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AnalyzeImageResponseBody> body{};

  AnalyzeImageResponse() {}

  explicit AnalyzeImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AnalyzeImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AnalyzeImageResponseBody>(model1);
      }
    }
  }


  virtual ~AnalyzeImageResponse() = default;
};
class CreateTaskRequestDialogueSentences : public Darabonba::Model {
public:
  shared_ptr<string> role{};
  shared_ptr<string> text{};

  CreateTaskRequestDialogueSentences() {}

  explicit CreateTaskRequestDialogueSentences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~CreateTaskRequestDialogueSentences() = default;
};
class CreateTaskRequestDialogue : public Darabonba::Model {
public:
  shared_ptr<vector<CreateTaskRequestDialogueSentences>> sentences{};
  shared_ptr<string> sessionId{};

  CreateTaskRequestDialogue() {}

  explicit CreateTaskRequestDialogue(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["sentences"] = boost::any(temp1);
    }
    if (sessionId) {
      res["sessionId"] = boost::any(*sessionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sentences") != m.end() && !m["sentences"].empty()) {
      if (typeid(vector<boost::any>) == m["sentences"].type()) {
        vector<CreateTaskRequestDialogueSentences> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sentences"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskRequestDialogueSentences model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sentences = make_shared<vector<CreateTaskRequestDialogueSentences>>(expect1);
      }
    }
    if (m.find("sessionId") != m.end() && !m["sessionId"].empty()) {
      sessionId = make_shared<string>(boost::any_cast<string>(m["sessionId"]));
    }
  }


  virtual ~CreateTaskRequestDialogue() = default;
};
class CreateTaskRequestExamplesSentences : public Darabonba::Model {
public:
  shared_ptr<string> role{};
  shared_ptr<string> text{};

  CreateTaskRequestExamplesSentences() {}

  explicit CreateTaskRequestExamplesSentences(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~CreateTaskRequestExamplesSentences() = default;
};
class CreateTaskRequestExamples : public Darabonba::Model {
public:
  shared_ptr<string> output{};
  shared_ptr<vector<CreateTaskRequestExamplesSentences>> sentences{};

  CreateTaskRequestExamples() {}

  explicit CreateTaskRequestExamples(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (output) {
      res["output"] = boost::any(*output);
    }
    if (sentences) {
      vector<boost::any> temp1;
      for(auto item1:*sentences){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sentences"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("output") != m.end() && !m["output"].empty()) {
      output = make_shared<string>(boost::any_cast<string>(m["output"]));
    }
    if (m.find("sentences") != m.end() && !m["sentences"].empty()) {
      if (typeid(vector<boost::any>) == m["sentences"].type()) {
        vector<CreateTaskRequestExamplesSentences> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sentences"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskRequestExamplesSentences model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sentences = make_shared<vector<CreateTaskRequestExamplesSentences>>(expect1);
      }
    }
  }


  virtual ~CreateTaskRequestExamples() = default;
};
class CreateTaskRequestFieldsEnumValues : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> enumValue{};

  CreateTaskRequestFieldsEnumValues() {}

  explicit CreateTaskRequestFieldsEnumValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (enumValue) {
      res["enumValue"] = boost::any(*enumValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("enumValue") != m.end() && !m["enumValue"].empty()) {
      enumValue = make_shared<string>(boost::any_cast<string>(m["enumValue"]));
    }
  }


  virtual ~CreateTaskRequestFieldsEnumValues() = default;
};
class CreateTaskRequestFields : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> desc{};
  shared_ptr<vector<CreateTaskRequestFieldsEnumValues>> enumValues{};
  shared_ptr<string> name{};

  CreateTaskRequestFields() {}

  explicit CreateTaskRequestFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (desc) {
      res["desc"] = boost::any(*desc);
    }
    if (enumValues) {
      vector<boost::any> temp1;
      for(auto item1:*enumValues){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["enumValues"] = boost::any(temp1);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("desc") != m.end() && !m["desc"].empty()) {
      desc = make_shared<string>(boost::any_cast<string>(m["desc"]));
    }
    if (m.find("enumValues") != m.end() && !m["enumValues"].empty()) {
      if (typeid(vector<boost::any>) == m["enumValues"].type()) {
        vector<CreateTaskRequestFieldsEnumValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["enumValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskRequestFieldsEnumValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        enumValues = make_shared<vector<CreateTaskRequestFieldsEnumValues>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~CreateTaskRequestFields() = default;
};
class CreateTaskRequestServiceInspectionInspectionContents : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> title{};

  CreateTaskRequestServiceInspectionInspectionContents() {}

  explicit CreateTaskRequestServiceInspectionInspectionContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (title) {
      res["title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("title") != m.end() && !m["title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["title"]));
    }
  }


  virtual ~CreateTaskRequestServiceInspectionInspectionContents() = default;
};
class CreateTaskRequestServiceInspection : public Darabonba::Model {
public:
  shared_ptr<vector<CreateTaskRequestServiceInspectionInspectionContents>> inspectionContents{};
  shared_ptr<string> inspectionIntroduction{};
  shared_ptr<string> sceneIntroduction{};

  CreateTaskRequestServiceInspection() {}

  explicit CreateTaskRequestServiceInspection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["inspectionContents"] = boost::any(temp1);
    }
    if (inspectionIntroduction) {
      res["inspectionIntroduction"] = boost::any(*inspectionIntroduction);
    }
    if (sceneIntroduction) {
      res["sceneIntroduction"] = boost::any(*sceneIntroduction);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inspectionContents") != m.end() && !m["inspectionContents"].empty()) {
      if (typeid(vector<boost::any>) == m["inspectionContents"].type()) {
        vector<CreateTaskRequestServiceInspectionInspectionContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["inspectionContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskRequestServiceInspectionInspectionContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inspectionContents = make_shared<vector<CreateTaskRequestServiceInspectionInspectionContents>>(expect1);
      }
    }
    if (m.find("inspectionIntroduction") != m.end() && !m["inspectionIntroduction"].empty()) {
      inspectionIntroduction = make_shared<string>(boost::any_cast<string>(m["inspectionIntroduction"]));
    }
    if (m.find("sceneIntroduction") != m.end() && !m["sceneIntroduction"].empty()) {
      sceneIntroduction = make_shared<string>(boost::any_cast<string>(m["sceneIntroduction"]));
    }
  }


  virtual ~CreateTaskRequestServiceInspection() = default;
};
class CreateTaskRequestTranscription : public Darabonba::Model {
public:
  shared_ptr<long> autoSplit{};
  shared_ptr<long> clientChannel{};
  shared_ptr<string> fileName{};
  shared_ptr<long> serviceChannel{};
  shared_ptr<vector<string>> serviceChannelKeywords{};
  shared_ptr<string> voiceFileUrl{};

  CreateTaskRequestTranscription() {}

  explicit CreateTaskRequestTranscription(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoSplit) {
      res["autoSplit"] = boost::any(*autoSplit);
    }
    if (clientChannel) {
      res["clientChannel"] = boost::any(*clientChannel);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (serviceChannel) {
      res["serviceChannel"] = boost::any(*serviceChannel);
    }
    if (serviceChannelKeywords) {
      res["serviceChannelKeywords"] = boost::any(*serviceChannelKeywords);
    }
    if (voiceFileUrl) {
      res["voiceFileUrl"] = boost::any(*voiceFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoSplit") != m.end() && !m["autoSplit"].empty()) {
      autoSplit = make_shared<long>(boost::any_cast<long>(m["autoSplit"]));
    }
    if (m.find("clientChannel") != m.end() && !m["clientChannel"].empty()) {
      clientChannel = make_shared<long>(boost::any_cast<long>(m["clientChannel"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("serviceChannel") != m.end() && !m["serviceChannel"].empty()) {
      serviceChannel = make_shared<long>(boost::any_cast<long>(m["serviceChannel"]));
    }
    if (m.find("serviceChannelKeywords") != m.end() && !m["serviceChannelKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["serviceChannelKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["serviceChannelKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      serviceChannelKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("voiceFileUrl") != m.end() && !m["voiceFileUrl"].empty()) {
      voiceFileUrl = make_shared<string>(boost::any_cast<string>(m["voiceFileUrl"]));
    }
  }


  virtual ~CreateTaskRequestTranscription() = default;
};
class CreateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CreateTaskRequestDialogue> dialogue{};
  shared_ptr<CreateTaskRequestExamples> examples{};
  shared_ptr<vector<CreateTaskRequestFields>> fields{};
  shared_ptr<string> modelCode{};
  shared_ptr<vector<string>> resultTypes{};
  shared_ptr<CreateTaskRequestServiceInspection> serviceInspection{};
  shared_ptr<string> taskType{};
  shared_ptr<vector<string>> templateIds{};
  shared_ptr<CreateTaskRequestTranscription> transcription{};

  CreateTaskRequest() {}

  explicit CreateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogue) {
      res["dialogue"] = dialogue ? boost::any(dialogue->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (examples) {
      res["examples"] = examples ? boost::any(examples->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fields) {
      vector<boost::any> temp1;
      for(auto item1:*fields){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["fields"] = boost::any(temp1);
    }
    if (modelCode) {
      res["modelCode"] = boost::any(*modelCode);
    }
    if (resultTypes) {
      res["resultTypes"] = boost::any(*resultTypes);
    }
    if (serviceInspection) {
      res["serviceInspection"] = serviceInspection ? boost::any(serviceInspection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    if (templateIds) {
      res["templateIds"] = boost::any(*templateIds);
    }
    if (transcription) {
      res["transcription"] = transcription ? boost::any(transcription->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogue") != m.end() && !m["dialogue"].empty()) {
      if (typeid(map<string, boost::any>) == m["dialogue"].type()) {
        CreateTaskRequestDialogue model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["dialogue"]));
        dialogue = make_shared<CreateTaskRequestDialogue>(model1);
      }
    }
    if (m.find("examples") != m.end() && !m["examples"].empty()) {
      if (typeid(map<string, boost::any>) == m["examples"].type()) {
        CreateTaskRequestExamples model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["examples"]));
        examples = make_shared<CreateTaskRequestExamples>(model1);
      }
    }
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<CreateTaskRequestFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskRequestFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<CreateTaskRequestFields>>(expect1);
      }
    }
    if (m.find("modelCode") != m.end() && !m["modelCode"].empty()) {
      modelCode = make_shared<string>(boost::any_cast<string>(m["modelCode"]));
    }
    if (m.find("resultTypes") != m.end() && !m["resultTypes"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultTypes"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultTypes"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultTypes = make_shared<vector<string>>(toVec1);
    }
    if (m.find("serviceInspection") != m.end() && !m["serviceInspection"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceInspection"].type()) {
        CreateTaskRequestServiceInspection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceInspection"]));
        serviceInspection = make_shared<CreateTaskRequestServiceInspection>(model1);
      }
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
    if (m.find("templateIds") != m.end() && !m["templateIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["templateIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["templateIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      templateIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("transcription") != m.end() && !m["transcription"].empty()) {
      if (typeid(map<string, boost::any>) == m["transcription"].type()) {
        CreateTaskRequestTranscription model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["transcription"]));
        transcription = make_shared<CreateTaskRequestTranscription>(model1);
      }
    }
  }


  virtual ~CreateTaskRequest() = default;
};
class CreateTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  CreateTaskResponseBodyData() {}

  explicit CreateTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~CreateTaskResponseBodyData() = default;
};
class CreateTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateTaskResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateTaskResponseBody() {}

  explicit CreateTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        CreateTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateTaskResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~CreateTaskResponseBody() = default;
};
class CreateTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTaskResponseBody> body{};

  CreateTaskResponse() {}

  explicit CreateTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTaskResponse() = default;
};
class GetTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetTaskResultRequest() {}

  explicit GetTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetTaskResultRequest() = default;
};
class GetTaskResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};
  shared_ptr<string> text{};

  GetTaskResultResponseBodyData() {}

  explicit GetTaskResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["taskStatus"] = boost::any(*taskStatus);
    }
    if (text) {
      res["text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
    if (m.find("taskStatus") != m.end() && !m["taskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["taskStatus"]));
    }
    if (m.find("text") != m.end() && !m["text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["text"]));
    }
  }


  virtual ~GetTaskResultResponseBodyData() = default;
};
class GetTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTaskResultResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetTaskResultResponseBody() {}

  explicit GetTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetTaskResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTaskResultResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~GetTaskResultResponseBody() = default;
};
class GetTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTaskResultResponseBody> body{};

  GetTaskResultResponse() {}

  explicit GetTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetTaskResultResponse() = default;
};
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
  shared_ptr<string> inputTokens{};
  shared_ptr<string> outputTokens{};
  shared_ptr<string> totalTokens{};

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
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
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
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<string>(boost::any_cast<string>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<string>(boost::any_cast<string>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<string>(boost::any_cast<string>(m["totalTokens"]));
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
  shared_ptr<string> inputTokens{};
  shared_ptr<string> outputTokens{};
  shared_ptr<string> totalTokens{};

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
    if (inputTokens) {
      res["inputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["outputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["totalTokens"] = boost::any(*totalTokens);
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
    if (m.find("inputTokens") != m.end() && !m["inputTokens"].empty()) {
      inputTokens = make_shared<string>(boost::any_cast<string>(m["inputTokens"]));
    }
    if (m.find("outputTokens") != m.end() && !m["outputTokens"].empty()) {
      outputTokens = make_shared<string>(boost::any_cast<string>(m["outputTokens"]));
    }
    if (m.find("totalTokens") != m.end() && !m["totalTokens"].empty()) {
      totalTokens = make_shared<string>(boost::any_cast<string>(m["totalTokens"]));
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
  AnalyzeConversationResponse analyzeConversationWithOptions(shared_ptr<string> workspaceId,
                                                             shared_ptr<string> appId,
                                                             shared_ptr<AnalyzeConversationRequest> request,
                                                             shared_ptr<map<string, string>> headers,
                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AnalyzeConversationResponse analyzeConversation(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<AnalyzeConversationRequest> request);
  AnalyzeImageResponse analyzeImageWithOptions(shared_ptr<string> workspaceId,
                                               shared_ptr<string> appId,
                                               shared_ptr<AnalyzeImageRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AnalyzeImageResponse analyzeImage(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<AnalyzeImageRequest> request);
  CreateTaskResponse createTaskWithOptions(shared_ptr<string> workspaceId,
                                           shared_ptr<string> appId,
                                           shared_ptr<CreateTaskRequest> request,
                                           shared_ptr<map<string, string>> headers,
                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTaskResponse createTask(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<CreateTaskRequest> request);
  GetTaskResultResponse getTaskResultWithOptions(shared_ptr<GetTaskResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResultResponse getTaskResult(shared_ptr<GetTaskResultRequest> request);
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
