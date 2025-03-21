// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_AICONTENT20240611_H_
#define ALIBABACLOUD_AICONTENT20240611_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_AiContent20240611 {
class OpenApiMultiResponseDataInferenceJobList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> promptId{};
  shared_ptr<vector<string>> resultImageUrl{};

  OpenApiMultiResponseDataInferenceJobList() {}

  explicit OpenApiMultiResponseDataInferenceJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (promptId) {
      res["promptId"] = boost::any(*promptId);
    }
    if (resultImageUrl) {
      res["resultImageUrl"] = boost::any(*resultImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("promptId") != m.end() && !m["promptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["promptId"]));
    }
    if (m.find("resultImageUrl") != m.end() && !m["resultImageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultImageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultImageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultImageUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~OpenApiMultiResponseDataInferenceJobList() = default;
};
class OpenApiMultiResponseData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<vector<string>> imageUrl{};
  shared_ptr<long> inferenceImageCount{};
  shared_ptr<vector<OpenApiMultiResponseDataInferenceJobList>> inferenceJobList{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<string> objectType{};

  OpenApiMultiResponseData() {}

  explicit OpenApiMultiResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (inferenceImageCount) {
      res["inferenceImageCount"] = boost::any(*inferenceImageCount);
    }
    if (inferenceJobList) {
      vector<boost::any> temp1;
      for(auto item1:*inferenceJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["inferenceJobList"] = boost::any(temp1);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["imageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["imageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("inferenceImageCount") != m.end() && !m["inferenceImageCount"].empty()) {
      inferenceImageCount = make_shared<long>(boost::any_cast<long>(m["inferenceImageCount"]));
    }
    if (m.find("inferenceJobList") != m.end() && !m["inferenceJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["inferenceJobList"].type()) {
        vector<OpenApiMultiResponseDataInferenceJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["inferenceJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OpenApiMultiResponseDataInferenceJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inferenceJobList = make_shared<vector<OpenApiMultiResponseDataInferenceJobList>>(expect1);
      }
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
  }


  virtual ~OpenApiMultiResponseData() = default;
};
class OpenApiMultiResponse : public Darabonba::Model {
public:
  shared_ptr<vector<OpenApiMultiResponseData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OpenApiMultiResponse() {}

  explicit OpenApiMultiResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        vector<OpenApiMultiResponseData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OpenApiMultiResponseData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<OpenApiMultiResponseData>>(expect1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~OpenApiMultiResponse() = default;
};
class OpenApiSingleResponseData : public Darabonba::Model {
public:
  shared_ptr<string> modelTrainStatus{};

  OpenApiSingleResponseData() {}

  explicit OpenApiSingleResponseData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelTrainStatus) {
      res["modelTrainStatus"] = boost::any(*modelTrainStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modelTrainStatus") != m.end() && !m["modelTrainStatus"].empty()) {
      modelTrainStatus = make_shared<string>(boost::any_cast<string>(m["modelTrainStatus"]));
    }
  }


  virtual ~OpenApiSingleResponseData() = default;
};
class OpenApiSingleResponse : public Darabonba::Model {
public:
  shared_ptr<OpenApiSingleResponseData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  OpenApiSingleResponse() {}

  explicit OpenApiSingleResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        OpenApiSingleResponseData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<OpenApiSingleResponseData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~OpenApiSingleResponse() = default;
};
class Personalizedtxt2imgAddInferenceJobCmd : public Darabonba::Model {
public:
  shared_ptr<long> imageNumber{};
  shared_ptr<string> modelId{};
  shared_ptr<string> prompt{};
  shared_ptr<long> seed{};

  Personalizedtxt2imgAddInferenceJobCmd() {}

  explicit Personalizedtxt2imgAddInferenceJobCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageNumber) {
      res["imageNumber"] = boost::any(*imageNumber);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (seed) {
      res["seed"] = boost::any(*seed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("imageNumber") != m.end() && !m["imageNumber"].empty()) {
      imageNumber = make_shared<long>(boost::any_cast<long>(m["imageNumber"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("seed") != m.end() && !m["seed"].empty()) {
      seed = make_shared<long>(boost::any_cast<long>(m["seed"]));
    }
  }


  virtual ~Personalizedtxt2imgAddInferenceJobCmd() = default;
};
class Personalizedtxt2imgAddModelTrainJobCmd : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imageUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> objectType{};

  Personalizedtxt2imgAddModelTrainJobCmd() {}

  explicit Personalizedtxt2imgAddModelTrainJobCmd(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["imageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["imageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
  }


  virtual ~Personalizedtxt2imgAddModelTrainJobCmd() = default;
};
class Personalizedtxt2imgInferenceJobInfoDTO : public Darabonba::Model {
public:
  shared_ptr<string> createUserId{};
  shared_ptr<string> id{};
  shared_ptr<string> jobStatus{};
  shared_ptr<string> modelId{};
  shared_ptr<vector<string>> resultImageUrl{};

  Personalizedtxt2imgInferenceJobInfoDTO() {}

  explicit Personalizedtxt2imgInferenceJobInfoDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createUserId) {
      res["createUserId"] = boost::any(*createUserId);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (resultImageUrl) {
      res["resultImageUrl"] = boost::any(*resultImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createUserId") != m.end() && !m["createUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["createUserId"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("resultImageUrl") != m.end() && !m["resultImageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultImageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultImageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultImageUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~Personalizedtxt2imgInferenceJobInfoDTO() = default;
};
class Personalizedtxt2imgModelTrainJobInfoDTO : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> createUserId{};
  shared_ptr<vector<string>> imageUrl{};
  shared_ptr<vector<Personalizedtxt2imgInferenceJobInfoDTO>> inferenceJobList{};
  shared_ptr<string> jobStatus{};
  shared_ptr<string> name{};
  shared_ptr<string> objectType{};
  shared_ptr<string> id{};

  Personalizedtxt2imgModelTrainJobInfoDTO() {}

  explicit Personalizedtxt2imgModelTrainJobInfoDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (createUserId) {
      res["CreateUserId"] = boost::any(*createUserId);
    }
    if (imageUrl) {
      res["ImageUrl"] = boost::any(*imageUrl);
    }
    if (inferenceJobList) {
      vector<boost::any> temp1;
      for(auto item1:*inferenceJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InferenceJobList"] = boost::any(temp1);
    }
    if (jobStatus) {
      res["JobStatus"] = boost::any(*jobStatus);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (objectType) {
      res["ObjectType"] = boost::any(*objectType);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("CreateUserId") != m.end() && !m["CreateUserId"].empty()) {
      createUserId = make_shared<string>(boost::any_cast<string>(m["CreateUserId"]));
    }
    if (m.find("ImageUrl") != m.end() && !m["ImageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["ImageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["ImageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("InferenceJobList") != m.end() && !m["InferenceJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["InferenceJobList"].type()) {
        vector<Personalizedtxt2imgInferenceJobInfoDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InferenceJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Personalizedtxt2imgInferenceJobInfoDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inferenceJobList = make_shared<vector<Personalizedtxt2imgInferenceJobInfoDTO>>(expect1);
      }
    }
    if (m.find("JobStatus") != m.end() && !m["JobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["JobStatus"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ObjectType") != m.end() && !m["ObjectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["ObjectType"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
  }


  virtual ~Personalizedtxt2imgModelTrainJobInfoDTO() = default;
};
class AITeacherExpansionPracticeTaskGenerateRequest : public Darabonba::Model {
public:
  shared_ptr<string> grade{};
  shared_ptr<vector<string>> keySentences{};
  shared_ptr<vector<string>> keyWords{};
  shared_ptr<string> learningObject{};
  shared_ptr<string> textContent{};
  shared_ptr<string> textbook{};
  shared_ptr<string> topic{};
  shared_ptr<string> userId{};

  AITeacherExpansionPracticeTaskGenerateRequest() {}

  explicit AITeacherExpansionPracticeTaskGenerateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grade) {
      res["grade"] = boost::any(*grade);
    }
    if (keySentences) {
      res["keySentences"] = boost::any(*keySentences);
    }
    if (keyWords) {
      res["keyWords"] = boost::any(*keyWords);
    }
    if (learningObject) {
      res["learningObject"] = boost::any(*learningObject);
    }
    if (textContent) {
      res["textContent"] = boost::any(*textContent);
    }
    if (textbook) {
      res["textbook"] = boost::any(*textbook);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("grade") != m.end() && !m["grade"].empty()) {
      grade = make_shared<string>(boost::any_cast<string>(m["grade"]));
    }
    if (m.find("keySentences") != m.end() && !m["keySentences"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keySentences"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keySentences"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keySentences = make_shared<vector<string>>(toVec1);
    }
    if (m.find("keyWords") != m.end() && !m["keyWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keyWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keyWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyWords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("learningObject") != m.end() && !m["learningObject"].empty()) {
      learningObject = make_shared<string>(boost::any_cast<string>(m["learningObject"]));
    }
    if (m.find("textContent") != m.end() && !m["textContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["textContent"]));
    }
    if (m.find("textbook") != m.end() && !m["textbook"].empty()) {
      textbook = make_shared<string>(boost::any_cast<string>(m["textbook"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~AITeacherExpansionPracticeTaskGenerateRequest() = default;
};
class AITeacherExpansionPracticeTaskGenerateResponseBodyDataRoleSet : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> user{};

  AITeacherExpansionPracticeTaskGenerateResponseBodyDataRoleSet() {}

  explicit AITeacherExpansionPracticeTaskGenerateResponseBodyDataRoleSet(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~AITeacherExpansionPracticeTaskGenerateResponseBodyDataRoleSet() = default;
};
class AITeacherExpansionPracticeTaskGenerateResponseBodyDataTaskContent : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> user{};

  AITeacherExpansionPracticeTaskGenerateResponseBodyDataTaskContent() {}

  explicit AITeacherExpansionPracticeTaskGenerateResponseBodyDataTaskContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~AITeacherExpansionPracticeTaskGenerateResponseBodyDataTaskContent() = default;
};
class AITeacherExpansionPracticeTaskGenerateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> backgroundDescription{};
  shared_ptr<AITeacherExpansionPracticeTaskGenerateResponseBodyDataRoleSet> roleSet{};
  shared_ptr<string> startSentence{};
  shared_ptr<vector<AITeacherExpansionPracticeTaskGenerateResponseBodyDataTaskContent>> taskContent{};
  shared_ptr<string> taskType{};

  AITeacherExpansionPracticeTaskGenerateResponseBodyData() {}

  explicit AITeacherExpansionPracticeTaskGenerateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (backgroundDescription) {
      res["backgroundDescription"] = boost::any(*backgroundDescription);
    }
    if (roleSet) {
      res["roleSet"] = roleSet ? boost::any(roleSet->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startSentence) {
      res["startSentence"] = boost::any(*startSentence);
    }
    if (taskContent) {
      vector<boost::any> temp1;
      for(auto item1:*taskContent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskContent"] = boost::any(temp1);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("backgroundDescription") != m.end() && !m["backgroundDescription"].empty()) {
      backgroundDescription = make_shared<string>(boost::any_cast<string>(m["backgroundDescription"]));
    }
    if (m.find("roleSet") != m.end() && !m["roleSet"].empty()) {
      if (typeid(map<string, boost::any>) == m["roleSet"].type()) {
        AITeacherExpansionPracticeTaskGenerateResponseBodyDataRoleSet model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["roleSet"]));
        roleSet = make_shared<AITeacherExpansionPracticeTaskGenerateResponseBodyDataRoleSet>(model1);
      }
    }
    if (m.find("startSentence") != m.end() && !m["startSentence"].empty()) {
      startSentence = make_shared<string>(boost::any_cast<string>(m["startSentence"]));
    }
    if (m.find("taskContent") != m.end() && !m["taskContent"].empty()) {
      if (typeid(vector<boost::any>) == m["taskContent"].type()) {
        vector<AITeacherExpansionPracticeTaskGenerateResponseBodyDataTaskContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskContent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AITeacherExpansionPracticeTaskGenerateResponseBodyDataTaskContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskContent = make_shared<vector<AITeacherExpansionPracticeTaskGenerateResponseBodyDataTaskContent>>(expect1);
      }
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
  }


  virtual ~AITeacherExpansionPracticeTaskGenerateResponseBodyData() = default;
};
class AITeacherExpansionPracticeTaskGenerateResponseBody : public Darabonba::Model {
public:
  shared_ptr<AITeacherExpansionPracticeTaskGenerateResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AITeacherExpansionPracticeTaskGenerateResponseBody() {}

  explicit AITeacherExpansionPracticeTaskGenerateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        AITeacherExpansionPracticeTaskGenerateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AITeacherExpansionPracticeTaskGenerateResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~AITeacherExpansionPracticeTaskGenerateResponseBody() = default;
};
class AITeacherExpansionPracticeTaskGenerateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AITeacherExpansionPracticeTaskGenerateResponseBody> body{};

  AITeacherExpansionPracticeTaskGenerateResponse() {}

  explicit AITeacherExpansionPracticeTaskGenerateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AITeacherExpansionPracticeTaskGenerateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AITeacherExpansionPracticeTaskGenerateResponseBody>(model1);
      }
    }
  }


  virtual ~AITeacherExpansionPracticeTaskGenerateResponse() = default;
};
class AITeacherSyncPracticeTaskGenerateRequest : public Darabonba::Model {
public:
  shared_ptr<string> grade{};
  shared_ptr<vector<string>> keySentences{};
  shared_ptr<vector<string>> keyWords{};
  shared_ptr<string> learningObject{};
  shared_ptr<string> textContent{};
  shared_ptr<string> textbook{};
  shared_ptr<string> topic{};
  shared_ptr<string> userId{};

  AITeacherSyncPracticeTaskGenerateRequest() {}

  explicit AITeacherSyncPracticeTaskGenerateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grade) {
      res["grade"] = boost::any(*grade);
    }
    if (keySentences) {
      res["keySentences"] = boost::any(*keySentences);
    }
    if (keyWords) {
      res["keyWords"] = boost::any(*keyWords);
    }
    if (learningObject) {
      res["learningObject"] = boost::any(*learningObject);
    }
    if (textContent) {
      res["textContent"] = boost::any(*textContent);
    }
    if (textbook) {
      res["textbook"] = boost::any(*textbook);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("grade") != m.end() && !m["grade"].empty()) {
      grade = make_shared<string>(boost::any_cast<string>(m["grade"]));
    }
    if (m.find("keySentences") != m.end() && !m["keySentences"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keySentences"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keySentences"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keySentences = make_shared<vector<string>>(toVec1);
    }
    if (m.find("keyWords") != m.end() && !m["keyWords"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["keyWords"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["keyWords"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      keyWords = make_shared<vector<string>>(toVec1);
    }
    if (m.find("learningObject") != m.end() && !m["learningObject"].empty()) {
      learningObject = make_shared<string>(boost::any_cast<string>(m["learningObject"]));
    }
    if (m.find("textContent") != m.end() && !m["textContent"].empty()) {
      textContent = make_shared<string>(boost::any_cast<string>(m["textContent"]));
    }
    if (m.find("textbook") != m.end() && !m["textbook"].empty()) {
      textbook = make_shared<string>(boost::any_cast<string>(m["textbook"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~AITeacherSyncPracticeTaskGenerateRequest() = default;
};
class AITeacherSyncPracticeTaskGenerateResponseBodyDataTaskContent : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> user{};

  AITeacherSyncPracticeTaskGenerateResponseBodyDataTaskContent() {}

  explicit AITeacherSyncPracticeTaskGenerateResponseBodyDataTaskContent(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~AITeacherSyncPracticeTaskGenerateResponseBodyDataTaskContent() = default;
};
class AITeacherSyncPracticeTaskGenerateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<AITeacherSyncPracticeTaskGenerateResponseBodyDataTaskContent>> taskContent{};
  shared_ptr<string> taskType{};

  AITeacherSyncPracticeTaskGenerateResponseBodyData() {}

  explicit AITeacherSyncPracticeTaskGenerateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskContent) {
      vector<boost::any> temp1;
      for(auto item1:*taskContent){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["taskContent"] = boost::any(temp1);
    }
    if (taskType) {
      res["taskType"] = boost::any(*taskType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("taskContent") != m.end() && !m["taskContent"].empty()) {
      if (typeid(vector<boost::any>) == m["taskContent"].type()) {
        vector<AITeacherSyncPracticeTaskGenerateResponseBodyDataTaskContent> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["taskContent"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AITeacherSyncPracticeTaskGenerateResponseBodyDataTaskContent model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskContent = make_shared<vector<AITeacherSyncPracticeTaskGenerateResponseBodyDataTaskContent>>(expect1);
      }
    }
    if (m.find("taskType") != m.end() && !m["taskType"].empty()) {
      taskType = make_shared<string>(boost::any_cast<string>(m["taskType"]));
    }
  }


  virtual ~AITeacherSyncPracticeTaskGenerateResponseBodyData() = default;
};
class AITeacherSyncPracticeTaskGenerateResponseBody : public Darabonba::Model {
public:
  shared_ptr<AITeacherSyncPracticeTaskGenerateResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AITeacherSyncPracticeTaskGenerateResponseBody() {}

  explicit AITeacherSyncPracticeTaskGenerateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        AITeacherSyncPracticeTaskGenerateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<AITeacherSyncPracticeTaskGenerateResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~AITeacherSyncPracticeTaskGenerateResponseBody() = default;
};
class AITeacherSyncPracticeTaskGenerateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AITeacherSyncPracticeTaskGenerateResponseBody> body{};

  AITeacherSyncPracticeTaskGenerateResponse() {}

  explicit AITeacherSyncPracticeTaskGenerateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AITeacherSyncPracticeTaskGenerateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AITeacherSyncPracticeTaskGenerateResponseBody>(model1);
      }
    }
  }


  virtual ~AITeacherSyncPracticeTaskGenerateResponse() = default;
};
class AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> freeConcurrencyCount{};
  shared_ptr<long> freeCount{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceName{};

  AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBodyData() {}

  explicit AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (freeConcurrencyCount) {
      res["FreeConcurrencyCount"] = boost::any(*freeConcurrencyCount);
    }
    if (freeCount) {
      res["FreeCount"] = boost::any(*freeCount);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FreeConcurrencyCount") != m.end() && !m["FreeConcurrencyCount"].empty()) {
      freeConcurrencyCount = make_shared<long>(boost::any_cast<long>(m["FreeConcurrencyCount"]));
    }
    if (m.find("FreeCount") != m.end() && !m["FreeCount"].empty()) {
      freeCount = make_shared<long>(boost::any_cast<long>(m["FreeCount"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBodyData() = default;
};
class AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody() {}

  explicit AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBodyData>>(expect1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody() = default;
};
class AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody> body{};

  AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse() {}

  explicit AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponseBody>(model1);
      }
    }
  }


  virtual ~AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse() = default;
};
class AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> freeConcurrencyCount{};
  shared_ptr<long> freeCount{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceName{};

  AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBodyData() {}

  explicit AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (freeConcurrencyCount) {
      res["FreeConcurrencyCount"] = boost::any(*freeConcurrencyCount);
    }
    if (freeCount) {
      res["FreeCount"] = boost::any(*freeCount);
    }
    if (serviceCode) {
      res["ServiceCode"] = boost::any(*serviceCode);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FreeConcurrencyCount") != m.end() && !m["FreeConcurrencyCount"].empty()) {
      freeConcurrencyCount = make_shared<long>(boost::any_cast<long>(m["FreeConcurrencyCount"]));
    }
    if (m.find("FreeCount") != m.end() && !m["FreeCount"].empty()) {
      freeCount = make_shared<long>(boost::any_cast<long>(m["FreeCount"]));
    }
    if (m.find("ServiceCode") != m.end() && !m["ServiceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["ServiceCode"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBodyData() = default;
};
class AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBody() {}

  explicit AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        vector<AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBodyData>>(expect1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBody() = default;
};
class AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBody> body{};

  AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse() {}

  explicit AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBody>(model1);
      }
    }
  }


  virtual ~AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse() = default;
};
class ExecuteAITeacherExpansionDialogueRequestDialogueTasks : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> assistantTranslate{};
  shared_ptr<long> order{};
  shared_ptr<string> user{};

  ExecuteAITeacherExpansionDialogueRequestDialogueTasks() {}

  explicit ExecuteAITeacherExpansionDialogueRequestDialogueTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (assistantTranslate) {
      res["assistantTranslate"] = boost::any(*assistantTranslate);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("assistantTranslate") != m.end() && !m["assistantTranslate"].empty()) {
      assistantTranslate = make_shared<string>(boost::any_cast<string>(m["assistantTranslate"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRequestDialogueTasks() = default;
};
class ExecuteAITeacherExpansionDialogueRequestRecords : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> isOffTopicControl{};
  shared_ptr<bool> isOnTopic{};
  shared_ptr<long> order{};
  shared_ptr<string> role{};

  ExecuteAITeacherExpansionDialogueRequestRecords() {}

  explicit ExecuteAITeacherExpansionDialogueRequestRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (isOffTopicControl) {
      res["isOffTopicControl"] = boost::any(*isOffTopicControl);
    }
    if (isOnTopic) {
      res["isOnTopic"] = boost::any(*isOnTopic);
    }
    if (order) {
      res["order"] = boost::any(*order);
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
    if (m.find("isOffTopicControl") != m.end() && !m["isOffTopicControl"].empty()) {
      isOffTopicControl = make_shared<bool>(boost::any_cast<bool>(m["isOffTopicControl"]));
    }
    if (m.find("isOnTopic") != m.end() && !m["isOnTopic"].empty()) {
      isOnTopic = make_shared<bool>(boost::any_cast<bool>(m["isOnTopic"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRequestRecords() = default;
};
class ExecuteAITeacherExpansionDialogueRequestRoleInfo : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> user{};

  ExecuteAITeacherExpansionDialogueRequestRoleInfo() {}

  explicit ExecuteAITeacherExpansionDialogueRequestRoleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRequestRoleInfo() = default;
};
class ExecuteAITeacherExpansionDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> background{};
  shared_ptr<vector<ExecuteAITeacherExpansionDialogueRequestDialogueTasks>> dialogueTasks{};
  shared_ptr<string> languageCode{};
  shared_ptr<vector<ExecuteAITeacherExpansionDialogueRequestRecords>> records{};
  shared_ptr<ExecuteAITeacherExpansionDialogueRequestRoleInfo> roleInfo{};
  shared_ptr<string> startSentence{};
  shared_ptr<string> topic{};
  shared_ptr<string> userId{};

  ExecuteAITeacherExpansionDialogueRequest() {}

  explicit ExecuteAITeacherExpansionDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (background) {
      res["background"] = boost::any(*background);
    }
    if (dialogueTasks) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueTasks"] = boost::any(temp1);
    }
    if (languageCode) {
      res["languageCode"] = boost::any(*languageCode);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (roleInfo) {
      res["roleInfo"] = roleInfo ? boost::any(roleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startSentence) {
      res["startSentence"] = boost::any(*startSentence);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("background") != m.end() && !m["background"].empty()) {
      background = make_shared<string>(boost::any_cast<string>(m["background"]));
    }
    if (m.find("dialogueTasks") != m.end() && !m["dialogueTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueTasks"].type()) {
        vector<ExecuteAITeacherExpansionDialogueRequestDialogueTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherExpansionDialogueRequestDialogueTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueTasks = make_shared<vector<ExecuteAITeacherExpansionDialogueRequestDialogueTasks>>(expect1);
      }
    }
    if (m.find("languageCode") != m.end() && !m["languageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["languageCode"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<ExecuteAITeacherExpansionDialogueRequestRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherExpansionDialogueRequestRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ExecuteAITeacherExpansionDialogueRequestRecords>>(expect1);
      }
    }
    if (m.find("roleInfo") != m.end() && !m["roleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["roleInfo"].type()) {
        ExecuteAITeacherExpansionDialogueRequestRoleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["roleInfo"]));
        roleInfo = make_shared<ExecuteAITeacherExpansionDialogueRequestRoleInfo>(model1);
      }
    }
    if (m.find("startSentence") != m.end() && !m["startSentence"].empty()) {
      startSentence = make_shared<string>(boost::any_cast<string>(m["startSentence"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRequest() = default;
};
class ExecuteAITeacherExpansionDialogueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> chineseResult{};
  shared_ptr<string> englishResult{};
  shared_ptr<bool> isFinish{};
  shared_ptr<bool> isOffTopicControl{};
  shared_ptr<bool> isOnTopic{};
  shared_ptr<long> questionIndex{};

  ExecuteAITeacherExpansionDialogueResponseBodyData() {}

  explicit ExecuteAITeacherExpansionDialogueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chineseResult) {
      res["chineseResult"] = boost::any(*chineseResult);
    }
    if (englishResult) {
      res["englishResult"] = boost::any(*englishResult);
    }
    if (isFinish) {
      res["isFinish"] = boost::any(*isFinish);
    }
    if (isOffTopicControl) {
      res["isOffTopicControl"] = boost::any(*isOffTopicControl);
    }
    if (isOnTopic) {
      res["isOnTopic"] = boost::any(*isOnTopic);
    }
    if (questionIndex) {
      res["questionIndex"] = boost::any(*questionIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chineseResult") != m.end() && !m["chineseResult"].empty()) {
      chineseResult = make_shared<string>(boost::any_cast<string>(m["chineseResult"]));
    }
    if (m.find("englishResult") != m.end() && !m["englishResult"].empty()) {
      englishResult = make_shared<string>(boost::any_cast<string>(m["englishResult"]));
    }
    if (m.find("isFinish") != m.end() && !m["isFinish"].empty()) {
      isFinish = make_shared<bool>(boost::any_cast<bool>(m["isFinish"]));
    }
    if (m.find("isOffTopicControl") != m.end() && !m["isOffTopicControl"].empty()) {
      isOffTopicControl = make_shared<bool>(boost::any_cast<bool>(m["isOffTopicControl"]));
    }
    if (m.find("isOnTopic") != m.end() && !m["isOnTopic"].empty()) {
      isOnTopic = make_shared<bool>(boost::any_cast<bool>(m["isOnTopic"]));
    }
    if (m.find("questionIndex") != m.end() && !m["questionIndex"].empty()) {
      questionIndex = make_shared<long>(boost::any_cast<long>(m["questionIndex"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueResponseBodyData() = default;
};
class ExecuteAITeacherExpansionDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteAITeacherExpansionDialogueResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteAITeacherExpansionDialogueResponseBody() {}

  explicit ExecuteAITeacherExpansionDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        ExecuteAITeacherExpansionDialogueResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteAITeacherExpansionDialogueResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueResponseBody() = default;
};
class ExecuteAITeacherExpansionDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteAITeacherExpansionDialogueResponseBody> body{};

  ExecuteAITeacherExpansionDialogueResponse() {}

  explicit ExecuteAITeacherExpansionDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteAITeacherExpansionDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteAITeacherExpansionDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueResponse() = default;
};
class ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> assistantTranslate{};
  shared_ptr<long> order{};
  shared_ptr<string> user{};

  ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks() {}

  explicit ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (assistantTranslate) {
      res["assistantTranslate"] = boost::any(*assistantTranslate);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("assistantTranslate") != m.end() && !m["assistantTranslate"].empty()) {
      assistantTranslate = make_shared<string>(boost::any_cast<string>(m["assistantTranslate"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks() = default;
};
class ExecuteAITeacherExpansionDialogueRefineRequestRecords : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> isOffTopicControl{};
  shared_ptr<bool> isOnTopic{};
  shared_ptr<long> order{};
  shared_ptr<string> role{};

  ExecuteAITeacherExpansionDialogueRefineRequestRecords() {}

  explicit ExecuteAITeacherExpansionDialogueRefineRequestRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (isOffTopicControl) {
      res["isOffTopicControl"] = boost::any(*isOffTopicControl);
    }
    if (isOnTopic) {
      res["isOnTopic"] = boost::any(*isOnTopic);
    }
    if (order) {
      res["order"] = boost::any(*order);
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
    if (m.find("isOffTopicControl") != m.end() && !m["isOffTopicControl"].empty()) {
      isOffTopicControl = make_shared<bool>(boost::any_cast<bool>(m["isOffTopicControl"]));
    }
    if (m.find("isOnTopic") != m.end() && !m["isOnTopic"].empty()) {
      isOnTopic = make_shared<bool>(boost::any_cast<bool>(m["isOnTopic"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRefineRequestRecords() = default;
};
class ExecuteAITeacherExpansionDialogueRefineRequestRoleInfo : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> user{};

  ExecuteAITeacherExpansionDialogueRefineRequestRoleInfo() {}

  explicit ExecuteAITeacherExpansionDialogueRefineRequestRoleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRefineRequestRoleInfo() = default;
};
class ExecuteAITeacherExpansionDialogueRefineRequest : public Darabonba::Model {
public:
  shared_ptr<string> background{};
  shared_ptr<vector<ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks>> dialogueTasks{};
  shared_ptr<string> languageCode{};
  shared_ptr<vector<ExecuteAITeacherExpansionDialogueRefineRequestRecords>> records{};
  shared_ptr<ExecuteAITeacherExpansionDialogueRefineRequestRoleInfo> roleInfo{};
  shared_ptr<string> startSentence{};
  shared_ptr<string> topic{};
  shared_ptr<string> userId{};

  ExecuteAITeacherExpansionDialogueRefineRequest() {}

  explicit ExecuteAITeacherExpansionDialogueRefineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (background) {
      res["background"] = boost::any(*background);
    }
    if (dialogueTasks) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueTasks"] = boost::any(temp1);
    }
    if (languageCode) {
      res["languageCode"] = boost::any(*languageCode);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (roleInfo) {
      res["roleInfo"] = roleInfo ? boost::any(roleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startSentence) {
      res["startSentence"] = boost::any(*startSentence);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("background") != m.end() && !m["background"].empty()) {
      background = make_shared<string>(boost::any_cast<string>(m["background"]));
    }
    if (m.find("dialogueTasks") != m.end() && !m["dialogueTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueTasks"].type()) {
        vector<ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueTasks = make_shared<vector<ExecuteAITeacherExpansionDialogueRefineRequestDialogueTasks>>(expect1);
      }
    }
    if (m.find("languageCode") != m.end() && !m["languageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["languageCode"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<ExecuteAITeacherExpansionDialogueRefineRequestRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherExpansionDialogueRefineRequestRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ExecuteAITeacherExpansionDialogueRefineRequestRecords>>(expect1);
      }
    }
    if (m.find("roleInfo") != m.end() && !m["roleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["roleInfo"].type()) {
        ExecuteAITeacherExpansionDialogueRefineRequestRoleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["roleInfo"]));
        roleInfo = make_shared<ExecuteAITeacherExpansionDialogueRefineRequestRoleInfo>(model1);
      }
    }
    if (m.find("startSentence") != m.end() && !m["startSentence"].empty()) {
      startSentence = make_shared<string>(boost::any_cast<string>(m["startSentence"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRefineRequest() = default;
};
class ExecuteAITeacherExpansionDialogueRefineResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> result{};

  ExecuteAITeacherExpansionDialogueRefineResponseBodyData() {}

  explicit ExecuteAITeacherExpansionDialogueRefineResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRefineResponseBodyData() = default;
};
class ExecuteAITeacherExpansionDialogueRefineResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteAITeacherExpansionDialogueRefineResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteAITeacherExpansionDialogueRefineResponseBody() {}

  explicit ExecuteAITeacherExpansionDialogueRefineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        ExecuteAITeacherExpansionDialogueRefineResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteAITeacherExpansionDialogueRefineResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRefineResponseBody() = default;
};
class ExecuteAITeacherExpansionDialogueRefineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteAITeacherExpansionDialogueRefineResponseBody> body{};

  ExecuteAITeacherExpansionDialogueRefineResponse() {}

  explicit ExecuteAITeacherExpansionDialogueRefineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteAITeacherExpansionDialogueRefineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteAITeacherExpansionDialogueRefineResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueRefineResponse() = default;
};
class ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> assistantTranslate{};
  shared_ptr<long> order{};
  shared_ptr<string> user{};

  ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks() {}

  explicit ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (assistantTranslate) {
      res["assistantTranslate"] = boost::any(*assistantTranslate);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("assistantTranslate") != m.end() && !m["assistantTranslate"].empty()) {
      assistantTranslate = make_shared<string>(boost::any_cast<string>(m["assistantTranslate"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks() = default;
};
class ExecuteAITeacherExpansionDialogueTranslateRequestRecords : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> isOffTopicControl{};
  shared_ptr<bool> isOnTopic{};
  shared_ptr<long> order{};
  shared_ptr<string> role{};

  ExecuteAITeacherExpansionDialogueTranslateRequestRecords() {}

  explicit ExecuteAITeacherExpansionDialogueTranslateRequestRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (isOffTopicControl) {
      res["isOffTopicControl"] = boost::any(*isOffTopicControl);
    }
    if (isOnTopic) {
      res["isOnTopic"] = boost::any(*isOnTopic);
    }
    if (order) {
      res["order"] = boost::any(*order);
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
    if (m.find("isOffTopicControl") != m.end() && !m["isOffTopicControl"].empty()) {
      isOffTopicControl = make_shared<bool>(boost::any_cast<bool>(m["isOffTopicControl"]));
    }
    if (m.find("isOnTopic") != m.end() && !m["isOnTopic"].empty()) {
      isOnTopic = make_shared<bool>(boost::any_cast<bool>(m["isOnTopic"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueTranslateRequestRecords() = default;
};
class ExecuteAITeacherExpansionDialogueTranslateRequestRoleInfo : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> user{};

  ExecuteAITeacherExpansionDialogueTranslateRequestRoleInfo() {}

  explicit ExecuteAITeacherExpansionDialogueTranslateRequestRoleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueTranslateRequestRoleInfo() = default;
};
class ExecuteAITeacherExpansionDialogueTranslateRequest : public Darabonba::Model {
public:
  shared_ptr<string> background{};
  shared_ptr<vector<ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks>> dialogueTasks{};
  shared_ptr<vector<ExecuteAITeacherExpansionDialogueTranslateRequestRecords>> records{};
  shared_ptr<ExecuteAITeacherExpansionDialogueTranslateRequestRoleInfo> roleInfo{};
  shared_ptr<string> startSentence{};
  shared_ptr<string> topic{};
  shared_ptr<string> userId{};

  ExecuteAITeacherExpansionDialogueTranslateRequest() {}

  explicit ExecuteAITeacherExpansionDialogueTranslateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (background) {
      res["background"] = boost::any(*background);
    }
    if (dialogueTasks) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueTasks"] = boost::any(temp1);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (roleInfo) {
      res["roleInfo"] = roleInfo ? boost::any(roleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startSentence) {
      res["startSentence"] = boost::any(*startSentence);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("background") != m.end() && !m["background"].empty()) {
      background = make_shared<string>(boost::any_cast<string>(m["background"]));
    }
    if (m.find("dialogueTasks") != m.end() && !m["dialogueTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueTasks"].type()) {
        vector<ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueTasks = make_shared<vector<ExecuteAITeacherExpansionDialogueTranslateRequestDialogueTasks>>(expect1);
      }
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<ExecuteAITeacherExpansionDialogueTranslateRequestRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherExpansionDialogueTranslateRequestRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ExecuteAITeacherExpansionDialogueTranslateRequestRecords>>(expect1);
      }
    }
    if (m.find("roleInfo") != m.end() && !m["roleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["roleInfo"].type()) {
        ExecuteAITeacherExpansionDialogueTranslateRequestRoleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["roleInfo"]));
        roleInfo = make_shared<ExecuteAITeacherExpansionDialogueTranslateRequestRoleInfo>(model1);
      }
    }
    if (m.find("startSentence") != m.end() && !m["startSentence"].empty()) {
      startSentence = make_shared<string>(boost::any_cast<string>(m["startSentence"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueTranslateRequest() = default;
};
class ExecuteAITeacherExpansionDialogueTranslateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> result{};

  ExecuteAITeacherExpansionDialogueTranslateResponseBodyData() {}

  explicit ExecuteAITeacherExpansionDialogueTranslateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueTranslateResponseBodyData() = default;
};
class ExecuteAITeacherExpansionDialogueTranslateResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteAITeacherExpansionDialogueTranslateResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteAITeacherExpansionDialogueTranslateResponseBody() {}

  explicit ExecuteAITeacherExpansionDialogueTranslateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        ExecuteAITeacherExpansionDialogueTranslateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteAITeacherExpansionDialogueTranslateResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueTranslateResponseBody() = default;
};
class ExecuteAITeacherExpansionDialogueTranslateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteAITeacherExpansionDialogueTranslateResponseBody> body{};

  ExecuteAITeacherExpansionDialogueTranslateResponse() {}

  explicit ExecuteAITeacherExpansionDialogueTranslateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteAITeacherExpansionDialogueTranslateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteAITeacherExpansionDialogueTranslateResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteAITeacherExpansionDialogueTranslateResponse() = default;
};
class ExecuteAITeacherGrammarCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> userId{};

  ExecuteAITeacherGrammarCheckRequest() {}

  explicit ExecuteAITeacherGrammarCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ExecuteAITeacherGrammarCheckRequest() = default;
};
class ExecuteAITeacherGrammarCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> analysis{};
  shared_ptr<string> correction{};
  shared_ptr<string> correctionStatus{};
  shared_ptr<string> errorReason{};

  ExecuteAITeacherGrammarCheckResponseBodyData() {}

  explicit ExecuteAITeacherGrammarCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysis) {
      res["analysis"] = boost::any(*analysis);
    }
    if (correction) {
      res["correction"] = boost::any(*correction);
    }
    if (correctionStatus) {
      res["correctionStatus"] = boost::any(*correctionStatus);
    }
    if (errorReason) {
      res["errorReason"] = boost::any(*errorReason);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysis") != m.end() && !m["analysis"].empty()) {
      analysis = make_shared<string>(boost::any_cast<string>(m["analysis"]));
    }
    if (m.find("correction") != m.end() && !m["correction"].empty()) {
      correction = make_shared<string>(boost::any_cast<string>(m["correction"]));
    }
    if (m.find("correctionStatus") != m.end() && !m["correctionStatus"].empty()) {
      correctionStatus = make_shared<string>(boost::any_cast<string>(m["correctionStatus"]));
    }
    if (m.find("errorReason") != m.end() && !m["errorReason"].empty()) {
      errorReason = make_shared<string>(boost::any_cast<string>(m["errorReason"]));
    }
  }


  virtual ~ExecuteAITeacherGrammarCheckResponseBodyData() = default;
};
class ExecuteAITeacherGrammarCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteAITeacherGrammarCheckResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteAITeacherGrammarCheckResponseBody() {}

  explicit ExecuteAITeacherGrammarCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        ExecuteAITeacherGrammarCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteAITeacherGrammarCheckResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ExecuteAITeacherGrammarCheckResponseBody() = default;
};
class ExecuteAITeacherGrammarCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteAITeacherGrammarCheckResponseBody> body{};

  ExecuteAITeacherGrammarCheckResponse() {}

  explicit ExecuteAITeacherGrammarCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteAITeacherGrammarCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteAITeacherGrammarCheckResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteAITeacherGrammarCheckResponse() = default;
};
class ExecuteAITeacherSyncDialogueRequestDialogueTasks : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> assistantTranslate{};
  shared_ptr<long> order{};
  shared_ptr<string> user{};

  ExecuteAITeacherSyncDialogueRequestDialogueTasks() {}

  explicit ExecuteAITeacherSyncDialogueRequestDialogueTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (assistantTranslate) {
      res["assistantTranslate"] = boost::any(*assistantTranslate);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("assistantTranslate") != m.end() && !m["assistantTranslate"].empty()) {
      assistantTranslate = make_shared<string>(boost::any_cast<string>(m["assistantTranslate"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueRequestDialogueTasks() = default;
};
class ExecuteAITeacherSyncDialogueRequestRecords : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> isOffTopicControl{};
  shared_ptr<bool> isOnTopic{};
  shared_ptr<long> order{};
  shared_ptr<string> role{};

  ExecuteAITeacherSyncDialogueRequestRecords() {}

  explicit ExecuteAITeacherSyncDialogueRequestRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (isOffTopicControl) {
      res["isOffTopicControl"] = boost::any(*isOffTopicControl);
    }
    if (isOnTopic) {
      res["isOnTopic"] = boost::any(*isOnTopic);
    }
    if (order) {
      res["order"] = boost::any(*order);
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
    if (m.find("isOffTopicControl") != m.end() && !m["isOffTopicControl"].empty()) {
      isOffTopicControl = make_shared<bool>(boost::any_cast<bool>(m["isOffTopicControl"]));
    }
    if (m.find("isOnTopic") != m.end() && !m["isOnTopic"].empty()) {
      isOnTopic = make_shared<bool>(boost::any_cast<bool>(m["isOnTopic"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueRequestRecords() = default;
};
class ExecuteAITeacherSyncDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ExecuteAITeacherSyncDialogueRequestDialogueTasks>> dialogueTasks{};
  shared_ptr<string> languageCode{};
  shared_ptr<vector<ExecuteAITeacherSyncDialogueRequestRecords>> records{};
  shared_ptr<string> userId{};

  ExecuteAITeacherSyncDialogueRequest() {}

  explicit ExecuteAITeacherSyncDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogueTasks) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueTasks"] = boost::any(temp1);
    }
    if (languageCode) {
      res["languageCode"] = boost::any(*languageCode);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogueTasks") != m.end() && !m["dialogueTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueTasks"].type()) {
        vector<ExecuteAITeacherSyncDialogueRequestDialogueTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherSyncDialogueRequestDialogueTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueTasks = make_shared<vector<ExecuteAITeacherSyncDialogueRequestDialogueTasks>>(expect1);
      }
    }
    if (m.find("languageCode") != m.end() && !m["languageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["languageCode"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<ExecuteAITeacherSyncDialogueRequestRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherSyncDialogueRequestRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ExecuteAITeacherSyncDialogueRequestRecords>>(expect1);
      }
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueRequest() = default;
};
class ExecuteAITeacherSyncDialogueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> englishResult{};
  shared_ptr<bool> isFinish{};
  shared_ptr<bool> isOnTopic{};
  shared_ptr<long> questionIndex{};

  ExecuteAITeacherSyncDialogueResponseBodyData() {}

  explicit ExecuteAITeacherSyncDialogueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (englishResult) {
      res["englishResult"] = boost::any(*englishResult);
    }
    if (isFinish) {
      res["isFinish"] = boost::any(*isFinish);
    }
    if (isOnTopic) {
      res["isOnTopic"] = boost::any(*isOnTopic);
    }
    if (questionIndex) {
      res["questionIndex"] = boost::any(*questionIndex);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("englishResult") != m.end() && !m["englishResult"].empty()) {
      englishResult = make_shared<string>(boost::any_cast<string>(m["englishResult"]));
    }
    if (m.find("isFinish") != m.end() && !m["isFinish"].empty()) {
      isFinish = make_shared<bool>(boost::any_cast<bool>(m["isFinish"]));
    }
    if (m.find("isOnTopic") != m.end() && !m["isOnTopic"].empty()) {
      isOnTopic = make_shared<bool>(boost::any_cast<bool>(m["isOnTopic"]));
    }
    if (m.find("questionIndex") != m.end() && !m["questionIndex"].empty()) {
      questionIndex = make_shared<long>(boost::any_cast<long>(m["questionIndex"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueResponseBodyData() = default;
};
class ExecuteAITeacherSyncDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteAITeacherSyncDialogueResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteAITeacherSyncDialogueResponseBody() {}

  explicit ExecuteAITeacherSyncDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        ExecuteAITeacherSyncDialogueResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteAITeacherSyncDialogueResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueResponseBody() = default;
};
class ExecuteAITeacherSyncDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteAITeacherSyncDialogueResponseBody> body{};

  ExecuteAITeacherSyncDialogueResponse() {}

  explicit ExecuteAITeacherSyncDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteAITeacherSyncDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteAITeacherSyncDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueResponse() = default;
};
class ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> assistantTranslate{};
  shared_ptr<long> order{};
  shared_ptr<string> user{};

  ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks() {}

  explicit ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (assistantTranslate) {
      res["assistantTranslate"] = boost::any(*assistantTranslate);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("assistantTranslate") != m.end() && !m["assistantTranslate"].empty()) {
      assistantTranslate = make_shared<string>(boost::any_cast<string>(m["assistantTranslate"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks() = default;
};
class ExecuteAITeacherSyncDialogueTranslateRequestRecords : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> isOffTopicControl{};
  shared_ptr<bool> isOnTopic{};
  shared_ptr<long> order{};
  shared_ptr<string> role{};

  ExecuteAITeacherSyncDialogueTranslateRequestRecords() {}

  explicit ExecuteAITeacherSyncDialogueTranslateRequestRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (isOffTopicControl) {
      res["isOffTopicControl"] = boost::any(*isOffTopicControl);
    }
    if (isOnTopic) {
      res["isOnTopic"] = boost::any(*isOnTopic);
    }
    if (order) {
      res["order"] = boost::any(*order);
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
    if (m.find("isOffTopicControl") != m.end() && !m["isOffTopicControl"].empty()) {
      isOffTopicControl = make_shared<bool>(boost::any_cast<bool>(m["isOffTopicControl"]));
    }
    if (m.find("isOnTopic") != m.end() && !m["isOnTopic"].empty()) {
      isOnTopic = make_shared<bool>(boost::any_cast<bool>(m["isOnTopic"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueTranslateRequestRecords() = default;
};
class ExecuteAITeacherSyncDialogueTranslateRequest : public Darabonba::Model {
public:
  shared_ptr<vector<ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks>> dialogueTasks{};
  shared_ptr<vector<ExecuteAITeacherSyncDialogueTranslateRequestRecords>> records{};
  shared_ptr<string> userId{};

  ExecuteAITeacherSyncDialogueTranslateRequest() {}

  explicit ExecuteAITeacherSyncDialogueTranslateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogueTasks) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueTasks"] = boost::any(temp1);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogueTasks") != m.end() && !m["dialogueTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueTasks"].type()) {
        vector<ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueTasks = make_shared<vector<ExecuteAITeacherSyncDialogueTranslateRequestDialogueTasks>>(expect1);
      }
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<ExecuteAITeacherSyncDialogueTranslateRequestRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteAITeacherSyncDialogueTranslateRequestRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<ExecuteAITeacherSyncDialogueTranslateRequestRecords>>(expect1);
      }
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueTranslateRequest() = default;
};
class ExecuteAITeacherSyncDialogueTranslateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> result{};

  ExecuteAITeacherSyncDialogueTranslateResponseBodyData() {}

  explicit ExecuteAITeacherSyncDialogueTranslateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = boost::any(*result);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueTranslateResponseBodyData() = default;
};
class ExecuteAITeacherSyncDialogueTranslateResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteAITeacherSyncDialogueTranslateResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteAITeacherSyncDialogueTranslateResponseBody() {}

  explicit ExecuteAITeacherSyncDialogueTranslateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        ExecuteAITeacherSyncDialogueTranslateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteAITeacherSyncDialogueTranslateResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueTranslateResponseBody() = default;
};
class ExecuteAITeacherSyncDialogueTranslateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteAITeacherSyncDialogueTranslateResponseBody> body{};

  ExecuteAITeacherSyncDialogueTranslateResponse() {}

  explicit ExecuteAITeacherSyncDialogueTranslateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteAITeacherSyncDialogueTranslateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteAITeacherSyncDialogueTranslateResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteAITeacherSyncDialogueTranslateResponse() = default;
};
class GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> assistantTranslate{};
  shared_ptr<long> order{};
  shared_ptr<string> user{};

  GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks() {}

  explicit GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (assistantTranslate) {
      res["assistantTranslate"] = boost::any(*assistantTranslate);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("assistantTranslate") != m.end() && !m["assistantTranslate"].empty()) {
      assistantTranslate = make_shared<string>(boost::any_cast<string>(m["assistantTranslate"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks() = default;
};
class GetAITeacherExpansionDialogueSuggestionRequestRecords : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> isOffTopicControl{};
  shared_ptr<bool> isOnTopic{};
  shared_ptr<long> order{};
  shared_ptr<string> role{};

  GetAITeacherExpansionDialogueSuggestionRequestRecords() {}

  explicit GetAITeacherExpansionDialogueSuggestionRequestRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (isOffTopicControl) {
      res["isOffTopicControl"] = boost::any(*isOffTopicControl);
    }
    if (isOnTopic) {
      res["isOnTopic"] = boost::any(*isOnTopic);
    }
    if (order) {
      res["order"] = boost::any(*order);
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
    if (m.find("isOffTopicControl") != m.end() && !m["isOffTopicControl"].empty()) {
      isOffTopicControl = make_shared<bool>(boost::any_cast<bool>(m["isOffTopicControl"]));
    }
    if (m.find("isOnTopic") != m.end() && !m["isOnTopic"].empty()) {
      isOnTopic = make_shared<bool>(boost::any_cast<bool>(m["isOnTopic"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~GetAITeacherExpansionDialogueSuggestionRequestRecords() = default;
};
class GetAITeacherExpansionDialogueSuggestionRequestRoleInfo : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> user{};

  GetAITeacherExpansionDialogueSuggestionRequestRoleInfo() {}

  explicit GetAITeacherExpansionDialogueSuggestionRequestRoleInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~GetAITeacherExpansionDialogueSuggestionRequestRoleInfo() = default;
};
class GetAITeacherExpansionDialogueSuggestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> background{};
  shared_ptr<vector<GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks>> dialogueTasks{};
  shared_ptr<string> languageCode{};
  shared_ptr<vector<GetAITeacherExpansionDialogueSuggestionRequestRecords>> records{};
  shared_ptr<GetAITeacherExpansionDialogueSuggestionRequestRoleInfo> roleInfo{};
  shared_ptr<string> startSentence{};
  shared_ptr<string> topic{};
  shared_ptr<string> userId{};

  GetAITeacherExpansionDialogueSuggestionRequest() {}

  explicit GetAITeacherExpansionDialogueSuggestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (background) {
      res["background"] = boost::any(*background);
    }
    if (dialogueTasks) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueTasks"] = boost::any(temp1);
    }
    if (languageCode) {
      res["languageCode"] = boost::any(*languageCode);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (roleInfo) {
      res["roleInfo"] = roleInfo ? boost::any(roleInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (startSentence) {
      res["startSentence"] = boost::any(*startSentence);
    }
    if (topic) {
      res["topic"] = boost::any(*topic);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("background") != m.end() && !m["background"].empty()) {
      background = make_shared<string>(boost::any_cast<string>(m["background"]));
    }
    if (m.find("dialogueTasks") != m.end() && !m["dialogueTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueTasks"].type()) {
        vector<GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueTasks = make_shared<vector<GetAITeacherExpansionDialogueSuggestionRequestDialogueTasks>>(expect1);
      }
    }
    if (m.find("languageCode") != m.end() && !m["languageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["languageCode"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetAITeacherExpansionDialogueSuggestionRequestRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAITeacherExpansionDialogueSuggestionRequestRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetAITeacherExpansionDialogueSuggestionRequestRecords>>(expect1);
      }
    }
    if (m.find("roleInfo") != m.end() && !m["roleInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["roleInfo"].type()) {
        GetAITeacherExpansionDialogueSuggestionRequestRoleInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["roleInfo"]));
        roleInfo = make_shared<GetAITeacherExpansionDialogueSuggestionRequestRoleInfo>(model1);
      }
    }
    if (m.find("startSentence") != m.end() && !m["startSentence"].empty()) {
      startSentence = make_shared<string>(boost::any_cast<string>(m["startSentence"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      topic = make_shared<string>(boost::any_cast<string>(m["topic"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetAITeacherExpansionDialogueSuggestionRequest() = default;
};
class GetAITeacherExpansionDialogueSuggestionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> chineseResult{};
  shared_ptr<string> englishResult{};

  GetAITeacherExpansionDialogueSuggestionResponseBodyData() {}

  explicit GetAITeacherExpansionDialogueSuggestionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chineseResult) {
      res["chineseResult"] = boost::any(*chineseResult);
    }
    if (englishResult) {
      res["englishResult"] = boost::any(*englishResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chineseResult") != m.end() && !m["chineseResult"].empty()) {
      chineseResult = make_shared<string>(boost::any_cast<string>(m["chineseResult"]));
    }
    if (m.find("englishResult") != m.end() && !m["englishResult"].empty()) {
      englishResult = make_shared<string>(boost::any_cast<string>(m["englishResult"]));
    }
  }


  virtual ~GetAITeacherExpansionDialogueSuggestionResponseBodyData() = default;
};
class GetAITeacherExpansionDialogueSuggestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAITeacherExpansionDialogueSuggestionResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAITeacherExpansionDialogueSuggestionResponseBody() {}

  explicit GetAITeacherExpansionDialogueSuggestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        GetAITeacherExpansionDialogueSuggestionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetAITeacherExpansionDialogueSuggestionResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetAITeacherExpansionDialogueSuggestionResponseBody() = default;
};
class GetAITeacherExpansionDialogueSuggestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAITeacherExpansionDialogueSuggestionResponseBody> body{};

  GetAITeacherExpansionDialogueSuggestionResponse() {}

  explicit GetAITeacherExpansionDialogueSuggestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAITeacherExpansionDialogueSuggestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAITeacherExpansionDialogueSuggestionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAITeacherExpansionDialogueSuggestionResponse() = default;
};
class GetAITeacherSyncDialogueSuggestionRequestDialogueTasks : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> assistantTranslate{};
  shared_ptr<long> order{};
  shared_ptr<string> user{};

  GetAITeacherSyncDialogueSuggestionRequestDialogueTasks() {}

  explicit GetAITeacherSyncDialogueSuggestionRequestDialogueTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (assistantTranslate) {
      res["assistantTranslate"] = boost::any(*assistantTranslate);
    }
    if (order) {
      res["order"] = boost::any(*order);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("assistantTranslate") != m.end() && !m["assistantTranslate"].empty()) {
      assistantTranslate = make_shared<string>(boost::any_cast<string>(m["assistantTranslate"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~GetAITeacherSyncDialogueSuggestionRequestDialogueTasks() = default;
};
class GetAITeacherSyncDialogueSuggestionRequestRecords : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<bool> isOffTopicControl{};
  shared_ptr<bool> isOnTopic{};
  shared_ptr<long> order{};
  shared_ptr<string> role{};

  GetAITeacherSyncDialogueSuggestionRequestRecords() {}

  explicit GetAITeacherSyncDialogueSuggestionRequestRecords(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (isOffTopicControl) {
      res["isOffTopicControl"] = boost::any(*isOffTopicControl);
    }
    if (isOnTopic) {
      res["isOnTopic"] = boost::any(*isOnTopic);
    }
    if (order) {
      res["order"] = boost::any(*order);
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
    if (m.find("isOffTopicControl") != m.end() && !m["isOffTopicControl"].empty()) {
      isOffTopicControl = make_shared<bool>(boost::any_cast<bool>(m["isOffTopicControl"]));
    }
    if (m.find("isOnTopic") != m.end() && !m["isOnTopic"].empty()) {
      isOnTopic = make_shared<bool>(boost::any_cast<bool>(m["isOnTopic"]));
    }
    if (m.find("order") != m.end() && !m["order"].empty()) {
      order = make_shared<long>(boost::any_cast<long>(m["order"]));
    }
    if (m.find("role") != m.end() && !m["role"].empty()) {
      role = make_shared<string>(boost::any_cast<string>(m["role"]));
    }
  }


  virtual ~GetAITeacherSyncDialogueSuggestionRequestRecords() = default;
};
class GetAITeacherSyncDialogueSuggestionRequest : public Darabonba::Model {
public:
  shared_ptr<vector<GetAITeacherSyncDialogueSuggestionRequestDialogueTasks>> dialogueTasks{};
  shared_ptr<string> languageCode{};
  shared_ptr<vector<GetAITeacherSyncDialogueSuggestionRequestRecords>> records{};
  shared_ptr<string> userId{};

  GetAITeacherSyncDialogueSuggestionRequest() {}

  explicit GetAITeacherSyncDialogueSuggestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (dialogueTasks) {
      vector<boost::any> temp1;
      for(auto item1:*dialogueTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["dialogueTasks"] = boost::any(temp1);
    }
    if (languageCode) {
      res["languageCode"] = boost::any(*languageCode);
    }
    if (records) {
      vector<boost::any> temp1;
      for(auto item1:*records){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["records"] = boost::any(temp1);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("dialogueTasks") != m.end() && !m["dialogueTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["dialogueTasks"].type()) {
        vector<GetAITeacherSyncDialogueSuggestionRequestDialogueTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["dialogueTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAITeacherSyncDialogueSuggestionRequestDialogueTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        dialogueTasks = make_shared<vector<GetAITeacherSyncDialogueSuggestionRequestDialogueTasks>>(expect1);
      }
    }
    if (m.find("languageCode") != m.end() && !m["languageCode"].empty()) {
      languageCode = make_shared<string>(boost::any_cast<string>(m["languageCode"]));
    }
    if (m.find("records") != m.end() && !m["records"].empty()) {
      if (typeid(vector<boost::any>) == m["records"].type()) {
        vector<GetAITeacherSyncDialogueSuggestionRequestRecords> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["records"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAITeacherSyncDialogueSuggestionRequestRecords model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        records = make_shared<vector<GetAITeacherSyncDialogueSuggestionRequestRecords>>(expect1);
      }
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~GetAITeacherSyncDialogueSuggestionRequest() = default;
};
class GetAITeacherSyncDialogueSuggestionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> chineseResult{};
  shared_ptr<string> englishResult{};

  GetAITeacherSyncDialogueSuggestionResponseBodyData() {}

  explicit GetAITeacherSyncDialogueSuggestionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chineseResult) {
      res["chineseResult"] = boost::any(*chineseResult);
    }
    if (englishResult) {
      res["englishResult"] = boost::any(*englishResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chineseResult") != m.end() && !m["chineseResult"].empty()) {
      chineseResult = make_shared<string>(boost::any_cast<string>(m["chineseResult"]));
    }
    if (m.find("englishResult") != m.end() && !m["englishResult"].empty()) {
      englishResult = make_shared<string>(boost::any_cast<string>(m["englishResult"]));
    }
  }


  virtual ~GetAITeacherSyncDialogueSuggestionResponseBodyData() = default;
};
class GetAITeacherSyncDialogueSuggestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetAITeacherSyncDialogueSuggestionResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetAITeacherSyncDialogueSuggestionResponseBody() {}

  explicit GetAITeacherSyncDialogueSuggestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        GetAITeacherSyncDialogueSuggestionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetAITeacherSyncDialogueSuggestionResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetAITeacherSyncDialogueSuggestionResponseBody() = default;
};
class GetAITeacherSyncDialogueSuggestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAITeacherSyncDialogueSuggestionResponseBody> body{};

  GetAITeacherSyncDialogueSuggestionResponse() {}

  explicit GetAITeacherSyncDialogueSuggestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAITeacherSyncDialogueSuggestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAITeacherSyncDialogueSuggestionResponseBody>(model1);
      }
    }
  }


  virtual ~GetAITeacherSyncDialogueSuggestionResponse() = default;
};
class PersonalizedTextToImageAddInferenceJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> imageNumber{};
  shared_ptr<vector<string>> imageUrl{};
  shared_ptr<string> prompt{};
  shared_ptr<long> seed{};
  shared_ptr<double> strength{};
  shared_ptr<long> trainSteps{};

  PersonalizedTextToImageAddInferenceJobRequest() {}

  explicit PersonalizedTextToImageAddInferenceJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageNumber) {
      res["imageNumber"] = boost::any(*imageNumber);
    }
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (seed) {
      res["seed"] = boost::any(*seed);
    }
    if (strength) {
      res["strength"] = boost::any(*strength);
    }
    if (trainSteps) {
      res["trainSteps"] = boost::any(*trainSteps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("imageNumber") != m.end() && !m["imageNumber"].empty()) {
      imageNumber = make_shared<long>(boost::any_cast<long>(m["imageNumber"]));
    }
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["imageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["imageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("seed") != m.end() && !m["seed"].empty()) {
      seed = make_shared<long>(boost::any_cast<long>(m["seed"]));
    }
    if (m.find("strength") != m.end() && !m["strength"].empty()) {
      strength = make_shared<double>(boost::any_cast<double>(m["strength"]));
    }
    if (m.find("trainSteps") != m.end() && !m["trainSteps"].empty()) {
      trainSteps = make_shared<long>(boost::any_cast<long>(m["trainSteps"]));
    }
  }


  virtual ~PersonalizedTextToImageAddInferenceJobRequest() = default;
};
class PersonalizedTextToImageAddInferenceJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> promptId{};
  shared_ptr<vector<string>> resultImageUrl{};

  PersonalizedTextToImageAddInferenceJobResponseBodyData() {}

  explicit PersonalizedTextToImageAddInferenceJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (promptId) {
      res["promptId"] = boost::any(*promptId);
    }
    if (resultImageUrl) {
      res["resultImageUrl"] = boost::any(*resultImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("promptId") != m.end() && !m["promptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["promptId"]));
    }
    if (m.find("resultImageUrl") != m.end() && !m["resultImageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultImageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultImageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultImageUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PersonalizedTextToImageAddInferenceJobResponseBodyData() = default;
};
class PersonalizedTextToImageAddInferenceJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<PersonalizedTextToImageAddInferenceJobResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PersonalizedTextToImageAddInferenceJobResponseBody() {}

  explicit PersonalizedTextToImageAddInferenceJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        PersonalizedTextToImageAddInferenceJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PersonalizedTextToImageAddInferenceJobResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~PersonalizedTextToImageAddInferenceJobResponseBody() = default;
};
class PersonalizedTextToImageAddInferenceJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PersonalizedTextToImageAddInferenceJobResponseBody> body{};

  PersonalizedTextToImageAddInferenceJobResponse() {}

  explicit PersonalizedTextToImageAddInferenceJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PersonalizedTextToImageAddInferenceJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PersonalizedTextToImageAddInferenceJobResponseBody>(model1);
      }
    }
  }


  virtual ~PersonalizedTextToImageAddInferenceJobResponse() = default;
};
class PersonalizedTextToImageQueryImageAssetRequest : public Darabonba::Model {
public:
  shared_ptr<string> encodeFormat{};
  shared_ptr<string> imageId{};

  PersonalizedTextToImageQueryImageAssetRequest() {}

  explicit PersonalizedTextToImageQueryImageAssetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeFormat) {
      res["encodeFormat"] = boost::any(*encodeFormat);
    }
    if (imageId) {
      res["imageId"] = boost::any(*imageId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("encodeFormat") != m.end() && !m["encodeFormat"].empty()) {
      encodeFormat = make_shared<string>(boost::any_cast<string>(m["encodeFormat"]));
    }
    if (m.find("imageId") != m.end() && !m["imageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["imageId"]));
    }
  }


  virtual ~PersonalizedTextToImageQueryImageAssetRequest() = default;
};
class PersonalizedTextToImageQueryImageAssetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<boost::any> body{};

  PersonalizedTextToImageQueryImageAssetResponse() {}

  explicit PersonalizedTextToImageQueryImageAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<boost::any>(boost::any_cast<boost::any>(m["body"]));
    }
  }


  virtual ~PersonalizedTextToImageQueryImageAssetResponse() = default;
};
class PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> inferenceJobId{};

  PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest() {}

  explicit PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inferenceJobId) {
      res["inferenceJobId"] = boost::any(*inferenceJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inferenceJobId") != m.end() && !m["inferenceJobId"].empty()) {
      inferenceJobId = make_shared<string>(boost::any_cast<string>(m["inferenceJobId"]));
    }
  }


  virtual ~PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest() = default;
};
class PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> promptId{};
  shared_ptr<vector<string>> resultImageUrl{};

  PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBodyData() {}

  explicit PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (promptId) {
      res["promptId"] = boost::any(*promptId);
    }
    if (resultImageUrl) {
      res["resultImageUrl"] = boost::any(*resultImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("promptId") != m.end() && !m["promptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["promptId"]));
    }
    if (m.find("resultImageUrl") != m.end() && !m["resultImageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultImageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultImageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultImageUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBodyData() = default;
};
class PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody() {}

  explicit PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody() = default;
};
class PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody> body{};

  PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse() {}

  explicit PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<PersonalizedTextToImageQueryPreModelInferenceJobInfoResponseBody>(model1);
      }
    }
  }


  virtual ~PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse() = default;
};
class Personalizedtxt2imgAddInferenceJobRequest : public Darabonba::Model {
public:
  shared_ptr<long> imageNumber{};
  shared_ptr<string> modelId{};
  shared_ptr<string> prompt{};
  shared_ptr<long> seed{};

  Personalizedtxt2imgAddInferenceJobRequest() {}

  explicit Personalizedtxt2imgAddInferenceJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageNumber) {
      res["imageNumber"] = boost::any(*imageNumber);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (seed) {
      res["seed"] = boost::any(*seed);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("imageNumber") != m.end() && !m["imageNumber"].empty()) {
      imageNumber = make_shared<long>(boost::any_cast<long>(m["imageNumber"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("seed") != m.end() && !m["seed"].empty()) {
      seed = make_shared<long>(boost::any_cast<long>(m["seed"]));
    }
  }


  virtual ~Personalizedtxt2imgAddInferenceJobRequest() = default;
};
class Personalizedtxt2imgAddInferenceJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> promptId{};
  shared_ptr<vector<string>> resultImageUrl{};

  Personalizedtxt2imgAddInferenceJobResponseBodyData() {}

  explicit Personalizedtxt2imgAddInferenceJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (promptId) {
      res["promptId"] = boost::any(*promptId);
    }
    if (resultImageUrl) {
      res["resultImageUrl"] = boost::any(*resultImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("promptId") != m.end() && !m["promptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["promptId"]));
    }
    if (m.find("resultImageUrl") != m.end() && !m["resultImageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultImageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultImageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultImageUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~Personalizedtxt2imgAddInferenceJobResponseBodyData() = default;
};
class Personalizedtxt2imgAddInferenceJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<Personalizedtxt2imgAddInferenceJobResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  Personalizedtxt2imgAddInferenceJobResponseBody() {}

  explicit Personalizedtxt2imgAddInferenceJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        Personalizedtxt2imgAddInferenceJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Personalizedtxt2imgAddInferenceJobResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~Personalizedtxt2imgAddInferenceJobResponseBody() = default;
};
class Personalizedtxt2imgAddInferenceJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Personalizedtxt2imgAddInferenceJobResponseBody> body{};

  Personalizedtxt2imgAddInferenceJobResponse() {}

  explicit Personalizedtxt2imgAddInferenceJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Personalizedtxt2imgAddInferenceJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Personalizedtxt2imgAddInferenceJobResponseBody>(model1);
      }
    }
  }


  virtual ~Personalizedtxt2imgAddInferenceJobResponse() = default;
};
class Personalizedtxt2imgAddModelTrainJobRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> imageUrl{};
  shared_ptr<string> name{};
  shared_ptr<string> objectType{};
  shared_ptr<long> trainSteps{};

  Personalizedtxt2imgAddModelTrainJobRequest() {}

  explicit Personalizedtxt2imgAddModelTrainJobRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    if (trainSteps) {
      res["trainSteps"] = boost::any(*trainSteps);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["imageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["imageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
    if (m.find("trainSteps") != m.end() && !m["trainSteps"].empty()) {
      trainSteps = make_shared<long>(boost::any_cast<long>(m["trainSteps"]));
    }
  }


  virtual ~Personalizedtxt2imgAddModelTrainJobRequest() = default;
};
class Personalizedtxt2imgAddModelTrainJobResponseBodyDataInferenceJobList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> promptId{};
  shared_ptr<vector<string>> resultImageUrl{};

  Personalizedtxt2imgAddModelTrainJobResponseBodyDataInferenceJobList() {}

  explicit Personalizedtxt2imgAddModelTrainJobResponseBodyDataInferenceJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (promptId) {
      res["promptId"] = boost::any(*promptId);
    }
    if (resultImageUrl) {
      res["resultImageUrl"] = boost::any(*resultImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("promptId") != m.end() && !m["promptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["promptId"]));
    }
    if (m.find("resultImageUrl") != m.end() && !m["resultImageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultImageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultImageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultImageUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~Personalizedtxt2imgAddModelTrainJobResponseBodyDataInferenceJobList() = default;
};
class Personalizedtxt2imgAddModelTrainJobResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<vector<string>> imageUrl{};
  shared_ptr<long> inferenceImageCount{};
  shared_ptr<vector<Personalizedtxt2imgAddModelTrainJobResponseBodyDataInferenceJobList>> inferenceJobList{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<string> objectType{};

  Personalizedtxt2imgAddModelTrainJobResponseBodyData() {}

  explicit Personalizedtxt2imgAddModelTrainJobResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (inferenceImageCount) {
      res["inferenceImageCount"] = boost::any(*inferenceImageCount);
    }
    if (inferenceJobList) {
      vector<boost::any> temp1;
      for(auto item1:*inferenceJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["inferenceJobList"] = boost::any(temp1);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["imageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["imageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("inferenceImageCount") != m.end() && !m["inferenceImageCount"].empty()) {
      inferenceImageCount = make_shared<long>(boost::any_cast<long>(m["inferenceImageCount"]));
    }
    if (m.find("inferenceJobList") != m.end() && !m["inferenceJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["inferenceJobList"].type()) {
        vector<Personalizedtxt2imgAddModelTrainJobResponseBodyDataInferenceJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["inferenceJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Personalizedtxt2imgAddModelTrainJobResponseBodyDataInferenceJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inferenceJobList = make_shared<vector<Personalizedtxt2imgAddModelTrainJobResponseBodyDataInferenceJobList>>(expect1);
      }
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
  }


  virtual ~Personalizedtxt2imgAddModelTrainJobResponseBodyData() = default;
};
class Personalizedtxt2imgAddModelTrainJobResponseBody : public Darabonba::Model {
public:
  shared_ptr<Personalizedtxt2imgAddModelTrainJobResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  Personalizedtxt2imgAddModelTrainJobResponseBody() {}

  explicit Personalizedtxt2imgAddModelTrainJobResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        Personalizedtxt2imgAddModelTrainJobResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Personalizedtxt2imgAddModelTrainJobResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~Personalizedtxt2imgAddModelTrainJobResponseBody() = default;
};
class Personalizedtxt2imgAddModelTrainJobResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Personalizedtxt2imgAddModelTrainJobResponseBody> body{};

  Personalizedtxt2imgAddModelTrainJobResponse() {}

  explicit Personalizedtxt2imgAddModelTrainJobResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Personalizedtxt2imgAddModelTrainJobResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Personalizedtxt2imgAddModelTrainJobResponseBody>(model1);
      }
    }
  }


  virtual ~Personalizedtxt2imgAddModelTrainJobResponse() = default;
};
class Personalizedtxt2imgQueryImageAssetRequest : public Darabonba::Model {
public:
  shared_ptr<string> encodeFormat{};
  shared_ptr<string> imageId{};
  shared_ptr<string> modelId{};
  shared_ptr<string> promptId{};

  Personalizedtxt2imgQueryImageAssetRequest() {}

  explicit Personalizedtxt2imgQueryImageAssetRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (encodeFormat) {
      res["encodeFormat"] = boost::any(*encodeFormat);
    }
    if (imageId) {
      res["imageId"] = boost::any(*imageId);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (promptId) {
      res["promptId"] = boost::any(*promptId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("encodeFormat") != m.end() && !m["encodeFormat"].empty()) {
      encodeFormat = make_shared<string>(boost::any_cast<string>(m["encodeFormat"]));
    }
    if (m.find("imageId") != m.end() && !m["imageId"].empty()) {
      imageId = make_shared<string>(boost::any_cast<string>(m["imageId"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("promptId") != m.end() && !m["promptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["promptId"]));
    }
  }


  virtual ~Personalizedtxt2imgQueryImageAssetRequest() = default;
};
class Personalizedtxt2imgQueryImageAssetResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<boost::any> body{};

  Personalizedtxt2imgQueryImageAssetResponse() {}

  explicit Personalizedtxt2imgQueryImageAssetResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["body"] = boost::any(*body);
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
      body = make_shared<boost::any>(boost::any_cast<boost::any>(m["body"]));
    }
  }


  virtual ~Personalizedtxt2imgQueryImageAssetResponse() = default;
};
class Personalizedtxt2imgQueryInferenceJobInfoRequest : public Darabonba::Model {
public:
  shared_ptr<string> inferenceJobId{};

  Personalizedtxt2imgQueryInferenceJobInfoRequest() {}

  explicit Personalizedtxt2imgQueryInferenceJobInfoRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (inferenceJobId) {
      res["inferenceJobId"] = boost::any(*inferenceJobId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("inferenceJobId") != m.end() && !m["inferenceJobId"].empty()) {
      inferenceJobId = make_shared<string>(boost::any_cast<string>(m["inferenceJobId"]));
    }
  }


  virtual ~Personalizedtxt2imgQueryInferenceJobInfoRequest() = default;
};
class Personalizedtxt2imgQueryInferenceJobInfoResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> promptId{};
  shared_ptr<vector<string>> resultImageUrl{};

  Personalizedtxt2imgQueryInferenceJobInfoResponseBodyData() {}

  explicit Personalizedtxt2imgQueryInferenceJobInfoResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (promptId) {
      res["promptId"] = boost::any(*promptId);
    }
    if (resultImageUrl) {
      res["resultImageUrl"] = boost::any(*resultImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("promptId") != m.end() && !m["promptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["promptId"]));
    }
    if (m.find("resultImageUrl") != m.end() && !m["resultImageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultImageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultImageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultImageUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~Personalizedtxt2imgQueryInferenceJobInfoResponseBodyData() = default;
};
class Personalizedtxt2imgQueryInferenceJobInfoResponseBody : public Darabonba::Model {
public:
  shared_ptr<Personalizedtxt2imgQueryInferenceJobInfoResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  Personalizedtxt2imgQueryInferenceJobInfoResponseBody() {}

  explicit Personalizedtxt2imgQueryInferenceJobInfoResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        Personalizedtxt2imgQueryInferenceJobInfoResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Personalizedtxt2imgQueryInferenceJobInfoResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~Personalizedtxt2imgQueryInferenceJobInfoResponseBody() = default;
};
class Personalizedtxt2imgQueryInferenceJobInfoResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Personalizedtxt2imgQueryInferenceJobInfoResponseBody> body{};

  Personalizedtxt2imgQueryInferenceJobInfoResponse() {}

  explicit Personalizedtxt2imgQueryInferenceJobInfoResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Personalizedtxt2imgQueryInferenceJobInfoResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Personalizedtxt2imgQueryInferenceJobInfoResponseBody>(model1);
      }
    }
  }


  virtual ~Personalizedtxt2imgQueryInferenceJobInfoResponse() = default;
};
class Personalizedtxt2imgQueryModelTrainJobListResponseBodyDataInferenceJobList : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> promptId{};
  shared_ptr<vector<string>> resultImageUrl{};

  Personalizedtxt2imgQueryModelTrainJobListResponseBodyDataInferenceJobList() {}

  explicit Personalizedtxt2imgQueryModelTrainJobListResponseBodyDataInferenceJobList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (promptId) {
      res["promptId"] = boost::any(*promptId);
    }
    if (resultImageUrl) {
      res["resultImageUrl"] = boost::any(*resultImageUrl);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("promptId") != m.end() && !m["promptId"].empty()) {
      promptId = make_shared<string>(boost::any_cast<string>(m["promptId"]));
    }
    if (m.find("resultImageUrl") != m.end() && !m["resultImageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["resultImageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["resultImageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      resultImageUrl = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~Personalizedtxt2imgQueryModelTrainJobListResponseBodyDataInferenceJobList() = default;
};
class Personalizedtxt2imgQueryModelTrainJobListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> id{};
  shared_ptr<vector<string>> imageUrl{};
  shared_ptr<long> inferenceImageCount{};
  shared_ptr<vector<Personalizedtxt2imgQueryModelTrainJobListResponseBodyDataInferenceJobList>> inferenceJobList{};
  shared_ptr<string> jobStatus{};
  shared_ptr<double> jobTrainProgress{};
  shared_ptr<string> modelId{};
  shared_ptr<string> name{};
  shared_ptr<string> objectType{};

  Personalizedtxt2imgQueryModelTrainJobListResponseBodyData() {}

  explicit Personalizedtxt2imgQueryModelTrainJobListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["createTime"] = boost::any(*createTime);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (imageUrl) {
      res["imageUrl"] = boost::any(*imageUrl);
    }
    if (inferenceImageCount) {
      res["inferenceImageCount"] = boost::any(*inferenceImageCount);
    }
    if (inferenceJobList) {
      vector<boost::any> temp1;
      for(auto item1:*inferenceJobList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["inferenceJobList"] = boost::any(temp1);
    }
    if (jobStatus) {
      res["jobStatus"] = boost::any(*jobStatus);
    }
    if (jobTrainProgress) {
      res["jobTrainProgress"] = boost::any(*jobTrainProgress);
    }
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (objectType) {
      res["objectType"] = boost::any(*objectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("createTime") != m.end() && !m["createTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["createTime"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("imageUrl") != m.end() && !m["imageUrl"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["imageUrl"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["imageUrl"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      imageUrl = make_shared<vector<string>>(toVec1);
    }
    if (m.find("inferenceImageCount") != m.end() && !m["inferenceImageCount"].empty()) {
      inferenceImageCount = make_shared<long>(boost::any_cast<long>(m["inferenceImageCount"]));
    }
    if (m.find("inferenceJobList") != m.end() && !m["inferenceJobList"].empty()) {
      if (typeid(vector<boost::any>) == m["inferenceJobList"].type()) {
        vector<Personalizedtxt2imgQueryModelTrainJobListResponseBodyDataInferenceJobList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["inferenceJobList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Personalizedtxt2imgQueryModelTrainJobListResponseBodyDataInferenceJobList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        inferenceJobList = make_shared<vector<Personalizedtxt2imgQueryModelTrainJobListResponseBodyDataInferenceJobList>>(expect1);
      }
    }
    if (m.find("jobStatus") != m.end() && !m["jobStatus"].empty()) {
      jobStatus = make_shared<string>(boost::any_cast<string>(m["jobStatus"]));
    }
    if (m.find("jobTrainProgress") != m.end() && !m["jobTrainProgress"].empty()) {
      jobTrainProgress = make_shared<double>(boost::any_cast<double>(m["jobTrainProgress"]));
    }
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("objectType") != m.end() && !m["objectType"].empty()) {
      objectType = make_shared<string>(boost::any_cast<string>(m["objectType"]));
    }
  }


  virtual ~Personalizedtxt2imgQueryModelTrainJobListResponseBodyData() = default;
};
class Personalizedtxt2imgQueryModelTrainJobListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<Personalizedtxt2imgQueryModelTrainJobListResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  Personalizedtxt2imgQueryModelTrainJobListResponseBody() {}

  explicit Personalizedtxt2imgQueryModelTrainJobListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        vector<Personalizedtxt2imgQueryModelTrainJobListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            Personalizedtxt2imgQueryModelTrainJobListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<Personalizedtxt2imgQueryModelTrainJobListResponseBodyData>>(expect1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~Personalizedtxt2imgQueryModelTrainJobListResponseBody() = default;
};
class Personalizedtxt2imgQueryModelTrainJobListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Personalizedtxt2imgQueryModelTrainJobListResponseBody> body{};

  Personalizedtxt2imgQueryModelTrainJobListResponse() {}

  explicit Personalizedtxt2imgQueryModelTrainJobListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Personalizedtxt2imgQueryModelTrainJobListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Personalizedtxt2imgQueryModelTrainJobListResponseBody>(model1);
      }
    }
  }


  virtual ~Personalizedtxt2imgQueryModelTrainJobListResponse() = default;
};
class Personalizedtxt2imgQueryModelTrainStatusRequest : public Darabonba::Model {
public:
  shared_ptr<string> modelId{};

  Personalizedtxt2imgQueryModelTrainStatusRequest() {}

  explicit Personalizedtxt2imgQueryModelTrainStatusRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelId) {
      res["modelId"] = boost::any(*modelId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modelId") != m.end() && !m["modelId"].empty()) {
      modelId = make_shared<string>(boost::any_cast<string>(m["modelId"]));
    }
  }


  virtual ~Personalizedtxt2imgQueryModelTrainStatusRequest() = default;
};
class Personalizedtxt2imgQueryModelTrainStatusResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> modelTrainStatus{};

  Personalizedtxt2imgQueryModelTrainStatusResponseBodyData() {}

  explicit Personalizedtxt2imgQueryModelTrainStatusResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (modelTrainStatus) {
      res["modelTrainStatus"] = boost::any(*modelTrainStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("modelTrainStatus") != m.end() && !m["modelTrainStatus"].empty()) {
      modelTrainStatus = make_shared<string>(boost::any_cast<string>(m["modelTrainStatus"]));
    }
  }


  virtual ~Personalizedtxt2imgQueryModelTrainStatusResponseBodyData() = default;
};
class Personalizedtxt2imgQueryModelTrainStatusResponseBody : public Darabonba::Model {
public:
  shared_ptr<Personalizedtxt2imgQueryModelTrainStatusResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  Personalizedtxt2imgQueryModelTrainStatusResponseBody() {}

  explicit Personalizedtxt2imgQueryModelTrainStatusResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (httpStatusCode) {
      res["httpStatusCode"] = boost::any(*httpStatusCode);
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
        Personalizedtxt2imgQueryModelTrainStatusResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<Personalizedtxt2imgQueryModelTrainStatusResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~Personalizedtxt2imgQueryModelTrainStatusResponseBody() = default;
};
class Personalizedtxt2imgQueryModelTrainStatusResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<Personalizedtxt2imgQueryModelTrainStatusResponseBody> body{};

  Personalizedtxt2imgQueryModelTrainStatusResponse() {}

  explicit Personalizedtxt2imgQueryModelTrainStatusResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        Personalizedtxt2imgQueryModelTrainStatusResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<Personalizedtxt2imgQueryModelTrainStatusResponseBody>(model1);
      }
    }
  }


  virtual ~Personalizedtxt2imgQueryModelTrainStatusResponse() = default;
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
  AITeacherExpansionPracticeTaskGenerateResponse aITeacherExpansionPracticeTaskGenerateWithOptions(shared_ptr<AITeacherExpansionPracticeTaskGenerateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AITeacherExpansionPracticeTaskGenerateResponse aITeacherExpansionPracticeTaskGenerate(shared_ptr<AITeacherExpansionPracticeTaskGenerateRequest> request);
  AITeacherSyncPracticeTaskGenerateResponse aITeacherSyncPracticeTaskGenerateWithOptions(shared_ptr<AITeacherSyncPracticeTaskGenerateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AITeacherSyncPracticeTaskGenerateResponse aITeacherSyncPracticeTaskGenerate(shared_ptr<AITeacherSyncPracticeTaskGenerateRequest> request);
  AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse aliyunConsoleOpenApiQueryAliyunConsoleServcieList();
  AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse aliyunConsoleOpenApiQueryAliyunConsoleServiceListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponse aliyunConsoleOpenApiQueryAliyunConsoleServiceList();
  ExecuteAITeacherExpansionDialogueResponse executeAITeacherExpansionDialogueWithOptions(shared_ptr<ExecuteAITeacherExpansionDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteAITeacherExpansionDialogueResponse executeAITeacherExpansionDialogue(shared_ptr<ExecuteAITeacherExpansionDialogueRequest> request);
  ExecuteAITeacherExpansionDialogueRefineResponse executeAITeacherExpansionDialogueRefineWithOptions(shared_ptr<ExecuteAITeacherExpansionDialogueRefineRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteAITeacherExpansionDialogueRefineResponse executeAITeacherExpansionDialogueRefine(shared_ptr<ExecuteAITeacherExpansionDialogueRefineRequest> request);
  ExecuteAITeacherExpansionDialogueTranslateResponse executeAITeacherExpansionDialogueTranslateWithOptions(shared_ptr<ExecuteAITeacherExpansionDialogueTranslateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteAITeacherExpansionDialogueTranslateResponse executeAITeacherExpansionDialogueTranslate(shared_ptr<ExecuteAITeacherExpansionDialogueTranslateRequest> request);
  ExecuteAITeacherGrammarCheckResponse executeAITeacherGrammarCheckWithOptions(shared_ptr<ExecuteAITeacherGrammarCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteAITeacherGrammarCheckResponse executeAITeacherGrammarCheck(shared_ptr<ExecuteAITeacherGrammarCheckRequest> request);
  ExecuteAITeacherSyncDialogueResponse executeAITeacherSyncDialogueWithOptions(shared_ptr<ExecuteAITeacherSyncDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteAITeacherSyncDialogueResponse executeAITeacherSyncDialogue(shared_ptr<ExecuteAITeacherSyncDialogueRequest> request);
  ExecuteAITeacherSyncDialogueTranslateResponse executeAITeacherSyncDialogueTranslateWithOptions(shared_ptr<ExecuteAITeacherSyncDialogueTranslateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteAITeacherSyncDialogueTranslateResponse executeAITeacherSyncDialogueTranslate(shared_ptr<ExecuteAITeacherSyncDialogueTranslateRequest> request);
  GetAITeacherExpansionDialogueSuggestionResponse getAITeacherExpansionDialogueSuggestionWithOptions(shared_ptr<GetAITeacherExpansionDialogueSuggestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAITeacherExpansionDialogueSuggestionResponse getAITeacherExpansionDialogueSuggestion(shared_ptr<GetAITeacherExpansionDialogueSuggestionRequest> request);
  GetAITeacherSyncDialogueSuggestionResponse getAITeacherSyncDialogueSuggestionWithOptions(shared_ptr<GetAITeacherSyncDialogueSuggestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAITeacherSyncDialogueSuggestionResponse getAITeacherSyncDialogueSuggestion(shared_ptr<GetAITeacherSyncDialogueSuggestionRequest> request);
  PersonalizedTextToImageAddInferenceJobResponse personalizedTextToImageAddInferenceJobWithOptions(shared_ptr<PersonalizedTextToImageAddInferenceJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PersonalizedTextToImageAddInferenceJobResponse personalizedTextToImageAddInferenceJob(shared_ptr<PersonalizedTextToImageAddInferenceJobRequest> request);
  PersonalizedTextToImageQueryImageAssetResponse personalizedTextToImageQueryImageAssetWithOptions(shared_ptr<PersonalizedTextToImageQueryImageAssetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PersonalizedTextToImageQueryImageAssetResponse personalizedTextToImageQueryImageAsset(shared_ptr<PersonalizedTextToImageQueryImageAssetRequest> request);
  PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse personalizedTextToImageQueryPreModelInferenceJobInfoWithOptions(shared_ptr<PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  PersonalizedTextToImageQueryPreModelInferenceJobInfoResponse personalizedTextToImageQueryPreModelInferenceJobInfo(shared_ptr<PersonalizedTextToImageQueryPreModelInferenceJobInfoRequest> request);
  Personalizedtxt2imgAddInferenceJobResponse personalizedtxt2imgAddInferenceJobWithOptions(shared_ptr<Personalizedtxt2imgAddInferenceJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Personalizedtxt2imgAddInferenceJobResponse personalizedtxt2imgAddInferenceJob(shared_ptr<Personalizedtxt2imgAddInferenceJobRequest> request);
  Personalizedtxt2imgAddModelTrainJobResponse personalizedtxt2imgAddModelTrainJobWithOptions(shared_ptr<Personalizedtxt2imgAddModelTrainJobRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Personalizedtxt2imgAddModelTrainJobResponse personalizedtxt2imgAddModelTrainJob(shared_ptr<Personalizedtxt2imgAddModelTrainJobRequest> request);
  Personalizedtxt2imgQueryImageAssetResponse personalizedtxt2imgQueryImageAssetWithOptions(shared_ptr<Personalizedtxt2imgQueryImageAssetRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Personalizedtxt2imgQueryImageAssetResponse personalizedtxt2imgQueryImageAsset(shared_ptr<Personalizedtxt2imgQueryImageAssetRequest> request);
  Personalizedtxt2imgQueryInferenceJobInfoResponse personalizedtxt2imgQueryInferenceJobInfoWithOptions(shared_ptr<Personalizedtxt2imgQueryInferenceJobInfoRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Personalizedtxt2imgQueryInferenceJobInfoResponse personalizedtxt2imgQueryInferenceJobInfo(shared_ptr<Personalizedtxt2imgQueryInferenceJobInfoRequest> request);
  Personalizedtxt2imgQueryModelTrainJobListResponse personalizedtxt2imgQueryModelTrainJobListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Personalizedtxt2imgQueryModelTrainJobListResponse personalizedtxt2imgQueryModelTrainJobList();
  Personalizedtxt2imgQueryModelTrainStatusResponse personalizedtxt2imgQueryModelTrainStatusWithOptions(shared_ptr<Personalizedtxt2imgQueryModelTrainStatusRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  Personalizedtxt2imgQueryModelTrainStatusResponse personalizedtxt2imgQueryModelTrainStatus(shared_ptr<Personalizedtxt2imgQueryModelTrainStatusRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AiContent20240611

#endif
