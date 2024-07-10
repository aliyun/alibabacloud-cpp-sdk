// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FARUI20240628_H_
#define ALIBABACLOUD_FARUI20240628_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_FaRui20240628 {
class CreateTextFileRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> createTime{};
  shared_ptr<string> textFileName{};
  shared_ptr<string> textFileUrl{};

  CreateTextFileRequest() {}

  explicit CreateTextFileRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (textFileName) {
      res["TextFileName"] = boost::any(*textFileName);
    }
    if (textFileUrl) {
      res["TextFileUrl"] = boost::any(*textFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TextFileName") != m.end() && !m["TextFileName"].empty()) {
      textFileName = make_shared<string>(boost::any_cast<string>(m["TextFileName"]));
    }
    if (m.find("TextFileUrl") != m.end() && !m["TextFileUrl"].empty()) {
      textFileUrl = make_shared<string>(boost::any_cast<string>(m["TextFileUrl"]));
    }
  }


  virtual ~CreateTextFileRequest() = default;
};
class CreateTextFileAdvanceRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> createTime{};
  shared_ptr<string> textFileName{};
  shared_ptr<Darabonba::Stream> textFileUrlObject{};

  CreateTextFileAdvanceRequest() {}

  explicit CreateTextFileAdvanceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (textFileName) {
      res["TextFileName"] = boost::any(*textFileName);
    }
    if (textFileUrlObject) {
      res["TextFileUrl"] = boost::any(*textFileUrlObject);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("TextFileName") != m.end() && !m["TextFileName"].empty()) {
      textFileName = make_shared<string>(boost::any_cast<string>(m["TextFileName"]));
    }
    if (m.find("TextFileUrl") != m.end() && !m["TextFileUrl"].empty()) {
      textFileUrlObject = make_shared<Darabonba::Stream>(boost::any_cast<Darabonba::Stream>(m["TextFileUrl"]));
    }
  }


  virtual ~CreateTextFileAdvanceRequest() = default;
};
class CreateTextFileResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> textFileId{};
  shared_ptr<string> textFileName{};
  shared_ptr<string> textFileUrl{};

  CreateTextFileResponseBodyData() {}

  explicit CreateTextFileResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (textFileId) {
      res["TextFileId"] = boost::any(*textFileId);
    }
    if (textFileName) {
      res["TextFileName"] = boost::any(*textFileName);
    }
    if (textFileUrl) {
      res["TextFileUrl"] = boost::any(*textFileUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TextFileId") != m.end() && !m["TextFileId"].empty()) {
      textFileId = make_shared<string>(boost::any_cast<string>(m["TextFileId"]));
    }
    if (m.find("TextFileName") != m.end() && !m["TextFileName"].empty()) {
      textFileName = make_shared<string>(boost::any_cast<string>(m["TextFileName"]));
    }
    if (m.find("TextFileUrl") != m.end() && !m["TextFileUrl"].empty()) {
      textFileUrl = make_shared<string>(boost::any_cast<string>(m["TextFileUrl"]));
    }
  }


  virtual ~CreateTextFileResponseBodyData() = default;
};
class CreateTextFileResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateTextFileResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTextFileResponseBody() {}

  explicit CreateTextFileResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTextFileResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTextFileResponseBodyData>(model1);
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


  virtual ~CreateTextFileResponseBody() = default;
};
class CreateTextFileResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTextFileResponseBody> body{};

  CreateTextFileResponse() {}

  explicit CreateTextFileResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTextFileResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTextFileResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTextFileResponse() = default;
};
class RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules : public Darabonba::Model {
public:
  shared_ptr<string> riskLevel{};
  shared_ptr<string> ruleDesc{};
  shared_ptr<string> ruleTitle{};

  RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules() {}

