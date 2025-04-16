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
class AnalyzeAudioSyncRequestCategoryTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDesc{};
  shared_ptr<string> tagName{};

  AnalyzeAudioSyncRequestCategoryTags() {}

  explicit AnalyzeAudioSyncRequestCategoryTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AnalyzeAudioSyncRequestCategoryTags() = default;
};
class AnalyzeAudioSyncRequestFieldsEnumValues : public Darabonba::Model {
public:
  shared_ptr<string> desc{};
  shared_ptr<string> enumValue{};

  AnalyzeAudioSyncRequestFieldsEnumValues() {}

  explicit AnalyzeAudioSyncRequestFieldsEnumValues(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AnalyzeAudioSyncRequestFieldsEnumValues() = default;
};
class AnalyzeAudioSyncRequestFields : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> desc{};
  shared_ptr<vector<AnalyzeAudioSyncRequestFieldsEnumValues>> enumValues{};
  shared_ptr<string> name{};

  AnalyzeAudioSyncRequestFields() {}

  explicit AnalyzeAudioSyncRequestFields(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<AnalyzeAudioSyncRequestFieldsEnumValues> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["enumValues"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeAudioSyncRequestFieldsEnumValues model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        enumValues = make_shared<vector<AnalyzeAudioSyncRequestFieldsEnumValues>>(expect1);
      }
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~AnalyzeAudioSyncRequestFields() = default;
};
class AnalyzeAudioSyncRequestServiceInspectionInspectionContents : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> title{};

  AnalyzeAudioSyncRequestServiceInspectionInspectionContents() {}

  explicit AnalyzeAudioSyncRequestServiceInspectionInspectionContents(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AnalyzeAudioSyncRequestServiceInspectionInspectionContents() = default;
};
class AnalyzeAudioSyncRequestServiceInspection : public Darabonba::Model {
public:
  shared_ptr<vector<AnalyzeAudioSyncRequestServiceInspectionInspectionContents>> inspectionContents{};
  shared_ptr<string> inspectionIntroduction{};
  shared_ptr<string> sceneIntroduction{};

  AnalyzeAudioSyncRequestServiceInspection() {}

  explicit AnalyzeAudioSyncRequestServiceInspection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<AnalyzeAudioSyncRequestServiceInspectionInspectionContents> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["inspectionContents"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeAudioSyncRequestServiceInspectionInspectionContents model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inspectionContents = make_shared<vector<AnalyzeAudioSyncRequestServiceInspectionInspectionContents>>(expect1);
      }
    }
    if (m.find("inspectionIntroduction") != m.end() && !m["inspectionIntroduction"].empty()) {
      inspectionIntroduction = make_shared<string>(boost::any_cast<string>(m["inspectionIntroduction"]));
    }
    if (m.find("sceneIntroduction") != m.end() && !m["sceneIntroduction"].empty()) {
      sceneIntroduction = make_shared<string>(boost::any_cast<string>(m["sceneIntroduction"]));
    }
  }


  virtual ~AnalyzeAudioSyncRequestServiceInspection() = default;
};
class AnalyzeAudioSyncRequestTranscription : public Darabonba::Model {
public:
  shared_ptr<string> asrModelCode{};
  shared_ptr<long> autoSplit{};
  shared_ptr<long> clientChannel{};
  shared_ptr<string> fileName{};
  shared_ptr<string> level{};
  shared_ptr<long> serviceChannel{};
  shared_ptr<vector<string>> serviceChannelKeywords{};
  shared_ptr<string> vocabularyId{};
  shared_ptr<string> voiceFileUrl{};

  AnalyzeAudioSyncRequestTranscription() {}

