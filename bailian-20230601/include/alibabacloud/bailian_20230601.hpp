// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_BAILIAN20230601_H_
#define ALIBABACLOUD_BAILIAN20230601_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Bailian20230601 {
class AddEnterpriseTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> tagName{};

  AddEnterpriseTagRequest() {}

  explicit AddEnterpriseTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~AddEnterpriseTagRequest() = default;
};
class AddEnterpriseTagResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> tagId{};
  shared_ptr<string> tagName{};

  AddEnterpriseTagResponseBodyData() {}

  explicit AddEnterpriseTagResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~AddEnterpriseTagResponseBodyData() = default;
};
class AddEnterpriseTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<AddEnterpriseTagResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AddEnterpriseTagResponseBody() {}

  explicit AddEnterpriseTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddEnterpriseTagResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<AddEnterpriseTagResponseBodyData>(model1);
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


  virtual ~AddEnterpriseTagResponseBody() = default;
};
class AddEnterpriseTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AddEnterpriseTagResponseBody> body{};

  AddEnterpriseTagResponse() {}

  explicit AddEnterpriseTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AddEnterpriseTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AddEnterpriseTagResponseBody>(model1);
      }
    }
  }


  virtual ~AddEnterpriseTagResponse() = default;
};
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
        CancelFineTuneJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CancelFineTuneJobResponseBody>(model1);
      }
    }
  }


  virtual ~CancelFineTuneJobResponse() = default;
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
        CreateTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateTokenResponseBody>(model1);
      }
    }
  }


  virtual ~CreateTokenResponse() = default;
};
class DelEnterpriseTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> tagId{};

  DelEnterpriseTagRequest() {}

  explicit DelEnterpriseTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
  }


  virtual ~DelEnterpriseTagRequest() = default;
};
class DelEnterpriseTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DelEnterpriseTagResponseBody() {}

  explicit DelEnterpriseTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~DelEnterpriseTagResponseBody() = default;
};
class DelEnterpriseTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DelEnterpriseTagResponseBody> body{};

  DelEnterpriseTagResponse() {}

  explicit DelEnterpriseTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DelEnterpriseTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DelEnterpriseTagResponseBody>(model1);
      }
    }
  }


  virtual ~DelEnterpriseTagResponse() = default;
};
class DeleteEnterpriseDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataId{};

  DeleteEnterpriseDataRequest() {}

  explicit DeleteEnterpriseDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
  }


  virtual ~DeleteEnterpriseDataRequest() = default;
};
class DeleteEnterpriseDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  DeleteEnterpriseDataResponseBody() {}

  explicit DeleteEnterpriseDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~DeleteEnterpriseDataResponseBody() = default;
};
class DeleteEnterpriseDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteEnterpriseDataResponseBody> body{};

  DeleteEnterpriseDataResponse() {}

  explicit DeleteEnterpriseDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteEnterpriseDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteEnterpriseDataResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteEnterpriseDataResponse() = default;
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
        DeleteServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteServiceResponse() = default;
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
        DescribeServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DescribeServiceResponseBody>(model1);
      }
    }
  }


  virtual ~DescribeServiceResponse() = default;
};
class GetEnterpriseDataByDataIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataId{};
  shared_ptr<long> ownerId{};

  GetEnterpriseDataByDataIdRequest() {}

  explicit GetEnterpriseDataByDataIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
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
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
  }


  virtual ~GetEnterpriseDataByDataIdRequest() = default;
};
class GetEnterpriseDataByDataIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> dataName{};
  shared_ptr<string> dataSize{};
  shared_ptr<string> dataStatus{};
  shared_ptr<long> dataStatusCode{};
  shared_ptr<string> dataType{};
  shared_ptr<long> dataTypeCode{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> storeType{};
  shared_ptr<string> tags{};
  shared_ptr<string> uploadTime{};

  GetEnterpriseDataByDataIdResponseBodyData() {}

  explicit GetEnterpriseDataByDataIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (dataName) {
      res["DataName"] = boost::any(*dataName);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataStatus) {
      res["DataStatus"] = boost::any(*dataStatus);
    }
    if (dataStatusCode) {
      res["DataStatusCode"] = boost::any(*dataStatusCode);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (dataTypeCode) {
      res["DataTypeCode"] = boost::any(*dataTypeCode);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (storeType) {
      res["StoreType"] = boost::any(*storeType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (uploadTime) {
      res["UploadTime"] = boost::any(*uploadTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("DataName") != m.end() && !m["DataName"].empty()) {
      dataName = make_shared<string>(boost::any_cast<string>(m["DataName"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<string>(boost::any_cast<string>(m["DataSize"]));
    }
    if (m.find("DataStatus") != m.end() && !m["DataStatus"].empty()) {
      dataStatus = make_shared<string>(boost::any_cast<string>(m["DataStatus"]));
    }
    if (m.find("DataStatusCode") != m.end() && !m["DataStatusCode"].empty()) {
      dataStatusCode = make_shared<long>(boost::any_cast<long>(m["DataStatusCode"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DataTypeCode") != m.end() && !m["DataTypeCode"].empty()) {
      dataTypeCode = make_shared<long>(boost::any_cast<long>(m["DataTypeCode"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("StoreType") != m.end() && !m["StoreType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["StoreType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UploadTime") != m.end() && !m["UploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["UploadTime"]));
    }
  }


  virtual ~GetEnterpriseDataByDataIdResponseBodyData() = default;
};
class GetEnterpriseDataByDataIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetEnterpriseDataByDataIdResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEnterpriseDataByDataIdResponseBody() {}

  explicit GetEnterpriseDataByDataIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnterpriseDataByDataIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetEnterpriseDataByDataIdResponseBodyData>(model1);
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


  virtual ~GetEnterpriseDataByDataIdResponseBody() = default;
};
class GetEnterpriseDataByDataIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnterpriseDataByDataIdResponseBody> body{};

  GetEnterpriseDataByDataIdResponse() {}

  explicit GetEnterpriseDataByDataIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnterpriseDataByDataIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseDataByDataIdResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseDataByDataIdResponse() = default;
};
class GetEnterpriseDataChunkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataId{};

  GetEnterpriseDataChunkRequest() {}

  explicit GetEnterpriseDataChunkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
  }


  virtual ~GetEnterpriseDataChunkRequest() = default;
};
class GetEnterpriseDataChunkResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> text{};
  shared_ptr<string> title{};
  shared_ptr<string> titlePath{};

  GetEnterpriseDataChunkResponseBodyData() {}

  explicit GetEnterpriseDataChunkResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (titlePath) {
      res["TitlePath"] = boost::any(*titlePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TitlePath") != m.end() && !m["TitlePath"].empty()) {
      titlePath = make_shared<string>(boost::any_cast<string>(m["TitlePath"]));
    }
  }


  virtual ~GetEnterpriseDataChunkResponseBodyData() = default;
};
class GetEnterpriseDataChunkResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetEnterpriseDataChunkResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEnterpriseDataChunkResponseBody() {}

  explicit GetEnterpriseDataChunkResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetEnterpriseDataChunkResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnterpriseDataChunkResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetEnterpriseDataChunkResponseBodyData>>(expect1);
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


  virtual ~GetEnterpriseDataChunkResponseBody() = default;
};
class GetEnterpriseDataChunkResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnterpriseDataChunkResponseBody> body{};

  GetEnterpriseDataChunkResponse() {}

  explicit GetEnterpriseDataChunkResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnterpriseDataChunkResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseDataChunkResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseDataChunkResponse() = default;
};
class GetEnterpriseDataPageImageRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataId{};

  GetEnterpriseDataPageImageRequest() {}

  explicit GetEnterpriseDataPageImageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
  }


  virtual ~GetEnterpriseDataPageImageRequest() = default;
};
class GetEnterpriseDataPageImageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> height{};
  shared_ptr<string> imageUrl{};
  shared_ptr<string> pageId{};
  shared_ptr<long> width{};

  GetEnterpriseDataPageImageResponseBodyData() {}

  explicit GetEnterpriseDataPageImageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (height) {
      res["Height"] = boost::any(*height);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (pageId) {
      res["PageId"] = boost::any(*pageId);
    }
    if (width) {
      res["Width"] = boost::any(*width);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Height") != m.end() && !m["Height"].empty()) {
      height = make_shared<long>(boost::any_cast<long>(m["Height"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      imageUrl = make_shared<string>(boost::any_cast<string>(m["ImageUrl"]));
    }
    if (m.find("PageId") != m.end() && !m["PageId"].empty()) {
      pageId = make_shared<string>(boost::any_cast<string>(m["PageId"]));
    }
    if (m.find("Width") != m.end() && !m["Width"].empty()) {
      width = make_shared<long>(boost::any_cast<long>(m["Width"]));
    }
  }


  virtual ~GetEnterpriseDataPageImageResponseBodyData() = default;
};
class GetEnterpriseDataPageImageResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<GetEnterpriseDataPageImageResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEnterpriseDataPageImageResponseBody() {}

  explicit GetEnterpriseDataPageImageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<GetEnterpriseDataPageImageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetEnterpriseDataPageImageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetEnterpriseDataPageImageResponseBodyData>>(expect1);
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


  virtual ~GetEnterpriseDataPageImageResponseBody() = default;
};
class GetEnterpriseDataPageImageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnterpriseDataPageImageResponseBody> body{};

  GetEnterpriseDataPageImageResponse() {}

  explicit GetEnterpriseDataPageImageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnterpriseDataPageImageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseDataPageImageResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseDataPageImageResponse() = default;
};
class GetEnterpriseDataParseResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataId{};

  GetEnterpriseDataParseResultRequest() {}

  explicit GetEnterpriseDataParseResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
  }


  virtual ~GetEnterpriseDataParseResultRequest() = default;
};
class GetEnterpriseDataParseResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetEnterpriseDataParseResultResponseBody() {}

  explicit GetEnterpriseDataParseResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~GetEnterpriseDataParseResultResponseBody() = default;
};
class GetEnterpriseDataParseResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetEnterpriseDataParseResultResponseBody> body{};

  GetEnterpriseDataParseResultResponse() {}

  explicit GetEnterpriseDataParseResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetEnterpriseDataParseResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetEnterpriseDataParseResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetEnterpriseDataParseResultResponse() = default;
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
        GetFileStoreUploadPolicyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFileStoreUploadPolicyResponseBody>(model1);
      }
    }
  }


  virtual ~GetFileStoreUploadPolicyResponse() = default;
};
class GetImportTaskResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> taskId{};

  GetImportTaskResultRequest() {}

  explicit GetImportTaskResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetImportTaskResultRequest() = default;
};
class GetImportTaskResultResponseBodyDataDetails : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> dataName{};
  shared_ptr<string> errorMsg{};
  shared_ptr<bool> success{};

  GetImportTaskResultResponseBodyDataDetails() {}

  explicit GetImportTaskResultResponseBodyDataDetails(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (dataName) {
      res["DataName"] = boost::any(*dataName);
    }
    if (errorMsg) {
      res["ErrorMsg"] = boost::any(*errorMsg);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("DataName") != m.end() && !m["DataName"].empty()) {
      dataName = make_shared<string>(boost::any_cast<string>(m["DataName"]));
    }
    if (m.find("ErrorMsg") != m.end() && !m["ErrorMsg"].empty()) {
      errorMsg = make_shared<string>(boost::any_cast<string>(m["ErrorMsg"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
  }


  virtual ~GetImportTaskResultResponseBodyDataDetails() = default;
};
class GetImportTaskResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetImportTaskResultResponseBodyDataDetails>> details{};
  shared_ptr<string> taskId{};
  shared_ptr<long> taskStatus{};
  shared_ptr<string> taskStatusText{};

  GetImportTaskResultResponseBodyData() {}

  explicit GetImportTaskResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (details) {
      vector<boost::any> temp1;
      for(auto item1:*details){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Details"] = boost::any(temp1);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (taskStatusText) {
      res["TaskStatusText"] = boost::any(*taskStatusText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Details") != m.end() && !m["Details"].empty()) {
      if (typeid(vector<boost::any>) == m["Details"].type()) {
        vector<GetImportTaskResultResponseBodyDataDetails> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Details"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetImportTaskResultResponseBodyDataDetails model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        details = make_shared<vector<GetImportTaskResultResponseBodyDataDetails>>(expect1);
      }
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TaskStatusText") != m.end() && !m["TaskStatusText"].empty()) {
      taskStatusText = make_shared<string>(boost::any_cast<string>(m["TaskStatusText"]));
    }
  }


  virtual ~GetImportTaskResultResponseBodyData() = default;
};
class GetImportTaskResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetImportTaskResultResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetImportTaskResultResponseBody() {}

  explicit GetImportTaskResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImportTaskResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetImportTaskResultResponseBodyData>(model1);
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


  virtual ~GetImportTaskResultResponseBody() = default;
};
class GetImportTaskResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetImportTaskResultResponseBody> body{};

  GetImportTaskResultResponse() {}

  explicit GetImportTaskResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetImportTaskResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetImportTaskResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetImportTaskResultResponse() = default;
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
        GetPromptResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPromptResponseBody>(model1);
      }
    }
  }


  virtual ~GetPromptResponse() = default;
};
class ImportEnterpriseDocumentRequestDocumentList : public Darabonba::Model {
public:
  shared_ptr<string> bizId{};
  shared_ptr<bool> fileCanDownload{};
  shared_ptr<string> fileLink{};
  shared_ptr<string> fileName{};
  shared_ptr<string> filePreviewLink{};

