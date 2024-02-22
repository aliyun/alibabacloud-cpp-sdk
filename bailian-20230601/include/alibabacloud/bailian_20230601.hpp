// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BAILIAN20230601_H_
#define ALIBABACLOUD_BAILIAN20230601_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Bailian20230601 {
class CancelFineTuneJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> jobId{};

  CancelFineTuneJobRequest() {}

  explicit CancelFineTuneJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~CancelFineTuneJobRequest() = default;
};
class CancelFineTuneJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  CancelFineTuneJobResponseBody() {}

  explicit CancelFineTuneJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CancelFineTuneJobResponseBody() = default;
};
class CancelFineTuneJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CancelFineTuneJobResponseBody> body{};

  CancelFineTuneJobResponse() {}

  explicit CancelFineTuneJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CancelFineTuneJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelFineTuneJobResponseBody>(model1);
      }
    }
  }


  virtual ~CancelFineTuneJobResponse() = default;
};
class CreateDocumentTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};

  CreateDocumentTagRequest() {}

  explicit CreateDocumentTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~CreateDocumentTagRequest() = default;
};
class CreateDocumentTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tagId{};

  CreateDocumentTagResponseBody() {}

  explicit CreateDocumentTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~CreateDocumentTagResponseBody() = default;
};
class CreateDocumentTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateDocumentTagResponseBody> body{};

  CreateDocumentTagResponse() {}

  explicit CreateDocumentTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateDocumentTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateDocumentTagResponseBody>(model1);
      }
    }
  }


  virtual ~CreateDocumentTagResponse() = default;
};
class CreateFineTuneJobRequestHyperParameters : public Darabonba::Model {
public:
  shared_ptr<long> batchSize{};
  shared_ptr<long> epochs{};
  shared_ptr<string> learningRate{};
  shared_ptr<double> promptLossWeight{};

  CreateFineTuneJobRequestHyperParameters() {}

  explicit CreateFineTuneJobRequestHyperParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (epochs) {
      res["Epochs"] = boost::any(*epochs);
    }
    if (learningRate) {
      res["LearningRate"] = boost::any(*learningRate);
    }
    if (promptLossWeight) {
      res["PromptLossWeight"] = boost::any(*promptLossWeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<long>(boost::any_cast<long>(m["BatchSize"]));
    }
    if (m.find("Epochs") != m.end() && !m["Epochs"].empty()) {
      epochs = make_shared<long>(boost::any_cast<long>(m["Epochs"]));
    }
    if (m.find("LearningRate") != m.end() && !m["LearningRate"].empty()) {
      learningRate = make_shared<string>(boost::any_cast<string>(m["LearningRate"]));
    }
    if (m.find("PromptLossWeight") != m.end() && !m["PromptLossWeight"].empty()) {
      promptLossWeight = make_shared<double>(boost::any_cast<double>(m["PromptLossWeight"]));
    }
  }


  virtual ~CreateFineTuneJobRequestHyperParameters() = default;
};
class CreateFineTuneJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> baseModel{};
  shared_ptr<CreateFineTuneJobRequestHyperParameters> hyperParameters{};
  shared_ptr<string> modelName{};
  shared_ptr<vector<string>> trainingFiles{};
  shared_ptr<string> trainingType{};
  shared_ptr<vector<string>> validationFiles{};

  CreateFineTuneJobRequest() {}

  explicit CreateFineTuneJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (baseModel) {
      res["BaseModel"] = boost::any(*baseModel);
    }
    if (hyperParameters) {
      res["HyperParameters"] = hyperParameters ? boost::any(hyperParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (trainingFiles) {
      res["TrainingFiles"] = boost::any(*trainingFiles);
    }
    if (trainingType) {
      res["TrainingType"] = boost::any(*trainingType);
    }
    if (validationFiles) {
      res["ValidationFiles"] = boost::any(*validationFiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("BaseModel") != m.end() && !m["BaseModel"].empty()) {
      baseModel = make_shared<string>(boost::any_cast<string>(m["BaseModel"]));
    }
    if (m.find("HyperParameters") != m.end() && !m["HyperParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["HyperParameters"].type()) {
        CreateFineTuneJobRequestHyperParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HyperParameters"]));
        hyperParameters = make_shared<CreateFineTuneJobRequestHyperParameters>(model1);
      }
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("TrainingFiles") != m.end() && !m["TrainingFiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TrainingFiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TrainingFiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      trainingFiles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TrainingType") != m.end() && !m["TrainingType"].empty()) {
      trainingType = make_shared<string>(boost::any_cast<string>(m["TrainingType"]));
    }
    if (m.find("ValidationFiles") != m.end() && !m["ValidationFiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ValidationFiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ValidationFiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      validationFiles = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~CreateFineTuneJobRequest() = default;
};
class CreateFineTuneJobShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> baseModel{};
  shared_ptr<string> hyperParametersShrink{};
  shared_ptr<string> modelName{};
  shared_ptr<string> trainingFilesShrink{};
  shared_ptr<string> trainingType{};
  shared_ptr<string> validationFilesShrink{};

  CreateFineTuneJobShrinkRequest() {}

  explicit CreateFineTuneJobShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (baseModel) {
      res["BaseModel"] = boost::any(*baseModel);
    }
    if (hyperParametersShrink) {
      res["HyperParameters"] = boost::any(*hyperParametersShrink);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (trainingFilesShrink) {
      res["TrainingFiles"] = boost::any(*trainingFilesShrink);
    }
    if (trainingType) {
      res["TrainingType"] = boost::any(*trainingType);
    }
    if (validationFilesShrink) {
      res["ValidationFiles"] = boost::any(*validationFilesShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("BaseModel") != m.end() && !m["BaseModel"].empty()) {
      baseModel = make_shared<string>(boost::any_cast<string>(m["BaseModel"]));
    }
    if (m.find("HyperParameters") != m.end() && !m["HyperParameters"].empty()) {
      hyperParametersShrink = make_shared<string>(boost::any_cast<string>(m["HyperParameters"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("TrainingFiles") != m.end() && !m["TrainingFiles"].empty()) {
      trainingFilesShrink = make_shared<string>(boost::any_cast<string>(m["TrainingFiles"]));
    }
    if (m.find("TrainingType") != m.end() && !m["TrainingType"].empty()) {
      trainingType = make_shared<string>(boost::any_cast<string>(m["TrainingType"]));
    }
    if (m.find("ValidationFiles") != m.end() && !m["ValidationFiles"].empty()) {
      validationFilesShrink = make_shared<string>(boost::any_cast<string>(m["ValidationFiles"]));
    }
  }


  virtual ~CreateFineTuneJobShrinkRequest() = default;
};
class CreateFineTuneJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  CreateFineTuneJobResponseBody() {}

  explicit CreateFineTuneJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
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
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~CreateFineTuneJobResponseBody() = default;
};
class CreateFineTuneJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateFineTuneJobResponseBody> body{};

  CreateFineTuneJobResponse() {}

  explicit CreateFineTuneJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateFineTuneJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateFineTuneJobResponseBody>(model1);
      }
    }
  }


  virtual ~CreateFineTuneJobResponse() = default;
};
class CreateServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> model{};

  CreateServiceRequest() {}

  explicit CreateServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (model) {
      res["Model"] = boost::any(*model);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Model") != m.end() && !m["Model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["Model"]));
    }
  }


  virtual ~CreateServiceRequest() = default;
};
class CreateServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> modelServiceId{};
  shared_ptr<string> requestId{};

  CreateServiceResponseBody() {}

  explicit CreateServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelServiceId) {
      res["ModelServiceId"] = boost::any(*modelServiceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelServiceId") != m.end() && !m["ModelServiceId"].empty()) {
      modelServiceId = make_shared<string>(boost::any_cast<string>(m["ModelServiceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateServiceResponseBody() = default;
};
class CreateServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateServiceResponseBody> body{};

  CreateServiceResponse() {}

  explicit CreateServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateServiceResponseBody>(model1);
      }
    }
  }


  virtual ~CreateServiceResponse() = default;
};
class CreateTextEmbeddingsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<vector<string>> input{};
  shared_ptr<string> textType{};

  CreateTextEmbeddingsRequest() {}

  explicit CreateTextEmbeddingsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (input) {
      res["Input"] = boost::any(*input);
    }
    if (textType) {
      res["TextType"] = boost::any(*textType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Input"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Input"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      input = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TextType") != m.end() && !m["TextType"].empty()) {
      textType = make_shared<string>(boost::any_cast<string>(m["TextType"]));
    }
  }


  virtual ~CreateTextEmbeddingsRequest() = default;
};
class CreateTextEmbeddingsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> inputShrink{};
  shared_ptr<string> textType{};

  CreateTextEmbeddingsShrinkRequest() {}

  explicit CreateTextEmbeddingsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (inputShrink) {
      res["Input"] = boost::any(*inputShrink);
    }
    if (textType) {
      res["TextType"] = boost::any(*textType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Input") != m.end() && !m["Input"].empty()) {
      inputShrink = make_shared<string>(boost::any_cast<string>(m["Input"]));
    }
    if (m.find("TextType") != m.end() && !m["TextType"].empty()) {
      textType = make_shared<string>(boost::any_cast<string>(m["TextType"]));
    }
  }


  virtual ~CreateTextEmbeddingsShrinkRequest() = default;
};
class CreateTextEmbeddingsResponseBodyDataEmbeddings : public Darabonba::Model {
public:
  shared_ptr<vector<double>> embedding{};
  shared_ptr<long> textIndex{};