  explicit AnalyzeAudioSyncRequestTranscription(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrModelCode) {
      res["asrModelCode"] = boost::any(*asrModelCode);
    }
    if (autoSplit) {
      res["autoSplit"] = boost::any(*autoSplit);
    }
    if (clientChannel) {
      res["clientChannel"] = boost::any(*clientChannel);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (serviceChannel) {
      res["serviceChannel"] = boost::any(*serviceChannel);
    }
    if (serviceChannelKeywords) {
      res["serviceChannelKeywords"] = boost::any(*serviceChannelKeywords);
    }
    if (vocabularyId) {
      res["vocabularyId"] = boost::any(*vocabularyId);
    }
    if (voiceFileUrl) {
      res["voiceFileUrl"] = boost::any(*voiceFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asrModelCode") != m.end() && !m["asrModelCode"].empty()) {
      asrModelCode = make_shared<string>(boost::any_cast<string>(m["asrModelCode"]));
    }
    if (m.find("autoSplit") != m.end() && !m["autoSplit"].empty()) {
      autoSplit = make_shared<long>(boost::any_cast<long>(m["autoSplit"]));
    }
    if (m.find("clientChannel") != m.end() && !m["clientChannel"].empty()) {
      clientChannel = make_shared<long>(boost::any_cast<long>(m["clientChannel"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
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
    if (m.find("vocabularyId") != m.end() && !m["vocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["vocabularyId"]));
    }
    if (m.find("voiceFileUrl") != m.end() && !m["voiceFileUrl"].empty()) {
      voiceFileUrl = make_shared<string>(boost::any_cast<string>(m["voiceFileUrl"]));
    }
  }


  virtual ~AnalyzeAudioSyncRequestTranscription() = default;
};
class AnalyzeAudioSyncRequestVariables : public Darabonba::Model {
public:
  shared_ptr<string> variableCode{};
  shared_ptr<string> variableValue{};

  AnalyzeAudioSyncRequestVariables() {}

  explicit AnalyzeAudioSyncRequestVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (variableCode) {
      res["variableCode"] = boost::any(*variableCode);
    }
    if (variableValue) {
      res["variableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("variableCode") != m.end() && !m["variableCode"].empty()) {
      variableCode = make_shared<string>(boost::any_cast<string>(m["variableCode"]));
    }
    if (m.find("variableValue") != m.end() && !m["variableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["variableValue"]));
    }
  }


  virtual ~AnalyzeAudioSyncRequestVariables() = default;
};
class AnalyzeAudioSyncRequest : public Darabonba::Model {
public:
  shared_ptr<vector<AnalyzeAudioSyncRequestCategoryTags>> categoryTags{};
  shared_ptr<string> customPrompt{};
  shared_ptr<vector<AnalyzeAudioSyncRequestFields>> fields{};
  shared_ptr<string> modelCode{};
  shared_ptr<string> responseFormatType{};
  shared_ptr<vector<string>> resultTypes{};
  shared_ptr<AnalyzeAudioSyncRequestServiceInspection> serviceInspection{};
  shared_ptr<bool> stream{};
  shared_ptr<vector<string>> templateIds{};
  shared_ptr<AnalyzeAudioSyncRequestTranscription> transcription{};
  shared_ptr<vector<AnalyzeAudioSyncRequestVariables>> variables{};

  AnalyzeAudioSyncRequest() {}

  explicit AnalyzeAudioSyncRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (customPrompt) {
      res["customPrompt"] = boost::any(*customPrompt);
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
    if (responseFormatType) {
      res["responseFormatType"] = boost::any(*responseFormatType);
    }
    if (resultTypes) {
      res["resultTypes"] = boost::any(*resultTypes);
    }
    if (serviceInspection) {
      res["serviceInspection"] = serviceInspection ? boost::any(serviceInspection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (templateIds) {
      res["templateIds"] = boost::any(*templateIds);
    }
    if (transcription) {
      res["transcription"] = transcription ? boost::any(transcription->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categoryTags") != m.end() && !m["categoryTags"].empty()) {
      if (typeid(vector<boost::any>) == m["categoryTags"].type()) {
        vector<AnalyzeAudioSyncRequestCategoryTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["categoryTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeAudioSyncRequestCategoryTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categoryTags = make_shared<vector<AnalyzeAudioSyncRequestCategoryTags>>(expect1);
      }
    }
    if (m.find("customPrompt") != m.end() && !m["customPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["customPrompt"]));
    }
    if (m.find("fields") != m.end() && !m["fields"].empty()) {
      if (typeid(vector<boost::any>) == m["fields"].type()) {
        vector<AnalyzeAudioSyncRequestFields> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["fields"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeAudioSyncRequestFields model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        fields = make_shared<vector<AnalyzeAudioSyncRequestFields>>(expect1);
      }
    }
    if (m.find("modelCode") != m.end() && !m["modelCode"].empty()) {
      modelCode = make_shared<string>(boost::any_cast<string>(m["modelCode"]));
    }
    if (m.find("responseFormatType") != m.end() && !m["responseFormatType"].empty()) {
      responseFormatType = make_shared<string>(boost::any_cast<string>(m["responseFormatType"]));
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
        AnalyzeAudioSyncRequestServiceInspection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceInspection"]));
        serviceInspection = make_shared<AnalyzeAudioSyncRequestServiceInspection>(model1);
      }
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
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
        AnalyzeAudioSyncRequestTranscription model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["transcription"]));
        transcription = make_shared<AnalyzeAudioSyncRequestTranscription>(model1);
      }
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<AnalyzeAudioSyncRequestVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AnalyzeAudioSyncRequestVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<AnalyzeAudioSyncRequestVariables>>(expect1);
      }
    }
  }


  virtual ~AnalyzeAudioSyncRequest() = default;
};
class AnalyzeAudioSyncResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> finishReason{};
  shared_ptr<string> inputTokens{};
  shared_ptr<string> outputTokens{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> text{};
  shared_ptr<string> totalTokens{};

  AnalyzeAudioSyncResponseBody() {}

  explicit AnalyzeAudioSyncResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~AnalyzeAudioSyncResponseBody() = default;
};
class AnalyzeAudioSyncResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AnalyzeAudioSyncResponseBody> body{};

  AnalyzeAudioSyncResponse() {}

  explicit AnalyzeAudioSyncResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AnalyzeAudioSyncResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AnalyzeAudioSyncResponseBody>(model1);
      }
    }
  }


  virtual ~AnalyzeAudioSyncResponse() = default;
};
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
  shared_ptr<string> customPrompt{};
  shared_ptr<AnalyzeConversationRequestDialogue> dialogue{};
  shared_ptr<vector<AnalyzeConversationRequestExamples>> examples{};
  shared_ptr<vector<AnalyzeConversationRequestFields>> fields{};
  shared_ptr<string> modelCode{};
  shared_ptr<string> responseFormatType{};
  shared_ptr<vector<string>> resultTypes{};
  shared_ptr<string> sceneName{};
  shared_ptr<AnalyzeConversationRequestServiceInspection> serviceInspection{};
  shared_ptr<string> sourceCallerUid{};
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
    if (customPrompt) {
      res["customPrompt"] = boost::any(*customPrompt);
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
    if (responseFormatType) {
      res["responseFormatType"] = boost::any(*responseFormatType);
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
    if (sourceCallerUid) {
      res["sourceCallerUid"] = boost::any(*sourceCallerUid);
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
    if (m.find("customPrompt") != m.end() && !m["customPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["customPrompt"]));
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
    if (m.find("responseFormatType") != m.end() && !m["responseFormatType"].empty()) {
      responseFormatType = make_shared<string>(boost::any_cast<string>(m["responseFormatType"]));
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
    if (m.find("sourceCallerUid") != m.end() && !m["sourceCallerUid"].empty()) {
      sourceCallerUid = make_shared<string>(boost::any_cast<string>(m["sourceCallerUid"]));
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
  shared_ptr<string> responseFormatType{};
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
    if (responseFormatType) {
      res["responseFormatType"] = boost::any(*responseFormatType);
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
    if (m.find("responseFormatType") != m.end() && !m["responseFormatType"].empty()) {
      responseFormatType = make_shared<string>(boost::any_cast<string>(m["responseFormatType"]));
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
class CreateTaskRequestCategoryTags : public Darabonba::Model {
public:
  shared_ptr<string> tagDesc{};
  shared_ptr<string> tagName{};

  CreateTaskRequestCategoryTags() {}

  explicit CreateTaskRequestCategoryTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~CreateTaskRequestCategoryTags() = default;
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
  shared_ptr<string> asrModelCode{};
  shared_ptr<long> autoSplit{};
  shared_ptr<long> clientChannel{};
  shared_ptr<string> fileName{};
  shared_ptr<string> level{};
  shared_ptr<long> serviceChannel{};
  shared_ptr<vector<string>> serviceChannelKeywords{};
  shared_ptr<string> vocabularyId{};
  shared_ptr<string> voiceFileUrl{};

  CreateTaskRequestTranscription() {}

  explicit CreateTaskRequestTranscription(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asrModelCode) {
      res["asrModelCode"] = boost::any(*asrModelCode);
    }
    if (autoSplit) {
      res["autoSplit"] = boost::any(*autoSplit);
    }
    if (clientChannel) {
      res["clientChannel"] = boost::any(*clientChannel);
    }
    if (fileName) {
      res["fileName"] = boost::any(*fileName);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (serviceChannel) {
      res["serviceChannel"] = boost::any(*serviceChannel);
    }
    if (serviceChannelKeywords) {
      res["serviceChannelKeywords"] = boost::any(*serviceChannelKeywords);
    }
    if (vocabularyId) {
      res["vocabularyId"] = boost::any(*vocabularyId);
    }
    if (voiceFileUrl) {
      res["voiceFileUrl"] = boost::any(*voiceFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("asrModelCode") != m.end() && !m["asrModelCode"].empty()) {
      asrModelCode = make_shared<string>(boost::any_cast<string>(m["asrModelCode"]));
    }
    if (m.find("autoSplit") != m.end() && !m["autoSplit"].empty()) {
      autoSplit = make_shared<long>(boost::any_cast<long>(m["autoSplit"]));
    }
    if (m.find("clientChannel") != m.end() && !m["clientChannel"].empty()) {
      clientChannel = make_shared<long>(boost::any_cast<long>(m["clientChannel"]));
    }
    if (m.find("fileName") != m.end() && !m["fileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["fileName"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
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
    if (m.find("vocabularyId") != m.end() && !m["vocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["vocabularyId"]));
    }
    if (m.find("voiceFileUrl") != m.end() && !m["voiceFileUrl"].empty()) {
      voiceFileUrl = make_shared<string>(boost::any_cast<string>(m["voiceFileUrl"]));
    }
  }


  virtual ~CreateTaskRequestTranscription() = default;
};
class CreateTaskRequestVariables : public Darabonba::Model {
public:
  shared_ptr<string> variableCode{};
  shared_ptr<string> variableValue{};

  CreateTaskRequestVariables() {}

  explicit CreateTaskRequestVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (variableCode) {
      res["variableCode"] = boost::any(*variableCode);
    }
    if (variableValue) {
      res["variableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("variableCode") != m.end() && !m["variableCode"].empty()) {
      variableCode = make_shared<string>(boost::any_cast<string>(m["variableCode"]));
    }
    if (m.find("variableValue") != m.end() && !m["variableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["variableValue"]));
    }
  }


  virtual ~CreateTaskRequestVariables() = default;
};
class CreateTaskRequest : public Darabonba::Model {
public:
  shared_ptr<vector<CreateTaskRequestCategoryTags>> categoryTags{};
  shared_ptr<string> customPrompt{};
  shared_ptr<CreateTaskRequestDialogue> dialogue{};
  shared_ptr<CreateTaskRequestExamples> examples{};
  shared_ptr<vector<CreateTaskRequestFields>> fields{};
  shared_ptr<string> modelCode{};
  shared_ptr<string> responseFormatType{};
  shared_ptr<vector<string>> resultTypes{};
  shared_ptr<CreateTaskRequestServiceInspection> serviceInspection{};
  shared_ptr<string> taskType{};
  shared_ptr<vector<string>> templateIds{};
  shared_ptr<CreateTaskRequestTranscription> transcription{};
  shared_ptr<vector<CreateTaskRequestVariables>> variables{};

  CreateTaskRequest() {}

  explicit CreateTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (customPrompt) {
      res["customPrompt"] = boost::any(*customPrompt);
    }
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
    if (responseFormatType) {
      res["responseFormatType"] = boost::any(*responseFormatType);
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
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("categoryTags") != m.end() && !m["categoryTags"].empty()) {
      if (typeid(vector<boost::any>) == m["categoryTags"].type()) {
        vector<CreateTaskRequestCategoryTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["categoryTags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskRequestCategoryTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        categoryTags = make_shared<vector<CreateTaskRequestCategoryTags>>(expect1);
      }
    }
    if (m.find("customPrompt") != m.end() && !m["customPrompt"].empty()) {
      customPrompt = make_shared<string>(boost::any_cast<string>(m["customPrompt"]));
    }
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
    if (m.find("responseFormatType") != m.end() && !m["responseFormatType"].empty()) {
      responseFormatType = make_shared<string>(boost::any_cast<string>(m["responseFormatType"]));
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
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<CreateTaskRequestVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTaskRequestVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<CreateTaskRequestVariables>>(expect1);
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
class CreateVocabRequestWordWeightList : public Darabonba::Model {
public:
  shared_ptr<long> weight{};
  shared_ptr<string> word{};

  CreateVocabRequestWordWeightList() {}

  explicit CreateVocabRequestWordWeightList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    if (word) {
      res["word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
    if (m.find("word") != m.end() && !m["word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["word"]));
    }
  }


  virtual ~CreateVocabRequestWordWeightList() = default;
};
class CreateVocabRequest : public Darabonba::Model {
public:
  shared_ptr<string> audioModelCode{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<vector<CreateVocabRequestWordWeightList>> wordWeightList{};
  shared_ptr<string> workspaceId{};

  CreateVocabRequest() {}

  explicit CreateVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioModelCode) {
      res["audioModelCode"] = boost::any(*audioModelCode);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (wordWeightList) {
      vector<boost::any> temp1;
      for(auto item1:*wordWeightList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["wordWeightList"] = boost::any(temp1);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("audioModelCode") != m.end() && !m["audioModelCode"].empty()) {
      audioModelCode = make_shared<string>(boost::any_cast<string>(m["audioModelCode"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("wordWeightList") != m.end() && !m["wordWeightList"].empty()) {
      if (typeid(vector<boost::any>) == m["wordWeightList"].type()) {
        vector<CreateVocabRequestWordWeightList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["wordWeightList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateVocabRequestWordWeightList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wordWeightList = make_shared<vector<CreateVocabRequestWordWeightList>>(expect1);
      }
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~CreateVocabRequest() = default;
};
class CreateVocabResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> vocabularyId{};

  CreateVocabResponseBodyData() {}

  explicit CreateVocabResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vocabularyId) {
      res["vocabularyId"] = boost::any(*vocabularyId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vocabularyId") != m.end() && !m["vocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["vocabularyId"]));
    }
  }


  virtual ~CreateVocabResponseBodyData() = default;
};
class CreateVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateVocabResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  CreateVocabResponseBody() {}

  explicit CreateVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVocabResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateVocabResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~CreateVocabResponseBody() = default;
};
class CreateVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateVocabResponseBody> body{};

  CreateVocabResponse() {}

  explicit CreateVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateVocabResponseBody>(model1);
      }
    }
  }


  virtual ~CreateVocabResponse() = default;
};
class DeleteVocabRequest : public Darabonba::Model {
public:
  shared_ptr<string> vocabularyId{};
  shared_ptr<string> workspaceId{};

  DeleteVocabRequest() {}

  explicit DeleteVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vocabularyId) {
      res["vocabularyId"] = boost::any(*vocabularyId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vocabularyId") != m.end() && !m["vocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["vocabularyId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~DeleteVocabRequest() = default;
};
class DeleteVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  DeleteVocabResponseBody() {}

  explicit DeleteVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~DeleteVocabResponseBody() = default;
};
class DeleteVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteVocabResponseBody> body{};

  DeleteVocabResponse() {}

  explicit DeleteVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteVocabResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteVocabResponse() = default;
};
class GetTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> requiredFieldList{};
  shared_ptr<string> taskId{};

  GetTaskResultRequest() {}

  explicit GetTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requiredFieldList) {
      res["requiredFieldList"] = boost::any(*requiredFieldList);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requiredFieldList") != m.end() && !m["requiredFieldList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["requiredFieldList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["requiredFieldList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      requiredFieldList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetTaskResultRequest() = default;
};
class GetTaskResultShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> requiredFieldListShrink{};
  shared_ptr<string> taskId{};

  GetTaskResultShrinkRequest() {}

  explicit GetTaskResultShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requiredFieldListShrink) {
      res["requiredFieldList"] = boost::any(*requiredFieldListShrink);
    }
    if (taskId) {
      res["taskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("requiredFieldList") != m.end() && !m["requiredFieldList"].empty()) {
      requiredFieldListShrink = make_shared<string>(boost::any_cast<string>(m["requiredFieldList"]));
    }
    if (m.find("taskId") != m.end() && !m["taskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["taskId"]));
    }
  }


  virtual ~GetTaskResultShrinkRequest() = default;
};
class GetTaskResultResponseBodyDataAsrResult : public Darabonba::Model {
public:
  shared_ptr<long> begin{};
  shared_ptr<long> emotionValue{};
  shared_ptr<long> end{};
  shared_ptr<string> role{};
  shared_ptr<long> speechRate{};
  shared_ptr<string> words{};

  GetTaskResultResponseBodyDataAsrResult() {}

  explicit GetTaskResultResponseBodyDataAsrResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begin) {
      res["begin"] = boost::any(*begin);
    }
    if (emotionValue) {
      res["emotionValue"] = boost::any(*emotionValue);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    if (speechRate) {
      res["speechRate"] = boost::any(*speechRate);
    }
    if (words) {
      res["words"] = boost::any(*words);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("begin") != m.end() && !m["begin"].empty()) {
      begin = make_shared<long>(boost::any_cast<long>(m["begin"]));
    }
    if (m.find("emotionValue") != m.end() && !m["emotionValue"].empty()) {
      emotionValue = make_shared<long>(boost::any_cast<long>(m["emotionValue"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<long>(boost::any_cast<long>(m["end"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
    if (m.find("speechRate") != m.end() && !m["speechRate"].empty()) {
      speechRate = make_shared<long>(boost::any_cast<long>(m["speechRate"]));
    }
    if (m.find("words") != m.end() && !m["words"].empty()) {
      words = make_shared<string>(boost::any_cast<string>(m["words"]));
    }
  }


  virtual ~GetTaskResultResponseBodyDataAsrResult() = default;
};
class GetTaskResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetTaskResultResponseBodyDataAsrResult>> asrResult{};
  shared_ptr<string> extra{};
  shared_ptr<string> taskErrorMessage{};
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
    if (asrResult) {
      vector<boost::any> temp1;
      for(auto item1:*asrResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["asrResult"] = boost::any(temp1);
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
    }
    if (taskErrorMessage) {
      res["taskErrorMessage"] = boost::any(*taskErrorMessage);
    }
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
    if (m.find("asrResult") != m.end() && !m["asrResult"].empty()) {
      if (typeid(vector<boost::any>) == m["asrResult"].type()) {
        vector<GetTaskResultResponseBodyDataAsrResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["asrResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetTaskResultResponseBodyDataAsrResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        asrResult = make_shared<vector<GetTaskResultResponseBodyDataAsrResult>>(expect1);
      }
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["extra"]));
    }
    if (m.find("taskErrorMessage") != m.end() && !m["taskErrorMessage"].empty()) {
      taskErrorMessage = make_shared<string>(boost::any_cast<string>(m["taskErrorMessage"]));
    }
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
class GetVocabRequest : public Darabonba::Model {
public:
  shared_ptr<string> vocabularyId{};
  shared_ptr<string> workspaceId{};

  GetVocabRequest() {}

  explicit GetVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (vocabularyId) {
      res["vocabularyId"] = boost::any(*vocabularyId);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("vocabularyId") != m.end() && !m["vocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["vocabularyId"]));
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~GetVocabRequest() = default;
};
class GetVocabResponseBodyDataWordWeightList : public Darabonba::Model {
public:
  shared_ptr<long> weight{};
  shared_ptr<string> word{};

  GetVocabResponseBodyDataWordWeightList() {}

  explicit GetVocabResponseBodyDataWordWeightList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    if (word) {
      res["word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
    if (m.find("word") != m.end() && !m["word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["word"]));
    }
  }


  virtual ~GetVocabResponseBodyDataWordWeightList() = default;
};
class GetVocabResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> audioModelCode{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> vocabularyId{};
  shared_ptr<vector<GetVocabResponseBodyDataWordWeightList>> wordWeightList{};

  GetVocabResponseBodyData() {}

  explicit GetVocabResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioModelCode) {
      res["audioModelCode"] = boost::any(*audioModelCode);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vocabularyId) {
      res["vocabularyId"] = boost::any(*vocabularyId);
    }
    if (wordWeightList) {
      vector<boost::any> temp1;
      for(auto item1:*wordWeightList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["wordWeightList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("audioModelCode") != m.end() && !m["audioModelCode"].empty()) {
      audioModelCode = make_shared<string>(boost::any_cast<string>(m["audioModelCode"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vocabularyId") != m.end() && !m["vocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["vocabularyId"]));
    }
    if (m.find("wordWeightList") != m.end() && !m["wordWeightList"].empty()) {
      if (typeid(vector<boost::any>) == m["wordWeightList"].type()) {
        vector<GetVocabResponseBodyDataWordWeightList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["wordWeightList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetVocabResponseBodyDataWordWeightList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wordWeightList = make_shared<vector<GetVocabResponseBodyDataWordWeightList>>(expect1);
      }
    }
  }


  virtual ~GetVocabResponseBodyData() = default;
};
class GetVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetVocabResponseBodyData> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  GetVocabResponseBody() {}

  explicit GetVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVocabResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetVocabResponseBodyData>(model1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~GetVocabResponseBody() = default;
};
class GetVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetVocabResponseBody> body{};

  GetVocabResponse() {}

  explicit GetVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetVocabResponseBody>(model1);
      }
    }
  }


  virtual ~GetVocabResponse() = default;
};
class ListVocabRequest : public Darabonba::Model {
public:
  shared_ptr<string> workspaceId{};

  ListVocabRequest() {}

  explicit ListVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~ListVocabRequest() = default;
};
class ListVocabResponseBodyDataWordWeightList : public Darabonba::Model {
public:
  shared_ptr<long> weight{};
  shared_ptr<string> word{};

  ListVocabResponseBodyDataWordWeightList() {}

  explicit ListVocabResponseBodyDataWordWeightList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    if (word) {
      res["word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
    if (m.find("word") != m.end() && !m["word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["word"]));
    }
  }


  virtual ~ListVocabResponseBodyDataWordWeightList() = default;
};
class ListVocabResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> audioModelCode{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> vocabularyId{};
  shared_ptr<vector<ListVocabResponseBodyDataWordWeightList>> wordWeightList{};

  ListVocabResponseBodyData() {}

  explicit ListVocabResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (audioModelCode) {
      res["audioModelCode"] = boost::any(*audioModelCode);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vocabularyId) {
      res["vocabularyId"] = boost::any(*vocabularyId);
    }
    if (wordWeightList) {
      vector<boost::any> temp1;
      for(auto item1:*wordWeightList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["wordWeightList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("audioModelCode") != m.end() && !m["audioModelCode"].empty()) {
      audioModelCode = make_shared<string>(boost::any_cast<string>(m["audioModelCode"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vocabularyId") != m.end() && !m["vocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["vocabularyId"]));
    }
    if (m.find("wordWeightList") != m.end() && !m["wordWeightList"].empty()) {
      if (typeid(vector<boost::any>) == m["wordWeightList"].type()) {
        vector<ListVocabResponseBodyDataWordWeightList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["wordWeightList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVocabResponseBodyDataWordWeightList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wordWeightList = make_shared<vector<ListVocabResponseBodyDataWordWeightList>>(expect1);
      }
    }
  }


  virtual ~ListVocabResponseBodyData() = default;
};
class ListVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListVocabResponseBodyData>> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ListVocabResponseBody() {}

  explicit ListVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListVocabResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListVocabResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListVocabResponseBodyData>>(expect1);
      }
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~ListVocabResponseBody() = default;
};
class ListVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListVocabResponseBody> body{};

  ListVocabResponse() {}

  explicit ListVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListVocabResponseBody>(model1);
      }
    }
  }


  virtual ~ListVocabResponse() = default;
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
class RunCompletionRequestVariables : public Darabonba::Model {
public:
  shared_ptr<string> variableCode{};
  shared_ptr<string> variableValue{};

  RunCompletionRequestVariables() {}

  explicit RunCompletionRequestVariables(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (variableCode) {
      res["variableCode"] = boost::any(*variableCode);
    }
    if (variableValue) {
      res["variableValue"] = boost::any(*variableValue);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("variableCode") != m.end() && !m["variableCode"].empty()) {
      variableCode = make_shared<string>(boost::any_cast<string>(m["variableCode"]));
    }
    if (m.find("variableValue") != m.end() && !m["variableValue"].empty()) {
      variableValue = make_shared<string>(boost::any_cast<string>(m["variableValue"]));
    }
  }


  virtual ~RunCompletionRequestVariables() = default;
};
class RunCompletionRequest : public Darabonba::Model {
public:
  shared_ptr<RunCompletionRequestDialogue> dialogue{};
  shared_ptr<vector<RunCompletionRequestFields>> fields{};
  shared_ptr<string> modelCode{};
  shared_ptr<RunCompletionRequestServiceInspection> serviceInspection{};
  shared_ptr<bool> stream{};
  shared_ptr<vector<long>> templateIds{};
  shared_ptr<string> responseFormatType{};
  shared_ptr<vector<RunCompletionRequestVariables>> variables{};

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
    if (responseFormatType) {
      res["responseFormatType"] = boost::any(*responseFormatType);
    }
    if (variables) {
      vector<boost::any> temp1;
      for(auto item1:*variables){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["variables"] = boost::any(temp1);
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
    if (m.find("responseFormatType") != m.end() && !m["responseFormatType"].empty()) {
      responseFormatType = make_shared<string>(boost::any_cast<string>(m["responseFormatType"]));
    }
    if (m.find("variables") != m.end() && !m["variables"].empty()) {
      if (typeid(vector<boost::any>) == m["variables"].type()) {
        vector<RunCompletionRequestVariables> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["variables"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunCompletionRequestVariables model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        variables = make_shared<vector<RunCompletionRequestVariables>>(expect1);
      }
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
  shared_ptr<string> responseFormatType{};

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
    if (responseFormatType) {
      res["responseFormatType"] = boost::any(*responseFormatType);
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
    if (m.find("responseFormatType") != m.end() && !m["responseFormatType"].empty()) {
      responseFormatType = make_shared<string>(boost::any_cast<string>(m["responseFormatType"]));
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
class UpdateVocabRequestWordWeightList : public Darabonba::Model {
public:
  shared_ptr<long> weight{};
  shared_ptr<string> word{};

  UpdateVocabRequestWordWeightList() {}

  explicit UpdateVocabRequestWordWeightList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (weight) {
      res["weight"] = boost::any(*weight);
    }
    if (word) {
      res["word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("weight") != m.end() && !m["weight"].empty()) {
      weight = make_shared<long>(boost::any_cast<long>(m["weight"]));
    }
    if (m.find("word") != m.end() && !m["word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["word"]));
    }
  }


  virtual ~UpdateVocabRequestWordWeightList() = default;
};
class UpdateVocabRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> vocabularyId{};
  shared_ptr<vector<UpdateVocabRequestWordWeightList>> wordWeightList{};
  shared_ptr<string> workspaceId{};

  UpdateVocabRequest() {}

  explicit UpdateVocabRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (vocabularyId) {
      res["vocabularyId"] = boost::any(*vocabularyId);
    }
    if (wordWeightList) {
      vector<boost::any> temp1;
      for(auto item1:*wordWeightList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["wordWeightList"] = boost::any(temp1);
    }
    if (workspaceId) {
      res["workspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("vocabularyId") != m.end() && !m["vocabularyId"].empty()) {
      vocabularyId = make_shared<string>(boost::any_cast<string>(m["vocabularyId"]));
    }
    if (m.find("wordWeightList") != m.end() && !m["wordWeightList"].empty()) {
      if (typeid(vector<boost::any>) == m["wordWeightList"].type()) {
        vector<UpdateVocabRequestWordWeightList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["wordWeightList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateVocabRequestWordWeightList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wordWeightList = make_shared<vector<UpdateVocabRequestWordWeightList>>(expect1);
      }
    }
    if (m.find("workspaceId") != m.end() && !m["workspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["workspaceId"]));
    }
  }


  virtual ~UpdateVocabRequest() = default;
};
class UpdateVocabResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  UpdateVocabResponseBody() {}

  explicit UpdateVocabResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~UpdateVocabResponseBody() = default;
};
class UpdateVocabResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateVocabResponseBody> body{};

  UpdateVocabResponse() {}

  explicit UpdateVocabResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateVocabResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateVocabResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateVocabResponse() = default;
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
  AnalyzeAudioSyncResponse analyzeAudioSyncWithOptions(shared_ptr<string> workspaceId,
                                                       shared_ptr<string> appId,
                                                       shared_ptr<AnalyzeAudioSyncRequest> request,
                                                       shared_ptr<map<string, string>> headers,
                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AnalyzeAudioSyncResponse analyzeAudioSync(shared_ptr<string> workspaceId, shared_ptr<string> appId, shared_ptr<AnalyzeAudioSyncRequest> request);
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
  CreateVocabResponse createVocabWithOptions(shared_ptr<CreateVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateVocabResponse createVocab(shared_ptr<CreateVocabRequest> request);
  DeleteVocabResponse deleteVocabWithOptions(shared_ptr<DeleteVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteVocabResponse deleteVocab(shared_ptr<DeleteVocabRequest> request);
  GetTaskResultResponse getTaskResultWithOptions(shared_ptr<GetTaskResultRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTaskResultResponse getTaskResult(shared_ptr<GetTaskResultRequest> request);
  GetVocabResponse getVocabWithOptions(shared_ptr<GetVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetVocabResponse getVocab(shared_ptr<GetVocabRequest> request);
  ListVocabResponse listVocabWithOptions(shared_ptr<ListVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListVocabResponse listVocab(shared_ptr<ListVocabRequest> request);
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
  UpdateVocabResponse updateVocabWithOptions(shared_ptr<UpdateVocabRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateVocabResponse updateVocab(shared_ptr<UpdateVocabRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_ContactCenterAI20240603

#endif