  explicit RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskLevel) {
      res["riskLevel"] = boost::any(*riskLevel);
    }
    if (ruleDesc) {
      res["ruleDesc"] = boost::any(*ruleDesc);
    }
    if (ruleTitle) {
      res["ruleTitle"] = boost::any(*ruleTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("riskLevel") != m.end() && !m["riskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["riskLevel"]));
    }
    if (m.find("ruleDesc") != m.end() && !m["ruleDesc"].empty()) {
      ruleDesc = make_shared<string>(boost::any_cast<string>(m["ruleDesc"]));
    }
    if (m.find("ruleTitle") != m.end() && !m["ruleTitle"].empty()) {
      ruleTitle = make_shared<string>(boost::any_cast<string>(m["ruleTitle"]));
    }
  }


  virtual ~RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules() = default;
};
class RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig : public Darabonba::Model {
public:
  shared_ptr<vector<RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules>> customRules{};

  RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig() {}

  explicit RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customRules) {
      vector<boost::any> temp1;
      for(auto item1:*customRules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["customRules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customRules") != m.end() && !m["customRules"].empty()) {
      if (typeid(vector<boost::any>) == m["customRules"].type()) {
        vector<RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["customRules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        customRules = make_shared<vector<RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfigCustomRules>>(expect1);
      }
    }
  }


  virtual ~RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig() = default;
};
class RunContractResultGenerationRequestAssistantMetaDataRules : public Darabonba::Model {
public:
  shared_ptr<string> riskLevel{};
  shared_ptr<string> ruleSequence{};
  shared_ptr<string> ruleTag{};
  shared_ptr<string> ruleTitle{};

  RunContractResultGenerationRequestAssistantMetaDataRules() {}

  explicit RunContractResultGenerationRequestAssistantMetaDataRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskLevel) {
      res["riskLevel"] = boost::any(*riskLevel);
    }
    if (ruleSequence) {
      res["ruleSequence"] = boost::any(*ruleSequence);
    }
    if (ruleTag) {
      res["ruleTag"] = boost::any(*ruleTag);
    }
    if (ruleTitle) {
      res["ruleTitle"] = boost::any(*ruleTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("riskLevel") != m.end() && !m["riskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["riskLevel"]));
    }
    if (m.find("ruleSequence") != m.end() && !m["ruleSequence"].empty()) {
      ruleSequence = make_shared<string>(boost::any_cast<string>(m["ruleSequence"]));
    }
    if (m.find("ruleTag") != m.end() && !m["ruleTag"].empty()) {
      ruleTag = make_shared<string>(boost::any_cast<string>(m["ruleTag"]));
    }
    if (m.find("ruleTitle") != m.end() && !m["ruleTitle"].empty()) {
      ruleTitle = make_shared<string>(boost::any_cast<string>(m["ruleTitle"]));
    }
  }


  virtual ~RunContractResultGenerationRequestAssistantMetaDataRules() = default;
};
class RunContractResultGenerationRequestAssistantMetaData : public Darabonba::Model {
public:
  shared_ptr<RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig> customRuleConfig{};
  shared_ptr<string> fileId{};
  shared_ptr<string> position{};
  shared_ptr<string> ruleTaskId{};
  shared_ptr<vector<RunContractResultGenerationRequestAssistantMetaDataRules>> rules{};

  RunContractResultGenerationRequestAssistantMetaData() {}

