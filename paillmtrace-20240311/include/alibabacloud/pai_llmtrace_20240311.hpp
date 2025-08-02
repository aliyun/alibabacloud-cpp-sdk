// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_PAILLMTRACE20240311_H_
#define ALIBABACLOUD_PAILLMTRACE20240311_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_PaiLLMTrace20240311 {
class EvaluationConfigAnswer : public Darabonba::Model {
public:
  shared_ptr<string> jsonPathInSpan{};
  shared_ptr<string> jsonPathInSpanValue{};
  shared_ptr<string> spanName{};

  EvaluationConfigAnswer() {}

  explicit EvaluationConfigAnswer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonPathInSpan) {
      res["JsonPathInSpan"] = boost::any(*jsonPathInSpan);
    }
    if (jsonPathInSpanValue) {
      res["JsonPathInSpanValue"] = boost::any(*jsonPathInSpanValue);
    }
    if (spanName) {
      res["SpanName"] = boost::any(*spanName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonPathInSpan") != m.end() && !m["JsonPathInSpan"].empty()) {
      jsonPathInSpan = make_shared<string>(boost::any_cast<string>(m["JsonPathInSpan"]));
    }
    if (m.find("JsonPathInSpanValue") != m.end() && !m["JsonPathInSpanValue"].empty()) {
      jsonPathInSpanValue = make_shared<string>(boost::any_cast<string>(m["JsonPathInSpanValue"]));
    }
    if (m.find("SpanName") != m.end() && !m["SpanName"].empty()) {
      spanName = make_shared<string>(boost::any_cast<string>(m["SpanName"]));
    }
  }


  virtual ~EvaluationConfigAnswer() = default;
};
class EvaluationConfigContext : public Darabonba::Model {
public:
  shared_ptr<string> jsonPathInSpan{};
  shared_ptr<string> jsonPathInSpanValue{};
  shared_ptr<string> spanName{};

  EvaluationConfigContext() {}

  explicit EvaluationConfigContext(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonPathInSpan) {
      res["JsonPathInSpan"] = boost::any(*jsonPathInSpan);
    }
    if (jsonPathInSpanValue) {
      res["JsonPathInSpanValue"] = boost::any(*jsonPathInSpanValue);
    }
    if (spanName) {
      res["SpanName"] = boost::any(*spanName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonPathInSpan") != m.end() && !m["JsonPathInSpan"].empty()) {
      jsonPathInSpan = make_shared<string>(boost::any_cast<string>(m["JsonPathInSpan"]));
    }
    if (m.find("JsonPathInSpanValue") != m.end() && !m["JsonPathInSpanValue"].empty()) {
      jsonPathInSpanValue = make_shared<string>(boost::any_cast<string>(m["JsonPathInSpanValue"]));
    }
    if (m.find("SpanName") != m.end() && !m["SpanName"].empty()) {
      spanName = make_shared<string>(boost::any_cast<string>(m["SpanName"]));
    }
  }


  virtual ~EvaluationConfigContext() = default;
};
class EvaluationConfigQuery : public Darabonba::Model {
public:
  shared_ptr<string> jsonPathInSpan{};
  shared_ptr<string> jsonPathInSpanValue{};
  shared_ptr<string> spanName{};

  EvaluationConfigQuery() {}

  explicit EvaluationConfigQuery(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jsonPathInSpan) {
      res["JsonPathInSpan"] = boost::any(*jsonPathInSpan);
    }
    if (jsonPathInSpanValue) {
      res["JsonPathInSpanValue"] = boost::any(*jsonPathInSpanValue);
    }
    if (spanName) {
      res["SpanName"] = boost::any(*spanName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JsonPathInSpan") != m.end() && !m["JsonPathInSpan"].empty()) {
      jsonPathInSpan = make_shared<string>(boost::any_cast<string>(m["JsonPathInSpan"]));
    }
    if (m.find("JsonPathInSpanValue") != m.end() && !m["JsonPathInSpanValue"].empty()) {
      jsonPathInSpanValue = make_shared<string>(boost::any_cast<string>(m["JsonPathInSpanValue"]));
    }
    if (m.find("SpanName") != m.end() && !m["SpanName"].empty()) {
      spanName = make_shared<string>(boost::any_cast<string>(m["SpanName"]));
    }
  }


  virtual ~EvaluationConfigQuery() = default;
};
class EvaluationConfig : public Darabonba::Model {
public:
  shared_ptr<EvaluationConfigAnswer> answer{};
  shared_ptr<EvaluationConfigContext> context{};
  shared_ptr<EvaluationConfigQuery> query{};

  EvaluationConfig() {}