  CreateTextEmbeddingsResponseBodyDataEmbeddings() {}

  explicit CreateTextEmbeddingsResponseBodyDataEmbeddings(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (embedding) {
      res["Embedding"] = boost::any(*embedding);
    }
    if (textIndex) {
      res["TextIndex"] = boost::any(*textIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Embedding") != m.end() && !m["Embedding"].empty()) {
      vector<double> toVec1;
      if (typeid(vector<boost::any>) == m["Embedding"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Embedding"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<double>(item));
        }
      }
      embedding = make_shared<vector<double>>(toVec1);
    }
    if (m.find("TextIndex") != m.end() && !m["TextIndex"].empty()) {
      textIndex = make_shared<long>(boost::any_cast<long>(m["TextIndex"]));
    }
  }


  virtual ~CreateTextEmbeddingsResponseBodyDataEmbeddings() = default;
};
class CreateTextEmbeddingsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<CreateTextEmbeddingsResponseBodyDataEmbeddings>> embeddings{};

  CreateTextEmbeddingsResponseBodyData() {}

  explicit CreateTextEmbeddingsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (embeddings) {
      vector<boost::any> temp1;
      for(auto item1:*embeddings){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Embeddings"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Embeddings") != m.end() && !m["Embeddings"].empty()) {
      if (typeid(vector<boost::any>) == m["Embeddings"].type()) {
        vector<CreateTextEmbeddingsResponseBodyDataEmbeddings> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Embeddings"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateTextEmbeddingsResponseBodyDataEmbeddings model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        embeddings = make_shared<vector<CreateTextEmbeddingsResponseBodyDataEmbeddings>>(expect1);
      }
    }
  }


  virtual ~CreateTextEmbeddingsResponseBodyData() = default;
};
class CreateTextEmbeddingsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateTextEmbeddingsResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTextEmbeddingsResponseBody() {}

  explicit CreateTextEmbeddingsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTextEmbeddingsResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTextEmbeddingsResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
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


  virtual ~CreateTextEmbeddingsResponseBody() = default;
};
class CreateTextEmbeddingsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTextEmbeddingsResponseBody> body{};

  CreateTextEmbeddingsResponse() {}

  explicit CreateTextEmbeddingsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTextEmbeddingsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTextEmbeddingsResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTextEmbeddingsResponse() = default;
};
class CreateTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};

  CreateTokenRequest() {}

  explicit CreateTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
  }


  virtual ~CreateTokenRequest() = default;
};
class CreateTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> expiredTime{};
  shared_ptr<string> token{};

  CreateTokenResponseBodyData() {}

  explicit CreateTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (expiredTime) {
      res["ExpiredTime"] = boost::any(*expiredTime);
    }
    if (token) {
      res["Token"] = boost::any(*token);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExpiredTime") != m.end() && !m["ExpiredTime"].empty()) {
      expiredTime = make_shared<long>(boost::any_cast<long>(m["ExpiredTime"]));
    }
    if (m.find("Token") != m.end() && !m["Token"].empty()) {
      token = make_shared<string>(boost::any_cast<string>(m["Token"]));
    }
  }


  virtual ~CreateTokenResponseBodyData() = default;
};
class CreateTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CreateTokenResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateTokenResponseBody() {}

  explicit CreateTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateTokenResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
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


  virtual ~CreateTokenResponseBody() = default;
};
class CreateTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateTokenResponseBody> body{};

  CreateTokenResponse() {}

  explicit CreateTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTokenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTokenResponse() = default;
};
class DeleteDocRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> docId{};

  DeleteDocRequest() {}

  explicit DeleteDocRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
  }


  virtual ~DeleteDocRequest() = default;
};
class DeleteDocResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> requestId{};

  DeleteDocResponseBody() {}

  explicit DeleteDocResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteDocResponseBody() = default;
};
class DeleteDocResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDocResponseBody> body{};

  DeleteDocResponse() {}

  explicit DeleteDocResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDocResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDocResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDocResponse() = default;
};
class DeleteDocumentTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> tagId{};

  DeleteDocumentTagRequest() {}

  explicit DeleteDocumentTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~DeleteDocumentTagRequest() = default;
};
class DeleteDocumentTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tagId{};

  DeleteDocumentTagResponseBody() {}

  explicit DeleteDocumentTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~DeleteDocumentTagResponseBody() = default;
};
class DeleteDocumentTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteDocumentTagResponseBody> body{};

  DeleteDocumentTagResponse() {}

  explicit DeleteDocumentTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteDocumentTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteDocumentTagResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteDocumentTagResponse() = default;
};
class DeleteFineTuneJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> jobId{};

  DeleteFineTuneJobRequest() {}

  explicit DeleteFineTuneJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~DeleteFineTuneJobRequest() = default;
};
class DeleteFineTuneJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  DeleteFineTuneJobResponseBody() {}

  explicit DeleteFineTuneJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteFineTuneJobResponseBody() = default;
};
class DeleteFineTuneJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFineTuneJobResponseBody> body{};

  DeleteFineTuneJobResponse() {}

  explicit DeleteFineTuneJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFineTuneJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFineTuneJobResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFineTuneJobResponse() = default;
};
class DeleteServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> modelServiceId{};

  DeleteServiceRequest() {}

  explicit DeleteServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (modelServiceId) {
      res["ModelServiceId"] = boost::any(*modelServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ModelServiceId") != m.end() && !m["ModelServiceId"].empty()) {
      modelServiceId = make_shared<string>(boost::any_cast<string>(m["ModelServiceId"]));
    }
  }


  virtual ~DeleteServiceRequest() = default;
};
class DeleteServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> modelServiceId{};
  shared_ptr<string> requestId{};

  DeleteServiceResponseBody() {}

  explicit DeleteServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelServiceId) {
      res["ModelServiceId"] = boost::any(*modelServiceId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ModelServiceId") != m.end() && !m["ModelServiceId"].empty()) {
      modelServiceId = make_shared<string>(boost::any_cast<string>(m["ModelServiceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteServiceResponseBody() = default;
};
class DeleteServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteServiceResponseBody> body{};

  DeleteServiceResponse() {}

  explicit DeleteServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceResponse() = default;
};
class DescribeDocRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> docId{};

  DescribeDocRequest() {}

  explicit DescribeDocRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
  }


  virtual ~DescribeDocRequest() = default;
};
class DescribeDocResponseBodyTags : public Darabonba::Model {
public:
  shared_ptr<string> tagId{};
  shared_ptr<string> tagName{};

  DescribeDocResponseBodyTags() {}

  explicit DescribeDocResponseBodyTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~DescribeDocResponseBodyTags() = default;
};
class DescribeDocResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> failReason{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> size{};
  shared_ptr<string> status{};
  shared_ptr<vector<DescribeDocResponseBodyTags>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> uploadTime{};

  DescribeDocResponseBody() {}

  explicit DescribeDocResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uploadTime) {
      res["UploadTime"] = boost::any(*uploadTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<DescribeDocResponseBodyTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDocResponseBodyTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<DescribeDocResponseBodyTags>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UploadTime") != m.end() && !m["UploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["UploadTime"]));
    }
  }


  virtual ~DescribeDocResponseBody() = default;
};
class DescribeDocResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDocResponseBody> body{};

  DescribeDocResponse() {}

  explicit DescribeDocResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDocResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDocResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDocResponse() = default;
};
class DescribeDocumentImportJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> jobId{};

  DescribeDocumentImportJobRequest() {}

  explicit DescribeDocumentImportJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~DescribeDocumentImportJobRequest() = default;
};
class DescribeDocumentImportJobResponseBodyDocs : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> failReason{};
  shared_ptr<string> name{};
  shared_ptr<string> status{};

  DescribeDocumentImportJobResponseBodyDocs() {}

  explicit DescribeDocumentImportJobResponseBodyDocs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDocumentImportJobResponseBodyDocs() = default;
};
class DescribeDocumentImportJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<DescribeDocumentImportJobResponseBodyDocs>> docs{};
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeDocumentImportJobResponseBody() {}

  explicit DescribeDocumentImportJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docs) {
      vector<boost::any> temp1;
      for(auto item1:*docs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Docs"] = boost::any(temp1);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
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
    if (m.find("Docs") != m.end() && !m["Docs"].empty()) {
      if (typeid(vector<boost::any>) == m["Docs"].type()) {
        vector<DescribeDocumentImportJobResponseBodyDocs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Docs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            DescribeDocumentImportJobResponseBodyDocs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docs = make_shared<vector<DescribeDocumentImportJobResponseBodyDocs>>(expect1);
      }
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeDocumentImportJobResponseBody() = default;
};
class DescribeDocumentImportJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeDocumentImportJobResponseBody> body{};

  DescribeDocumentImportJobResponse() {}

  explicit DescribeDocumentImportJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeDocumentImportJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeDocumentImportJobResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeDocumentImportJobResponse() = default;
};
class DescribeFineTuneJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> jobId{};

  DescribeFineTuneJobRequest() {}

  explicit DescribeFineTuneJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
  }


  virtual ~DescribeFineTuneJobRequest() = default;
};
class DescribeFineTuneJobResponseBodyHyperParameters : public Darabonba::Model {
public:
  shared_ptr<long> batchSize{};
  shared_ptr<long> epochs{};
  shared_ptr<string> learningRate{};
  shared_ptr<double> promptLossWeight{};