  explicit RunContractResultGenerationRequestAssistantMetaData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (customRuleConfig) {
      res["customRuleConfig"] = customRuleConfig ? boost::any(customRuleConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (fileId) {
      res["fileId"] = boost::any(*fileId);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    if (ruleTaskId) {
      res["ruleTaskId"] = boost::any(*ruleTaskId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("customRuleConfig") != m.end() && !m["customRuleConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["customRuleConfig"].type()) {
        RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["customRuleConfig"]));
        customRuleConfig = make_shared<RunContractResultGenerationRequestAssistantMetaDataCustomRuleConfig>(model1);
      }
    }
    if (m.find("fileId") != m.end() && !m["fileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["fileId"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["position"]));
    }
    if (m.find("ruleTaskId") != m.end() && !m["ruleTaskId"].empty()) {
      ruleTaskId = make_shared<string>(boost::any_cast<string>(m["ruleTaskId"]));
    }
    if (m.find("rules") != m.end() && !m["rules"].empty()) {
      if (typeid(vector<boost::any>) == m["rules"].type()) {
        vector<RunContractResultGenerationRequestAssistantMetaDataRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunContractResultGenerationRequestAssistantMetaDataRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<RunContractResultGenerationRequestAssistantMetaDataRules>>(expect1);
      }
    }
  }


  virtual ~RunContractResultGenerationRequestAssistantMetaData() = default;
};
class RunContractResultGenerationRequestAssistant : public Darabonba::Model {
public:
  shared_ptr<RunContractResultGenerationRequestAssistantMetaData> metaData{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  RunContractResultGenerationRequestAssistant() {}

  explicit RunContractResultGenerationRequestAssistant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metaData) {
      res["metaData"] = metaData ? boost::any(metaData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metaData") != m.end() && !m["metaData"].empty()) {
      if (typeid(map<string, boost::any>) == m["metaData"].type()) {
        RunContractResultGenerationRequestAssistantMetaData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metaData"]));
        metaData = make_shared<RunContractResultGenerationRequestAssistantMetaData>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~RunContractResultGenerationRequestAssistant() = default;
};
class RunContractResultGenerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RunContractResultGenerationRequestAssistant> assistant{};
  shared_ptr<bool> stream{};

  RunContractResultGenerationRequest() {}

  explicit RunContractResultGenerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (assistant) {
      res["assistant"] = assistant ? boost::any(assistant->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      if (typeid(map<string, boost::any>) == m["assistant"].type()) {
        RunContractResultGenerationRequestAssistant model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["assistant"]));
        assistant = make_shared<RunContractResultGenerationRequestAssistant>(model1);
      }
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
  }


  virtual ~RunContractResultGenerationRequest() = default;
};
class RunContractResultGenerationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> assistantShrink{};
  shared_ptr<bool> stream{};

  RunContractResultGenerationShrinkRequest() {}

  explicit RunContractResultGenerationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (assistantShrink) {
      res["assistant"] = boost::any(*assistantShrink);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistantShrink = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
  }


  virtual ~RunContractResultGenerationShrinkRequest() = default;
};
class RunContractResultGenerationResponseBodyOutputResultSubRisks : public Darabonba::Model {
public:
  shared_ptr<string> originalContent{};
  shared_ptr<string> resultContent{};
  shared_ptr<string> resultType{};
  shared_ptr<string> riskBrief{};
  shared_ptr<string> riskClause{};
  shared_ptr<string> riskExplain{};

  RunContractResultGenerationResponseBodyOutputResultSubRisks() {}

  explicit RunContractResultGenerationResponseBodyOutputResultSubRisks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (originalContent) {
      res["originalContent"] = boost::any(*originalContent);
    }
    if (resultContent) {
      res["resultContent"] = boost::any(*resultContent);
    }
    if (resultType) {
      res["resultType"] = boost::any(*resultType);
    }
    if (riskBrief) {
      res["riskBrief"] = boost::any(*riskBrief);
    }
    if (riskClause) {
      res["riskClause"] = boost::any(*riskClause);
    }
    if (riskExplain) {
      res["riskExplain"] = boost::any(*riskExplain);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("originalContent") != m.end() && !m["originalContent"].empty()) {
      originalContent = make_shared<string>(boost::any_cast<string>(m["originalContent"]));
    }
    if (m.find("resultContent") != m.end() && !m["resultContent"].empty()) {
      resultContent = make_shared<string>(boost::any_cast<string>(m["resultContent"]));
    }
    if (m.find("resultType") != m.end() && !m["resultType"].empty()) {
      resultType = make_shared<string>(boost::any_cast<string>(m["resultType"]));
    }
    if (m.find("riskBrief") != m.end() && !m["riskBrief"].empty()) {
      riskBrief = make_shared<string>(boost::any_cast<string>(m["riskBrief"]));
    }
    if (m.find("riskClause") != m.end() && !m["riskClause"].empty()) {
      riskClause = make_shared<string>(boost::any_cast<string>(m["riskClause"]));
    }
    if (m.find("riskExplain") != m.end() && !m["riskExplain"].empty()) {
      riskExplain = make_shared<string>(boost::any_cast<string>(m["riskExplain"]));
    }
  }


  virtual ~RunContractResultGenerationResponseBodyOutputResultSubRisks() = default;
};
class RunContractResultGenerationResponseBodyOutputResult : public Darabonba::Model {
public:
  shared_ptr<string> examineBrief{};
  shared_ptr<string> examineResult{};
  shared_ptr<string> riskLevel{};
  shared_ptr<string> ruleSequence{};
  shared_ptr<string> ruleTag{};
  shared_ptr<string> ruleTitle{};
  shared_ptr<vector<RunContractResultGenerationResponseBodyOutputResultSubRisks>> subRisks{};

