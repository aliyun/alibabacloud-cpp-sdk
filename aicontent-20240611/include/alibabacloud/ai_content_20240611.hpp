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
  AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse aliyunConsoleOpenApiQueryAliyunConsoleServcieListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AliyunConsoleOpenApiQueryAliyunConsoleServcieListResponse aliyunConsoleOpenApiQueryAliyunConsoleServcieList();
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
