// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_FARUI20240628_H_
#define ALIBABACLOUD_FARUI20240628_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
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
class RunLegalAdviceConsultationRequestExtra : public Darabonba::Model {
public:
  shared_ptr<bool> deepThink{};
  shared_ptr<bool> onlineSearch{};

  RunLegalAdviceConsultationRequestExtra() {}

  explicit RunLegalAdviceConsultationRequestExtra(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deepThink) {
      res["deepThink"] = boost::any(*deepThink);
    }
    if (onlineSearch) {
      res["onlineSearch"] = boost::any(*onlineSearch);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deepThink") != m.end() && !m["deepThink"].empty()) {
      deepThink = make_shared<bool>(boost::any_cast<bool>(m["deepThink"]));
    }
    if (m.find("onlineSearch") != m.end() && !m["onlineSearch"].empty()) {
      onlineSearch = make_shared<bool>(boost::any_cast<bool>(m["onlineSearch"]));
    }
  }


  virtual ~RunLegalAdviceConsultationRequestExtra() = default;
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
  shared_ptr<RunLegalAdviceConsultationRequestExtra> extra{};
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
    if (extra) {
      res["extra"] = extra ? boost::any(extra->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      if (typeid(map<string, boost::any>) == m["extra"].type()) {
        RunLegalAdviceConsultationRequestExtra model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["extra"]));
        extra = make_shared<RunLegalAdviceConsultationRequestExtra>(model1);
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
  shared_ptr<string> extraShrink{};
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
    if (extraShrink) {
      res["extra"] = boost::any(*extraShrink);
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
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      extraShrink = make_shared<string>(boost::any_cast<string>(m["extra"]));
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
  shared_ptr<string> contents{};
  shared_ptr<string> extra{};
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
    if (contents) {
      res["contents"] = boost::any(*contents);
    }
    if (extra) {
      res["extra"] = boost::any(*extra);
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
    if (m.find("contents") != m.end() && !m["contents"].empty()) {
      contents = make_shared<string>(boost::any_cast<string>(m["contents"]));
    }
    if (m.find("extra") != m.end() && !m["extra"].empty()) {
      extra = make_shared<string>(boost::any_cast<string>(m["extra"]));
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
class RunSearchCaseFullTextRequestFilterCondition : public Darabonba::Model {
public:
  shared_ptr<string> caseNo{};
  shared_ptr<string> caseTitle{};

  RunSearchCaseFullTextRequestFilterCondition() {}

  explicit RunSearchCaseFullTextRequestFilterCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseNo) {
      res["caseNo"] = boost::any(*caseNo);
    }
    if (caseTitle) {
      res["caseTitle"] = boost::any(*caseTitle);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseNo") != m.end() && !m["caseNo"].empty()) {
      caseNo = make_shared<string>(boost::any_cast<string>(m["caseNo"]));
    }
    if (m.find("caseTitle") != m.end() && !m["caseTitle"].empty()) {
      caseTitle = make_shared<string>(boost::any_cast<string>(m["caseTitle"]));
    }
  }


  virtual ~RunSearchCaseFullTextRequestFilterCondition() = default;
};
class RunSearchCaseFullTextRequestPageParam : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  RunSearchCaseFullTextRequestPageParam() {}

  explicit RunSearchCaseFullTextRequestPageParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~RunSearchCaseFullTextRequestPageParam() = default;
};
class RunSearchCaseFullTextRequestThreadMessages : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  RunSearchCaseFullTextRequestThreadMessages() {}

  explicit RunSearchCaseFullTextRequestThreadMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RunSearchCaseFullTextRequestThreadMessages() = default;
};
class RunSearchCaseFullTextRequestThread : public Darabonba::Model {
public:
  shared_ptr<vector<RunSearchCaseFullTextRequestThreadMessages>> messages{};

  RunSearchCaseFullTextRequestThread() {}