  DescribeFineTuneJobResponseBodyHyperParameters() {}

  explicit DescribeFineTuneJobResponseBodyHyperParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (epochs) {
      res["Epochs"] = boost::any(*epochs);
    }
    if (learningRate) {
      res["LearningRate"] = boost::any(*learningRate);
    }
    if (promptLossWeight) {
      res["PromptLossWeight"] = boost::any(*promptLossWeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<long>(boost::any_cast<long>(m["BatchSize"]));
    }
    if (m.find("Epochs") != m.end() && !m["Epochs"].empty()) {
      epochs = make_shared<long>(boost::any_cast<long>(m["Epochs"]));
    }
    if (m.find("LearningRate") != m.end() && !m["LearningRate"].empty()) {
      learningRate = make_shared<string>(boost::any_cast<string>(m["LearningRate"]));
    }
    if (m.find("PromptLossWeight") != m.end() && !m["PromptLossWeight"].empty()) {
      promptLossWeight = make_shared<double>(boost::any_cast<double>(m["PromptLossWeight"]));
    }
  }


  virtual ~DescribeFineTuneJobResponseBodyHyperParameters() = default;
};
class DescribeFineTuneJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> baseModel{};
  shared_ptr<string> fineTunedModel{};
  shared_ptr<DescribeFineTuneJobResponseBodyHyperParameters> hyperParameters{};
  shared_ptr<string> jobId{};
  shared_ptr<string> message{};
  shared_ptr<string> modelName{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> trainingFiles{};
  shared_ptr<string> trainingType{};
  shared_ptr<vector<string>> validationFiles{};

  DescribeFineTuneJobResponseBody() {}

  explicit DescribeFineTuneJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseModel) {
      res["BaseModel"] = boost::any(*baseModel);
    }
    if (fineTunedModel) {
      res["FineTunedModel"] = boost::any(*fineTunedModel);
    }
    if (hyperParameters) {
      res["HyperParameters"] = hyperParameters ? boost::any(hyperParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (trainingFiles) {
      res["TrainingFiles"] = boost::any(*trainingFiles);
    }
    if (trainingType) {
      res["TrainingType"] = boost::any(*trainingType);
    }
    if (validationFiles) {
      res["ValidationFiles"] = boost::any(*validationFiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseModel") != m.end() && !m["BaseModel"].empty()) {
      baseModel = make_shared<string>(boost::any_cast<string>(m["BaseModel"]));
    }
    if (m.find("FineTunedModel") != m.end() && !m["FineTunedModel"].empty()) {
      fineTunedModel = make_shared<string>(boost::any_cast<string>(m["FineTunedModel"]));
    }
    if (m.find("HyperParameters") != m.end() && !m["HyperParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["HyperParameters"].type()) {
        DescribeFineTuneJobResponseBodyHyperParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HyperParameters"]));
        hyperParameters = make_shared<DescribeFineTuneJobResponseBodyHyperParameters>(model1);
      }
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TrainingFiles") != m.end() && !m["TrainingFiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TrainingFiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TrainingFiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      trainingFiles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TrainingType") != m.end() && !m["TrainingType"].empty()) {
      trainingType = make_shared<string>(boost::any_cast<string>(m["TrainingType"]));
    }
    if (m.find("ValidationFiles") != m.end() && !m["ValidationFiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ValidationFiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ValidationFiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      validationFiles = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~DescribeFineTuneJobResponseBody() = default;
};
class DescribeFineTuneJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeFineTuneJobResponseBody> body{};

  DescribeFineTuneJobResponse() {}

  explicit DescribeFineTuneJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeFineTuneJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeFineTuneJobResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeFineTuneJobResponse() = default;
};
class DescribeServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> modelServiceId{};

  DescribeServiceRequest() {}

  explicit DescribeServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (modelServiceId) {
      res["ModelServiceId"] = boost::any(*modelServiceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("ModelServiceId") != m.end() && !m["ModelServiceId"].empty()) {
      modelServiceId = make_shared<string>(boost::any_cast<string>(m["ModelServiceId"]));
    }
  }


  virtual ~DescribeServiceRequest() = default;
};
class DescribeServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelServiceId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};

  DescribeServiceResponseBody() {}

  explicit DescribeServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelServiceId) {
      res["ModelServiceId"] = boost::any(*modelServiceId);
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
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelServiceId") != m.end() && !m["ModelServiceId"].empty()) {
      modelServiceId = make_shared<string>(boost::any_cast<string>(m["ModelServiceId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~DescribeServiceResponseBody() = default;
};
class DescribeServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DescribeServiceResponseBody> body{};

  DescribeServiceResponse() {}

  explicit DescribeServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DescribeServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceResponse() = default;
};
class GetFileStoreUploadPolicyRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileStoreId{};
  shared_ptr<string> userId{};

  GetFileStoreUploadPolicyRequest() {}

  explicit GetFileStoreUploadPolicyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileStoreId) {
      res["FileStoreId"] = boost::any(*fileStoreId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileStoreId") != m.end() && !m["FileStoreId"].empty()) {
      fileStoreId = make_shared<long>(boost::any_cast<long>(m["FileStoreId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~GetFileStoreUploadPolicyRequest() = default;
};
class GetFileStoreUploadPolicyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessId{};
  shared_ptr<string> dir{};
  shared_ptr<string> expire{};
  shared_ptr<string> host{};
  shared_ptr<string> key{};
  shared_ptr<string> policy{};
  shared_ptr<string> securityToken{};
  shared_ptr<string> signature{};

  GetFileStoreUploadPolicyResponseBodyData() {}

  explicit GetFileStoreUploadPolicyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessId) {
      res["AccessId"] = boost::any(*accessId);
    }
    if (dir) {
      res["Dir"] = boost::any(*dir);
    }
    if (expire) {
      res["Expire"] = boost::any(*expire);
    }
    if (host) {
      res["Host"] = boost::any(*host);
    }
    if (key) {
      res["Key"] = boost::any(*key);
    }
    if (policy) {
      res["Policy"] = boost::any(*policy);
    }
    if (securityToken) {
      res["SecurityToken"] = boost::any(*securityToken);
    }
    if (signature) {
      res["Signature"] = boost::any(*signature);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessId") != m.end() && !m["AccessId"].empty()) {
      accessId = make_shared<string>(boost::any_cast<string>(m["AccessId"]));
    }
    if (m.find("Dir") != m.end() && !m["Dir"].empty()) {
      dir = make_shared<string>(boost::any_cast<string>(m["Dir"]));
    }
    if (m.find("Expire") != m.end() && !m["Expire"].empty()) {
      expire = make_shared<string>(boost::any_cast<string>(m["Expire"]));
    }
    if (m.find("Host") != m.end() && !m["Host"].empty()) {
      host = make_shared<string>(boost::any_cast<string>(m["Host"]));
    }
    if (m.find("Key") != m.end() && !m["Key"].empty()) {
      key = make_shared<string>(boost::any_cast<string>(m["Key"]));
    }
    if (m.find("Policy") != m.end() && !m["Policy"].empty()) {
      policy = make_shared<string>(boost::any_cast<string>(m["Policy"]));
    }
    if (m.find("SecurityToken") != m.end() && !m["SecurityToken"].empty()) {
      securityToken = make_shared<string>(boost::any_cast<string>(m["SecurityToken"]));
    }
    if (m.find("Signature") != m.end() && !m["Signature"].empty()) {
      signature = make_shared<string>(boost::any_cast<string>(m["Signature"]));
    }
  }


  virtual ~GetFileStoreUploadPolicyResponseBodyData() = default;
};
class GetFileStoreUploadPolicyResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetFileStoreUploadPolicyResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetFileStoreUploadPolicyResponseBody() {}

  explicit GetFileStoreUploadPolicyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        GetFileStoreUploadPolicyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetFileStoreUploadPolicyResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetFileStoreUploadPolicyResponseBody() = default;
};
class GetFileStoreUploadPolicyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFileStoreUploadPolicyResponseBody> body{};

  GetFileStoreUploadPolicyResponse() {}

  explicit GetFileStoreUploadPolicyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFileStoreUploadPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileStoreUploadPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileStoreUploadPolicyResponse() = default;
};
class GetPromptRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> promptId{};
  shared_ptr<string> vars{};

  GetPromptRequest() {}

  explicit GetPromptRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (promptId) {
      res["PromptId"] = boost::any(*promptId);
    }
    if (vars) {
      res["Vars"] = boost::any(*vars);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("PromptId") != m.end() && !m["PromptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["PromptId"]));
    }
    if (m.find("Vars") != m.end() && !m["Vars"].empty()) {
      vars = make_shared<string>(boost::any_cast<string>(m["Vars"]));
    }
  }


  virtual ~GetPromptRequest() = default;
};
class GetPromptResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> promptContent{};
  shared_ptr<string> promptId{};

  GetPromptResponseBodyData() {}

  explicit GetPromptResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promptContent) {
      res["PromptContent"] = boost::any(*promptContent);
    }
    if (promptId) {
      res["PromptId"] = boost::any(*promptId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromptContent") != m.end() && !m["PromptContent"].empty()) {
      promptContent = make_shared<string>(boost::any_cast<string>(m["PromptContent"]));
    }
    if (m.find("PromptId") != m.end() && !m["PromptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["PromptId"]));
    }
  }


  virtual ~GetPromptResponseBodyData() = default;
};
class GetPromptResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetPromptResponseBodyData> data{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetPromptResponseBody() {}