  explicit EvaluationConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = answer ? boost::any(answer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (context) {
      res["Context"] = context ? boost::any(context->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (query) {
      res["Query"] = query ? boost::any(query->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Answer"].type()) {
        EvaluationConfigAnswer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Answer"]));
        answer = make_shared<EvaluationConfigAnswer>(model1);
      }
    }
    if (m.find("Context") != m.end() && !m["Context"].empty()) {
      if (typeid(map<string, boost::any>) == m["Context"].type()) {
        EvaluationConfigContext model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Context"]));
        context = make_shared<EvaluationConfigContext>(model1);
      }
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      if (typeid(map<string, boost::any>) == m["Query"].type()) {
        EvaluationConfigQuery model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Query"]));
        query = make_shared<EvaluationConfigQuery>(model1);
      }
    }
  }


  virtual ~EvaluationConfig() = default;
};
class ModelConfig : public Darabonba::Model {
public:
  shared_ptr<string> apiKey{};
  shared_ptr<string> endpoint{};
  shared_ptr<bool> isSelfHost{};
  shared_ptr<string> name{};
  shared_ptr<double> temperature{};
  shared_ptr<double> topP{};
  shared_ptr<bool> useFunctionCall{};

  ModelConfig() {}

  explicit ModelConfig(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (apiKey) {
      res["ApiKey"] = boost::any(*apiKey);
    }
    if (endpoint) {
      res["Endpoint"] = boost::any(*endpoint);
    }
    if (isSelfHost) {
      res["IsSelfHost"] = boost::any(*isSelfHost);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (temperature) {
      res["Temperature"] = boost::any(*temperature);
    }
    if (topP) {
      res["TopP"] = boost::any(*topP);
    }
    if (useFunctionCall) {
      res["UseFunctionCall"] = boost::any(*useFunctionCall);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApiKey") != m.end() && !m["ApiKey"].empty()) {
      apiKey = make_shared<string>(boost::any_cast<string>(m["ApiKey"]));
    }
    if (m.find("Endpoint") != m.end() && !m["Endpoint"].empty()) {
      endpoint = make_shared<string>(boost::any_cast<string>(m["Endpoint"]));
    }
    if (m.find("IsSelfHost") != m.end() && !m["IsSelfHost"].empty()) {
      isSelfHost = make_shared<bool>(boost::any_cast<bool>(m["IsSelfHost"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Temperature") != m.end() && !m["Temperature"].empty()) {
      temperature = make_shared<double>(boost::any_cast<double>(m["Temperature"]));
    }
    if (m.find("TopP") != m.end() && !m["TopP"].empty()) {
      topP = make_shared<double>(boost::any_cast<double>(m["TopP"]));
    }
    if (m.find("UseFunctionCall") != m.end() && !m["UseFunctionCall"].empty()) {
      useFunctionCall = make_shared<bool>(boost::any_cast<bool>(m["UseFunctionCall"]));
    }
  }


  virtual ~ModelConfig() = default;
};
class QuestionAnswerAnswer : public Darabonba::Model {
public:
  shared_ptr<vector<string>> contexts{};
  shared_ptr<string> text{};

  QuestionAnswerAnswer() {}

  explicit QuestionAnswerAnswer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contexts) {
      res["Contexts"] = boost::any(*contexts);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contexts") != m.end() && !m["Contexts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Contexts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Contexts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contexts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~QuestionAnswerAnswer() = default;
};
class QuestionAnswerGroundTruth : public Darabonba::Model {
public:
  shared_ptr<vector<string>> contexts{};
  shared_ptr<string> text{};

  QuestionAnswerGroundTruth() {}

  explicit QuestionAnswerGroundTruth(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (contexts) {
      res["Contexts"] = boost::any(*contexts);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Contexts") != m.end() && !m["Contexts"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Contexts"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Contexts"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      contexts = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
  }


  virtual ~QuestionAnswerGroundTruth() = default;
};
class QuestionAnswer : public Darabonba::Model {
public:
  shared_ptr<QuestionAnswerAnswer> answer{};
  shared_ptr<QuestionAnswerGroundTruth> groundTruth{};
  shared_ptr<string> question{};

  QuestionAnswer() {}

  explicit QuestionAnswer(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["Answer"] = answer ? boost::any(answer->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (groundTruth) {
      res["GroundTruth"] = groundTruth ? boost::any(groundTruth->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (question) {
      res["Question"] = boost::any(*question);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Answer") != m.end() && !m["Answer"].empty()) {
      if (typeid(map<string, boost::any>) == m["Answer"].type()) {
        QuestionAnswerAnswer model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Answer"]));
        answer = make_shared<QuestionAnswerAnswer>(model1);
      }
    }
    if (m.find("GroundTruth") != m.end() && !m["GroundTruth"].empty()) {
      if (typeid(map<string, boost::any>) == m["GroundTruth"].type()) {
        QuestionAnswerGroundTruth model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["GroundTruth"]));
        groundTruth = make_shared<QuestionAnswerGroundTruth>(model1);
      }
    }
    if (m.find("Question") != m.end() && !m["Question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["Question"]));
    }
  }


  virtual ~QuestionAnswer() = default;
};
class CreateOnlineEvalTaskRequestBodyFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  CreateOnlineEvalTaskRequestBodyFilters() {}

  explicit CreateOnlineEvalTaskRequestBodyFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreateOnlineEvalTaskRequestBodyFilters() = default;
};
class CreateOnlineEvalTaskRequestBody : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<EvaluationConfig> evaluationConfig{};
  shared_ptr<vector<CreateOnlineEvalTaskRequestBodyFilters>> filters{};
  shared_ptr<ModelConfig> modelConfig{};
  shared_ptr<long> samplingFrequencyMinutes{};
  shared_ptr<long> samplingRatio{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskName{};

  CreateOnlineEvalTaskRequestBody() {}

  explicit CreateOnlineEvalTaskRequestBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (evaluationConfig) {
      res["EvaluationConfig"] = evaluationConfig ? boost::any(evaluationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (modelConfig) {
      res["ModelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (samplingFrequencyMinutes) {
      res["SamplingFrequencyMinutes"] = boost::any(*samplingFrequencyMinutes);
    }
    if (samplingRatio) {
      res["SamplingRatio"] = boost::any(*samplingRatio);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EvaluationConfig") != m.end() && !m["EvaluationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationConfig"].type()) {
        EvaluationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationConfig"]));
        evaluationConfig = make_shared<EvaluationConfig>(model1);
      }
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<CreateOnlineEvalTaskRequestBodyFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateOnlineEvalTaskRequestBodyFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<CreateOnlineEvalTaskRequestBodyFilters>>(expect1);
      }
    }
    if (m.find("ModelConfig") != m.end() && !m["ModelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModelConfig"].type()) {
        ModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModelConfig"]));
        modelConfig = make_shared<ModelConfig>(model1);
      }
    }
    if (m.find("SamplingFrequencyMinutes") != m.end() && !m["SamplingFrequencyMinutes"].empty()) {
      samplingFrequencyMinutes = make_shared<long>(boost::any_cast<long>(m["SamplingFrequencyMinutes"]));
    }
    if (m.find("SamplingRatio") != m.end() && !m["SamplingRatio"].empty()) {
      samplingRatio = make_shared<long>(boost::any_cast<long>(m["SamplingRatio"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~CreateOnlineEvalTaskRequestBody() = default;
};
class CreateOnlineEvalTaskRequest : public Darabonba::Model {
public:
  shared_ptr<CreateOnlineEvalTaskRequestBody> body{};

  CreateOnlineEvalTaskRequest() {}

  explicit CreateOnlineEvalTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (body) {
      res["body"] = body ? boost::any(body->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      if (typeid(map<string, boost::any>) == m["body"].type()) {
        CreateOnlineEvalTaskRequestBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOnlineEvalTaskRequestBody>(model1);
      }
    }
  }


  virtual ~CreateOnlineEvalTaskRequest() = default;
};
class CreateOnlineEvalTaskShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyShrink{};

  CreateOnlineEvalTaskShrinkRequest() {}

  explicit CreateOnlineEvalTaskShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyShrink) {
      res["body"] = boost::any(*bodyShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("body") != m.end() && !m["body"].empty()) {
      bodyShrink = make_shared<string>(boost::any_cast<string>(m["body"]));
    }
  }


  virtual ~CreateOnlineEvalTaskShrinkRequest() = default;
};
class CreateOnlineEvalTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};

  CreateOnlineEvalTaskResponseBody() {}

  explicit CreateOnlineEvalTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~CreateOnlineEvalTaskResponseBody() = default;
};
class CreateOnlineEvalTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateOnlineEvalTaskResponseBody> body{};

  CreateOnlineEvalTaskResponse() {}

  explicit CreateOnlineEvalTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateOnlineEvalTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateOnlineEvalTaskResponseBody>(model1);
      }
    }
  }


  virtual ~CreateOnlineEvalTaskResponse() = default;
};
class CreateServiceIdentityRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleDetails{};
  shared_ptr<string> roleName{};

  CreateServiceIdentityRoleResponseBody() {}

  explicit CreateServiceIdentityRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleDetails) {
      res["RoleDetails"] = boost::any(*roleDetails);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
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
    if (m.find("RoleDetails") != m.end() && !m["RoleDetails"].empty()) {
      roleDetails = make_shared<string>(boost::any_cast<string>(m["RoleDetails"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~CreateServiceIdentityRoleResponseBody() = default;
};
class CreateServiceIdentityRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceIdentityRoleResponseBody> body{};

  CreateServiceIdentityRoleResponse() {}

  explicit CreateServiceIdentityRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceIdentityRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceIdentityRoleResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceIdentityRoleResponse() = default;
};
class DeleteOnlineEvalTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  DeleteOnlineEvalTaskResponseBody() {}

  explicit DeleteOnlineEvalTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~DeleteOnlineEvalTaskResponseBody() = default;
};
class DeleteOnlineEvalTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteOnlineEvalTaskResponseBody> body{};

  DeleteOnlineEvalTaskResponse() {}

  explicit DeleteOnlineEvalTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteOnlineEvalTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteOnlineEvalTaskResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteOnlineEvalTaskResponse() = default;
};
class EvaluateTraceRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<EvaluationConfig> evaluationConfig{};
  shared_ptr<string> evaluationId{};
  shared_ptr<string> maxTime{};
  shared_ptr<string> minTime{};
  shared_ptr<ModelConfig> modelConfig{};

  EvaluateTraceRequest() {}

  explicit EvaluateTraceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (evaluationConfig) {
      res["EvaluationConfig"] = evaluationConfig ? boost::any(evaluationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (evaluationId) {
      res["EvaluationId"] = boost::any(*evaluationId);
    }
    if (maxTime) {
      res["MaxTime"] = boost::any(*maxTime);
    }
    if (minTime) {
      res["MinTime"] = boost::any(*minTime);
    }
    if (modelConfig) {
      res["ModelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("EvaluationConfig") != m.end() && !m["EvaluationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationConfig"].type()) {
        EvaluationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationConfig"]));
        evaluationConfig = make_shared<EvaluationConfig>(model1);
      }
    }
    if (m.find("EvaluationId") != m.end() && !m["EvaluationId"].empty()) {
      evaluationId = make_shared<string>(boost::any_cast<string>(m["EvaluationId"]));
    }
    if (m.find("MaxTime") != m.end() && !m["MaxTime"].empty()) {
      maxTime = make_shared<string>(boost::any_cast<string>(m["MaxTime"]));
    }
    if (m.find("MinTime") != m.end() && !m["MinTime"].empty()) {
      minTime = make_shared<string>(boost::any_cast<string>(m["MinTime"]));
    }
    if (m.find("ModelConfig") != m.end() && !m["ModelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModelConfig"].type()) {
        ModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModelConfig"]));
        modelConfig = make_shared<ModelConfig>(model1);
      }
    }
  }


  virtual ~EvaluateTraceRequest() = default;
};
class EvaluateTraceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> evaluationId{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  EvaluateTraceResponseBody() {}

  explicit EvaluateTraceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (evaluationId) {
      res["EvaluationId"] = boost::any(*evaluationId);
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
    if (m.find("EvaluationId") != m.end() && !m["EvaluationId"].empty()) {
      evaluationId = make_shared<string>(boost::any_cast<string>(m["EvaluationId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~EvaluateTraceResponseBody() = default;
};
class EvaluateTraceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<EvaluateTraceResponseBody> body{};

  EvaluateTraceResponse() {}

  explicit EvaluateTraceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        EvaluateTraceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<EvaluateTraceResponseBody>(model1);
      }
    }
  }


  virtual ~EvaluateTraceResponse() = default;
};
class GetEvaluationTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<boost::any>> evaluationTemplates{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetEvaluationTemplatesResponseBody() {}

  explicit GetEvaluationTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (evaluationTemplates) {
      res["EvaluationTemplates"] = boost::any(*evaluationTemplates);
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
    if (m.find("EvaluationTemplates") != m.end() && !m["EvaluationTemplates"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["EvaluationTemplates"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EvaluationTemplates"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      evaluationTemplates = make_shared<vector<boost::any>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetEvaluationTemplatesResponseBody() = default;
};
class GetEvaluationTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEvaluationTemplatesResponseBody> body{};

  GetEvaluationTemplatesResponse() {}

  explicit GetEvaluationTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEvaluationTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEvaluationTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~GetEvaluationTemplatesResponse() = default;
};
class GetOnlineEvalTaskResponseBodyTaskFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  GetOnlineEvalTaskResponseBodyTaskFilters() {}

  explicit GetOnlineEvalTaskResponseBodyTaskFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetOnlineEvalTaskResponseBodyTaskFilters() = default;
};
class GetOnlineEvalTaskResponseBodyTask : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> evalResults{};
  shared_ptr<EvaluationConfig> evaluationConfig{};
  shared_ptr<vector<GetOnlineEvalTaskResponseBodyTaskFilters>> filters{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtEndTime{};
  shared_ptr<string> gmtLastSamplingWindowEndTime{};
  shared_ptr<string> gmtLastSamplingWindowStartTime{};
  shared_ptr<string> gmtStartTime{};
  shared_ptr<string> id{};
  shared_ptr<ModelConfig> modelConfig{};
  shared_ptr<string> name{};
  shared_ptr<long> recordCount{};
  shared_ptr<long> samplingFrequencyMinutes{};
  shared_ptr<long> samplingRatio{};
  shared_ptr<string> status{};
  shared_ptr<string> userId{};

  GetOnlineEvalTaskResponseBodyTask() {}

  explicit GetOnlineEvalTaskResponseBodyTask(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (evalResults) {
      res["EvalResults"] = boost::any(*evalResults);
    }
    if (evaluationConfig) {
      res["EvaluationConfig"] = evaluationConfig ? boost::any(evaluationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtEndTime) {
      res["GmtEndTime"] = boost::any(*gmtEndTime);
    }
    if (gmtLastSamplingWindowEndTime) {
      res["GmtLastSamplingWindowEndTime"] = boost::any(*gmtLastSamplingWindowEndTime);
    }
    if (gmtLastSamplingWindowStartTime) {
      res["GmtLastSamplingWindowStartTime"] = boost::any(*gmtLastSamplingWindowStartTime);
    }
    if (gmtStartTime) {
      res["GmtStartTime"] = boost::any(*gmtStartTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelConfig) {
      res["ModelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (recordCount) {
      res["RecordCount"] = boost::any(*recordCount);
    }
    if (samplingFrequencyMinutes) {
      res["SamplingFrequencyMinutes"] = boost::any(*samplingFrequencyMinutes);
    }
    if (samplingRatio) {
      res["SamplingRatio"] = boost::any(*samplingRatio);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EvalResults") != m.end() && !m["EvalResults"].empty()) {
      evalResults = make_shared<string>(boost::any_cast<string>(m["EvalResults"]));
    }
    if (m.find("EvaluationConfig") != m.end() && !m["EvaluationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationConfig"].type()) {
        EvaluationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationConfig"]));
        evaluationConfig = make_shared<EvaluationConfig>(model1);
      }
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<GetOnlineEvalTaskResponseBodyTaskFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetOnlineEvalTaskResponseBodyTaskFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<GetOnlineEvalTaskResponseBodyTaskFilters>>(expect1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtEndTime") != m.end() && !m["GmtEndTime"].empty()) {
      gmtEndTime = make_shared<string>(boost::any_cast<string>(m["GmtEndTime"]));
    }
    if (m.find("GmtLastSamplingWindowEndTime") != m.end() && !m["GmtLastSamplingWindowEndTime"].empty()) {
      gmtLastSamplingWindowEndTime = make_shared<string>(boost::any_cast<string>(m["GmtLastSamplingWindowEndTime"]));
    }
    if (m.find("GmtLastSamplingWindowStartTime") != m.end() && !m["GmtLastSamplingWindowStartTime"].empty()) {
      gmtLastSamplingWindowStartTime = make_shared<string>(boost::any_cast<string>(m["GmtLastSamplingWindowStartTime"]));
    }
    if (m.find("GmtStartTime") != m.end() && !m["GmtStartTime"].empty()) {
      gmtStartTime = make_shared<string>(boost::any_cast<string>(m["GmtStartTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModelConfig") != m.end() && !m["ModelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModelConfig"].type()) {
        ModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModelConfig"]));
        modelConfig = make_shared<ModelConfig>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RecordCount") != m.end() && !m["RecordCount"].empty()) {
      recordCount = make_shared<long>(boost::any_cast<long>(m["RecordCount"]));
    }
    if (m.find("SamplingFrequencyMinutes") != m.end() && !m["SamplingFrequencyMinutes"].empty()) {
      samplingFrequencyMinutes = make_shared<long>(boost::any_cast<long>(m["SamplingFrequencyMinutes"]));
    }
    if (m.find("SamplingRatio") != m.end() && !m["SamplingRatio"].empty()) {
      samplingRatio = make_shared<long>(boost::any_cast<long>(m["SamplingRatio"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetOnlineEvalTaskResponseBodyTask() = default;
};
class GetOnlineEvalTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<GetOnlineEvalTaskResponseBodyTask> task{};

  GetOnlineEvalTaskResponseBody() {}

  explicit GetOnlineEvalTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (task) {
      res["Task"] = task ? boost::any(task->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Task") != m.end() && !m["Task"].empty()) {
      if (typeid(map<string, boost::any>) == m["Task"].type()) {
        GetOnlineEvalTaskResponseBodyTask model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Task"]));
        task = make_shared<GetOnlineEvalTaskResponseBodyTask>(model1);
      }
    }
  }


  virtual ~GetOnlineEvalTaskResponseBody() = default;
};
class GetOnlineEvalTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetOnlineEvalTaskResponseBody> body{};

  GetOnlineEvalTaskResponse() {}

  explicit GetOnlineEvalTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetOnlineEvalTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetOnlineEvalTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetOnlineEvalTaskResponse() = default;
};
class GetServiceIdentityRoleResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> roleDetail{};
  shared_ptr<string> roleName{};

  GetServiceIdentityRoleResponseBody() {}

  explicit GetServiceIdentityRoleResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (roleDetail) {
      res["RoleDetail"] = boost::any(*roleDetail);
    }
    if (roleName) {
      res["RoleName"] = boost::any(*roleName);
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
    if (m.find("RoleDetail") != m.end() && !m["RoleDetail"].empty()) {
      roleDetail = make_shared<string>(boost::any_cast<string>(m["RoleDetail"]));
    }
    if (m.find("RoleName") != m.end() && !m["RoleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["RoleName"]));
    }
  }


  virtual ~GetServiceIdentityRoleResponseBody() = default;
};
class GetServiceIdentityRoleResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetServiceIdentityRoleResponseBody> body{};

  GetServiceIdentityRoleResponse() {}

  explicit GetServiceIdentityRoleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetServiceIdentityRoleResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetServiceIdentityRoleResponseBody>(model1);
      }
    }
  }


  virtual ~GetServiceIdentityRoleResponse() = default;
};
class GetXtraceTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> grpcEndpoint{};
  shared_ptr<string> grpcInternalEndpoint{};
  shared_ptr<string> httpEndpoint{};
  shared_ptr<string> httpInternalEndpoint{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> token{};

  GetXtraceTokenResponseBody() {}

  explicit GetXtraceTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (grpcEndpoint) {
      res["GrpcEndpoint"] = boost::any(*grpcEndpoint);
    }
    if (grpcInternalEndpoint) {
      res["GrpcInternalEndpoint"] = boost::any(*grpcInternalEndpoint);
    }
    if (httpEndpoint) {
      res["HttpEndpoint"] = boost::any(*httpEndpoint);
    }
    if (httpInternalEndpoint) {
      res["HttpInternalEndpoint"] = boost::any(*httpInternalEndpoint);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("GrpcEndpoint") != m.end() && !m["GrpcEndpoint"].empty()) {
      grpcEndpoint = make_shared<string>(boost::any_cast<string>(m["GrpcEndpoint"]));
    }
    if (m.find("GrpcInternalEndpoint") != m.end() && !m["GrpcInternalEndpoint"].empty()) {
      grpcInternalEndpoint = make_shared<string>(boost::any_cast<string>(m["GrpcInternalEndpoint"]));
    }
    if (m.find("HttpEndpoint") != m.end() && !m["HttpEndpoint"].empty()) {
      httpEndpoint = make_shared<string>(boost::any_cast<string>(m["HttpEndpoint"]));
    }
    if (m.find("HttpInternalEndpoint") != m.end() && !m["HttpInternalEndpoint"].empty()) {
      httpInternalEndpoint = make_shared<string>(boost::any_cast<string>(m["HttpInternalEndpoint"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~GetXtraceTokenResponseBody() = default;
};
class GetXtraceTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetXtraceTokenResponseBody> body{};

  GetXtraceTokenResponse() {}

  explicit GetXtraceTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetXtraceTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetXtraceTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetXtraceTokenResponse() = default;
};
class ListEvalResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> evaluationId{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> recordIds{};

  ListEvalResultsRequest() {}

  explicit ListEvalResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationId) {
      res["EvaluationId"] = boost::any(*evaluationId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (recordIds) {
      res["RecordIds"] = boost::any(*recordIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationId") != m.end() && !m["EvaluationId"].empty()) {
      evaluationId = make_shared<string>(boost::any_cast<string>(m["EvaluationId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RecordIds") != m.end() && !m["RecordIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["RecordIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["RecordIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      recordIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListEvalResultsRequest() = default;
};
class ListEvalResultsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> evaluationId{};
  shared_ptr<string> keyword{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> recordIdsShrink{};

  ListEvalResultsShrinkRequest() {}

  explicit ListEvalResultsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationId) {
      res["EvaluationId"] = boost::any(*evaluationId);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (recordIdsShrink) {
      res["RecordIds"] = boost::any(*recordIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationId") != m.end() && !m["EvaluationId"].empty()) {
      evaluationId = make_shared<string>(boost::any_cast<string>(m["EvaluationId"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RecordIds") != m.end() && !m["RecordIds"].empty()) {
      recordIdsShrink = make_shared<string>(boost::any_cast<string>(m["RecordIds"]));
    }
  }


  virtual ~ListEvalResultsShrinkRequest() = default;
};
class ListEvalResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<string>> evaluationResults{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListEvalResultsResponseBody() {}

  explicit ListEvalResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (evaluationResults) {
      res["EvaluationResults"] = boost::any(*evaluationResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EvaluationResults") != m.end() && !m["EvaluationResults"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EvaluationResults"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EvaluationResults"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      evaluationResults = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListEvalResultsResponseBody() = default;
};
class ListEvalResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListEvalResultsResponseBody> body{};

  ListEvalResultsResponse() {}

  explicit ListEvalResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListEvalResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListEvalResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListEvalResultsResponse() = default;
};
class ListOnlineEvalTaskResultsRequest : public Darabonba::Model {
public:
  shared_ptr<string> evaluationId{};
  shared_ptr<bool> mostRecentResultsOnly{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<string>> traceIds{};

  ListOnlineEvalTaskResultsRequest() {}

  explicit ListOnlineEvalTaskResultsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationId) {
      res["EvaluationId"] = boost::any(*evaluationId);
    }
    if (mostRecentResultsOnly) {
      res["MostRecentResultsOnly"] = boost::any(*mostRecentResultsOnly);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (traceIds) {
      res["TraceIds"] = boost::any(*traceIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationId") != m.end() && !m["EvaluationId"].empty()) {
      evaluationId = make_shared<string>(boost::any_cast<string>(m["EvaluationId"]));
    }
    if (m.find("MostRecentResultsOnly") != m.end() && !m["MostRecentResultsOnly"].empty()) {
      mostRecentResultsOnly = make_shared<bool>(boost::any_cast<bool>(m["MostRecentResultsOnly"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TraceIds") != m.end() && !m["TraceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TraceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TraceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      traceIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListOnlineEvalTaskResultsRequest() = default;
};
class ListOnlineEvalTaskResultsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> evaluationId{};
  shared_ptr<bool> mostRecentResultsOnly{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> traceIdsShrink{};

  ListOnlineEvalTaskResultsShrinkRequest() {}

  explicit ListOnlineEvalTaskResultsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (evaluationId) {
      res["EvaluationId"] = boost::any(*evaluationId);
    }
    if (mostRecentResultsOnly) {
      res["MostRecentResultsOnly"] = boost::any(*mostRecentResultsOnly);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (traceIdsShrink) {
      res["TraceIds"] = boost::any(*traceIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EvaluationId") != m.end() && !m["EvaluationId"].empty()) {
      evaluationId = make_shared<string>(boost::any_cast<string>(m["EvaluationId"]));
    }
    if (m.find("MostRecentResultsOnly") != m.end() && !m["MostRecentResultsOnly"].empty()) {
      mostRecentResultsOnly = make_shared<bool>(boost::any_cast<bool>(m["MostRecentResultsOnly"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TraceIds") != m.end() && !m["TraceIds"].empty()) {
      traceIdsShrink = make_shared<string>(boost::any_cast<string>(m["TraceIds"]));
    }
  }


  virtual ~ListOnlineEvalTaskResultsShrinkRequest() = default;
};
class ListOnlineEvalTaskResultsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<string>> evaluationResults{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListOnlineEvalTaskResultsResponseBody() {}

  explicit ListOnlineEvalTaskResultsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (evaluationResults) {
      res["EvaluationResults"] = boost::any(*evaluationResults);
    }
    if (message) {
      res["Message"] = boost::any(*message);
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
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
    }
    if (m.find("EvaluationResults") != m.end() && !m["EvaluationResults"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["EvaluationResults"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["EvaluationResults"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      evaluationResults = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListOnlineEvalTaskResultsResponseBody() = default;
};
class ListOnlineEvalTaskResultsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOnlineEvalTaskResultsResponseBody> body{};

  ListOnlineEvalTaskResultsResponse() {}

  explicit ListOnlineEvalTaskResultsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOnlineEvalTaskResultsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOnlineEvalTaskResultsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOnlineEvalTaskResultsResponse() = default;
};
class ListOnlineEvalTasksRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> keyword{};
  shared_ptr<string> maxTime{};
  shared_ptr<string> minTime{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> status{};

  ListOnlineEvalTasksRequest() {}

  explicit ListOnlineEvalTasksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (keyword) {
      res["Keyword"] = boost::any(*keyword);
    }
    if (maxTime) {
      res["MaxTime"] = boost::any(*maxTime);
    }
    if (minTime) {
      res["MinTime"] = boost::any(*minTime);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Keyword") != m.end() && !m["Keyword"].empty()) {
      keyword = make_shared<string>(boost::any_cast<string>(m["Keyword"]));
    }
    if (m.find("MaxTime") != m.end() && !m["MaxTime"].empty()) {
      maxTime = make_shared<string>(boost::any_cast<string>(m["MaxTime"]));
    }
    if (m.find("MinTime") != m.end() && !m["MinTime"].empty()) {
      minTime = make_shared<string>(boost::any_cast<string>(m["MinTime"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListOnlineEvalTasksRequest() = default;
};
class ListOnlineEvalTasksResponseBodyTasksFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  ListOnlineEvalTasksResponseBodyTasksFilters() {}

  explicit ListOnlineEvalTasksResponseBodyTasksFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListOnlineEvalTasksResponseBodyTasksFilters() = default;
};
class ListOnlineEvalTasksResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> aliyunUid{};
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> evalResults{};
  shared_ptr<EvaluationConfig> evaluationConfig{};
  shared_ptr<vector<ListOnlineEvalTasksResponseBodyTasksFilters>> filters{};
  shared_ptr<string> gmtCreateTime{};
  shared_ptr<string> gmtEndTime{};
  shared_ptr<string> gmtStartTime{};
  shared_ptr<string> id{};
  shared_ptr<ModelConfig> modelConfig{};
  shared_ptr<string> name{};
  shared_ptr<long> recordCount{};
  shared_ptr<long> samplingFrequencyMinutes{};
  shared_ptr<long> samplingRatio{};
  shared_ptr<string> status{};
  shared_ptr<string> userId{};

  ListOnlineEvalTasksResponseBodyTasks() {}

  explicit ListOnlineEvalTasksResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliyunUid) {
      res["AliyunUid"] = boost::any(*aliyunUid);
    }
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (evalResults) {
      res["EvalResults"] = boost::any(*evalResults);
    }
    if (evaluationConfig) {
      res["EvaluationConfig"] = evaluationConfig ? boost::any(evaluationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (gmtCreateTime) {
      res["GmtCreateTime"] = boost::any(*gmtCreateTime);
    }
    if (gmtEndTime) {
      res["GmtEndTime"] = boost::any(*gmtEndTime);
    }
    if (gmtStartTime) {
      res["GmtStartTime"] = boost::any(*gmtStartTime);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (modelConfig) {
      res["ModelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (recordCount) {
      res["RecordCount"] = boost::any(*recordCount);
    }
    if (samplingFrequencyMinutes) {
      res["SamplingFrequencyMinutes"] = boost::any(*samplingFrequencyMinutes);
    }
    if (samplingRatio) {
      res["SamplingRatio"] = boost::any(*samplingRatio);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliyunUid") != m.end() && !m["AliyunUid"].empty()) {
      aliyunUid = make_shared<string>(boost::any_cast<string>(m["AliyunUid"]));
    }
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EvalResults") != m.end() && !m["EvalResults"].empty()) {
      evalResults = make_shared<string>(boost::any_cast<string>(m["EvalResults"]));
    }
    if (m.find("EvaluationConfig") != m.end() && !m["EvaluationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationConfig"].type()) {
        EvaluationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationConfig"]));
        evaluationConfig = make_shared<EvaluationConfig>(model1);
      }
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListOnlineEvalTasksResponseBodyTasksFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOnlineEvalTasksResponseBodyTasksFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListOnlineEvalTasksResponseBodyTasksFilters>>(expect1);
      }
    }
    if (m.find("GmtCreateTime") != m.end() && !m["GmtCreateTime"].empty()) {
      gmtCreateTime = make_shared<string>(boost::any_cast<string>(m["GmtCreateTime"]));
    }
    if (m.find("GmtEndTime") != m.end() && !m["GmtEndTime"].empty()) {
      gmtEndTime = make_shared<string>(boost::any_cast<string>(m["GmtEndTime"]));
    }
    if (m.find("GmtStartTime") != m.end() && !m["GmtStartTime"].empty()) {
      gmtStartTime = make_shared<string>(boost::any_cast<string>(m["GmtStartTime"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ModelConfig") != m.end() && !m["ModelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModelConfig"].type()) {
        ModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModelConfig"]));
        modelConfig = make_shared<ModelConfig>(model1);
      }
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RecordCount") != m.end() && !m["RecordCount"].empty()) {
      recordCount = make_shared<long>(boost::any_cast<long>(m["RecordCount"]));
    }
    if (m.find("SamplingFrequencyMinutes") != m.end() && !m["SamplingFrequencyMinutes"].empty()) {
      samplingFrequencyMinutes = make_shared<long>(boost::any_cast<long>(m["SamplingFrequencyMinutes"]));
    }
    if (m.find("SamplingRatio") != m.end() && !m["SamplingRatio"].empty()) {
      samplingRatio = make_shared<long>(boost::any_cast<long>(m["SamplingRatio"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ListOnlineEvalTasksResponseBodyTasks() = default;
};
class ListOnlineEvalTasksResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListOnlineEvalTasksResponseBodyTasks>> tasks{};
  shared_ptr<long> totalCount{};

  ListOnlineEvalTasksResponseBody() {}

  explicit ListOnlineEvalTasksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
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
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ListOnlineEvalTasksResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListOnlineEvalTasksResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ListOnlineEvalTasksResponseBodyTasks>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListOnlineEvalTasksResponseBody() = default;
};
class ListOnlineEvalTasksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOnlineEvalTasksResponseBody> body{};

  ListOnlineEvalTasksResponse() {}

  explicit ListOnlineEvalTasksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOnlineEvalTasksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOnlineEvalTasksResponseBody>(model1);
      }
    }
  }


  virtual ~ListOnlineEvalTasksResponse() = default;
};
class ListTracesDatasRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  ListTracesDatasRequestFilters() {}

  explicit ListTracesDatasRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~ListTracesDatasRequestFilters() = default;
};
class ListTracesDatasRequest : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<vector<ListTracesDatasRequestFilters>> filters{};
  shared_ptr<bool> hasEvents{};
  shared_ptr<bool> hasStatusMessage{};
  shared_ptr<string> llmAppName{};
  shared_ptr<double> maxDuration{};
  shared_ptr<string> maxTime{};
  shared_ptr<double> minDuration{};
  shared_ptr<string> minTime{};
  shared_ptr<bool> opentelemetryCompatible{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerSubId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};
  shared_ptr<vector<string>> spanIds{};
  shared_ptr<string> spanName{};
  shared_ptr<vector<string>> traceIds{};
  shared_ptr<string> traceReduceMethod{};

  ListTracesDatasRequest() {}

  explicit ListTracesDatasRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (hasEvents) {
      res["HasEvents"] = boost::any(*hasEvents);
    }
    if (hasStatusMessage) {
      res["HasStatusMessage"] = boost::any(*hasStatusMessage);
    }
    if (llmAppName) {
      res["LlmAppName"] = boost::any(*llmAppName);
    }
    if (maxDuration) {
      res["MaxDuration"] = boost::any(*maxDuration);
    }
    if (maxTime) {
      res["MaxTime"] = boost::any(*maxTime);
    }
    if (minDuration) {
      res["MinDuration"] = boost::any(*minDuration);
    }
    if (minTime) {
      res["MinTime"] = boost::any(*minTime);
    }
    if (opentelemetryCompatible) {
      res["OpentelemetryCompatible"] = boost::any(*opentelemetryCompatible);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerSubId) {
      res["OwnerSubId"] = boost::any(*ownerSubId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (spanIds) {
      res["SpanIds"] = boost::any(*spanIds);
    }
    if (spanName) {
      res["SpanName"] = boost::any(*spanName);
    }
    if (traceIds) {
      res["TraceIds"] = boost::any(*traceIds);
    }
    if (traceReduceMethod) {
      res["TraceReduceMethod"] = boost::any(*traceReduceMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<ListTracesDatasRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTracesDatasRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<ListTracesDatasRequestFilters>>(expect1);
      }
    }
    if (m.find("HasEvents") != m.end() && !m["HasEvents"].empty()) {
      hasEvents = make_shared<bool>(boost::any_cast<bool>(m["HasEvents"]));
    }
    if (m.find("HasStatusMessage") != m.end() && !m["HasStatusMessage"].empty()) {
      hasStatusMessage = make_shared<bool>(boost::any_cast<bool>(m["HasStatusMessage"]));
    }
    if (m.find("LlmAppName") != m.end() && !m["LlmAppName"].empty()) {
      llmAppName = make_shared<string>(boost::any_cast<string>(m["LlmAppName"]));
    }
    if (m.find("MaxDuration") != m.end() && !m["MaxDuration"].empty()) {
      maxDuration = make_shared<double>(boost::any_cast<double>(m["MaxDuration"]));
    }
    if (m.find("MaxTime") != m.end() && !m["MaxTime"].empty()) {
      maxTime = make_shared<string>(boost::any_cast<string>(m["MaxTime"]));
    }
    if (m.find("MinDuration") != m.end() && !m["MinDuration"].empty()) {
      minDuration = make_shared<double>(boost::any_cast<double>(m["MinDuration"]));
    }
    if (m.find("MinTime") != m.end() && !m["MinTime"].empty()) {
      minTime = make_shared<string>(boost::any_cast<string>(m["MinTime"]));
    }
    if (m.find("OpentelemetryCompatible") != m.end() && !m["OpentelemetryCompatible"].empty()) {
      opentelemetryCompatible = make_shared<bool>(boost::any_cast<bool>(m["OpentelemetryCompatible"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerSubId") != m.end() && !m["OwnerSubId"].empty()) {
      ownerSubId = make_shared<string>(boost::any_cast<string>(m["OwnerSubId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("SpanIds") != m.end() && !m["SpanIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["SpanIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["SpanIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      spanIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("SpanName") != m.end() && !m["SpanName"].empty()) {
      spanName = make_shared<string>(boost::any_cast<string>(m["SpanName"]));
    }
    if (m.find("TraceIds") != m.end() && !m["TraceIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TraceIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TraceIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      traceIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TraceReduceMethod") != m.end() && !m["TraceReduceMethod"].empty()) {
      traceReduceMethod = make_shared<string>(boost::any_cast<string>(m["TraceReduceMethod"]));
    }
  }


  virtual ~ListTracesDatasRequest() = default;
};
class ListTracesDatasShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> endUserId{};
  shared_ptr<string> filtersShrink{};
  shared_ptr<bool> hasEvents{};
  shared_ptr<bool> hasStatusMessage{};
  shared_ptr<string> llmAppName{};
  shared_ptr<double> maxDuration{};
  shared_ptr<string> maxTime{};
  shared_ptr<double> minDuration{};
  shared_ptr<string> minTime{};
  shared_ptr<bool> opentelemetryCompatible{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> ownerSubId{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> sortBy{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> spanIdsShrink{};
  shared_ptr<string> spanName{};
  shared_ptr<string> traceIdsShrink{};
  shared_ptr<string> traceReduceMethod{};

  ListTracesDatasShrinkRequest() {}

  explicit ListTracesDatasShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endUserId) {
      res["EndUserId"] = boost::any(*endUserId);
    }
    if (filtersShrink) {
      res["Filters"] = boost::any(*filtersShrink);
    }
    if (hasEvents) {
      res["HasEvents"] = boost::any(*hasEvents);
    }
    if (hasStatusMessage) {
      res["HasStatusMessage"] = boost::any(*hasStatusMessage);
    }
    if (llmAppName) {
      res["LlmAppName"] = boost::any(*llmAppName);
    }
    if (maxDuration) {
      res["MaxDuration"] = boost::any(*maxDuration);
    }
    if (maxTime) {
      res["MaxTime"] = boost::any(*maxTime);
    }
    if (minDuration) {
      res["MinDuration"] = boost::any(*minDuration);
    }
    if (minTime) {
      res["MinTime"] = boost::any(*minTime);
    }
    if (opentelemetryCompatible) {
      res["OpentelemetryCompatible"] = boost::any(*opentelemetryCompatible);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (ownerSubId) {
      res["OwnerSubId"] = boost::any(*ownerSubId);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sortBy) {
      res["SortBy"] = boost::any(*sortBy);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (spanIdsShrink) {
      res["SpanIds"] = boost::any(*spanIdsShrink);
    }
    if (spanName) {
      res["SpanName"] = boost::any(*spanName);
    }
    if (traceIdsShrink) {
      res["TraceIds"] = boost::any(*traceIdsShrink);
    }
    if (traceReduceMethod) {
      res["TraceReduceMethod"] = boost::any(*traceReduceMethod);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndUserId") != m.end() && !m["EndUserId"].empty()) {
      endUserId = make_shared<string>(boost::any_cast<string>(m["EndUserId"]));
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      filtersShrink = make_shared<string>(boost::any_cast<string>(m["Filters"]));
    }
    if (m.find("HasEvents") != m.end() && !m["HasEvents"].empty()) {
      hasEvents = make_shared<bool>(boost::any_cast<bool>(m["HasEvents"]));
    }
    if (m.find("HasStatusMessage") != m.end() && !m["HasStatusMessage"].empty()) {
      hasStatusMessage = make_shared<bool>(boost::any_cast<bool>(m["HasStatusMessage"]));
    }
    if (m.find("LlmAppName") != m.end() && !m["LlmAppName"].empty()) {
      llmAppName = make_shared<string>(boost::any_cast<string>(m["LlmAppName"]));
    }
    if (m.find("MaxDuration") != m.end() && !m["MaxDuration"].empty()) {
      maxDuration = make_shared<double>(boost::any_cast<double>(m["MaxDuration"]));
    }
    if (m.find("MaxTime") != m.end() && !m["MaxTime"].empty()) {
      maxTime = make_shared<string>(boost::any_cast<string>(m["MaxTime"]));
    }
    if (m.find("MinDuration") != m.end() && !m["MinDuration"].empty()) {
      minDuration = make_shared<double>(boost::any_cast<double>(m["MinDuration"]));
    }
    if (m.find("MinTime") != m.end() && !m["MinTime"].empty()) {
      minTime = make_shared<string>(boost::any_cast<string>(m["MinTime"]));
    }
    if (m.find("OpentelemetryCompatible") != m.end() && !m["OpentelemetryCompatible"].empty()) {
      opentelemetryCompatible = make_shared<bool>(boost::any_cast<bool>(m["OpentelemetryCompatible"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("OwnerSubId") != m.end() && !m["OwnerSubId"].empty()) {
      ownerSubId = make_shared<string>(boost::any_cast<string>(m["OwnerSubId"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SortBy") != m.end() && !m["SortBy"].empty()) {
      sortBy = make_shared<string>(boost::any_cast<string>(m["SortBy"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("SpanIds") != m.end() && !m["SpanIds"].empty()) {
      spanIdsShrink = make_shared<string>(boost::any_cast<string>(m["SpanIds"]));
    }
    if (m.find("SpanName") != m.end() && !m["SpanName"].empty()) {
      spanName = make_shared<string>(boost::any_cast<string>(m["SpanName"]));
    }
    if (m.find("TraceIds") != m.end() && !m["TraceIds"].empty()) {
      traceIdsShrink = make_shared<string>(boost::any_cast<string>(m["TraceIds"]));
    }
    if (m.find("TraceReduceMethod") != m.end() && !m["TraceReduceMethod"].empty()) {
      traceReduceMethod = make_shared<string>(boost::any_cast<string>(m["TraceReduceMethod"]));
    }
  }


  virtual ~ListTracesDatasShrinkRequest() = default;
};
class ListTracesDatasResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};
  shared_ptr<vector<boost::any>> traces{};

  ListTracesDatasResponseBody() {}

  explicit ListTracesDatasResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    if (traces) {
      res["Traces"] = boost::any(*traces);
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
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
    if (m.find("Traces") != m.end() && !m["Traces"].empty()) {
      vector<boost::any> toVec1;
      if (typeid(vector<boost::any>) == m["Traces"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Traces"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<boost::any>(item));
        }
      }
      traces = make_shared<vector<boost::any>>(toVec1);
    }
  }


  virtual ~ListTracesDatasResponseBody() = default;
};
class ListTracesDatasResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTracesDatasResponseBody> body{};

  ListTracesDatasResponse() {}

  explicit ListTracesDatasResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTracesDatasResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTracesDatasResponseBody>(model1);
      }
    }
  }


  virtual ~ListTracesDatasResponse() = default;
};
class StopOnlineEvalTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StopOnlineEvalTaskResponseBody() {}

  explicit StopOnlineEvalTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~StopOnlineEvalTaskResponseBody() = default;
};
class StopOnlineEvalTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StopOnlineEvalTaskResponseBody> body{};

  StopOnlineEvalTaskResponse() {}

  explicit StopOnlineEvalTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StopOnlineEvalTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StopOnlineEvalTaskResponseBody>(model1);
      }
    }
  }


  virtual ~StopOnlineEvalTaskResponse() = default;
};
class UpdateOnlineEvalTaskRequestFilters : public Darabonba::Model {
public:
  shared_ptr<string> key{};
  shared_ptr<string> operator_{};
  shared_ptr<string> value{};

  UpdateOnlineEvalTaskRequestFilters() {}

  explicit UpdateOnlineEvalTaskRequestFilters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdateOnlineEvalTaskRequestFilters() = default;
};
class UpdateOnlineEvalTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> appName{};
  shared_ptr<string> description{};
  shared_ptr<string> endTime{};
  shared_ptr<EvaluationConfig> evaluationConfig{};
  shared_ptr<vector<UpdateOnlineEvalTaskRequestFilters>> filters{};
  shared_ptr<ModelConfig> modelConfig{};
  shared_ptr<long> samplingFrequencyMinutes{};
  shared_ptr<long> samplingRatio{};
  shared_ptr<string> startTime{};
  shared_ptr<string> taskName{};

  UpdateOnlineEvalTaskRequest() {}

  explicit UpdateOnlineEvalTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appName) {
      res["AppName"] = boost::any(*appName);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (evaluationConfig) {
      res["EvaluationConfig"] = evaluationConfig ? boost::any(evaluationConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (filters) {
      vector<boost::any> temp1;
      for(auto item1:*filters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filters"] = boost::any(temp1);
    }
    if (modelConfig) {
      res["ModelConfig"] = modelConfig ? boost::any(modelConfig->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (samplingFrequencyMinutes) {
      res["SamplingFrequencyMinutes"] = boost::any(*samplingFrequencyMinutes);
    }
    if (samplingRatio) {
      res["SamplingRatio"] = boost::any(*samplingRatio);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppName") != m.end() && !m["AppName"].empty()) {
      appName = make_shared<string>(boost::any_cast<string>(m["AppName"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("EvaluationConfig") != m.end() && !m["EvaluationConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["EvaluationConfig"].type()) {
        EvaluationConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["EvaluationConfig"]));
        evaluationConfig = make_shared<EvaluationConfig>(model1);
      }
    }
    if (m.find("Filters") != m.end() && !m["Filters"].empty()) {
      if (typeid(vector<boost::any>) == m["Filters"].type()) {
        vector<UpdateOnlineEvalTaskRequestFilters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateOnlineEvalTaskRequestFilters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filters = make_shared<vector<UpdateOnlineEvalTaskRequestFilters>>(expect1);
      }
    }
    if (m.find("ModelConfig") != m.end() && !m["ModelConfig"].empty()) {
      if (typeid(map<string, boost::any>) == m["ModelConfig"].type()) {
        ModelConfig model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ModelConfig"]));
        modelConfig = make_shared<ModelConfig>(model1);
      }
    }
    if (m.find("SamplingFrequencyMinutes") != m.end() && !m["SamplingFrequencyMinutes"].empty()) {
      samplingFrequencyMinutes = make_shared<long>(boost::any_cast<long>(m["SamplingFrequencyMinutes"]));
    }
    if (m.find("SamplingRatio") != m.end() && !m["SamplingRatio"].empty()) {
      samplingRatio = make_shared<long>(boost::any_cast<long>(m["SamplingRatio"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~UpdateOnlineEvalTaskRequest() = default;
};
class UpdateOnlineEvalTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  UpdateOnlineEvalTaskResponseBody() {}

  explicit UpdateOnlineEvalTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpdateOnlineEvalTaskResponseBody() = default;
};
class UpdateOnlineEvalTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateOnlineEvalTaskResponseBody> body{};

  UpdateOnlineEvalTaskResponse() {}

  explicit UpdateOnlineEvalTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateOnlineEvalTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateOnlineEvalTaskResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateOnlineEvalTaskResponse() = default;
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
  CreateOnlineEvalTaskResponse createOnlineEvalTaskWithOptions(shared_ptr<CreateOnlineEvalTaskRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateOnlineEvalTaskResponse createOnlineEvalTask(shared_ptr<CreateOnlineEvalTaskRequest> request);
  CreateServiceIdentityRoleResponse createServiceIdentityRoleWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceIdentityRoleResponse createServiceIdentityRole();
  DeleteOnlineEvalTaskResponse deleteOnlineEvalTaskWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteOnlineEvalTaskResponse deleteOnlineEvalTask(shared_ptr<string> TaskId);
  EvaluateTraceResponse evaluateTraceWithOptions(shared_ptr<string> TraceId,
                                                 shared_ptr<EvaluateTraceRequest> request,
                                                 shared_ptr<map<string, string>> headers,
                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  EvaluateTraceResponse evaluateTrace(shared_ptr<string> TraceId, shared_ptr<EvaluateTraceRequest> request);
  GetEvaluationTemplatesResponse getEvaluationTemplatesWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEvaluationTemplatesResponse getEvaluationTemplates();
  GetOnlineEvalTaskResponse getOnlineEvalTaskWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetOnlineEvalTaskResponse getOnlineEvalTask(shared_ptr<string> TaskId);
  GetServiceIdentityRoleResponse getServiceIdentityRoleWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetServiceIdentityRoleResponse getServiceIdentityRole();
  GetXtraceTokenResponse getXtraceTokenWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetXtraceTokenResponse getXtraceToken();
  ListEvalResultsResponse listEvalResultsWithOptions(shared_ptr<ListEvalResultsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListEvalResultsResponse listEvalResults(shared_ptr<ListEvalResultsRequest> request);
  ListOnlineEvalTaskResultsResponse listOnlineEvalTaskResultsWithOptions(shared_ptr<ListOnlineEvalTaskResultsRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOnlineEvalTaskResultsResponse listOnlineEvalTaskResults(shared_ptr<ListOnlineEvalTaskResultsRequest> request);
  ListOnlineEvalTasksResponse listOnlineEvalTasksWithOptions(shared_ptr<ListOnlineEvalTasksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOnlineEvalTasksResponse listOnlineEvalTasks(shared_ptr<ListOnlineEvalTasksRequest> request);
  ListTracesDatasResponse listTracesDatasWithOptions(shared_ptr<ListTracesDatasRequest> tmpReq, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTracesDatasResponse listTracesDatas(shared_ptr<ListTracesDatasRequest> request);
  StopOnlineEvalTaskResponse stopOnlineEvalTaskWithOptions(shared_ptr<string> TaskId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StopOnlineEvalTaskResponse stopOnlineEvalTask(shared_ptr<string> TaskId);
  UpdateOnlineEvalTaskResponse updateOnlineEvalTaskWithOptions(shared_ptr<string> TaskId,
                                                               shared_ptr<UpdateOnlineEvalTaskRequest> request,
                                                               shared_ptr<map<string, string>> headers,
                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateOnlineEvalTaskResponse updateOnlineEvalTask(shared_ptr<string> TaskId, shared_ptr<UpdateOnlineEvalTaskRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_PaiLLMTrace20240311

#endif