  RunContractResultGenerationResponseBodyOutputResult() {}

  explicit RunContractResultGenerationResponseBodyOutputResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (examineBrief) {
      res["examineBrief"] = boost::any(*examineBrief);
    }
    if (examineResult) {
      res["examineResult"] = boost::any(*examineResult);
    }
    if (riskLevel) {
      res["riskLevel"] = boost::any(*riskLevel);
    }
    if (ruleSequence) {
      res["ruleSequence"] = boost::any(*ruleSequence);
    }
    if (ruleTag) {
      res["ruleTag"] = boost::any(*ruleTag);
    }
    if (ruleTitle) {
      res["ruleTitle"] = boost::any(*ruleTitle);
    }
    if (subRisks) {
      vector<boost::any> temp1;
      for(auto item1:*subRisks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["subRisks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("examineBrief") != m.end() && !m["examineBrief"].empty()) {
      examineBrief = make_shared<string>(boost::any_cast<string>(m["examineBrief"]));
    }
    if (m.find("examineResult") != m.end() && !m["examineResult"].empty()) {
      examineResult = make_shared<string>(boost::any_cast<string>(m["examineResult"]));
    }
    if (m.find("riskLevel") != m.end() && !m["riskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["riskLevel"]));
    }
    if (m.find("ruleSequence") != m.end() && !m["ruleSequence"].empty()) {
      ruleSequence = make_shared<string>(boost::any_cast<string>(m["ruleSequence"]));
    }
    if (m.find("ruleTag") != m.end() && !m["ruleTag"].empty()) {
      ruleTag = make_shared<string>(boost::any_cast<string>(m["ruleTag"]));
    }
    if (m.find("ruleTitle") != m.end() && !m["ruleTitle"].empty()) {
      ruleTitle = make_shared<string>(boost::any_cast<string>(m["ruleTitle"]));
    }
    if (m.find("subRisks") != m.end() && !m["subRisks"].empty()) {
      if (typeid(vector<boost::any>) == m["subRisks"].type()) {
        vector<RunContractResultGenerationResponseBodyOutputResultSubRisks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["subRisks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunContractResultGenerationResponseBodyOutputResultSubRisks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        subRisks = make_shared<vector<RunContractResultGenerationResponseBodyOutputResultSubRisks>>(expect1);
      }
    }
  }


  virtual ~RunContractResultGenerationResponseBodyOutputResult() = default;
};
class RunContractResultGenerationResponseBodyOutput : public Darabonba::Model {
public:
  shared_ptr<RunContractResultGenerationResponseBodyOutputResult> result{};
  shared_ptr<string> resultTaskId{};

  RunContractResultGenerationResponseBodyOutput() {}

  explicit RunContractResultGenerationResponseBodyOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (resultTaskId) {
      res["resultTaskId"] = boost::any(*resultTaskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        RunContractResultGenerationResponseBodyOutputResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<RunContractResultGenerationResponseBodyOutputResult>(model1);
      }
    }
    if (m.find("resultTaskId") != m.end() && !m["resultTaskId"].empty()) {
      resultTaskId = make_shared<string>(boost::any_cast<string>(m["resultTaskId"]));
    }
  }


  virtual ~RunContractResultGenerationResponseBodyOutput() = default;
};
class RunContractResultGenerationResponseBodyUsage : public Darabonba::Model {
public:
  shared_ptr<long> input{};
  shared_ptr<string> unit{};

  RunContractResultGenerationResponseBodyUsage() {}

  explicit RunContractResultGenerationResponseBodyUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (input) {
      res["input"] = boost::any(*input);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("input") != m.end() && !m["input"].empty()) {
      input = make_shared<long>(boost::any_cast<long>(m["input"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~RunContractResultGenerationResponseBodyUsage() = default;
};
class RunContractResultGenerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<RunContractResultGenerationResponseBodyOutput> output{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<RunContractResultGenerationResponseBodyUsage> usage{};
  shared_ptr<string> httpStatusCode{};

  RunContractResultGenerationResponseBody() {}

  explicit RunContractResultGenerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (output) {
      res["Output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (usage) {
      res["Usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      if (typeid(map<string, boost::any>) == m["Output"].type()) {
        RunContractResultGenerationResponseBodyOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Output"]));
        output = make_shared<RunContractResultGenerationResponseBodyOutput>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Usage"].type()) {
        RunContractResultGenerationResponseBodyUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Usage"]));
        usage = make_shared<RunContractResultGenerationResponseBodyUsage>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
  }


  virtual ~RunContractResultGenerationResponseBody() = default;
};
class RunContractResultGenerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunContractResultGenerationResponseBody> body{};

  RunContractResultGenerationResponse() {}

  explicit RunContractResultGenerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunContractResultGenerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunContractResultGenerationResponseBody>(model1);
      }
    }
  }


  virtual ~RunContractResultGenerationResponse() = default;
};
class RunContractRuleGenerationRequestAssistantMetaData : public Darabonba::Model {
public:
  shared_ptr<string> fileId{};
  shared_ptr<string> position{};

  RunContractRuleGenerationRequestAssistantMetaData() {}

  explicit RunContractRuleGenerationRequestAssistantMetaData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (fileId) {
      res["fileId"] = boost::any(*fileId);
    }
    if (position) {
      res["position"] = boost::any(*position);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("fileId") != m.end() && !m["fileId"].empty()) {
      fileId = make_shared<string>(boost::any_cast<string>(m["fileId"]));
    }
    if (m.find("position") != m.end() && !m["position"].empty()) {
      position = make_shared<string>(boost::any_cast<string>(m["position"]));
    }
  }


  virtual ~RunContractRuleGenerationRequestAssistantMetaData() = default;
};
class RunContractRuleGenerationRequestAssistant : public Darabonba::Model {
public:
  shared_ptr<RunContractRuleGenerationRequestAssistantMetaData> metaData{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  RunContractRuleGenerationRequestAssistant() {}

  explicit RunContractRuleGenerationRequestAssistant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (metaData) {
      res["metaData"] = metaData ? boost::any(metaData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("metaData") != m.end() && !m["metaData"].empty()) {
      if (typeid(map<string, boost::any>) == m["metaData"].type()) {
        RunContractRuleGenerationRequestAssistantMetaData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["metaData"]));
        metaData = make_shared<RunContractRuleGenerationRequestAssistantMetaData>(model1);
      }
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~RunContractRuleGenerationRequestAssistant() = default;
};
class RunContractRuleGenerationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RunContractRuleGenerationRequestAssistant> assistant{};
  shared_ptr<bool> stream{};

  RunContractRuleGenerationRequest() {}

  explicit RunContractRuleGenerationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (assistant) {
      res["assistant"] = assistant ? boost::any(assistant->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      if (typeid(map<string, boost::any>) == m["assistant"].type()) {
        RunContractRuleGenerationRequestAssistant model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["assistant"]));
        assistant = make_shared<RunContractRuleGenerationRequestAssistant>(model1);
      }
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
  }


  virtual ~RunContractRuleGenerationRequest() = default;
};
class RunContractRuleGenerationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> assistantShrink{};
  shared_ptr<bool> stream{};

  RunContractRuleGenerationShrinkRequest() {}

  explicit RunContractRuleGenerationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (assistantShrink) {
      res["assistant"] = boost::any(*assistantShrink);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistantShrink = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
  }


  virtual ~RunContractRuleGenerationShrinkRequest() = default;
};
class RunContractRuleGenerationResponseBodyOutputRules : public Darabonba::Model {
public:
  shared_ptr<string> riskLevel{};
  shared_ptr<string> ruleSequence{};
  shared_ptr<string> ruleTag{};
  shared_ptr<string> ruleTitle{};