  explicit GetPromptResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPromptResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetPromptResponseBodyData>(model1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["HttpStatusCode"]));
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


  virtual ~GetPromptResponseBody() = default;
};
class GetPromptResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPromptResponseBody> body{};

  GetPromptResponse() {}

  explicit GetPromptResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPromptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPromptResponseBody>(model1);
      }
    }
  }


  virtual ~GetPromptResponse() = default;
};
class GetText2ImageJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> taskId{};

  GetText2ImageJobRequest() {}

  explicit GetText2ImageJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetText2ImageJobRequest() = default;
};
class GetText2ImageJobResponseBodyImages : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> URL{};

  GetText2ImageJobResponseBodyImages() {}

  explicit GetText2ImageJobResponseBodyImages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (URL) {
      res["URL"] = boost::any(*URL);
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
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~GetText2ImageJobResponseBodyImages() = default;
};
class GetText2ImageJobResponseBodyTaskMetrics : public Darabonba::Model {
public:
  shared_ptr<long> failed{};
  shared_ptr<long> succeeded{};
  shared_ptr<long> total{};

  GetText2ImageJobResponseBodyTaskMetrics() {}

  explicit GetText2ImageJobResponseBodyTaskMetrics(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failed) {
      res["Failed"] = boost::any(*failed);
    }
    if (succeeded) {
      res["Succeeded"] = boost::any(*succeeded);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Failed") != m.end() && !m["Failed"].empty()) {
      failed = make_shared<long>(boost::any_cast<long>(m["Failed"]));
    }
    if (m.find("Succeeded") != m.end() && !m["Succeeded"].empty()) {
      succeeded = make_shared<long>(boost::any_cast<long>(m["Succeeded"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~GetText2ImageJobResponseBodyTaskMetrics() = default;
};
class GetText2ImageJobResponseBodyUsage : public Darabonba::Model {
public:
  shared_ptr<long> imageCount{};

  GetText2ImageJobResponseBodyUsage() {}

  explicit GetText2ImageJobResponseBodyUsage(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageCount) {
      res["ImageCount"] = boost::any(*imageCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ImageCount") != m.end() && !m["ImageCount"].empty()) {
      imageCount = make_shared<long>(boost::any_cast<long>(m["ImageCount"]));
    }
  }


  virtual ~GetText2ImageJobResponseBodyUsage() = default;
};
class GetText2ImageJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetText2ImageJobResponseBodyImages>> images{};
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<GetText2ImageJobResponseBodyTaskMetrics> taskMetrics{};
  shared_ptr<string> taskStatus{};
  shared_ptr<vector<GetText2ImageJobResponseBodyUsage>> usage{};

  GetText2ImageJobResponseBody() {}

  explicit GetText2ImageJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      vector<boost::any> temp1;
      for(auto item1:*images){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Images"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskMetrics) {
      res["TaskMetrics"] = taskMetrics ? boost::any(taskMetrics->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (usage) {
      vector<boost::any> temp1;
      for(auto item1:*usage){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Usage"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Images") != m.end() && !m["Images"].empty()) {
      if (typeid(vector<boost::any>) == m["Images"].type()) {
        vector<GetText2ImageJobResponseBodyImages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Images"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetText2ImageJobResponseBodyImages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        images = make_shared<vector<GetText2ImageJobResponseBodyImages>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskMetrics") != m.end() && !m["TaskMetrics"].empty()) {
      if (typeid(map<string, boost::any>) == m["TaskMetrics"].type()) {
        GetText2ImageJobResponseBodyTaskMetrics model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TaskMetrics"]));
        taskMetrics = make_shared<GetText2ImageJobResponseBodyTaskMetrics>(model1);
      }
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
    if (m.find("Usage") != m.end() && !m["Usage"].empty()) {
      if (typeid(vector<boost::any>) == m["Usage"].type()) {
        vector<GetText2ImageJobResponseBodyUsage> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Usage"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetText2ImageJobResponseBodyUsage model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        usage = make_shared<vector<GetText2ImageJobResponseBodyUsage>>(expect1);
      }
    }
  }


  virtual ~GetText2ImageJobResponseBody() = default;
};
class GetText2ImageJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetText2ImageJobResponseBody> body{};

  GetText2ImageJobResponse() {}

  explicit GetText2ImageJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetText2ImageJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetText2ImageJobResponseBody>(model1);
      }
    }
  }


  virtual ~GetText2ImageJobResponse() = default;
};
class ImportUserDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> fileName{};
  shared_ptr<long> fileStoreId{};
  shared_ptr<string> ossPath{};
  shared_ptr<long> storeId{};
  shared_ptr<string> userId{};