  ImportEnterpriseDocumentRequestDocumentList() {}

  explicit ImportEnterpriseDocumentRequestDocumentList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (fileCanDownload) {
      res["FileCanDownload"] = boost::any(*fileCanDownload);
    }
    if (fileLink) {
      res["FileLink"] = boost::any(*fileLink);
    }
    if (fileName) {
      res["FileName"] = boost::any(*fileName);
    }
    if (filePreviewLink) {
      res["FilePreviewLink"] = boost::any(*filePreviewLink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("FileCanDownload") != m.end() && !m["FileCanDownload"].empty()) {
      fileCanDownload = make_shared<bool>(boost::any_cast<bool>(m["FileCanDownload"]));
    }
    if (m.find("FileLink") != m.end() && !m["FileLink"].empty()) {
      fileLink = make_shared<string>(boost::any_cast<string>(m["FileLink"]));
    }
    if (m.find("FileName") != m.end() && !m["FileName"].empty()) {
      fileName = make_shared<string>(boost::any_cast<string>(m["FileName"]));
    }
    if (m.find("FilePreviewLink") != m.end() && !m["FilePreviewLink"].empty()) {
      filePreviewLink = make_shared<string>(boost::any_cast<string>(m["FilePreviewLink"]));
    }
  }


  virtual ~ImportEnterpriseDocumentRequestDocumentList() = default;
};
class ImportEnterpriseDocumentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dataType{};
  shared_ptr<vector<ImportEnterpriseDocumentRequestDocumentList>> documentList{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> storeId{};
  shared_ptr<vector<string>> tags{};

  ImportEnterpriseDocumentRequest() {}

  explicit ImportEnterpriseDocumentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (documentList) {
      vector<boost::any> temp1;
      for(auto item1:*documentList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DocumentList"] = boost::any(temp1);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<long>(boost::any_cast<long>(m["DataType"]));
    }
    if (m.find("DocumentList") != m.end() && !m["DocumentList"].empty()) {
      if (typeid(vector<boost::any>) == m["DocumentList"].type()) {
        vector<ImportEnterpriseDocumentRequestDocumentList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DocumentList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ImportEnterpriseDocumentRequestDocumentList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        documentList = make_shared<vector<ImportEnterpriseDocumentRequestDocumentList>>(expect1);
      }
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<long>(boost::any_cast<long>(m["StoreId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ImportEnterpriseDocumentRequest() = default;
};
class ImportEnterpriseDocumentShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> dataType{};
  shared_ptr<string> documentListShrink{};
  shared_ptr<long> ownerId{};
  shared_ptr<long> storeId{};
  shared_ptr<string> tagsShrink{};

  ImportEnterpriseDocumentShrinkRequest() {}

  explicit ImportEnterpriseDocumentShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (documentListShrink) {
      res["DocumentList"] = boost::any(*documentListShrink);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<long>(boost::any_cast<long>(m["DataType"]));
    }
    if (m.find("DocumentList") != m.end() && !m["DocumentList"].empty()) {
      documentListShrink = make_shared<string>(boost::any_cast<string>(m["DocumentList"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<long>(boost::any_cast<long>(m["StoreId"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~ImportEnterpriseDocumentShrinkRequest() = default;
};
class ImportEnterpriseDocumentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ImportEnterpriseDocumentResponseBody() {}

  explicit ImportEnterpriseDocumentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<string>(boost::any_cast<string>(m["Data"]));
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


  virtual ~ImportEnterpriseDocumentResponseBody() = default;
};
class ImportEnterpriseDocumentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ImportEnterpriseDocumentResponseBody> body{};

  ImportEnterpriseDocumentResponse() {}

  explicit ImportEnterpriseDocumentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ImportEnterpriseDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportEnterpriseDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~ImportEnterpriseDocumentResponse() = default;
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
        ImportUserDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ImportUserDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~ImportUserDocumentResponse() = default;
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
        ListServicesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListServicesResponseBody>(model1);
      }
    }
  }


  virtual ~ListServicesResponse() = default;
};
class QueryEnterpriseDataListRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataName{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeType{};
  shared_ptr<vector<string>> tags{};

  QueryEnterpriseDataListRequest() {}

  explicit QueryEnterpriseDataListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dataName) {
      res["DataName"] = boost::any(*dataName);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (storeType) {
      res["StoreType"] = boost::any(*storeType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataName") != m.end() && !m["DataName"].empty()) {
      dataName = make_shared<string>(boost::any_cast<string>(m["DataName"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StoreType") != m.end() && !m["StoreType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["StoreType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      tags = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~QueryEnterpriseDataListRequest() = default;
};
class QueryEnterpriseDataListShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataName{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> storeType{};
  shared_ptr<string> tagsShrink{};

  QueryEnterpriseDataListShrinkRequest() {}

  explicit QueryEnterpriseDataListShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dataName) {
      res["DataName"] = boost::any(*dataName);
    }
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (storeType) {
      res["StoreType"] = boost::any(*storeType);
    }
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataName") != m.end() && !m["DataName"].empty()) {
      dataName = make_shared<string>(boost::any_cast<string>(m["DataName"]));
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("StoreType") != m.end() && !m["StoreType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["StoreType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~QueryEnterpriseDataListShrinkRequest() = default;
};
class QueryEnterpriseDataListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> dataName{};
  shared_ptr<string> dataSize{};
  shared_ptr<string> dataStatus{};
  shared_ptr<long> dataStatusCode{};
  shared_ptr<string> dataType{};
  shared_ptr<long> dataTypeCode{};
  shared_ptr<string> statusDetail{};
  shared_ptr<string> storeType{};
  shared_ptr<string> tags{};
  shared_ptr<string> uploadTime{};

  QueryEnterpriseDataListResponseBodyDataList() {}

  explicit QueryEnterpriseDataListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (dataName) {
      res["DataName"] = boost::any(*dataName);
    }
    if (dataSize) {
      res["DataSize"] = boost::any(*dataSize);
    }
    if (dataStatus) {
      res["DataStatus"] = boost::any(*dataStatus);
    }
    if (dataStatusCode) {
      res["DataStatusCode"] = boost::any(*dataStatusCode);
    }
    if (dataType) {
      res["DataType"] = boost::any(*dataType);
    }
    if (dataTypeCode) {
      res["DataTypeCode"] = boost::any(*dataTypeCode);
    }
    if (statusDetail) {
      res["StatusDetail"] = boost::any(*statusDetail);
    }
    if (storeType) {
      res["StoreType"] = boost::any(*storeType);
    }
    if (tags) {
      res["Tags"] = boost::any(*tags);
    }
    if (uploadTime) {
      res["UploadTime"] = boost::any(*uploadTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("DataName") != m.end() && !m["DataName"].empty()) {
      dataName = make_shared<string>(boost::any_cast<string>(m["DataName"]));
    }
    if (m.find("DataSize") != m.end() && !m["DataSize"].empty()) {
      dataSize = make_shared<string>(boost::any_cast<string>(m["DataSize"]));
    }
    if (m.find("DataStatus") != m.end() && !m["DataStatus"].empty()) {
      dataStatus = make_shared<string>(boost::any_cast<string>(m["DataStatus"]));
    }
    if (m.find("DataStatusCode") != m.end() && !m["DataStatusCode"].empty()) {
      dataStatusCode = make_shared<long>(boost::any_cast<long>(m["DataStatusCode"]));
    }
    if (m.find("DataType") != m.end() && !m["DataType"].empty()) {
      dataType = make_shared<string>(boost::any_cast<string>(m["DataType"]));
    }
    if (m.find("DataTypeCode") != m.end() && !m["DataTypeCode"].empty()) {
      dataTypeCode = make_shared<long>(boost::any_cast<long>(m["DataTypeCode"]));
    }
    if (m.find("StatusDetail") != m.end() && !m["StatusDetail"].empty()) {
      statusDetail = make_shared<string>(boost::any_cast<string>(m["StatusDetail"]));
    }
    if (m.find("StoreType") != m.end() && !m["StoreType"].empty()) {
      storeType = make_shared<string>(boost::any_cast<string>(m["StoreType"]));
    }
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tags = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
    if (m.find("UploadTime") != m.end() && !m["UploadTime"].empty()) {
      uploadTime = make_shared<string>(boost::any_cast<string>(m["UploadTime"]));
    }
  }


  virtual ~QueryEnterpriseDataListResponseBodyDataList() = default;
};
class QueryEnterpriseDataListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryEnterpriseDataListResponseBodyDataList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryEnterpriseDataListResponseBodyData() {}

  explicit QueryEnterpriseDataListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryEnterpriseDataListResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEnterpriseDataListResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryEnterpriseDataListResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryEnterpriseDataListResponseBodyData() = default;
};
class QueryEnterpriseDataListResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryEnterpriseDataListResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEnterpriseDataListResponseBody() {}

  explicit QueryEnterpriseDataListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEnterpriseDataListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryEnterpriseDataListResponseBodyData>(model1);
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


  virtual ~QueryEnterpriseDataListResponseBody() = default;
};
class QueryEnterpriseDataListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEnterpriseDataListResponseBody> body{};

  QueryEnterpriseDataListResponse() {}

  explicit QueryEnterpriseDataListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEnterpriseDataListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEnterpriseDataListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEnterpriseDataListResponse() = default;
};
class QueryEnterpriseDataTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataId{};

  QueryEnterpriseDataTagRequest() {}

  explicit QueryEnterpriseDataTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
  }


  virtual ~QueryEnterpriseDataTagRequest() = default;
};
class QueryEnterpriseDataTagResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<long> tagId{};
  shared_ptr<string> tagName{};

  QueryEnterpriseDataTagResponseBodyData() {}

  explicit QueryEnterpriseDataTagResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (tagId) {
      res["TagId"] = boost::any(*tagId);
    }
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~QueryEnterpriseDataTagResponseBodyData() = default;
};
class QueryEnterpriseDataTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryEnterpriseDataTagResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEnterpriseDataTagResponseBody() {}

  explicit QueryEnterpriseDataTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<QueryEnterpriseDataTagResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEnterpriseDataTagResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryEnterpriseDataTagResponseBodyData>>(expect1);
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


  virtual ~QueryEnterpriseDataTagResponseBody() = default;
};
class QueryEnterpriseDataTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEnterpriseDataTagResponseBody> body{};

  QueryEnterpriseDataTagResponse() {}

  explicit QueryEnterpriseDataTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEnterpriseDataTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEnterpriseDataTagResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEnterpriseDataTagResponse() = default;
};
class QueryEnterpriseTagListRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};

  QueryEnterpriseTagListRequest() {}

  explicit QueryEnterpriseTagListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~QueryEnterpriseTagListRequest() = default;
};
class QueryEnterpriseTagListResponseBodyDataList : public Darabonba::Model {
public:
  shared_ptr<long> tagId{};
  shared_ptr<string> tagName{};

  QueryEnterpriseTagListResponseBodyDataList() {}

  explicit QueryEnterpriseTagListResponseBodyDataList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~QueryEnterpriseTagListResponseBodyDataList() = default;
};
class QueryEnterpriseTagListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<QueryEnterpriseTagListResponseBodyDataList>> list{};
  shared_ptr<long> pageNo{};
  shared_ptr<long> pageSize{};
  shared_ptr<long> total{};

  QueryEnterpriseTagListResponseBodyData() {}

  explicit QueryEnterpriseTagListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (pageNo) {
      res["PageNo"] = boost::any(*pageNo);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (total) {
      res["Total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("List") != m.end() && !m["List"].empty()) {
      if (typeid(vector<boost::any>) == m["List"].type()) {
        vector<QueryEnterpriseTagListResponseBodyDataList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["List"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryEnterpriseTagListResponseBodyDataList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        list = make_shared<vector<QueryEnterpriseTagListResponseBodyDataList>>(expect1);
      }
    }
    if (m.find("PageNo") != m.end() && !m["PageNo"].empty()) {
      pageNo = make_shared<long>(boost::any_cast<long>(m["PageNo"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("Total") != m.end() && !m["Total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["Total"]));
    }
  }


  virtual ~QueryEnterpriseTagListResponseBodyData() = default;
};
class QueryEnterpriseTagListResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryEnterpriseTagListResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryEnterpriseTagListResponseBody() {}

  explicit QueryEnterpriseTagListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEnterpriseTagListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<QueryEnterpriseTagListResponseBodyData>(model1);
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


  virtual ~QueryEnterpriseTagListResponseBody() = default;
};
class QueryEnterpriseTagListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryEnterpriseTagListResponseBody> body{};

  QueryEnterpriseTagListResponse() {}

  explicit QueryEnterpriseTagListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryEnterpriseTagListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryEnterpriseTagListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryEnterpriseTagListResponse() = default;
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
        QueryUserDocumentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryUserDocumentResponseBody>(model1);
      }
    }
  }


  virtual ~QueryUserDocumentResponse() = default;
};
class SearchEnterpriseDataRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<vector<string>> dataIdList{};
  shared_ptr<bool> enableRank{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> query{};
  shared_ptr<long> storeId{};
  shared_ptr<vector<long>> tagIdList{};

  SearchEnterpriseDataRequest() {}

  explicit SearchEnterpriseDataRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dataIdList) {
      res["DataIdList"] = boost::any(*dataIdList);
    }
    if (enableRank) {
      res["EnableRank"] = boost::any(*enableRank);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (tagIdList) {
      res["TagIdList"] = boost::any(*tagIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataIdList") != m.end() && !m["DataIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["DataIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["DataIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      dataIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("EnableRank") != m.end() && !m["EnableRank"].empty()) {
      enableRank = make_shared<bool>(boost::any_cast<bool>(m["EnableRank"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<long>(boost::any_cast<long>(m["StoreId"]));
    }
    if (m.find("TagIdList") != m.end() && !m["TagIdList"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["TagIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["TagIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      tagIdList = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~SearchEnterpriseDataRequest() = default;
};
class SearchEnterpriseDataShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataIdListShrink{};
  shared_ptr<bool> enableRank{};
  shared_ptr<long> ownerId{};
  shared_ptr<string> query{};
  shared_ptr<long> storeId{};
  shared_ptr<string> tagIdListShrink{};

  SearchEnterpriseDataShrinkRequest() {}

  explicit SearchEnterpriseDataShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (dataIdListShrink) {
      res["DataIdList"] = boost::any(*dataIdListShrink);
    }
    if (enableRank) {
      res["EnableRank"] = boost::any(*enableRank);
    }
    if (ownerId) {
      res["OwnerId"] = boost::any(*ownerId);
    }
    if (query) {
      res["Query"] = boost::any(*query);
    }
    if (storeId) {
      res["StoreId"] = boost::any(*storeId);
    }
    if (tagIdListShrink) {
      res["TagIdList"] = boost::any(*tagIdListShrink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("DataIdList") != m.end() && !m["DataIdList"].empty()) {
      dataIdListShrink = make_shared<string>(boost::any_cast<string>(m["DataIdList"]));
    }
    if (m.find("EnableRank") != m.end() && !m["EnableRank"].empty()) {
      enableRank = make_shared<bool>(boost::any_cast<bool>(m["EnableRank"]));
    }
    if (m.find("OwnerId") != m.end() && !m["OwnerId"].empty()) {
      ownerId = make_shared<long>(boost::any_cast<long>(m["OwnerId"]));
    }
    if (m.find("Query") != m.end() && !m["Query"].empty()) {
      query = make_shared<string>(boost::any_cast<string>(m["Query"]));
    }
    if (m.find("StoreId") != m.end() && !m["StoreId"].empty()) {
      storeId = make_shared<long>(boost::any_cast<long>(m["StoreId"]));
    }
    if (m.find("TagIdList") != m.end() && !m["TagIdList"].empty()) {
      tagIdListShrink = make_shared<string>(boost::any_cast<string>(m["TagIdList"]));
    }
  }


  virtual ~SearchEnterpriseDataShrinkRequest() = default;
};
class SearchEnterpriseDataResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> dataId{};
  shared_ptr<string> dataName{};
  shared_ptr<string> score{};
  shared_ptr<string> source{};
  shared_ptr<string> text{};
  shared_ptr<string> title{};
  shared_ptr<string> titlePath{};

  SearchEnterpriseDataResponseBodyData() {}

  explicit SearchEnterpriseDataResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (dataName) {
      res["DataName"] = boost::any(*dataName);
    }
    if (score) {
      res["Score"] = boost::any(*score);
    }
    if (source) {
      res["Source"] = boost::any(*source);
    }
    if (text) {
      res["Text"] = boost::any(*text);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    if (titlePath) {
      res["TitlePath"] = boost::any(*titlePath);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("DataName") != m.end() && !m["DataName"].empty()) {
      dataName = make_shared<string>(boost::any_cast<string>(m["DataName"]));
    }
    if (m.find("Score") != m.end() && !m["Score"].empty()) {
      score = make_shared<string>(boost::any_cast<string>(m["Score"]));
    }
    if (m.find("Source") != m.end() && !m["Source"].empty()) {
      source = make_shared<string>(boost::any_cast<string>(m["Source"]));
    }
    if (m.find("Text") != m.end() && !m["Text"].empty()) {
      text = make_shared<string>(boost::any_cast<string>(m["Text"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
    if (m.find("TitlePath") != m.end() && !m["TitlePath"].empty()) {
      titlePath = make_shared<string>(boost::any_cast<string>(m["TitlePath"]));
    }
  }


  virtual ~SearchEnterpriseDataResponseBodyData() = default;
};
class SearchEnterpriseDataResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<SearchEnterpriseDataResponseBodyData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SearchEnterpriseDataResponseBody() {}

  explicit SearchEnterpriseDataResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["Data"] = boost::any(temp1);
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
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<SearchEnterpriseDataResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SearchEnterpriseDataResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<SearchEnterpriseDataResponseBodyData>>(expect1);
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


  virtual ~SearchEnterpriseDataResponseBody() = default;
};
class SearchEnterpriseDataResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SearchEnterpriseDataResponseBody> body{};

  SearchEnterpriseDataResponse() {}

  explicit SearchEnterpriseDataResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SearchEnterpriseDataResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SearchEnterpriseDataResponseBody>(model1);
      }
    }
  }


  virtual ~SearchEnterpriseDataResponse() = default;
};
class UpdateEnterpriseDataInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> bizId{};
  shared_ptr<string> dataId{};
  shared_ptr<string> dataName{};
  shared_ptr<string> filePreviewLink{};

  UpdateEnterpriseDataInfoRequest() {}

  explicit UpdateEnterpriseDataInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentKey) {
      res["AgentKey"] = boost::any(*agentKey);
    }
    if (bizId) {
      res["BizId"] = boost::any(*bizId);
    }
    if (dataId) {
      res["DataId"] = boost::any(*dataId);
    }
    if (dataName) {
      res["DataName"] = boost::any(*dataName);
    }
    if (filePreviewLink) {
      res["FilePreviewLink"] = boost::any(*filePreviewLink);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("BizId") != m.end() && !m["BizId"].empty()) {
      bizId = make_shared<string>(boost::any_cast<string>(m["BizId"]));
    }
    if (m.find("DataId") != m.end() && !m["DataId"].empty()) {
      dataId = make_shared<string>(boost::any_cast<string>(m["DataId"]));
    }
    if (m.find("DataName") != m.end() && !m["DataName"].empty()) {
      dataName = make_shared<string>(boost::any_cast<string>(m["DataName"]));
    }
    if (m.find("FilePreviewLink") != m.end() && !m["FilePreviewLink"].empty()) {
      filePreviewLink = make_shared<string>(boost::any_cast<string>(m["FilePreviewLink"]));
    }
  }


  virtual ~UpdateEnterpriseDataInfoRequest() = default;
};
class UpdateEnterpriseDataInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateEnterpriseDataInfoResponseBody() {}

  explicit UpdateEnterpriseDataInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~UpdateEnterpriseDataInfoResponseBody() = default;
};
class UpdateEnterpriseDataInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnterpriseDataInfoResponseBody> body{};

  UpdateEnterpriseDataInfoResponse() {}

  explicit UpdateEnterpriseDataInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEnterpriseDataInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnterpriseDataInfoResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnterpriseDataInfoResponse() = default;
};
class UpdateEnterpriseDataTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataId{};
  shared_ptr<vector<long>> tags{};

  UpdateEnterpriseDataTagRequest() {}

  explicit UpdateEnterpriseDataTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tags) {
      res["Tags"] = boost::any(*tags);
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      vector<long> toVec1;
      if (typeid(vector<boost::any>) == m["Tags"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Tags"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<long>(item));
        }
      }
      tags = make_shared<vector<long>>(toVec1);
    }
  }


  virtual ~UpdateEnterpriseDataTagRequest() = default;
};
class UpdateEnterpriseDataTagShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<string> dataId{};
  shared_ptr<string> tagsShrink{};

  UpdateEnterpriseDataTagShrinkRequest() {}

  explicit UpdateEnterpriseDataTagShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagsShrink) {
      res["Tags"] = boost::any(*tagsShrink);
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
    if (m.find("Tags") != m.end() && !m["Tags"].empty()) {
      tagsShrink = make_shared<string>(boost::any_cast<string>(m["Tags"]));
    }
  }


  virtual ~UpdateEnterpriseDataTagShrinkRequest() = default;
};
class UpdateEnterpriseDataTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<bool> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateEnterpriseDataTagResponseBody() {}

  explicit UpdateEnterpriseDataTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = boost::any(*data);
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
      data = make_shared<bool>(boost::any_cast<bool>(m["Data"]));
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


  virtual ~UpdateEnterpriseDataTagResponseBody() = default;
};
class UpdateEnterpriseDataTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnterpriseDataTagResponseBody> body{};

  UpdateEnterpriseDataTagResponse() {}

  explicit UpdateEnterpriseDataTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEnterpriseDataTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnterpriseDataTagResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnterpriseDataTagResponse() = default;
};
class UpdateEnterpriseTagRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentKey{};
  shared_ptr<long> tagId{};
  shared_ptr<string> tagName{};

  UpdateEnterpriseTagRequest() {}

  explicit UpdateEnterpriseTagRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (tagName) {
      res["TagName"] = boost::any(*tagName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AgentKey") != m.end() && !m["AgentKey"].empty()) {
      agentKey = make_shared<string>(boost::any_cast<string>(m["AgentKey"]));
    }
    if (m.find("TagId") != m.end() && !m["TagId"].empty()) {
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~UpdateEnterpriseTagRequest() = default;
};
class UpdateEnterpriseTagResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> tagId{};
  shared_ptr<string> tagName{};

  UpdateEnterpriseTagResponseBodyData() {}

  explicit UpdateEnterpriseTagResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      tagId = make_shared<long>(boost::any_cast<long>(m["TagId"]));
    }
    if (m.find("TagName") != m.end() && !m["TagName"].empty()) {
      tagName = make_shared<string>(boost::any_cast<string>(m["TagName"]));
    }
  }


  virtual ~UpdateEnterpriseTagResponseBodyData() = default;
};
class UpdateEnterpriseTagResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateEnterpriseTagResponseBodyData> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMsg{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateEnterpriseTagResponseBody() {}

  explicit UpdateEnterpriseTagResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEnterpriseTagResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<UpdateEnterpriseTagResponseBodyData>(model1);
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


  virtual ~UpdateEnterpriseTagResponseBody() = default;
};
class UpdateEnterpriseTagResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateEnterpriseTagResponseBody> body{};

  UpdateEnterpriseTagResponse() {}

  explicit UpdateEnterpriseTagResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateEnterpriseTagResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateEnterpriseTagResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateEnterpriseTagResponse() = default;
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
  AddEnterpriseTagResponse addEnterpriseTagWithOptions(shared_ptr<AddEnterpriseTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AddEnterpriseTagResponse addEnterpriseTag(shared_ptr<AddEnterpriseTagRequest> request);
  CancelFineTuneJobResponse cancelFineTuneJobWithOptions(shared_ptr<CancelFineTuneJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CancelFineTuneJobResponse cancelFineTuneJob(shared_ptr<CancelFineTuneJobRequest> request);
  CreateFineTuneJobResponse createFineTuneJobWithOptions(shared_ptr<CreateFineTuneJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateFineTuneJobResponse createFineTuneJob(shared_ptr<CreateFineTuneJobRequest> request);
  CreateServiceResponse createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateServiceResponse createService(shared_ptr<CreateServiceRequest> request);
  CreateTextEmbeddingsResponse createTextEmbeddingsWithOptions(shared_ptr<CreateTextEmbeddingsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTextEmbeddingsResponse createTextEmbeddings(shared_ptr<CreateTextEmbeddingsRequest> request);
  CreateTokenResponse createTokenWithOptions(shared_ptr<CreateTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateTokenResponse createToken(shared_ptr<CreateTokenRequest> request);
  DelEnterpriseTagResponse delEnterpriseTagWithOptions(shared_ptr<DelEnterpriseTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DelEnterpriseTagResponse delEnterpriseTag(shared_ptr<DelEnterpriseTagRequest> request);
  DeleteEnterpriseDataResponse deleteEnterpriseDataWithOptions(shared_ptr<DeleteEnterpriseDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteEnterpriseDataResponse deleteEnterpriseData(shared_ptr<DeleteEnterpriseDataRequest> request);
  DeleteFineTuneJobResponse deleteFineTuneJobWithOptions(shared_ptr<DeleteFineTuneJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFineTuneJobResponse deleteFineTuneJob(shared_ptr<DeleteFineTuneJobRequest> request);
  DeleteServiceResponse deleteServiceWithOptions(shared_ptr<DeleteServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteServiceResponse deleteService(shared_ptr<DeleteServiceRequest> request);
  DescribeFineTuneJobResponse describeFineTuneJobWithOptions(shared_ptr<DescribeFineTuneJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeFineTuneJobResponse describeFineTuneJob(shared_ptr<DescribeFineTuneJobRequest> request);
  DescribeServiceResponse describeServiceWithOptions(shared_ptr<DescribeServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DescribeServiceResponse describeService(shared_ptr<DescribeServiceRequest> request);
  GetEnterpriseDataByDataIdResponse getEnterpriseDataByDataIdWithOptions(shared_ptr<GetEnterpriseDataByDataIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseDataByDataIdResponse getEnterpriseDataByDataId(shared_ptr<GetEnterpriseDataByDataIdRequest> request);
  GetEnterpriseDataChunkResponse getEnterpriseDataChunkWithOptions(shared_ptr<GetEnterpriseDataChunkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseDataChunkResponse getEnterpriseDataChunk(shared_ptr<GetEnterpriseDataChunkRequest> request);
  GetEnterpriseDataPageImageResponse getEnterpriseDataPageImageWithOptions(shared_ptr<GetEnterpriseDataPageImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseDataPageImageResponse getEnterpriseDataPageImage(shared_ptr<GetEnterpriseDataPageImageRequest> request);
  GetEnterpriseDataParseResultResponse getEnterpriseDataParseResultWithOptions(shared_ptr<GetEnterpriseDataParseResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetEnterpriseDataParseResultResponse getEnterpriseDataParseResult(shared_ptr<GetEnterpriseDataParseResultRequest> request);
  GetFileStoreUploadPolicyResponse getFileStoreUploadPolicyWithOptions(shared_ptr<GetFileStoreUploadPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFileStoreUploadPolicyResponse getFileStoreUploadPolicy(shared_ptr<GetFileStoreUploadPolicyRequest> request);
  GetImportTaskResultResponse getImportTaskResultWithOptions(shared_ptr<GetImportTaskResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetImportTaskResultResponse getImportTaskResult(shared_ptr<GetImportTaskResultRequest> request);
  GetPromptResponse getPromptWithOptions(shared_ptr<GetPromptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPromptResponse getPrompt(shared_ptr<GetPromptRequest> request);
  ImportEnterpriseDocumentResponse importEnterpriseDocumentWithOptions(shared_ptr<ImportEnterpriseDocumentRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportEnterpriseDocumentResponse importEnterpriseDocument(shared_ptr<ImportEnterpriseDocumentRequest> request);
  ImportUserDocumentResponse importUserDocumentWithOptions(shared_ptr<ImportUserDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ImportUserDocumentResponse importUserDocument(shared_ptr<ImportUserDocumentRequest> request);
  ListFineTuneJobsResponse listFineTuneJobsWithOptions(shared_ptr<ListFineTuneJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFineTuneJobsResponse listFineTuneJobs(shared_ptr<ListFineTuneJobsRequest> request);
  ListServicesResponse listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListServicesResponse listServices(shared_ptr<ListServicesRequest> request);
  QueryEnterpriseDataListResponse queryEnterpriseDataListWithOptions(shared_ptr<QueryEnterpriseDataListRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEnterpriseDataListResponse queryEnterpriseDataList(shared_ptr<QueryEnterpriseDataListRequest> request);
  QueryEnterpriseDataTagResponse queryEnterpriseDataTagWithOptions(shared_ptr<QueryEnterpriseDataTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEnterpriseDataTagResponse queryEnterpriseDataTag(shared_ptr<QueryEnterpriseDataTagRequest> request);
  QueryEnterpriseTagListResponse queryEnterpriseTagListWithOptions(shared_ptr<QueryEnterpriseTagListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryEnterpriseTagListResponse queryEnterpriseTagList(shared_ptr<QueryEnterpriseTagListRequest> request);
  QueryUserDocumentResponse queryUserDocumentWithOptions(shared_ptr<QueryUserDocumentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryUserDocumentResponse queryUserDocument(shared_ptr<QueryUserDocumentRequest> request);
  SearchEnterpriseDataResponse searchEnterpriseDataWithOptions(shared_ptr<SearchEnterpriseDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SearchEnterpriseDataResponse searchEnterpriseData(shared_ptr<SearchEnterpriseDataRequest> request);
  UpdateEnterpriseDataInfoResponse updateEnterpriseDataInfoWithOptions(shared_ptr<UpdateEnterpriseDataInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnterpriseDataInfoResponse updateEnterpriseDataInfo(shared_ptr<UpdateEnterpriseDataInfoRequest> request);
  UpdateEnterpriseDataTagResponse updateEnterpriseDataTagWithOptions(shared_ptr<UpdateEnterpriseDataTagRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnterpriseDataTagResponse updateEnterpriseDataTag(shared_ptr<UpdateEnterpriseDataTagRequest> request);
  UpdateEnterpriseTagResponse updateEnterpriseTagWithOptions(shared_ptr<UpdateEnterpriseTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateEnterpriseTagResponse updateEnterpriseTag(shared_ptr<UpdateEnterpriseTagRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Bailian20230601

#endif