  RunContractRuleGenerationResponseBodyOutputRules() {}

  explicit RunContractRuleGenerationResponseBodyOutputRules(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskLevel) {
      res["riskLevel"] = boost::any(*riskLevel);
    }
    if (ruleSequence) {
      res["ruleSequence"] = boost::any(*ruleSequence);
    }
    if (ruleTag) {
      res["ruleTag"] = boost::any(*ruleTag);
    }
    if (ruleTitle) {
      res["ruleTitle"] = boost::any(*ruleTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("riskLevel") != m.end() && !m["riskLevel"].empty()) {
      riskLevel = make_shared<string>(boost::any_cast<string>(m["riskLevel"]));
    }
    if (m.find("ruleSequence") != m.end() && !m["ruleSequence"].empty()) {
      ruleSequence = make_shared<string>(boost::any_cast<string>(m["ruleSequence"]));
    }
    if (m.find("ruleTag") != m.end() && !m["ruleTag"].empty()) {
      ruleTag = make_shared<string>(boost::any_cast<string>(m["ruleTag"]));
    }
    if (m.find("ruleTitle") != m.end() && !m["ruleTitle"].empty()) {
      ruleTitle = make_shared<string>(boost::any_cast<string>(m["ruleTitle"]));
    }
  }


  virtual ~RunContractRuleGenerationResponseBodyOutputRules() = default;
};
class RunContractRuleGenerationResponseBodyOutput : public Darabonba::Model {
public:
  shared_ptr<string> ruleTaskId{};
  shared_ptr<vector<RunContractRuleGenerationResponseBodyOutputRules>> rules{};