  explicit RunSearchCaseFullTextRequestThread(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RunSearchCaseFullTextRequestThreadMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunSearchCaseFullTextRequestThreadMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<RunSearchCaseFullTextRequestThreadMessages>>(expect1);
      }
    }
  }


  virtual ~RunSearchCaseFullTextRequestThread() = default;
};
class RunSearchCaseFullTextRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RunSearchCaseFullTextRequestFilterCondition> filterCondition{};
  shared_ptr<RunSearchCaseFullTextRequestPageParam> pageParam{};
  shared_ptr<string> query{};
  shared_ptr<vector<string>> queryKeywords{};
  shared_ptr<string> referLevel{};
  shared_ptr<map<string, string>> sortKeyAndDirection{};
  shared_ptr<RunSearchCaseFullTextRequestThread> thread{};

  RunSearchCaseFullTextRequest() {}

  explicit RunSearchCaseFullTextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (filterCondition) {
      res["filterCondition"] = filterCondition ? boost::any(filterCondition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageParam) {
      res["pageParam"] = pageParam ? boost::any(pageParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (queryKeywords) {
      res["queryKeywords"] = boost::any(*queryKeywords);
    }
    if (referLevel) {
      res["referLevel"] = boost::any(*referLevel);
    }
    if (sortKeyAndDirection) {
      res["sortKeyAndDirection"] = boost::any(*sortKeyAndDirection);
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
    if (m.find("filterCondition") != m.end() && !m["filterCondition"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterCondition"].type()) {
        RunSearchCaseFullTextRequestFilterCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterCondition"]));
        filterCondition = make_shared<RunSearchCaseFullTextRequestFilterCondition>(model1);
      }
    }
    if (m.find("pageParam") != m.end() && !m["pageParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["pageParam"].type()) {
        RunSearchCaseFullTextRequestPageParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pageParam"]));
        pageParam = make_shared<RunSearchCaseFullTextRequestPageParam>(model1);
      }
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("queryKeywords") != m.end() && !m["queryKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["queryKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["queryKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queryKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("referLevel") != m.end() && !m["referLevel"].empty()) {
      referLevel = make_shared<string>(boost::any_cast<string>(m["referLevel"]));
    }
    if (m.find("sortKeyAndDirection") != m.end() && !m["sortKeyAndDirection"].empty()) {
      map<string, string> map1 = boost::any_cast<map<string, string>>(m["sortKeyAndDirection"]);
      map<string, string> toMap1;
      for (auto item:map1) {
         toMap1[item.first] = item.second;
      }
      sortKeyAndDirection = make_shared<map<string, string>>(toMap1);
    }
    if (m.find("thread") != m.end() && !m["thread"].empty()) {
      if (typeid(map<string, boost::any>) == m["thread"].type()) {
        RunSearchCaseFullTextRequestThread model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["thread"]));
        thread = make_shared<RunSearchCaseFullTextRequestThread>(model1);
      }
    }
  }


  virtual ~RunSearchCaseFullTextRequest() = default;
};
class RunSearchCaseFullTextShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> filterConditionShrink{};
  shared_ptr<string> pageParamShrink{};
  shared_ptr<string> query{};
  shared_ptr<string> queryKeywordsShrink{};
  shared_ptr<string> referLevel{};
  shared_ptr<string> sortKeyAndDirectionShrink{};
  shared_ptr<string> threadShrink{};

  RunSearchCaseFullTextShrinkRequest() {}

  explicit RunSearchCaseFullTextShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (filterConditionShrink) {
      res["filterCondition"] = boost::any(*filterConditionShrink);
    }
    if (pageParamShrink) {
      res["pageParam"] = boost::any(*pageParamShrink);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (queryKeywordsShrink) {
      res["queryKeywords"] = boost::any(*queryKeywordsShrink);
    }
    if (referLevel) {
      res["referLevel"] = boost::any(*referLevel);
    }
    if (sortKeyAndDirectionShrink) {
      res["sortKeyAndDirection"] = boost::any(*sortKeyAndDirectionShrink);
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
    if (m.find("filterCondition") != m.end() && !m["filterCondition"].empty()) {
      filterConditionShrink = make_shared<string>(boost::any_cast<string>(m["filterCondition"]));
    }
    if (m.find("pageParam") != m.end() && !m["pageParam"].empty()) {
      pageParamShrink = make_shared<string>(boost::any_cast<string>(m["pageParam"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("queryKeywords") != m.end() && !m["queryKeywords"].empty()) {
      queryKeywordsShrink = make_shared<string>(boost::any_cast<string>(m["queryKeywords"]));
    }
    if (m.find("referLevel") != m.end() && !m["referLevel"].empty()) {
      referLevel = make_shared<string>(boost::any_cast<string>(m["referLevel"]));
    }
    if (m.find("sortKeyAndDirection") != m.end() && !m["sortKeyAndDirection"].empty()) {
      sortKeyAndDirectionShrink = make_shared<string>(boost::any_cast<string>(m["sortKeyAndDirection"]));
    }
    if (m.find("thread") != m.end() && !m["thread"].empty()) {
      threadShrink = make_shared<string>(boost::any_cast<string>(m["thread"]));
    }
  }


  virtual ~RunSearchCaseFullTextShrinkRequest() = default;
};
class RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt : public Darabonba::Model {
public:
  shared_ptr<string> city{};
  shared_ptr<string> commonLevel{};
  shared_ptr<string> country{};
  shared_ptr<string> county{};
  shared_ptr<string> district{};
  shared_ptr<string> name{};
  shared_ptr<string> province{};
  shared_ptr<string> specialLevel{};

  RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt() {}

  explicit RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (city) {
      res["city"] = boost::any(*city);
    }
    if (commonLevel) {
      res["commonLevel"] = boost::any(*commonLevel);
    }
    if (country) {
      res["country"] = boost::any(*country);
    }
    if (county) {
      res["county"] = boost::any(*county);
    }
    if (district) {
      res["district"] = boost::any(*district);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (province) {
      res["province"] = boost::any(*province);
    }
    if (specialLevel) {
      res["specialLevel"] = boost::any(*specialLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("city") != m.end() && !m["city"].empty()) {
      city = make_shared<string>(boost::any_cast<string>(m["city"]));
    }
    if (m.find("commonLevel") != m.end() && !m["commonLevel"].empty()) {
      commonLevel = make_shared<string>(boost::any_cast<string>(m["commonLevel"]));
    }
    if (m.find("country") != m.end() && !m["country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["country"]));
    }
    if (m.find("county") != m.end() && !m["county"].empty()) {
      county = make_shared<string>(boost::any_cast<string>(m["county"]));
    }
    if (m.find("district") != m.end() && !m["district"].empty()) {
      district = make_shared<string>(boost::any_cast<string>(m["district"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("province") != m.end() && !m["province"].empty()) {
      province = make_shared<string>(boost::any_cast<string>(m["province"]));
    }
    if (m.find("specialLevel") != m.end() && !m["specialLevel"].empty()) {
      specialLevel = make_shared<string>(boost::any_cast<string>(m["specialLevel"]));
    }
  }


  virtual ~RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt() = default;
};
class RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain : public Darabonba::Model {
public:
  shared_ptr<string> abstractObj{};
  shared_ptr<string> appliedLaws{};
  shared_ptr<string> basicCase{};
  shared_ptr<string> caseBasic{};
  shared_ptr<string> caseCause{};
  shared_ptr<string> caseFeature{};
  shared_ptr<string> caseId{};
  shared_ptr<string> caseNo{};
  shared_ptr<string> caseSummary{};
  shared_ptr<string> caseTitle{};
  shared_ptr<string> caseType{};
  shared_ptr<string> closeCaseCause{};
  shared_ptr<string> courtFindOut{};
  shared_ptr<string> courtThink{};
  shared_ptr<string> dataFrom{};
  shared_ptr<string> disputeFocus{};
  shared_ptr<vector<string>> disputeFocusTag{};
  shared_ptr<string> disputedpoints{};
  shared_ptr<string> documentType{};
  shared_ptr<string> judgReason{};
  shared_ptr<string> keyfacts{};
  shared_ptr<string> legalBasis{};
  shared_ptr<string> litigants{};
  shared_ptr<string> litigationParticipant{};
  shared_ptr<string> openCaseCause{};
  shared_ptr<string> preTrialProcess{};
  shared_ptr<string> referLevel{};
  shared_ptr<string> refereeGist{};
  shared_ptr<string> sourceContent{};
  shared_ptr<RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt> trialCourt{};
  shared_ptr<string> trialDate{};
  shared_ptr<string> trialLevel{};
  shared_ptr<string> trialProcess{};
  shared_ptr<string> trialProgram{};
  shared_ptr<string> verdict{};

  RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain() {}

  explicit RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abstractObj) {
      res["abstractObj"] = boost::any(*abstractObj);
    }
    if (appliedLaws) {
      res["appliedLaws"] = boost::any(*appliedLaws);
    }
    if (basicCase) {
      res["basicCase"] = boost::any(*basicCase);
    }
    if (caseBasic) {
      res["caseBasic"] = boost::any(*caseBasic);
    }
    if (caseCause) {
      res["caseCause"] = boost::any(*caseCause);
    }
    if (caseFeature) {
      res["caseFeature"] = boost::any(*caseFeature);
    }
    if (caseId) {
      res["caseId"] = boost::any(*caseId);
    }
    if (caseNo) {
      res["caseNo"] = boost::any(*caseNo);
    }
    if (caseSummary) {
      res["caseSummary"] = boost::any(*caseSummary);
    }
    if (caseTitle) {
      res["caseTitle"] = boost::any(*caseTitle);
    }
    if (caseType) {
      res["caseType"] = boost::any(*caseType);
    }
    if (closeCaseCause) {
      res["closeCaseCause"] = boost::any(*closeCaseCause);
    }
    if (courtFindOut) {
      res["courtFindOut"] = boost::any(*courtFindOut);
    }
    if (courtThink) {
      res["courtThink"] = boost::any(*courtThink);
    }
    if (dataFrom) {
      res["dataFrom"] = boost::any(*dataFrom);
    }
    if (disputeFocus) {
      res["disputeFocus"] = boost::any(*disputeFocus);
    }
    if (disputeFocusTag) {
      res["disputeFocusTag"] = boost::any(*disputeFocusTag);
    }
    if (disputedpoints) {
      res["disputedpoints"] = boost::any(*disputedpoints);
    }
    if (documentType) {
      res["documentType"] = boost::any(*documentType);
    }
    if (judgReason) {
      res["judgReason"] = boost::any(*judgReason);
    }
    if (keyfacts) {
      res["keyfacts"] = boost::any(*keyfacts);
    }
    if (legalBasis) {
      res["legalBasis"] = boost::any(*legalBasis);
    }
    if (litigants) {
      res["litigants"] = boost::any(*litigants);
    }
    if (litigationParticipant) {
      res["litigationParticipant"] = boost::any(*litigationParticipant);
    }
    if (openCaseCause) {
      res["openCaseCause"] = boost::any(*openCaseCause);
    }
    if (preTrialProcess) {
      res["preTrialProcess"] = boost::any(*preTrialProcess);
    }
    if (referLevel) {
      res["referLevel"] = boost::any(*referLevel);
    }
    if (refereeGist) {
      res["refereeGist"] = boost::any(*refereeGist);
    }
    if (sourceContent) {
      res["sourceContent"] = boost::any(*sourceContent);
    }
    if (trialCourt) {
      res["trialCourt"] = trialCourt ? boost::any(trialCourt->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (trialDate) {
      res["trialDate"] = boost::any(*trialDate);
    }
    if (trialLevel) {
      res["trialLevel"] = boost::any(*trialLevel);
    }
    if (trialProcess) {
      res["trialProcess"] = boost::any(*trialProcess);
    }
    if (trialProgram) {
      res["trialProgram"] = boost::any(*trialProgram);
    }
    if (verdict) {
      res["verdict"] = boost::any(*verdict);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("abstractObj") != m.end() && !m["abstractObj"].empty()) {
      abstractObj = make_shared<string>(boost::any_cast<string>(m["abstractObj"]));
    }
    if (m.find("appliedLaws") != m.end() && !m["appliedLaws"].empty()) {
      appliedLaws = make_shared<string>(boost::any_cast<string>(m["appliedLaws"]));
    }
    if (m.find("basicCase") != m.end() && !m["basicCase"].empty()) {
      basicCase = make_shared<string>(boost::any_cast<string>(m["basicCase"]));
    }
    if (m.find("caseBasic") != m.end() && !m["caseBasic"].empty()) {
      caseBasic = make_shared<string>(boost::any_cast<string>(m["caseBasic"]));
    }
    if (m.find("caseCause") != m.end() && !m["caseCause"].empty()) {
      caseCause = make_shared<string>(boost::any_cast<string>(m["caseCause"]));
    }
    if (m.find("caseFeature") != m.end() && !m["caseFeature"].empty()) {
      caseFeature = make_shared<string>(boost::any_cast<string>(m["caseFeature"]));
    }
    if (m.find("caseId") != m.end() && !m["caseId"].empty()) {
      caseId = make_shared<string>(boost::any_cast<string>(m["caseId"]));
    }
    if (m.find("caseNo") != m.end() && !m["caseNo"].empty()) {
      caseNo = make_shared<string>(boost::any_cast<string>(m["caseNo"]));
    }
    if (m.find("caseSummary") != m.end() && !m["caseSummary"].empty()) {
      caseSummary = make_shared<string>(boost::any_cast<string>(m["caseSummary"]));
    }
    if (m.find("caseTitle") != m.end() && !m["caseTitle"].empty()) {
      caseTitle = make_shared<string>(boost::any_cast<string>(m["caseTitle"]));
    }
    if (m.find("caseType") != m.end() && !m["caseType"].empty()) {
      caseType = make_shared<string>(boost::any_cast<string>(m["caseType"]));
    }
    if (m.find("closeCaseCause") != m.end() && !m["closeCaseCause"].empty()) {
      closeCaseCause = make_shared<string>(boost::any_cast<string>(m["closeCaseCause"]));
    }
    if (m.find("courtFindOut") != m.end() && !m["courtFindOut"].empty()) {
      courtFindOut = make_shared<string>(boost::any_cast<string>(m["courtFindOut"]));
    }
    if (m.find("courtThink") != m.end() && !m["courtThink"].empty()) {
      courtThink = make_shared<string>(boost::any_cast<string>(m["courtThink"]));
    }
    if (m.find("dataFrom") != m.end() && !m["dataFrom"].empty()) {
      dataFrom = make_shared<string>(boost::any_cast<string>(m["dataFrom"]));
    }
    if (m.find("disputeFocus") != m.end() && !m["disputeFocus"].empty()) {
      disputeFocus = make_shared<string>(boost::any_cast<string>(m["disputeFocus"]));
    }
    if (m.find("disputeFocusTag") != m.end() && !m["disputeFocusTag"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["disputeFocusTag"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["disputeFocusTag"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      disputeFocusTag = make_shared<vector<string>>(toVec1);
    }
    if (m.find("disputedpoints") != m.end() && !m["disputedpoints"].empty()) {
      disputedpoints = make_shared<string>(boost::any_cast<string>(m["disputedpoints"]));
    }
    if (m.find("documentType") != m.end() && !m["documentType"].empty()) {
      documentType = make_shared<string>(boost::any_cast<string>(m["documentType"]));
    }
    if (m.find("judgReason") != m.end() && !m["judgReason"].empty()) {
      judgReason = make_shared<string>(boost::any_cast<string>(m["judgReason"]));
    }
    if (m.find("keyfacts") != m.end() && !m["keyfacts"].empty()) {
      keyfacts = make_shared<string>(boost::any_cast<string>(m["keyfacts"]));
    }
    if (m.find("legalBasis") != m.end() && !m["legalBasis"].empty()) {
      legalBasis = make_shared<string>(boost::any_cast<string>(m["legalBasis"]));
    }
    if (m.find("litigants") != m.end() && !m["litigants"].empty()) {
      litigants = make_shared<string>(boost::any_cast<string>(m["litigants"]));
    }
    if (m.find("litigationParticipant") != m.end() && !m["litigationParticipant"].empty()) {
      litigationParticipant = make_shared<string>(boost::any_cast<string>(m["litigationParticipant"]));
    }
    if (m.find("openCaseCause") != m.end() && !m["openCaseCause"].empty()) {
      openCaseCause = make_shared<string>(boost::any_cast<string>(m["openCaseCause"]));
    }
    if (m.find("preTrialProcess") != m.end() && !m["preTrialProcess"].empty()) {
      preTrialProcess = make_shared<string>(boost::any_cast<string>(m["preTrialProcess"]));
    }
    if (m.find("referLevel") != m.end() && !m["referLevel"].empty()) {
      referLevel = make_shared<string>(boost::any_cast<string>(m["referLevel"]));
    }
    if (m.find("refereeGist") != m.end() && !m["refereeGist"].empty()) {
      refereeGist = make_shared<string>(boost::any_cast<string>(m["refereeGist"]));
    }
    if (m.find("sourceContent") != m.end() && !m["sourceContent"].empty()) {
      sourceContent = make_shared<string>(boost::any_cast<string>(m["sourceContent"]));
    }
    if (m.find("trialCourt") != m.end() && !m["trialCourt"].empty()) {
      if (typeid(map<string, boost::any>) == m["trialCourt"].type()) {
        RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["trialCourt"]));
        trialCourt = make_shared<RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomainTrialCourt>(model1);
      }
    }
    if (m.find("trialDate") != m.end() && !m["trialDate"].empty()) {
      trialDate = make_shared<string>(boost::any_cast<string>(m["trialDate"]));
    }
    if (m.find("trialLevel") != m.end() && !m["trialLevel"].empty()) {
      trialLevel = make_shared<string>(boost::any_cast<string>(m["trialLevel"]));
    }
    if (m.find("trialProcess") != m.end() && !m["trialProcess"].empty()) {
      trialProcess = make_shared<string>(boost::any_cast<string>(m["trialProcess"]));
    }
    if (m.find("trialProgram") != m.end() && !m["trialProgram"].empty()) {
      trialProgram = make_shared<string>(boost::any_cast<string>(m["trialProgram"]));
    }
    if (m.find("verdict") != m.end() && !m["verdict"].empty()) {
      verdict = make_shared<string>(boost::any_cast<string>(m["verdict"]));
    }
  }


  virtual ~RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain() = default;
};
class RunSearchCaseFullTextResponseBodyDataCaseResult : public Darabonba::Model {
public:
  shared_ptr<RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain> caseDomain{};
  shared_ptr<string> mode{};
  shared_ptr<string> similarity{};

  RunSearchCaseFullTextResponseBodyDataCaseResult() {}

  explicit RunSearchCaseFullTextResponseBodyDataCaseResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseDomain) {
      res["caseDomain"] = caseDomain ? boost::any(caseDomain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (mode) {
      res["mode"] = boost::any(*mode);
    }
    if (similarity) {
      res["similarity"] = boost::any(*similarity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseDomain") != m.end() && !m["caseDomain"].empty()) {
      if (typeid(map<string, boost::any>) == m["caseDomain"].type()) {
        RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["caseDomain"]));
        caseDomain = make_shared<RunSearchCaseFullTextResponseBodyDataCaseResultCaseDomain>(model1);
      }
    }
    if (m.find("mode") != m.end() && !m["mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["mode"]));
    }
    if (m.find("similarity") != m.end() && !m["similarity"].empty()) {
      similarity = make_shared<string>(boost::any_cast<string>(m["similarity"]));
    }
  }


  virtual ~RunSearchCaseFullTextResponseBodyDataCaseResult() = default;
};
class RunSearchCaseFullTextResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> caseLevel{};
  shared_ptr<vector<RunSearchCaseFullTextResponseBodyDataCaseResult>> caseResult{};
  shared_ptr<long> currentPage{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<vector<string>> queryKeywords{};
  shared_ptr<long> totalCount{};

  RunSearchCaseFullTextResponseBodyData() {}

  explicit RunSearchCaseFullTextResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (caseLevel) {
      res["caseLevel"] = boost::any(*caseLevel);
    }
    if (caseResult) {
      vector<boost::any> temp1;
      for(auto item1:*caseResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["caseResult"] = boost::any(temp1);
    }
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (queryKeywords) {
      res["queryKeywords"] = boost::any(*queryKeywords);
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("caseLevel") != m.end() && !m["caseLevel"].empty()) {
      caseLevel = make_shared<string>(boost::any_cast<string>(m["caseLevel"]));
    }
    if (m.find("caseResult") != m.end() && !m["caseResult"].empty()) {
      if (typeid(vector<boost::any>) == m["caseResult"].type()) {
        vector<RunSearchCaseFullTextResponseBodyDataCaseResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["caseResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunSearchCaseFullTextResponseBodyDataCaseResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        caseResult = make_shared<vector<RunSearchCaseFullTextResponseBodyDataCaseResult>>(expect1);
      }
    }
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("queryKeywords") != m.end() && !m["queryKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["queryKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["queryKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queryKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~RunSearchCaseFullTextResponseBodyData() = default;
};
class RunSearchCaseFullTextResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RunSearchCaseFullTextResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RunSearchCaseFullTextResponseBody() {}

  explicit RunSearchCaseFullTextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
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
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunSearchCaseFullTextResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunSearchCaseFullTextResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RunSearchCaseFullTextResponseBody() = default;
};
class RunSearchCaseFullTextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunSearchCaseFullTextResponseBody> body{};

  RunSearchCaseFullTextResponse() {}

  explicit RunSearchCaseFullTextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunSearchCaseFullTextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunSearchCaseFullTextResponseBody>(model1);
      }
    }
  }


  virtual ~RunSearchCaseFullTextResponse() = default;
};
class RunSearchLawQueryRequestFilterCondition : public Darabonba::Model {
public:
  shared_ptr<string> lawName{};

  RunSearchLawQueryRequestFilterCondition() {}

  explicit RunSearchLawQueryRequestFilterCondition(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lawName) {
      res["lawName"] = boost::any(*lawName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lawName") != m.end() && !m["lawName"].empty()) {
      lawName = make_shared<string>(boost::any_cast<string>(m["lawName"]));
    }
  }


  virtual ~RunSearchLawQueryRequestFilterCondition() = default;
};
class RunSearchLawQueryRequestPageParam : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};

  RunSearchLawQueryRequestPageParam() {}

  explicit RunSearchLawQueryRequestPageParam(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["pageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("pageNumber") != m.end() && !m["pageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["pageNumber"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~RunSearchLawQueryRequestPageParam() = default;
};
class RunSearchLawQueryRequestThreadMessages : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  RunSearchLawQueryRequestThreadMessages() {}

  explicit RunSearchLawQueryRequestThreadMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~RunSearchLawQueryRequestThreadMessages() = default;
};
class RunSearchLawQueryRequestThread : public Darabonba::Model {
public:
  shared_ptr<vector<RunSearchLawQueryRequestThreadMessages>> messages{};

  RunSearchLawQueryRequestThread() {}

  explicit RunSearchLawQueryRequestThread(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<RunSearchLawQueryRequestThreadMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunSearchLawQueryRequestThreadMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<RunSearchLawQueryRequestThreadMessages>>(expect1);
      }
    }
  }


  virtual ~RunSearchLawQueryRequestThread() = default;
};
class RunSearchLawQueryRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<RunSearchLawQueryRequestFilterCondition> filterCondition{};
  shared_ptr<RunSearchLawQueryRequestPageParam> pageParam{};
  shared_ptr<string> query{};
  shared_ptr<vector<string>> queryKeywords{};
  shared_ptr<RunSearchLawQueryRequestThread> thread{};

  RunSearchLawQueryRequest() {}

  explicit RunSearchLawQueryRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (filterCondition) {
      res["filterCondition"] = filterCondition ? boost::any(filterCondition->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (pageParam) {
      res["pageParam"] = pageParam ? boost::any(pageParam->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (queryKeywords) {
      res["queryKeywords"] = boost::any(*queryKeywords);
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
    if (m.find("filterCondition") != m.end() && !m["filterCondition"].empty()) {
      if (typeid(map<string, boost::any>) == m["filterCondition"].type()) {
        RunSearchLawQueryRequestFilterCondition model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["filterCondition"]));
        filterCondition = make_shared<RunSearchLawQueryRequestFilterCondition>(model1);
      }
    }
    if (m.find("pageParam") != m.end() && !m["pageParam"].empty()) {
      if (typeid(map<string, boost::any>) == m["pageParam"].type()) {
        RunSearchLawQueryRequestPageParam model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["pageParam"]));
        pageParam = make_shared<RunSearchLawQueryRequestPageParam>(model1);
      }
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("queryKeywords") != m.end() && !m["queryKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["queryKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["queryKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queryKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("thread") != m.end() && !m["thread"].empty()) {
      if (typeid(map<string, boost::any>) == m["thread"].type()) {
        RunSearchLawQueryRequestThread model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["thread"]));
        thread = make_shared<RunSearchLawQueryRequestThread>(model1);
      }
    }
  }


  virtual ~RunSearchLawQueryRequest() = default;
};
class RunSearchLawQueryShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> filterConditionShrink{};
  shared_ptr<string> pageParamShrink{};
  shared_ptr<string> query{};
  shared_ptr<string> queryKeywordsShrink{};
  shared_ptr<string> threadShrink{};

  RunSearchLawQueryShrinkRequest() {}

  explicit RunSearchLawQueryShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (filterConditionShrink) {
      res["filterCondition"] = boost::any(*filterConditionShrink);
    }
    if (pageParamShrink) {
      res["pageParam"] = boost::any(*pageParamShrink);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (queryKeywordsShrink) {
      res["queryKeywords"] = boost::any(*queryKeywordsShrink);
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
    if (m.find("filterCondition") != m.end() && !m["filterCondition"].empty()) {
      filterConditionShrink = make_shared<string>(boost::any_cast<string>(m["filterCondition"]));
    }
    if (m.find("pageParam") != m.end() && !m["pageParam"].empty()) {
      pageParamShrink = make_shared<string>(boost::any_cast<string>(m["pageParam"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("queryKeywords") != m.end() && !m["queryKeywords"].empty()) {
      queryKeywordsShrink = make_shared<string>(boost::any_cast<string>(m["queryKeywords"]));
    }
    if (m.find("thread") != m.end() && !m["thread"].empty()) {
      threadShrink = make_shared<string>(boost::any_cast<string>(m["thread"]));
    }
  }


  virtual ~RunSearchLawQueryShrinkRequest() = default;
};
class RunSearchLawQueryResponseBodyDataLawResultLawDomain : public Darabonba::Model {
public:
  shared_ptr<string> abolitionBasis{};
  shared_ptr<string> implementYearMonthDate{};
  shared_ptr<string> invalidBasis{};
  shared_ptr<string> issuingNo{};
  shared_ptr<string> issuingOrgan{};
  shared_ptr<string> lawId{};
  shared_ptr<string> lawItemId{};
  shared_ptr<string> lawName{};
  shared_ptr<string> lawOrder{};
  shared_ptr<string> lawSourceContent{};
  shared_ptr<string> lawTitle{};
  shared_ptr<string> modifyBasis{};
  shared_ptr<string> potencyLevel{};
  shared_ptr<string> releaseYearMonthDate{};
  shared_ptr<string> thematicClassify{};
  shared_ptr<string> timeliness{};

  RunSearchLawQueryResponseBodyDataLawResultLawDomain() {}

  explicit RunSearchLawQueryResponseBodyDataLawResultLawDomain(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (abolitionBasis) {
      res["abolitionBasis"] = boost::any(*abolitionBasis);
    }
    if (implementYearMonthDate) {
      res["implementYearMonthDate"] = boost::any(*implementYearMonthDate);
    }
    if (invalidBasis) {
      res["invalidBasis"] = boost::any(*invalidBasis);
    }
    if (issuingNo) {
      res["issuingNo"] = boost::any(*issuingNo);
    }
    if (issuingOrgan) {
      res["issuingOrgan"] = boost::any(*issuingOrgan);
    }
    if (lawId) {
      res["lawId"] = boost::any(*lawId);
    }
    if (lawItemId) {
      res["lawItemId"] = boost::any(*lawItemId);
    }
    if (lawName) {
      res["lawName"] = boost::any(*lawName);
    }
    if (lawOrder) {
      res["lawOrder"] = boost::any(*lawOrder);
    }
    if (lawSourceContent) {
      res["lawSourceContent"] = boost::any(*lawSourceContent);
    }
    if (lawTitle) {
      res["lawTitle"] = boost::any(*lawTitle);
    }
    if (modifyBasis) {
      res["modifyBasis"] = boost::any(*modifyBasis);
    }
    if (potencyLevel) {
      res["potencyLevel"] = boost::any(*potencyLevel);
    }
    if (releaseYearMonthDate) {
      res["releaseYearMonthDate"] = boost::any(*releaseYearMonthDate);
    }
    if (thematicClassify) {
      res["thematicClassify"] = boost::any(*thematicClassify);
    }
    if (timeliness) {
      res["timeliness"] = boost::any(*timeliness);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("abolitionBasis") != m.end() && !m["abolitionBasis"].empty()) {
      abolitionBasis = make_shared<string>(boost::any_cast<string>(m["abolitionBasis"]));
    }
    if (m.find("implementYearMonthDate") != m.end() && !m["implementYearMonthDate"].empty()) {
      implementYearMonthDate = make_shared<string>(boost::any_cast<string>(m["implementYearMonthDate"]));
    }
    if (m.find("invalidBasis") != m.end() && !m["invalidBasis"].empty()) {
      invalidBasis = make_shared<string>(boost::any_cast<string>(m["invalidBasis"]));
    }
    if (m.find("issuingNo") != m.end() && !m["issuingNo"].empty()) {
      issuingNo = make_shared<string>(boost::any_cast<string>(m["issuingNo"]));
    }
    if (m.find("issuingOrgan") != m.end() && !m["issuingOrgan"].empty()) {
      issuingOrgan = make_shared<string>(boost::any_cast<string>(m["issuingOrgan"]));
    }
    if (m.find("lawId") != m.end() && !m["lawId"].empty()) {
      lawId = make_shared<string>(boost::any_cast<string>(m["lawId"]));
    }
    if (m.find("lawItemId") != m.end() && !m["lawItemId"].empty()) {
      lawItemId = make_shared<string>(boost::any_cast<string>(m["lawItemId"]));
    }
    if (m.find("lawName") != m.end() && !m["lawName"].empty()) {
      lawName = make_shared<string>(boost::any_cast<string>(m["lawName"]));
    }
    if (m.find("lawOrder") != m.end() && !m["lawOrder"].empty()) {
      lawOrder = make_shared<string>(boost::any_cast<string>(m["lawOrder"]));
    }
    if (m.find("lawSourceContent") != m.end() && !m["lawSourceContent"].empty()) {
      lawSourceContent = make_shared<string>(boost::any_cast<string>(m["lawSourceContent"]));
    }
    if (m.find("lawTitle") != m.end() && !m["lawTitle"].empty()) {
      lawTitle = make_shared<string>(boost::any_cast<string>(m["lawTitle"]));
    }
    if (m.find("modifyBasis") != m.end() && !m["modifyBasis"].empty()) {
      modifyBasis = make_shared<string>(boost::any_cast<string>(m["modifyBasis"]));
    }
    if (m.find("potencyLevel") != m.end() && !m["potencyLevel"].empty()) {
      potencyLevel = make_shared<string>(boost::any_cast<string>(m["potencyLevel"]));
    }
    if (m.find("releaseYearMonthDate") != m.end() && !m["releaseYearMonthDate"].empty()) {
      releaseYearMonthDate = make_shared<string>(boost::any_cast<string>(m["releaseYearMonthDate"]));
    }
    if (m.find("thematicClassify") != m.end() && !m["thematicClassify"].empty()) {
      thematicClassify = make_shared<string>(boost::any_cast<string>(m["thematicClassify"]));
    }
    if (m.find("timeliness") != m.end() && !m["timeliness"].empty()) {
      timeliness = make_shared<string>(boost::any_cast<string>(m["timeliness"]));
    }
  }


  virtual ~RunSearchLawQueryResponseBodyDataLawResultLawDomain() = default;
};
class RunSearchLawQueryResponseBodyDataLawResult : public Darabonba::Model {
public:
  shared_ptr<RunSearchLawQueryResponseBodyDataLawResultLawDomain> lawDomain{};
  shared_ptr<string> similarity{};

  RunSearchLawQueryResponseBodyDataLawResult() {}

  explicit RunSearchLawQueryResponseBodyDataLawResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (lawDomain) {
      res["lawDomain"] = lawDomain ? boost::any(lawDomain->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (similarity) {
      res["similarity"] = boost::any(*similarity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("lawDomain") != m.end() && !m["lawDomain"].empty()) {
      if (typeid(map<string, boost::any>) == m["lawDomain"].type()) {
        RunSearchLawQueryResponseBodyDataLawResultLawDomain model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["lawDomain"]));
        lawDomain = make_shared<RunSearchLawQueryResponseBodyDataLawResultLawDomain>(model1);
      }
    }
    if (m.find("similarity") != m.end() && !m["similarity"].empty()) {
      similarity = make_shared<string>(boost::any_cast<string>(m["similarity"]));
    }
  }


  virtual ~RunSearchLawQueryResponseBodyDataLawResult() = default;
};
class RunSearchLawQueryResponseBodyDataSortKeyAndDirection : public Darabonba::Model {
public:
  shared_ptr<string> releaseYearMonthDate{};
  shared_ptr<string> similarity{};

  RunSearchLawQueryResponseBodyDataSortKeyAndDirection() {}

  explicit RunSearchLawQueryResponseBodyDataSortKeyAndDirection(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (releaseYearMonthDate) {
      res["releaseYearMonthDate"] = boost::any(*releaseYearMonthDate);
    }
    if (similarity) {
      res["similarity"] = boost::any(*similarity);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("releaseYearMonthDate") != m.end() && !m["releaseYearMonthDate"].empty()) {
      releaseYearMonthDate = make_shared<string>(boost::any_cast<string>(m["releaseYearMonthDate"]));
    }
    if (m.find("similarity") != m.end() && !m["similarity"].empty()) {
      similarity = make_shared<string>(boost::any_cast<string>(m["similarity"]));
    }
  }


  virtual ~RunSearchLawQueryResponseBodyDataSortKeyAndDirection() = default;
};
class RunSearchLawQueryResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<vector<RunSearchLawQueryResponseBodyDataLawResult>> lawResult{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> query{};
  shared_ptr<vector<string>> queryKeywords{};
  shared_ptr<RunSearchLawQueryResponseBodyDataSortKeyAndDirection> sortKeyAndDirection{};
  shared_ptr<long> totalCount{};

  RunSearchLawQueryResponseBodyData() {}

  explicit RunSearchLawQueryResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (lawResult) {
      vector<boost::any> temp1;
      for(auto item1:*lawResult){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["lawResult"] = boost::any(temp1);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (query) {
      res["query"] = boost::any(*query);
    }
    if (queryKeywords) {
      res["queryKeywords"] = boost::any(*queryKeywords);
    }
    if (sortKeyAndDirection) {
      res["sortKeyAndDirection"] = sortKeyAndDirection ? boost::any(sortKeyAndDirection->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (totalCount) {
      res["totalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("currentPage") != m.end() && !m["currentPage"].empty()) {
      currentPage = make_shared<long>(boost::any_cast<long>(m["currentPage"]));
    }
    if (m.find("lawResult") != m.end() && !m["lawResult"].empty()) {
      if (typeid(vector<boost::any>) == m["lawResult"].type()) {
        vector<RunSearchLawQueryResponseBodyDataLawResult> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["lawResult"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            RunSearchLawQueryResponseBodyDataLawResult model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        lawResult = make_shared<vector<RunSearchLawQueryResponseBodyDataLawResult>>(expect1);
      }
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("query") != m.end() && !m["query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["query"]));
    }
    if (m.find("queryKeywords") != m.end() && !m["queryKeywords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["queryKeywords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["queryKeywords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      queryKeywords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sortKeyAndDirection") != m.end() && !m["sortKeyAndDirection"].empty()) {
      if (typeid(map<string, boost::any>) == m["sortKeyAndDirection"].type()) {
        RunSearchLawQueryResponseBodyDataSortKeyAndDirection model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["sortKeyAndDirection"]));
        sortKeyAndDirection = make_shared<RunSearchLawQueryResponseBodyDataSortKeyAndDirection>(model1);
      }
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~RunSearchLawQueryResponseBodyData() = default;
};
class RunSearchLawQueryResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<RunSearchLawQueryResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RunSearchLawQueryResponseBody() {}

  explicit RunSearchLawQueryResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["message"] = boost::any(*message);
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
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        RunSearchLawQueryResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<RunSearchLawQueryResponseBodyData>(model1);
      }
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~RunSearchLawQueryResponseBody() = default;
};
class RunSearchLawQueryResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunSearchLawQueryResponseBody> body{};

  RunSearchLawQueryResponse() {}

  explicit RunSearchLawQueryResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunSearchLawQueryResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunSearchLawQueryResponseBody>(model1);
      }
    }
  }


  virtual ~RunSearchLawQueryResponse() = default;
};
class Client : Alibabacloud_OpenApi::Client {
public:
  explicit Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config);
  map<string, boost::any> _postOSSObject(shared_ptr<string> bucketName, shared_ptr<map<string, boost::any>> data);
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
  RunSearchCaseFullTextResponse runSearchCaseFullTextWithOptions(shared_ptr<string> workspaceId,
                                                                 shared_ptr<RunSearchCaseFullTextRequest> tmpReq,
                                                                 shared_ptr<map<string, string>> headers,
                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunSearchCaseFullTextResponse runSearchCaseFullText(shared_ptr<string> workspaceId, shared_ptr<RunSearchCaseFullTextRequest> request);
  RunSearchLawQueryResponse runSearchLawQueryWithOptions(shared_ptr<string> workspaceId,
                                                         shared_ptr<RunSearchLawQueryRequest> tmpReq,
                                                         shared_ptr<map<string, string>> headers,
                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunSearchLawQueryResponse runSearchLawQuery(shared_ptr<string> workspaceId, shared_ptr<RunSearchLawQueryRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_FaRui20240628

#endif