  ImportUserDocumentRequest() {}

  explicit ImportUserDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (fileStoreId) {
      res["FileStoreId"] = boost::any(*fileStoreId);
    }
    if (ossPath) {
      res["OssPath"] = boost::any(*ossPath);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FileStoreId") != m.end() && !m["FileStoreId"].empty()) {
      fileStoreId = make_shared<long>(boost::any_cast<long>(m["FileStoreId"]));
    }
    if (m.find("OssPath") != m.end() && !m["OssPath"].empty()) {
      ossPath = make_shared<string>(boost::any_cast<string>(m["OssPath"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<long>(boost::any_cast<long>(m["StoreId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~ImportUserDocumentRequest() = default;
};
class ImportUserDocumentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<long> dataStatus{};

  ImportUserDocumentResponseBodyData() {}

  explicit ImportUserDocumentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (dataStatus) {
      res["DataStatus"] = boost::any(*dataStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("DataStatus") != m.end() && !m["DataStatus"].empty()) {
      dataStatus = make_shared<long>(boost::any_cast<long>(m["DataStatus"]));
    }
  }


  virtual ~ImportUserDocumentResponseBodyData() = default;
};
class ImportUserDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<ImportUserDocumentResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ImportUserDocumentResponseBody() {}

  explicit ImportUserDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        ImportUserDocumentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ImportUserDocumentResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~ImportUserDocumentResponseBody() = default;
};
class ImportUserDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportUserDocumentResponseBody> body{};

  ImportUserDocumentResponse() {}

  explicit ImportUserDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportUserDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportUserDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~ImportUserDocumentResponse() = default;
};
class ListDocsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};
  shared_ptr<vector<string>> tagIds{};

  ListDocsRequest() {}

  explicit ListDocsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListDocsRequest() = default;
};
class ListDocsShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeId{};
  shared_ptr<string> tagIdsShrink{};

  ListDocsShrinkRequest() {}

  explicit ListDocsShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (tagIdsShrink) {
      res["TagIds"] = boost::any(*tagIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      tagIdsShrink = make_shared<string>(boost::any_cast<string>(m["TagIds"]));
    }
  }


  virtual ~ListDocsShrinkRequest() = default;
};
class ListDocsResponseBodyDocsTags : public Darabonba::Model {
public:
  shared_ptr<string> tagId{};
  shared_ptr<string> tagName{};

  ListDocsResponseBodyDocsTags() {}

  explicit ListDocsResponseBodyDocsTags(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~ListDocsResponseBodyDocsTags() = default;
};
class ListDocsResponseBodyDocs : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> failReason{};
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> size{};
  shared_ptr<string> status{};
  shared_ptr<vector<ListDocsResponseBodyDocsTags>> tags{};
  shared_ptr<string> type{};
  shared_ptr<string> uploadTime{};

  ListDocsResponseBodyDocs() {}

  explicit ListDocsResponseBodyDocs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (failReason) {
      res["FailReason"] = boost::any(*failReason);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (tags) {
      vector<boost::any> temp1;
      for(auto item1:*tags){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tags"] = boost::any(temp1);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uploadTime) {
      res["UploadTime"] = boost::any(*uploadTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("FailReason") != m.end() && !m["FailReason"].empty()) {
      failReason = make_shared<string>(boost::any_cast<string>(m["FailReason"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<ListDocsResponseBodyDocsTags> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tags"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDocsResponseBodyDocsTags model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tags = make_shared<vector<ListDocsResponseBodyDocsTags>>(expect1);
      }
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UploadTime") != m.end() && !m["UploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["UploadTime"]));
    }
  }


  virtual ~ListDocsResponseBodyDocs() = default;
};
class ListDocsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDocsResponseBodyDocs>> docs{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListDocsResponseBody() {}

  explicit ListDocsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docs) {
      vector<boost::any> temp1;
      for(auto item1:*docs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Docs"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Docs") != m.end() && !m["Docs"].empty()) {
      if (typeid(vector<boost::any>) == m["Docs"].type()) {
        vector<ListDocsResponseBodyDocs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Docs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDocsResponseBodyDocs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docs = make_shared<vector<ListDocsResponseBodyDocs>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListDocsResponseBody() = default;
};
class ListDocsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDocsResponseBody> body{};

  ListDocsResponse() {}

  explicit ListDocsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDocsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDocsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDocsResponse() = default;
};
class ListDocumentTagsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> tagId{};

  ListDocumentTagsRequest() {}

  explicit ListDocumentTagsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~ListDocumentTagsRequest() = default;
};
class ListDocumentTagsResponseBodyTagList : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> tagId{};