  RunContractRuleGenerationResponseBodyOutput() {}

  explicit RunContractRuleGenerationResponseBodyOutput(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ruleTaskId) {
      res["ruleTaskId"] = boost::any(*ruleTaskId);
    }
    if (rules) {
      vector<boost::any> temp1;
      for(auto item1:*rules){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["rules"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ruleTaskId") != m.end() && !m["ruleTaskId"].empty()) {
      ruleTaskId = make_shared<string>(boost::any_cast<string>(m["ruleTaskId"]));
    }
    if (m.find("rules") != m.end() && !m["rules"].empty()) {
      if (typeid(vector<boost::any>) == m["rules"].type()) {
        vector<RunContractRuleGenerationResponseBodyOutputRules> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["rules"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunContractRuleGenerationResponseBodyOutputRules model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        rules = make_shared<vector<RunContractRuleGenerationResponseBodyOutputRules>>(expect1);
      }
    }
  }


  virtual ~RunContractRuleGenerationResponseBodyOutput() = default;
};
class RunContractRuleGenerationResponseBodyUsage : public Darabonba::Model {
public:
  shared_ptr<long> input{};
  shared_ptr<string> unit{};

  RunContractRuleGenerationResponseBodyUsage() {}

  explicit RunContractRuleGenerationResponseBodyUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (input) {
      res["input"] = boost::any(*input);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("input") != m.end() && !m["input"].empty()) {
      input = make_shared<long>(boost::any_cast<long>(m["input"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
  }


  virtual ~RunContractRuleGenerationResponseBodyUsage() = default;
};
class RunContractRuleGenerationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<RunContractRuleGenerationResponseBodyOutput> output{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<RunContractRuleGenerationResponseBodyUsage> usage{};
  shared_ptr<long> httpStatusCode{};

  RunContractRuleGenerationResponseBody() {}

  explicit RunContractRuleGenerationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (output) {
      res["Output"] = output ? boost::any(output->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (usage) {
      res["Usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("Output") != m.end() && !m["Output"].empty()) {
      if (typeid(map<string, boost::any>) == m["Output"].type()) {
        RunContractRuleGenerationResponseBodyOutput model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Output"]));
        output = make_shared<RunContractRuleGenerationResponseBodyOutput>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Usage"].type()) {
        RunContractRuleGenerationResponseBodyUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Usage"]));
        usage = make_shared<RunContractRuleGenerationResponseBodyUsage>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
  }


  virtual ~RunContractRuleGenerationResponseBody() = default;
};
class RunContractRuleGenerationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunContractRuleGenerationResponseBody> body{};

  RunContractRuleGenerationResponse() {}

  explicit RunContractRuleGenerationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunContractRuleGenerationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunContractRuleGenerationResponseBody>(model1);
      }
    }
  }


  virtual ~RunContractRuleGenerationResponse() = default;
};
class RunLegalAdviceConsultationRequestAssistant : public Darabonba::Model {
public:
  shared_ptr<string> id{};
  shared_ptr<map<string, string>> metaData{};
  shared_ptr<string> type{};
  shared_ptr<string> version{};

  RunLegalAdviceConsultationRequestAssistant() {}

  explicit RunLegalAdviceConsultationRequestAssistant(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (metaData) {
      res["metaData"] = boost::any(*metaData);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("metaData") != m.end() && !m["metaData"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["metaData"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      metaData = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~RunLegalAdviceConsultationRequestAssistant() = default;
};
class RunLegalAdviceConsultationRequestThreadMessages : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  RunLegalAdviceConsultationRequestThreadMessages() {}

  explicit RunLegalAdviceConsultationRequestThreadMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (role) {
      res["role"] = boost::any(*role);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~RunLegalAdviceConsultationRequestThreadMessages() = default;
};
class RunLegalAdviceConsultationRequestThread : public Darabonba::Model {
public:
  shared_ptr<vector<RunLegalAdviceConsultationRequestThreadMessages>> messages{};

  RunLegalAdviceConsultationRequestThread() {}

  explicit RunLegalAdviceConsultationRequestThread(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["messages"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("messages") != m.end() && !m["messages"].empty()) {
      if (typeid(vector<boost::any>) == m["messages"].type()) {
        vector<RunLegalAdviceConsultationRequestThreadMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunLegalAdviceConsultationRequestThreadMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<RunLegalAdviceConsultationRequestThreadMessages>>(expect1);
      }
    }
  }


  virtual ~RunLegalAdviceConsultationRequestThread() = default;
};
class RunLegalAdviceConsultationRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RunLegalAdviceConsultationRequestAssistant> assistant{};
  shared_ptr<bool> stream{};
  shared_ptr<RunLegalAdviceConsultationRequestThread> thread{};

  RunLegalAdviceConsultationRequest() {}

  explicit RunLegalAdviceConsultationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (assistant) {
      res["assistant"] = assistant ? boost::any(assistant->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (thread) {
      res["thread"] = thread ? boost::any(thread->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      if (typeid(map<string, boost::any>) == m["assistant"].type()) {
        RunLegalAdviceConsultationRequestAssistant model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["assistant"]));
        assistant = make_shared<RunLegalAdviceConsultationRequestAssistant>(model1);
      }
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("thread") != m.end() && !m["thread"].empty()) {
      if (typeid(map<string, boost::any>) == m["thread"].type()) {
        RunLegalAdviceConsultationRequestThread model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["thread"]));
        thread = make_shared<RunLegalAdviceConsultationRequestThread>(model1);
      }
    }
  }


  virtual ~RunLegalAdviceConsultationRequest() = default;
};
class RunLegalAdviceConsultationShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> assistantShrink{};
  shared_ptr<bool> stream{};
  shared_ptr<string> threadShrink{};

  RunLegalAdviceConsultationShrinkRequest() {}

  explicit RunLegalAdviceConsultationShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (assistantShrink) {
      res["assistant"] = boost::any(*assistantShrink);
    }
    if (stream) {
      res["stream"] = boost::any(*stream);
    }
    if (threadShrink) {
      res["thread"] = boost::any(*threadShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistantShrink = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("stream") != m.end() && !m["stream"].empty()) {
      stream = make_shared<bool>(boost::any_cast<bool>(m["stream"]));
    }
    if (m.find("thread") != m.end() && !m["thread"].empty()) {
      threadShrink = make_shared<string>(boost::any_cast<string>(m["thread"]));
    }
  }


  virtual ~RunLegalAdviceConsultationShrinkRequest() = default;
};
class RunLegalAdviceConsultationResponseBodyUsage : public Darabonba::Model {
public:
  shared_ptr<long> inputTokens{};
  shared_ptr<long> outputTokens{};
  shared_ptr<long> totalTokens{};

  RunLegalAdviceConsultationResponseBodyUsage() {}

  explicit RunLegalAdviceConsultationResponseBodyUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inputTokens) {
      res["InputTokens"] = boost::any(*inputTokens);
    }
    if (outputTokens) {
      res["OutputTokens"] = boost::any(*outputTokens);
    }
    if (totalTokens) {
      res["TotalTokens"] = boost::any(*totalTokens);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InputTokens") != m.end() && !m["InputTokens"].empty()) {
      inputTokens = make_shared<long>(boost::any_cast<long>(m["InputTokens"]));
    }
    if (m.find("OutputTokens") != m.end() && !m["OutputTokens"].empty()) {
      outputTokens = make_shared<long>(boost::any_cast<long>(m["OutputTokens"]));
    }
    if (m.find("TotalTokens") != m.end() && !m["TotalTokens"].empty()) {
      totalTokens = make_shared<long>(boost::any_cast<long>(m["TotalTokens"]));
    }
  }


  virtual ~RunLegalAdviceConsultationResponseBodyUsage() = default;
};
class RunLegalAdviceConsultationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> responseMarkdown{};
  shared_ptr<long> round{};
  shared_ptr<string> status{};
  shared_ptr<bool> success{};
  shared_ptr<RunLegalAdviceConsultationResponseBodyUsage> usage{};
  shared_ptr<string> httpStatusCode{};

  RunLegalAdviceConsultationResponseBody() {}

  explicit RunLegalAdviceConsultationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (responseMarkdown) {
      res["ResponseMarkdown"] = boost::any(*responseMarkdown);
    }
    if (round) {
      res["Round"] = boost::any(*round);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (usage) {
      res["Usage"] = usage ? boost::any(usage->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
    if (m.find("ResponseMarkdown") != m.end() && !m["ResponseMarkdown"].empty()) {
      responseMarkdown = make_shared<string>(boost::any_cast<string>(m["ResponseMarkdown"]));
    }
    if (m.find("Round") != m.end() && !m["Round"].empty()) {
      round = make_shared<long>(boost::any_cast<long>(m["Round"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      if (typeid(map<string, boost::any>) == m["Usage"].type()) {
        RunLegalAdviceConsultationResponseBodyUsage model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Usage"]));
        usage = make_shared<RunLegalAdviceConsultationResponseBodyUsage>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
  }


  virtual ~RunLegalAdviceConsultationResponseBody() = default;
};
class RunLegalAdviceConsultationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunLegalAdviceConsultationResponseBody> body{};

  RunLegalAdviceConsultationResponse() {}

  explicit RunLegalAdviceConsultationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunLegalAdviceConsultationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunLegalAdviceConsultationResponseBody>(model1);
      }
    }
  }


  virtual ~RunLegalAdviceConsultationResponse() = default;
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
  CreateTextFileResponse createTextFileWithOptions(shared_ptr<string> WorkspaceId,
                                                   shared_ptr<CreateTextFileRequest> request,
                                                   shared_ptr<map<string, string>> headers,
                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTextFileResponse createTextFile(shared_ptr<string> WorkspaceId, shared_ptr<CreateTextFileRequest> request);
  CreateTextFileResponse createTextFileAdvance(shared_ptr<string> WorkspaceId,
                                               shared_ptr<CreateTextFileAdvanceRequest> request,
                                               shared_ptr<map<string, string>> headers,
                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunContractResultGenerationResponse runContractResultGenerationWithOptions(shared_ptr<string> workspaceId,
                                                                             shared_ptr<RunContractResultGenerationRequest> tmpReq,
                                                                             shared_ptr<map<string, string>> headers,
                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunContractResultGenerationResponse runContractResultGeneration(shared_ptr<string> workspaceId, shared_ptr<RunContractResultGenerationRequest> request);
  RunContractRuleGenerationResponse runContractRuleGenerationWithOptions(shared_ptr<string> workspaceId,
                                                                         shared_ptr<RunContractRuleGenerationRequest> tmpReq,
                                                                         shared_ptr<map<string, string>> headers,
                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunContractRuleGenerationResponse runContractRuleGeneration(shared_ptr<string> workspaceId, shared_ptr<RunContractRuleGenerationRequest> request);
  RunLegalAdviceConsultationResponse runLegalAdviceConsultationWithOptions(shared_ptr<string> workspaceId,
                                                                           shared_ptr<RunLegalAdviceConsultationRequest> tmpReq,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunLegalAdviceConsultationResponse runLegalAdviceConsultation(shared_ptr<string> workspaceId, shared_ptr<RunLegalAdviceConsultationRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_FaRui20240628

#endif