  ListDocumentTagsResponseBodyTagList() {}

  explicit ListDocumentTagsResponseBodyTagList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~ListDocumentTagsResponseBodyTagList() = default;
};
class ListDocumentTagsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListDocumentTagsResponseBodyTagList>> tagList{};
  shared_ptr<long> total{};

  ListDocumentTagsResponseBody() {}

  explicit ListDocumentTagsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagList) {
      vector<boost::any> temp1;
      for(auto item1:*tagList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TagList"] = boost::any(temp1);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagList") != m.end() && !m["TagList"].empty()) {
      if (typeid(vector<boost::any>) == m["TagList"].type()) {
        vector<ListDocumentTagsResponseBodyTagList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TagList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDocumentTagsResponseBodyTagList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tagList = make_shared<vector<ListDocumentTagsResponseBodyTagList>>(expect1);
      }
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListDocumentTagsResponseBody() = default;
};
class ListDocumentTagsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDocumentTagsResponseBody> body{};

  ListDocumentTagsResponse() {}

  explicit ListDocumentTagsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDocumentTagsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDocumentTagsResponseBody>(model1);
      }
    }
  }


  virtual ~ListDocumentTagsResponse() = default;
};
class ListFineTuneJobsRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListFineTuneJobsRequest() {}

  explicit ListFineTuneJobsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListFineTuneJobsRequest() = default;
};
class ListFineTuneJobsResponseBodyJobsHyperParameters : public Darabonba::Model {
public:
  shared_ptr<long> batchSize{};
  shared_ptr<long> epochs{};
  shared_ptr<string> learningRate{};
  shared_ptr<double> promptLossWeight{};

  ListFineTuneJobsResponseBodyJobsHyperParameters() {}

  explicit ListFineTuneJobsResponseBodyJobsHyperParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (batchSize) {
      res["BatchSize"] = boost::any(*batchSize);
    }
    if (epochs) {
      res["Epochs"] = boost::any(*epochs);
    }
    if (learningRate) {
      res["LearningRate"] = boost::any(*learningRate);
    }
    if (promptLossWeight) {
      res["PromptLossWeight"] = boost::any(*promptLossWeight);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BatchSize") != m.end() && !m["BatchSize"].empty()) {
      batchSize = make_shared<long>(boost::any_cast<long>(m["BatchSize"]));
    }
    if (m.find("Epochs") != m.end() && !m["Epochs"].empty()) {
      epochs = make_shared<long>(boost::any_cast<long>(m["Epochs"]));
    }
    if (m.find("LearningRate") != m.end() && !m["LearningRate"].empty()) {
      learningRate = make_shared<string>(boost::any_cast<string>(m["LearningRate"]));
    }
    if (m.find("PromptLossWeight") != m.end() && !m["PromptLossWeight"].empty()) {
      promptLossWeight = make_shared<double>(boost::any_cast<double>(m["PromptLossWeight"]));
    }
  }


  virtual ~ListFineTuneJobsResponseBodyJobsHyperParameters() = default;
};
class ListFineTuneJobsResponseBodyJobs : public Darabonba::Model {
public:
  shared_ptr<string> baseModel{};
  shared_ptr<string> fineTunedModel{};
  shared_ptr<ListFineTuneJobsResponseBodyJobsHyperParameters> hyperParameters{};
  shared_ptr<string> jobId{};
  shared_ptr<string> message{};
  shared_ptr<string> modelName{};
  shared_ptr<string> status{};
  shared_ptr<vector<string>> trainingFiles{};
  shared_ptr<string> trainingType{};
  shared_ptr<vector<string>> validationFiles{};

  ListFineTuneJobsResponseBodyJobs() {}

  explicit ListFineTuneJobsResponseBodyJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baseModel) {
      res["BaseModel"] = boost::any(*baseModel);
    }
    if (fineTunedModel) {
      res["FineTunedModel"] = boost::any(*fineTunedModel);
    }
    if (hyperParameters) {
      res["HyperParameters"] = hyperParameters ? boost::any(hyperParameters->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (modelName) {
      res["ModelName"] = boost::any(*modelName);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (trainingFiles) {
      res["TrainingFiles"] = boost::any(*trainingFiles);
    }
    if (trainingType) {
      res["TrainingType"] = boost::any(*trainingType);
    }
    if (validationFiles) {
      res["ValidationFiles"] = boost::any(*validationFiles);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaseModel") != m.end() && !m["BaseModel"].empty()) {
      baseModel = make_shared<string>(boost::any_cast<string>(m["BaseModel"]));
    }
    if (m.find("FineTunedModel") != m.end() && !m["FineTunedModel"].empty()) {
      fineTunedModel = make_shared<string>(boost::any_cast<string>(m["FineTunedModel"]));
    }
    if (m.find("HyperParameters") != m.end() && !m["HyperParameters"].empty()) {
      if (typeid(map<string, boost::any>) == m["HyperParameters"].type()) {
        ListFineTuneJobsResponseBodyJobsHyperParameters model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HyperParameters"]));
        hyperParameters = make_shared<ListFineTuneJobsResponseBodyJobsHyperParameters>(model1);
      }
    }
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ModelName") != m.end() && !m["ModelName"].empty()) {
      modelName = make_shared<string>(boost::any_cast<string>(m["ModelName"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TrainingFiles") != m.end() && !m["TrainingFiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TrainingFiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TrainingFiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      trainingFiles = make_shared<vector<string>>(toVec1);
    }
    if (m.find("TrainingType") != m.end() && !m["TrainingType"].empty()) {
      trainingType = make_shared<string>(boost::any_cast<string>(m["TrainingType"]));
    }
    if (m.find("ValidationFiles") != m.end() && !m["ValidationFiles"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ValidationFiles"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ValidationFiles"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      validationFiles = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListFineTuneJobsResponseBodyJobs() = default;
};
class ListFineTuneJobsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFineTuneJobsResponseBodyJobs>> jobs{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListFineTuneJobsResponseBody() {}

  explicit ListFineTuneJobsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobs) {
      vector<boost::any> temp1;
      for(auto item1:*jobs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Jobs"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("Jobs") != m.end() && !m["Jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["Jobs"].type()) {
        vector<ListFineTuneJobsResponseBodyJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFineTuneJobsResponseBodyJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<ListFineTuneJobsResponseBodyJobs>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListFineTuneJobsResponseBody() = default;
};
class ListFineTuneJobsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFineTuneJobsResponseBody> body{};

  ListFineTuneJobsResponse() {}

  explicit ListFineTuneJobsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFineTuneJobsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFineTuneJobsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFineTuneJobsResponse() = default;
};
class ListServicesRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  ListServicesRequest() {}

  explicit ListServicesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
  }


  virtual ~ListServicesRequest() = default;
};
class ListServicesResponseBodyModelServices : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> modelServiceId{};
  shared_ptr<string> status{};

  ListServicesResponseBodyModelServices() {}

  explicit ListServicesResponseBodyModelServices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (modelServiceId) {
      res["ModelServiceId"] = boost::any(*modelServiceId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("ModelServiceId") != m.end() && !m["ModelServiceId"].empty()) {
      modelServiceId = make_shared<string>(boost::any_cast<string>(m["ModelServiceId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ListServicesResponseBodyModelServices() = default;
};
class ListServicesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListServicesResponseBodyModelServices>> modelServices{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListServicesResponseBody() {}

  explicit ListServicesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelServices) {
      vector<boost::any> temp1;
      for(auto item1:*modelServices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ModelServices"] = boost::any(temp1);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
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
    if (m.find("ModelServices") != m.end() && !m["ModelServices"].empty()) {
      if (typeid(vector<boost::any>) == m["ModelServices"].type()) {
        vector<ListServicesResponseBodyModelServices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ModelServices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListServicesResponseBodyModelServices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        modelServices = make_shared<vector<ListServicesResponseBodyModelServices>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~ListServicesResponseBody() = default;
};
class ListServicesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListServicesResponseBody> body{};

  ListServicesResponse() {}

  explicit ListServicesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class QueryUserDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataId{};
  shared_ptr<string> userId{};

  QueryUserDocumentRequest() {}

  explicit QueryUserDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~QueryUserDocumentRequest() = default;
};
class QueryUserDocumentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<long> dataStatus{};

  QueryUserDocumentResponseBodyData() {}

  explicit QueryUserDocumentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (dataStatus) {
      res["DataStatus"] = boost::any(*dataStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("DataStatus") != m.end() && !m["DataStatus"].empty()) {
      dataStatus = make_shared<long>(boost::any_cast<long>(m["DataStatus"]));
    }
  }


  virtual ~QueryUserDocumentResponseBodyData() = default;
};
class QueryUserDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryUserDocumentResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryUserDocumentResponseBody() {}

  explicit QueryUserDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errorCode) {
      res["ErrorCode"] = boost::any(*errorCode);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        QueryUserDocumentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryUserDocumentResponseBodyData>(model1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~QueryUserDocumentResponseBody() = default;
};
class QueryUserDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryUserDocumentResponseBody> body{};

  QueryUserDocumentResponse() {}

  explicit QueryUserDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryUserDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserDocumentResponse() = default;
};
class SubmitDocumentImportJobRequestDocs : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> ownerId{};
  shared_ptr<string> storeId{};
  shared_ptr<vector<string>> tagIds{};
  shared_ptr<string> type{};
  shared_ptr<string> URL{};

  SubmitDocumentImportJobRequestDocs() {}

  explicit SubmitDocumentImportJobRequestDocs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (URL) {
      res["URL"] = boost::any(*URL);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<string>(boost::any_cast<string>(m["OwnerId"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<string>(boost::any_cast<string>(m["StoreId"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("URL") != m.end() && !m["URL"].empty()) {
      URL = make_shared<string>(boost::any_cast<string>(m["URL"]));
    }
  }


  virtual ~SubmitDocumentImportJobRequestDocs() = default;
};
class SubmitDocumentImportJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<vector<SubmitDocumentImportJobRequestDocs>> docs{};

  SubmitDocumentImportJobRequest() {}

  explicit SubmitDocumentImportJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (docs) {
      vector<boost::any> temp1;
      for(auto item1:*docs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Docs"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Docs") != m.end() && !m["Docs"].empty()) {
      if (typeid(vector<boost::any>) == m["Docs"].type()) {
        vector<SubmitDocumentImportJobRequestDocs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Docs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SubmitDocumentImportJobRequestDocs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        docs = make_shared<vector<SubmitDocumentImportJobRequestDocs>>(expect1);
      }
    }
  }


  virtual ~SubmitDocumentImportJobRequest() = default;
};
class SubmitDocumentImportJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> jobId{};
  shared_ptr<string> requestId{};

  SubmitDocumentImportJobResponseBody() {}

  explicit SubmitDocumentImportJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (jobId) {
      res["JobId"] = boost::any(*jobId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("JobId") != m.end() && !m["JobId"].empty()) {
      jobId = make_shared<string>(boost::any_cast<string>(m["JobId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SubmitDocumentImportJobResponseBody() = default;
};
class SubmitDocumentImportJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitDocumentImportJobResponseBody> body{};

  SubmitDocumentImportJobResponse() {}

  explicit SubmitDocumentImportJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitDocumentImportJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitDocumentImportJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitDocumentImportJobResponse() = default;
};
class SubmitText2ImageJobRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> appId{};
  shared_ptr<long> n{};
  shared_ptr<string> negativePrompt{};
  shared_ptr<string> prompt{};
  shared_ptr<long> seed{};
  shared_ptr<string> size{};
  shared_ptr<string> style{};

  SubmitText2ImageJobRequest() {}

  explicit SubmitText2ImageJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (n) {
      res["N"] = boost::any(*n);
    }
    if (negativePrompt) {
      res["NegativePrompt"] = boost::any(*negativePrompt);
    }
    if (prompt) {
      res["Prompt"] = boost::any(*prompt);
    }
    if (seed) {
      res["Seed"] = boost::any(*seed);
    }
    if (size) {
      res["Size"] = boost::any(*size);
    }
    if (style) {
      res["Style"] = boost::any(*style);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("N") != m.end() && !m["N"].empty()) {
      n = make_shared<long>(boost::any_cast<long>(m["N"]));
    }
    if (m.find("NegativePrompt") != m.end() && !m["NegativePrompt"].empty()) {
      negativePrompt = make_shared<string>(boost::any_cast<string>(m["NegativePrompt"]));
    }
    if (m.find("Prompt") != m.end() && !m["Prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["Prompt"]));
    }
    if (m.find("Seed") != m.end() && !m["Seed"].empty()) {
      seed = make_shared<long>(boost::any_cast<long>(m["Seed"]));
    }
    if (m.find("Size") != m.end() && !m["Size"].empty()) {
      size = make_shared<string>(boost::any_cast<string>(m["Size"]));
    }
    if (m.find("Style") != m.end() && !m["Style"].empty()) {
      style = make_shared<string>(boost::any_cast<string>(m["Style"]));
    }
  }


  virtual ~SubmitText2ImageJobRequest() = default;
};
class SubmitText2ImageJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> taskId{};
  shared_ptr<string> taskStatus{};

  SubmitText2ImageJobResponseBody() {}

  explicit SubmitText2ImageJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<string>(boost::any_cast<string>(m["TaskStatus"]));
    }
  }


  virtual ~SubmitText2ImageJobResponseBody() = default;
};
class SubmitText2ImageJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SubmitText2ImageJobResponseBody> body{};

  SubmitText2ImageJobResponse() {}

  explicit SubmitText2ImageJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SubmitText2ImageJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SubmitText2ImageJobResponseBody>(model1);
      }
    }
  }


  virtual ~SubmitText2ImageJobResponse() = default;
};
class UpdateDocAttributeRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<bool> delAllTags{};
  shared_ptr<string> docId{};
  shared_ptr<string> name{};
  shared_ptr<vector<string>> tagIds{};

  UpdateDocAttributeRequest() {}

  explicit UpdateDocAttributeRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (delAllTags) {
      res["DelAllTags"] = boost::any(*delAllTags);
    }
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tagIds) {
      res["TagIds"] = boost::any(*tagIds);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DelAllTags") != m.end() && !m["DelAllTags"].empty()) {
      delAllTags = make_shared<bool>(boost::any_cast<bool>(m["DelAllTags"]));
    }
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["TagIds"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIds"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tagIds = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~UpdateDocAttributeRequest() = default;
};
class UpdateDocAttributeShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<bool> delAllTags{};
  shared_ptr<string> docId{};
  shared_ptr<string> name{};
  shared_ptr<string> tagIdsShrink{};

  UpdateDocAttributeShrinkRequest() {}

  explicit UpdateDocAttributeShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (delAllTags) {
      res["DelAllTags"] = boost::any(*delAllTags);
    }
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tagIdsShrink) {
      res["TagIds"] = boost::any(*tagIdsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DelAllTags") != m.end() && !m["DelAllTags"].empty()) {
      delAllTags = make_shared<bool>(boost::any_cast<bool>(m["DelAllTags"]));
    }
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TagIds") != m.end() && !m["TagIds"].empty()) {
      tagIdsShrink = make_shared<string>(boost::any_cast<string>(m["TagIds"]));
    }
  }


  virtual ~UpdateDocAttributeShrinkRequest() = default;
};
class UpdateDocAttributeResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> docId{};
  shared_ptr<string> requestId{};

  UpdateDocAttributeResponseBody() {}

  explicit UpdateDocAttributeResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (docId) {
      res["DocId"] = boost::any(*docId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DocId") != m.end() && !m["DocId"].empty()) {
      docId = make_shared<string>(boost::any_cast<string>(m["DocId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdateDocAttributeResponseBody() = default;
};
class UpdateDocAttributeResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDocAttributeResponseBody> body{};

  UpdateDocAttributeResponse() {}

  explicit UpdateDocAttributeResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDocAttributeResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDocAttributeResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDocAttributeResponse() = default;
};
class UpdateDocumentTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> name{};
  shared_ptr<string> tagId{};

  UpdateDocumentTagRequest() {}

  explicit UpdateDocumentTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~UpdateDocumentTagRequest() = default;
};
class UpdateDocumentTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> tagId{};

  UpdateDocumentTagResponseBody() {}

  explicit UpdateDocumentTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<string>(boost::any_cast<string>(m["TagId"]));
    }
  }


  virtual ~UpdateDocumentTagResponseBody() = default;
};
class UpdateDocumentTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateDocumentTagResponseBody> body{};

  UpdateDocumentTagResponse() {}

  explicit UpdateDocumentTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateDocumentTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateDocumentTagResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateDocumentTagResponse() = default;
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
  CancelFineTuneJobResponse cancelFineTuneJobWithOptions(shared_ptr<CancelFineTuneJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelFineTuneJobResponse cancelFineTuneJob(shared_ptr<CancelFineTuneJobRequest> request);
  CreateDocumentTagResponse createDocumentTagWithOptions(shared_ptr<CreateDocumentTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateDocumentTagResponse createDocumentTag(shared_ptr<CreateDocumentTagRequest> request);
  CreateFineTuneJobResponse createFineTuneJobWithOptions(shared_ptr<CreateFineTuneJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFineTuneJobResponse createFineTuneJob(shared_ptr<CreateFineTuneJobRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  CreateTextEmbeddingsResponse createTextEmbeddingsWithOptions(shared_ptr<CreateTextEmbeddingsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTextEmbeddingsResponse createTextEmbeddings(shared_ptr<CreateTextEmbeddingsRequest> request);
  CreateTokenResponse createTokenWithOptions(shared_ptr<CreateTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTokenResponse createToken(shared_ptr<CreateTokenRequest> request);
  DeleteDocResponse deleteDocWithOptions(shared_ptr<DeleteDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDocResponse deleteDoc(shared_ptr<DeleteDocRequest> request);
  DeleteDocumentTagResponse deleteDocumentTagWithOptions(shared_ptr<DeleteDocumentTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteDocumentTagResponse deleteDocumentTag(shared_ptr<DeleteDocumentTagRequest> request);
  DeleteFineTuneJobResponse deleteFineTuneJobWithOptions(shared_ptr<DeleteFineTuneJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFineTuneJobResponse deleteFineTuneJob(shared_ptr<DeleteFineTuneJobRequest> request);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<DeleteServiceRequest> request);
  DescribeDocResponse describeDocWithOptions(shared_ptr<DescribeDocRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDocResponse describeDoc(shared_ptr<DescribeDocRequest> request);
  DescribeDocumentImportJobResponse describeDocumentImportJobWithOptions(shared_ptr<DescribeDocumentImportJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeDocumentImportJobResponse describeDocumentImportJob(shared_ptr<DescribeDocumentImportJobRequest> request);
  DescribeFineTuneJobResponse describeFineTuneJobWithOptions(shared_ptr<DescribeFineTuneJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFineTuneJobResponse describeFineTuneJob(shared_ptr<DescribeFineTuneJobRequest> request);
  DescribeServiceResponse describeServiceWithOptions(shared_ptr<DescribeServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceResponse describeService(shared_ptr<DescribeServiceRequest> request);
  GetFileStoreUploadPolicyResponse getFileStoreUploadPolicyWithOptions(shared_ptr<GetFileStoreUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileStoreUploadPolicyResponse getFileStoreUploadPolicy(shared_ptr<GetFileStoreUploadPolicyRequest> request);
  GetPromptResponse getPromptWithOptions(shared_ptr<GetPromptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPromptResponse getPrompt(shared_ptr<GetPromptRequest> request);
  GetText2ImageJobResponse getText2ImageJobWithOptions(shared_ptr<GetText2ImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetText2ImageJobResponse getText2ImageJob(shared_ptr<GetText2ImageJobRequest> request);
  ImportUserDocumentResponse importUserDocumentWithOptions(shared_ptr<ImportUserDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportUserDocumentResponse importUserDocument(shared_ptr<ImportUserDocumentRequest> request);
  ListDocsResponse listDocsWithOptions(shared_ptr<ListDocsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDocsResponse listDocs(shared_ptr<ListDocsRequest> request);
  ListDocumentTagsResponse listDocumentTagsWithOptions(shared_ptr<ListDocumentTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDocumentTagsResponse listDocumentTags(shared_ptr<ListDocumentTagsRequest> request);
  ListFineTuneJobsResponse listFineTuneJobsWithOptions(shared_ptr<ListFineTuneJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFineTuneJobsResponse listFineTuneJobs(shared_ptr<ListFineTuneJobsRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  QueryUserDocumentResponse queryUserDocumentWithOptions(shared_ptr<QueryUserDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserDocumentResponse queryUserDocument(shared_ptr<QueryUserDocumentRequest> request);
  SubmitDocumentImportJobResponse submitDocumentImportJobWithOptions(shared_ptr<SubmitDocumentImportJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitDocumentImportJobResponse submitDocumentImportJob(shared_ptr<SubmitDocumentImportJobRequest> request);
  SubmitText2ImageJobResponse submitText2ImageJobWithOptions(shared_ptr<SubmitText2ImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SubmitText2ImageJobResponse submitText2ImageJob(shared_ptr<SubmitText2ImageJobRequest> request);
  UpdateDocAttributeResponse updateDocAttributeWithOptions(shared_ptr<UpdateDocAttributeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDocAttributeResponse updateDocAttribute(shared_ptr<UpdateDocAttributeRequest> request);
  UpdateDocumentTagResponse updateDocumentTagWithOptions(shared_ptr<UpdateDocumentTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateDocumentTagResponse updateDocumentTag(shared_ptr<UpdateDocumentTagRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Bailian20230601

#endif
