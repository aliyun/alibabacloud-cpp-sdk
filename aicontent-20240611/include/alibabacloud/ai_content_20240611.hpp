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
class AliyunConsoleServiceInfoDTO : public Darabonba::Model {
public:
  shared_ptr<string> buyUrl{};
  shared_ptr<string> documentUrl{};
  shared_ptr<long> freeConcurrencyCount{};
  shared_ptr<long> freeCount{};
  shared_ptr<string> serviceCode{};
  shared_ptr<string> serviceName{};

  AliyunConsoleServiceInfoDTO() {}

  explicit AliyunConsoleServiceInfoDTO(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (buyUrl) {
      res["buyUrl"] = boost::any(*buyUrl);
    }
    if (documentUrl) {
      res["documentUrl"] = boost::any(*documentUrl);
    }
    if (freeConcurrencyCount) {
      res["freeConcurrencyCount"] = boost::any(*freeConcurrencyCount);
    }
    if (freeCount) {
      res["freeCount"] = boost::any(*freeCount);
    }
    if (serviceCode) {
      res["serviceCode"] = boost::any(*serviceCode);
    }
    if (serviceName) {
      res["serviceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("buyUrl") != m.end() && !m["buyUrl"].empty()) {
      buyUrl = make_shared<string>(boost::any_cast<string>(m["buyUrl"]));
    }
    if (m.find("documentUrl") != m.end() && !m["documentUrl"].empty()) {
      documentUrl = make_shared<string>(boost::any_cast<string>(m["documentUrl"]));
    }
    if (m.find("freeConcurrencyCount") != m.end() && !m["freeConcurrencyCount"].empty()) {
      freeConcurrencyCount = make_shared<long>(boost::any_cast<long>(m["freeConcurrencyCount"]));
    }
    if (m.find("freeCount") != m.end() && !m["freeCount"].empty()) {
      freeCount = make_shared<long>(boost::any_cast<long>(m["freeCount"]));
    }
    if (m.find("serviceCode") != m.end() && !m["serviceCode"].empty()) {
      serviceCode = make_shared<string>(boost::any_cast<string>(m["serviceCode"]));
    }
    if (m.find("serviceName") != m.end() && !m["serviceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["serviceName"]));
    }
  }


  virtual ~AliyunConsoleServiceInfoDTO() = default;
};
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
class OralEvaluationStatisticsCallsCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationAccessId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> granularity{};
  shared_ptr<string> projectId{};
  shared_ptr<string> startTime{};

  OralEvaluationStatisticsCallsCountRequest() {}

  explicit OralEvaluationStatisticsCallsCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (granularity) {
      res["granularity"] = boost::any(*granularity);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("granularity") != m.end() && !m["granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["granularity"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~OralEvaluationStatisticsCallsCountRequest() = default;
};
class OralEvaluationStatisticsCallsCountResponseProjectDataApplicationDataData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> name{};

  OralEvaluationStatisticsCallsCountResponseProjectDataApplicationDataData() {}

  explicit OralEvaluationStatisticsCallsCountResponseProjectDataApplicationDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~OralEvaluationStatisticsCallsCountResponseProjectDataApplicationDataData() = default;
};
class OralEvaluationStatisticsCallsCountResponseProjectDataApplicationData : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsCallsCountResponseProjectDataApplicationDataData>> data{};
  shared_ptr<string> applicationAccessId{};

  OralEvaluationStatisticsCallsCountResponseProjectDataApplicationData() {}

  explicit OralEvaluationStatisticsCallsCountResponseProjectDataApplicationData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<OralEvaluationStatisticsCallsCountResponseProjectDataApplicationDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsCallsCountResponseProjectDataApplicationDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<OralEvaluationStatisticsCallsCountResponseProjectDataApplicationDataData>>(expect1);
      }
    }
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
  }


  virtual ~OralEvaluationStatisticsCallsCountResponseProjectDataApplicationData() = default;
};
class OralEvaluationStatisticsCallsCountResponseProjectData : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsCallsCountResponseProjectDataApplicationData>> applicationData{};
  shared_ptr<string> applicationInternalId{};

  OralEvaluationStatisticsCallsCountResponseProjectData() {}

  explicit OralEvaluationStatisticsCallsCountResponseProjectData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationData) {
      vector<boost::any> temp1;
      for(auto item1:*applicationData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationData"] = boost::any(temp1);
    }
    if (applicationInternalId) {
      res["applicationInternalId"] = boost::any(*applicationInternalId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationData") != m.end() && !m["ApplicationData"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationData"].type()) {
        vector<OralEvaluationStatisticsCallsCountResponseProjectDataApplicationData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsCallsCountResponseProjectDataApplicationData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationData = make_shared<vector<OralEvaluationStatisticsCallsCountResponseProjectDataApplicationData>>(expect1);
      }
    }
    if (m.find("applicationInternalId") != m.end() && !m["applicationInternalId"].empty()) {
      applicationInternalId = make_shared<string>(boost::any_cast<string>(m["applicationInternalId"]));
    }
  }


  virtual ~OralEvaluationStatisticsCallsCountResponseProjectData() = default;
};
class OralEvaluationStatisticsCallsCountResponse : public Darabonba::Model {
public:
  shared_ptr<OralEvaluationStatisticsCallsCountResponseProjectData> projectData{};
  shared_ptr<string> projectId{};

  OralEvaluationStatisticsCallsCountResponse() {}

  explicit OralEvaluationStatisticsCallsCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectData) {
      res["projectData"] = projectData ? boost::any(projectData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectData") != m.end() && !m["projectData"].empty()) {
      if (typeid(map<string, boost::any>) == m["projectData"].type()) {
        OralEvaluationStatisticsCallsCountResponseProjectData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["projectData"]));
        projectData = make_shared<OralEvaluationStatisticsCallsCountResponseProjectData>(model1);
      }
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~OralEvaluationStatisticsCallsCountResponse() = default;
};
class OralEvaluationStatisticsConcurrentCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationAccessId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> granularity{};
  shared_ptr<string> projectId{};
  shared_ptr<string> startTime{};

  OralEvaluationStatisticsConcurrentCountRequest() {}

  explicit OralEvaluationStatisticsConcurrentCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (granularity) {
      res["granularity"] = boost::any(*granularity);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("granularity") != m.end() && !m["granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["granularity"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~OralEvaluationStatisticsConcurrentCountRequest() = default;
};
class OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationDataData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> name{};

  OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationDataData() {}

  explicit OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationDataData() = default;
};
class OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationData : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationDataData>> data{};
  shared_ptr<string> applicationAccessId{};

  OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationData() {}

  explicit OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationDataData>>(expect1);
      }
    }
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
  }


  virtual ~OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationData() = default;
};
class OralEvaluationStatisticsConcurrentCountResponseProjectData : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationData>> applicationData{};
  shared_ptr<string> applicationInternalId{};

  OralEvaluationStatisticsConcurrentCountResponseProjectData() {}

  explicit OralEvaluationStatisticsConcurrentCountResponseProjectData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationData) {
      vector<boost::any> temp1;
      for(auto item1:*applicationData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationData"] = boost::any(temp1);
    }
    if (applicationInternalId) {
      res["applicationInternalId"] = boost::any(*applicationInternalId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationData") != m.end() && !m["ApplicationData"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationData"].type()) {
        vector<OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationData = make_shared<vector<OralEvaluationStatisticsConcurrentCountResponseProjectDataApplicationData>>(expect1);
      }
    }
    if (m.find("applicationInternalId") != m.end() && !m["applicationInternalId"].empty()) {
      applicationInternalId = make_shared<string>(boost::any_cast<string>(m["applicationInternalId"]));
    }
  }


  virtual ~OralEvaluationStatisticsConcurrentCountResponseProjectData() = default;
};
class OralEvaluationStatisticsConcurrentCountResponse : public Darabonba::Model {
public:
  shared_ptr<OralEvaluationStatisticsConcurrentCountResponseProjectData> projectData{};
  shared_ptr<string> projectId{};

  OralEvaluationStatisticsConcurrentCountResponse() {}

  explicit OralEvaluationStatisticsConcurrentCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectData) {
      res["projectData"] = projectData ? boost::any(projectData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectData") != m.end() && !m["projectData"].empty()) {
      if (typeid(map<string, boost::any>) == m["projectData"].type()) {
        OralEvaluationStatisticsConcurrentCountResponseProjectData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["projectData"]));
        projectData = make_shared<OralEvaluationStatisticsConcurrentCountResponseProjectData>(model1);
      }
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~OralEvaluationStatisticsConcurrentCountResponse() = default;
};
class OralEvaluationStatisticsErrorCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationAccessId{};
  shared_ptr<string> endTime{};
  shared_ptr<vector<string>> errorCode{};
  shared_ptr<string> granularity{};
  shared_ptr<string> projectId{};
  shared_ptr<string> startTime{};

  OralEvaluationStatisticsErrorCountRequest() {}

  explicit OralEvaluationStatisticsErrorCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    if (endTime) {
      res["endTime"] = boost::any(*endTime);
    }
    if (errorCode) {
      res["errorCode"] = boost::any(*errorCode);
    }
    if (granularity) {
      res["granularity"] = boost::any(*granularity);
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (startTime) {
      res["startTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
    if (m.find("endTime") != m.end() && !m["endTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["endTime"]));
    }
    if (m.find("errorCode") != m.end() && !m["errorCode"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["errorCode"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["errorCode"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      errorCode = make_shared<vector<string>>(toVec1);
    }
    if (m.find("granularity") != m.end() && !m["granularity"].empty()) {
      granularity = make_shared<string>(boost::any_cast<string>(m["granularity"]));
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("startTime") != m.end() && !m["startTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["startTime"]));
    }
  }


  virtual ~OralEvaluationStatisticsErrorCountRequest() = default;
};
class OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataDataData : public Darabonba::Model {
public:
  shared_ptr<long> count{};
  shared_ptr<string> name{};

  OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataDataData() {}

  explicit OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (count) {
      res["count"] = boost::any(*count);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("count") != m.end() && !m["count"].empty()) {
      count = make_shared<long>(boost::any_cast<long>(m["count"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
  }


  virtual ~OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataDataData() = default;
};
class OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataData : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataDataData>> data{};
  shared_ptr<string> errorCode{};
  shared_ptr<string> errorMessage{};

  OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataData() {}

  explicit OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (errorMessage) {
      res["ErrorMessage"] = boost::any(*errorMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataDataData>>(expect1);
      }
    }
    if (m.find("ErrorCode") != m.end() && !m["ErrorCode"].empty()) {
      errorCode = make_shared<string>(boost::any_cast<string>(m["ErrorCode"]));
    }
    if (m.find("ErrorMessage") != m.end() && !m["ErrorMessage"].empty()) {
      errorMessage = make_shared<string>(boost::any_cast<string>(m["ErrorMessage"]));
    }
  }


  virtual ~OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataData() = default;
};
class OralEvaluationStatisticsErrorCountResponseProjectDataApplicationData : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataData>> data{};
  shared_ptr<string> applicationAccessId{};

  OralEvaluationStatisticsErrorCountResponseProjectDataApplicationData() {}

  explicit OralEvaluationStatisticsErrorCountResponseProjectDataApplicationData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<OralEvaluationStatisticsErrorCountResponseProjectDataApplicationDataData>>(expect1);
      }
    }
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
  }


  virtual ~OralEvaluationStatisticsErrorCountResponseProjectDataApplicationData() = default;
};
class OralEvaluationStatisticsErrorCountResponseProjectData : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsErrorCountResponseProjectDataApplicationData>> applicationData{};
  shared_ptr<string> applicationInternalId{};

  OralEvaluationStatisticsErrorCountResponseProjectData() {}

  explicit OralEvaluationStatisticsErrorCountResponseProjectData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationData) {
      vector<boost::any> temp1;
      for(auto item1:*applicationData){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationData"] = boost::any(temp1);
    }
    if (applicationInternalId) {
      res["applicationInternalId"] = boost::any(*applicationInternalId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationData") != m.end() && !m["ApplicationData"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationData"].type()) {
        vector<OralEvaluationStatisticsErrorCountResponseProjectDataApplicationData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationData"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsErrorCountResponseProjectDataApplicationData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationData = make_shared<vector<OralEvaluationStatisticsErrorCountResponseProjectDataApplicationData>>(expect1);
      }
    }
    if (m.find("applicationInternalId") != m.end() && !m["applicationInternalId"].empty()) {
      applicationInternalId = make_shared<string>(boost::any_cast<string>(m["applicationInternalId"]));
    }
  }


  virtual ~OralEvaluationStatisticsErrorCountResponseProjectData() = default;
};
class OralEvaluationStatisticsErrorCountResponse : public Darabonba::Model {
public:
  shared_ptr<OralEvaluationStatisticsErrorCountResponseProjectData> projectData{};
  shared_ptr<string> projectId{};

  OralEvaluationStatisticsErrorCountResponse() {}

  explicit OralEvaluationStatisticsErrorCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectData) {
      res["ProjectData"] = projectData ? boost::any(projectData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ProjectData") != m.end() && !m["ProjectData"].empty()) {
      if (typeid(map<string, boost::any>) == m["ProjectData"].type()) {
        OralEvaluationStatisticsErrorCountResponseProjectData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["ProjectData"]));
        projectData = make_shared<OralEvaluationStatisticsErrorCountResponseProjectData>(model1);
      }
    }
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~OralEvaluationStatisticsErrorCountResponse() = default;
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
class AliyunConsoleOpenApiQueryAliyunConsoleServiceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AliyunConsoleServiceInfoDTO>> data{};
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
        vector<AliyunConsoleServiceInfoDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AliyunConsoleServiceInfoDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<AliyunConsoleServiceInfoDTO>>(expect1);
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
class CountOralEvaluationStatisticsCallsRequest : public Darabonba::Model {
public:
  shared_ptr<OralEvaluationStatisticsCallsCountRequest> body{};

  CountOralEvaluationStatisticsCallsRequest() {}

  explicit CountOralEvaluationStatisticsCallsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OralEvaluationStatisticsCallsCountRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OralEvaluationStatisticsCallsCountRequest>(model1);
      }
    }
  }


  virtual ~CountOralEvaluationStatisticsCallsRequest() = default;
};
class CountOralEvaluationStatisticsCallsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsCallsCountResponse>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CountOralEvaluationStatisticsCallsResponseBody() {}

  explicit CountOralEvaluationStatisticsCallsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<OralEvaluationStatisticsCallsCountResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsCallsCountResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<OralEvaluationStatisticsCallsCountResponse>>(expect1);
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


  virtual ~CountOralEvaluationStatisticsCallsResponseBody() = default;
};
class CountOralEvaluationStatisticsCallsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CountOralEvaluationStatisticsCallsResponseBody> body{};

  CountOralEvaluationStatisticsCallsResponse() {}

  explicit CountOralEvaluationStatisticsCallsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CountOralEvaluationStatisticsCallsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CountOralEvaluationStatisticsCallsResponseBody>(model1);
      }
    }
  }


  virtual ~CountOralEvaluationStatisticsCallsResponse() = default;
};
class CountOralEvaluationStatisticsConcurrentRequest : public Darabonba::Model {
public:
  shared_ptr<OralEvaluationStatisticsConcurrentCountRequest> body{};

  CountOralEvaluationStatisticsConcurrentRequest() {}

  explicit CountOralEvaluationStatisticsConcurrentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OralEvaluationStatisticsConcurrentCountRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OralEvaluationStatisticsConcurrentCountRequest>(model1);
      }
    }
  }


  virtual ~CountOralEvaluationStatisticsConcurrentRequest() = default;
};
class CountOralEvaluationStatisticsConcurrentResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsConcurrentCountResponse>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CountOralEvaluationStatisticsConcurrentResponseBody() {}

  explicit CountOralEvaluationStatisticsConcurrentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<OralEvaluationStatisticsConcurrentCountResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsConcurrentCountResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<OralEvaluationStatisticsConcurrentCountResponse>>(expect1);
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


  virtual ~CountOralEvaluationStatisticsConcurrentResponseBody() = default;
};
class CountOralEvaluationStatisticsConcurrentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CountOralEvaluationStatisticsConcurrentResponseBody> body{};

  CountOralEvaluationStatisticsConcurrentResponse() {}

  explicit CountOralEvaluationStatisticsConcurrentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CountOralEvaluationStatisticsConcurrentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CountOralEvaluationStatisticsConcurrentResponseBody>(model1);
      }
    }
  }


  virtual ~CountOralEvaluationStatisticsConcurrentResponse() = default;
};
class CountOralEvaluationStatisticsErrorRequest : public Darabonba::Model {
public:
  shared_ptr<OralEvaluationStatisticsErrorCountRequest> body{};

  CountOralEvaluationStatisticsErrorRequest() {}

  explicit CountOralEvaluationStatisticsErrorRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        OralEvaluationStatisticsErrorCountRequest model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<OralEvaluationStatisticsErrorCountRequest>(model1);
      }
    }
  }


  virtual ~CountOralEvaluationStatisticsErrorRequest() = default;
};
class CountOralEvaluationStatisticsErrorResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<OralEvaluationStatisticsErrorCountResponse>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CountOralEvaluationStatisticsErrorResponseBody() {}

  explicit CountOralEvaluationStatisticsErrorResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<OralEvaluationStatisticsErrorCountResponse> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            OralEvaluationStatisticsErrorCountResponse model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<OralEvaluationStatisticsErrorCountResponse>>(expect1);
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


  virtual ~CountOralEvaluationStatisticsErrorResponseBody() = default;
};
class CountOralEvaluationStatisticsErrorResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CountOralEvaluationStatisticsErrorResponseBody> body{};

  CountOralEvaluationStatisticsErrorResponse() {}

  explicit CountOralEvaluationStatisticsErrorResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CountOralEvaluationStatisticsErrorResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CountOralEvaluationStatisticsErrorResponseBody>(model1);
      }
    }
  }


  virtual ~CountOralEvaluationStatisticsErrorResponse() = default;
};
class CreateAccessWarrantRequest : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> requestSign{};
  shared_ptr<string> timestamp{};
  shared_ptr<string> userClientIp{};
  shared_ptr<string> userId{};
  shared_ptr<long> warrantAvailable{};

  CreateAccessWarrantRequest() {}

  explicit CreateAccessWarrantRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["appId"] = boost::any(*appId);
    }
    if (requestSign) {
      res["requestSign"] = boost::any(*requestSign);
    }
    if (timestamp) {
      res["timestamp"] = boost::any(*timestamp);
    }
    if (userClientIp) {
      res["userClientIp"] = boost::any(*userClientIp);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    if (warrantAvailable) {
      res["warrantAvailable"] = boost::any(*warrantAvailable);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appId") != m.end() && !m["appId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["appId"]));
    }
    if (m.find("requestSign") != m.end() && !m["requestSign"].empty()) {
      requestSign = make_shared<string>(boost::any_cast<string>(m["requestSign"]));
    }
    if (m.find("timestamp") != m.end() && !m["timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["timestamp"]));
    }
    if (m.find("userClientIp") != m.end() && !m["userClientIp"].empty()) {
      userClientIp = make_shared<string>(boost::any_cast<string>(m["userClientIp"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
    if (m.find("warrantAvailable") != m.end() && !m["warrantAvailable"].empty()) {
      warrantAvailable = make_shared<long>(boost::any_cast<long>(m["warrantAvailable"]));
    }
  }


  virtual ~CreateAccessWarrantRequest() = default;
};
class CreateAccessWarrantResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> accessToken{};
  shared_ptr<string> accessWarrantId{};
  shared_ptr<string> applicationAccessId{};
  shared_ptr<string> createTime{};
  shared_ptr<string> expireTime{};
  shared_ptr<string> userId{};

  CreateAccessWarrantResponseBodyData() {}

  explicit CreateAccessWarrantResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (accessToken) {
      res["AccessToken"] = boost::any(*accessToken);
    }
    if (accessWarrantId) {
      res["AccessWarrantId"] = boost::any(*accessWarrantId);
    }
    if (applicationAccessId) {
      res["ApplicationAccessId"] = boost::any(*applicationAccessId);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (expireTime) {
      res["ExpireTime"] = boost::any(*expireTime);
    }
    if (userId) {
      res["UserId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AccessToken") != m.end() && !m["AccessToken"].empty()) {
      accessToken = make_shared<string>(boost::any_cast<string>(m["AccessToken"]));
    }
    if (m.find("AccessWarrantId") != m.end() && !m["AccessWarrantId"].empty()) {
      accessWarrantId = make_shared<string>(boost::any_cast<string>(m["AccessWarrantId"]));
    }
    if (m.find("ApplicationAccessId") != m.end() && !m["ApplicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["ApplicationAccessId"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ExpireTime") != m.end() && !m["ExpireTime"].empty()) {
      expireTime = make_shared<string>(boost::any_cast<string>(m["ExpireTime"]));
    }
    if (m.find("UserId") != m.end() && !m["UserId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["UserId"]));
    }
  }


  virtual ~CreateAccessWarrantResponseBodyData() = default;
};
class CreateAccessWarrantResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAccessWarrantResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateAccessWarrantResponseBody() {}

  explicit CreateAccessWarrantResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessWarrantResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateAccessWarrantResponseBodyData>(model1);
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


  virtual ~CreateAccessWarrantResponseBody() = default;
};
class CreateAccessWarrantResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAccessWarrantResponseBody> body{};

  CreateAccessWarrantResponse() {}

  explicit CreateAccessWarrantResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAccessWarrantResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAccessWarrantResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAccessWarrantResponse() = default;
};
class CreateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectName{};
  shared_ptr<string> projectType{};

  CreateProjectRequest() {}

  explicit CreateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    if (projectType) {
      res["projectType"] = boost::any(*projectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
    if (m.find("projectType") != m.end() && !m["projectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["projectType"]));
    }
  }


  virtual ~CreateProjectRequest() = default;
};
class CreateProjectResponseBodyDataProjectAppsApplicationAccessIds : public Darabonba::Model {
public:
  shared_ptr<string> applicationAccessId{};
  shared_ptr<string> applicationAccessSecret{};

  CreateProjectResponseBodyDataProjectAppsApplicationAccessIds() {}

  explicit CreateProjectResponseBodyDataProjectAppsApplicationAccessIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    if (applicationAccessSecret) {
      res["applicationAccessSecret"] = boost::any(*applicationAccessSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
    if (m.find("applicationAccessSecret") != m.end() && !m["applicationAccessSecret"].empty()) {
      applicationAccessSecret = make_shared<string>(boost::any_cast<string>(m["applicationAccessSecret"]));
    }
  }


  virtual ~CreateProjectResponseBodyDataProjectAppsApplicationAccessIds() = default;
};
class CreateProjectResponseBodyDataProjectApps : public Darabonba::Model {
public:
  shared_ptr<vector<CreateProjectResponseBodyDataProjectAppsApplicationAccessIds>> applicationAccessIds{};
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  CreateProjectResponseBodyDataProjectApps() {}

  explicit CreateProjectResponseBodyDataProjectApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessIds) {
      vector<boost::any> temp1;
      for(auto item1:*applicationAccessIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationAccessIds"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationAccessIds") != m.end() && !m["ApplicationAccessIds"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationAccessIds"].type()) {
        vector<CreateProjectResponseBodyDataProjectAppsApplicationAccessIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationAccessIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProjectResponseBodyDataProjectAppsApplicationAccessIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationAccessIds = make_shared<vector<CreateProjectResponseBodyDataProjectAppsApplicationAccessIds>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~CreateProjectResponseBodyDataProjectApps() = default;
};
class CreateProjectResponseBodyDataProjectSDK : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> demoUrl{};
  shared_ptr<string> deployMode{};
  shared_ptr<string> developLanguage{};
  shared_ptr<string> docUrl{};
  shared_ptr<string> sdkName{};
  shared_ptr<string> sdkUrl{};
  shared_ptr<string> sdkVersion{};

  CreateProjectResponseBodyDataProjectSDK() {}

  explicit CreateProjectResponseBodyDataProjectSDK(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (demoUrl) {
      res["DemoUrl"] = boost::any(*demoUrl);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (developLanguage) {
      res["DevelopLanguage"] = boost::any(*developLanguage);
    }
    if (docUrl) {
      res["DocUrl"] = boost::any(*docUrl);
    }
    if (sdkName) {
      res["SdkName"] = boost::any(*sdkName);
    }
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DemoUrl") != m.end() && !m["DemoUrl"].empty()) {
      demoUrl = make_shared<string>(boost::any_cast<string>(m["DemoUrl"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("DevelopLanguage") != m.end() && !m["DevelopLanguage"].empty()) {
      developLanguage = make_shared<string>(boost::any_cast<string>(m["DevelopLanguage"]));
    }
    if (m.find("DocUrl") != m.end() && !m["DocUrl"].empty()) {
      docUrl = make_shared<string>(boost::any_cast<string>(m["DocUrl"]));
    }
    if (m.find("SdkName") != m.end() && !m["SdkName"].empty()) {
      sdkName = make_shared<string>(boost::any_cast<string>(m["SdkName"]));
    }
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
  }


  virtual ~CreateProjectResponseBodyDataProjectSDK() = default;
};
class CreateProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<CreateProjectResponseBodyDataProjectApps>> projectApps{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<vector<CreateProjectResponseBodyDataProjectSDK>> projectSDK{};
  shared_ptr<string> projectType{};

  CreateProjectResponseBodyData() {}

  explicit CreateProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (projectApps) {
      vector<boost::any> temp1;
      for(auto item1:*projectApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectApps"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (projectSDK) {
      vector<boost::any> temp1;
      for(auto item1:*projectSDK){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectSDK"] = boost::any(temp1);
    }
    if (projectType) {
      res["ProjectType"] = boost::any(*projectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ProjectApps") != m.end() && !m["ProjectApps"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectApps"].type()) {
        vector<CreateProjectResponseBodyDataProjectApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProjectResponseBodyDataProjectApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectApps = make_shared<vector<CreateProjectResponseBodyDataProjectApps>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ProjectSDK") != m.end() && !m["ProjectSDK"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectSDK"].type()) {
        vector<CreateProjectResponseBodyDataProjectSDK> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectSDK"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            CreateProjectResponseBodyDataProjectSDK model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectSDK = make_shared<vector<CreateProjectResponseBodyDataProjectSDK>>(expect1);
      }
    }
    if (m.find("ProjectType") != m.end() && !m["ProjectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["ProjectType"]));
    }
  }


  virtual ~CreateProjectResponseBodyData() = default;
};
class CreateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateProjectResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CreateProjectResponseBody() {}

  explicit CreateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<CreateProjectResponseBodyData>(model1);
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


  virtual ~CreateProjectResponseBody() = default;
};
class CreateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateProjectResponseBody> body{};

  CreateProjectResponse() {}

  explicit CreateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~CreateProjectResponse() = default;
};
class ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> essayOutline{};
  shared_ptr<string> essayRequirements{};
  shared_ptr<string> essayTopic{};
  shared_ptr<string> essayType{};
  shared_ptr<long> essayWordCount{};
  shared_ptr<long> grade{};
  shared_ptr<string> responseMode{};
  shared_ptr<string> userId{};

  ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest() {}

  explicit ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (essayOutline) {
      res["essayOutline"] = boost::any(*essayOutline);
    }
    if (essayRequirements) {
      res["essayRequirements"] = boost::any(*essayRequirements);
    }
    if (essayTopic) {
      res["essayTopic"] = boost::any(*essayTopic);
    }
    if (essayType) {
      res["essayType"] = boost::any(*essayType);
    }
    if (essayWordCount) {
      res["essayWordCount"] = boost::any(*essayWordCount);
    }
    if (grade) {
      res["grade"] = boost::any(*grade);
    }
    if (responseMode) {
      res["responseMode"] = boost::any(*responseMode);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("essayOutline") != m.end() && !m["essayOutline"].empty()) {
      essayOutline = make_shared<string>(boost::any_cast<string>(m["essayOutline"]));
    }
    if (m.find("essayRequirements") != m.end() && !m["essayRequirements"].empty()) {
      essayRequirements = make_shared<string>(boost::any_cast<string>(m["essayRequirements"]));
    }
    if (m.find("essayTopic") != m.end() && !m["essayTopic"].empty()) {
      essayTopic = make_shared<string>(boost::any_cast<string>(m["essayTopic"]));
    }
    if (m.find("essayType") != m.end() && !m["essayType"].empty()) {
      essayType = make_shared<string>(boost::any_cast<string>(m["essayType"]));
    }
    if (m.find("essayWordCount") != m.end() && !m["essayWordCount"].empty()) {
      essayWordCount = make_shared<long>(boost::any_cast<long>(m["essayWordCount"]));
    }
    if (m.find("grade") != m.end() && !m["grade"].empty()) {
      grade = make_shared<long>(boost::any_cast<long>(m["grade"]));
    }
    if (m.find("responseMode") != m.end() && !m["responseMode"].empty()) {
      responseMode = make_shared<string>(boost::any_cast<string>(m["responseMode"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest() = default;
};
class ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> event{};
  shared_ptr<string> requestId{};

  ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponseBody() {}

  explicit ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponseBody() = default;
};
class ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponseBody> body{};

  ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse() {}

  explicit ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse() = default;
};
class ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest : public Darabonba::Model {
public:
  shared_ptr<string> essayOutline{};
  shared_ptr<string> essayRequirements{};
  shared_ptr<string> essayTopic{};
  shared_ptr<string> essayType{};
  shared_ptr<long> essayWordCount{};
  shared_ptr<long> grade{};
  shared_ptr<string> responseMode{};
  shared_ptr<string> userId{};

  ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest() {}

  explicit ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (essayOutline) {
      res["essayOutline"] = boost::any(*essayOutline);
    }
    if (essayRequirements) {
      res["essayRequirements"] = boost::any(*essayRequirements);
    }
    if (essayTopic) {
      res["essayTopic"] = boost::any(*essayTopic);
    }
    if (essayType) {
      res["essayType"] = boost::any(*essayType);
    }
    if (essayWordCount) {
      res["essayWordCount"] = boost::any(*essayWordCount);
    }
    if (grade) {
      res["grade"] = boost::any(*grade);
    }
    if (responseMode) {
      res["responseMode"] = boost::any(*responseMode);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("essayOutline") != m.end() && !m["essayOutline"].empty()) {
      essayOutline = make_shared<string>(boost::any_cast<string>(m["essayOutline"]));
    }
    if (m.find("essayRequirements") != m.end() && !m["essayRequirements"].empty()) {
      essayRequirements = make_shared<string>(boost::any_cast<string>(m["essayRequirements"]));
    }
    if (m.find("essayTopic") != m.end() && !m["essayTopic"].empty()) {
      essayTopic = make_shared<string>(boost::any_cast<string>(m["essayTopic"]));
    }
    if (m.find("essayType") != m.end() && !m["essayType"].empty()) {
      essayType = make_shared<string>(boost::any_cast<string>(m["essayType"]));
    }
    if (m.find("essayWordCount") != m.end() && !m["essayWordCount"].empty()) {
      essayWordCount = make_shared<long>(boost::any_cast<long>(m["essayWordCount"]));
    }
    if (m.find("grade") != m.end() && !m["grade"].empty()) {
      grade = make_shared<long>(boost::any_cast<long>(m["grade"]));
    }
    if (m.find("responseMode") != m.end() && !m["responseMode"].empty()) {
      responseMode = make_shared<string>(boost::any_cast<string>(m["responseMode"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest() = default;
};
class ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> event{};
  shared_ptr<string> requestId{};

  ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponseBody() {}

  explicit ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponseBody() = default;
};
class ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponseBody> body{};

  ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse() {}

  explicit ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse() = default;
};
class ExecuteAITeacherEnglishParaphraseChatMessageRequest : public Darabonba::Model {
public:
  shared_ptr<string> chatId{};
  shared_ptr<string> content{};
  shared_ptr<long> grade{};
  shared_ptr<string> questionId{};
  shared_ptr<string> questionInfo{};
  shared_ptr<string> responseMode{};
  shared_ptr<string> userAnswer{};
  shared_ptr<string> userId{};

  ExecuteAITeacherEnglishParaphraseChatMessageRequest() {}

  explicit ExecuteAITeacherEnglishParaphraseChatMessageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (grade) {
      res["grade"] = boost::any(*grade);
    }
    if (questionId) {
      res["questionId"] = boost::any(*questionId);
    }
    if (questionInfo) {
      res["questionInfo"] = boost::any(*questionInfo);
    }
    if (responseMode) {
      res["responseMode"] = boost::any(*responseMode);
    }
    if (userAnswer) {
      res["userAnswer"] = boost::any(*userAnswer);
    }
    if (userId) {
      res["userId"] = boost::any(*userId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("grade") != m.end() && !m["grade"].empty()) {
      grade = make_shared<long>(boost::any_cast<long>(m["grade"]));
    }
    if (m.find("questionId") != m.end() && !m["questionId"].empty()) {
      questionId = make_shared<string>(boost::any_cast<string>(m["questionId"]));
    }
    if (m.find("questionInfo") != m.end() && !m["questionInfo"].empty()) {
      questionInfo = make_shared<string>(boost::any_cast<string>(m["questionInfo"]));
    }
    if (m.find("responseMode") != m.end() && !m["responseMode"].empty()) {
      responseMode = make_shared<string>(boost::any_cast<string>(m["responseMode"]));
    }
    if (m.find("userAnswer") != m.end() && !m["userAnswer"].empty()) {
      userAnswer = make_shared<string>(boost::any_cast<string>(m["userAnswer"]));
    }
    if (m.find("userId") != m.end() && !m["userId"].empty()) {
      userId = make_shared<string>(boost::any_cast<string>(m["userId"]));
    }
  }


  virtual ~ExecuteAITeacherEnglishParaphraseChatMessageRequest() = default;
};
class ExecuteAITeacherEnglishParaphraseChatMessageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> event{};
  shared_ptr<string> requestId{};

  ExecuteAITeacherEnglishParaphraseChatMessageResponseBody() {}

  explicit ExecuteAITeacherEnglishParaphraseChatMessageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    if (event) {
      res["event"] = boost::any(*event);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
    if (m.find("event") != m.end() && !m["event"].empty()) {
      event = make_shared<string>(boost::any_cast<string>(m["event"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ExecuteAITeacherEnglishParaphraseChatMessageResponseBody() = default;
};
class ExecuteAITeacherEnglishParaphraseChatMessageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteAITeacherEnglishParaphraseChatMessageResponseBody> body{};

  ExecuteAITeacherEnglishParaphraseChatMessageResponse() {}

  explicit ExecuteAITeacherEnglishParaphraseChatMessageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteAITeacherEnglishParaphraseChatMessageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteAITeacherEnglishParaphraseChatMessageResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteAITeacherEnglishParaphraseChatMessageResponse() = default;
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
class ExecuteHundredThousandWhysDialogueRequestMessages : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  ExecuteHundredThousandWhysDialogueRequestMessages() {}

  explicit ExecuteHundredThousandWhysDialogueRequestMessages(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteHundredThousandWhysDialogueRequestMessages() = default;
};
class ExecuteHundredThousandWhysDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> ageGroup{};
  shared_ptr<string> chatId{};
  shared_ptr<string> deviceId{};
  shared_ptr<string> macAddress{};
  shared_ptr<vector<ExecuteHundredThousandWhysDialogueRequestMessages>> messages{};

  ExecuteHundredThousandWhysDialogueRequest() {}

  explicit ExecuteHundredThousandWhysDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (ageGroup) {
      res["ageGroup"] = boost::any(*ageGroup);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (macAddress) {
      res["macAddress"] = boost::any(*macAddress);
    }
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
    if (m.find("ageGroup") != m.end() && !m["ageGroup"].empty()) {
      ageGroup = make_shared<string>(boost::any_cast<string>(m["ageGroup"]));
    }
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("macAddress") != m.end() && !m["macAddress"].empty()) {
      macAddress = make_shared<string>(boost::any_cast<string>(m["macAddress"]));
    }
    if (m.find("messages") != m.end() && !m["messages"].empty()) {
      if (typeid(vector<boost::any>) == m["messages"].type()) {
        vector<ExecuteHundredThousandWhysDialogueRequestMessages> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["messages"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteHundredThousandWhysDialogueRequestMessages model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        messages = make_shared<vector<ExecuteHundredThousandWhysDialogueRequestMessages>>(expect1);
      }
    }
  }


  virtual ~ExecuteHundredThousandWhysDialogueRequest() = default;
};
class ExecuteHundredThousandWhysDialogueResponseBodyChoicesDelta : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> role{};

  ExecuteHundredThousandWhysDialogueResponseBodyChoicesDelta() {}

  explicit ExecuteHundredThousandWhysDialogueResponseBodyChoicesDelta(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteHundredThousandWhysDialogueResponseBodyChoicesDelta() = default;
};
class ExecuteHundredThousandWhysDialogueResponseBodyChoices : public Darabonba::Model {
public:
  shared_ptr<ExecuteHundredThousandWhysDialogueResponseBodyChoicesDelta> delta{};
  shared_ptr<string> finishReason{};
  shared_ptr<long> index{};

  ExecuteHundredThousandWhysDialogueResponseBodyChoices() {}

  explicit ExecuteHundredThousandWhysDialogueResponseBodyChoices(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (delta) {
      res["delta"] = delta ? boost::any(delta->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (finishReason) {
      res["finish_reason"] = boost::any(*finishReason);
    }
    if (index) {
      res["index"] = boost::any(*index);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("delta") != m.end() && !m["delta"].empty()) {
      if (typeid(map<string, boost::any>) == m["delta"].type()) {
        ExecuteHundredThousandWhysDialogueResponseBodyChoicesDelta model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["delta"]));
        delta = make_shared<ExecuteHundredThousandWhysDialogueResponseBodyChoicesDelta>(model1);
      }
    }
    if (m.find("finish_reason") != m.end() && !m["finish_reason"].empty()) {
      finishReason = make_shared<string>(boost::any_cast<string>(m["finish_reason"]));
    }
    if (m.find("index") != m.end() && !m["index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["index"]));
    }
  }


  virtual ~ExecuteHundredThousandWhysDialogueResponseBodyChoices() = default;
};
class ExecuteHundredThousandWhysDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ExecuteHundredThousandWhysDialogueResponseBodyChoices>> choices{};
  shared_ptr<long> created{};
  shared_ptr<string> id{};
  shared_ptr<string> model{};
  shared_ptr<string> object{};
  shared_ptr<string> requestId{};

  ExecuteHundredThousandWhysDialogueResponseBody() {}

  explicit ExecuteHundredThousandWhysDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (choices) {
      vector<boost::any> temp1;
      for(auto item1:*choices){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["choices"] = boost::any(temp1);
    }
    if (created) {
      res["created"] = boost::any(*created);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (model) {
      res["model"] = boost::any(*model);
    }
    if (object) {
      res["object"] = boost::any(*object);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("choices") != m.end() && !m["choices"].empty()) {
      if (typeid(vector<boost::any>) == m["choices"].type()) {
        vector<ExecuteHundredThousandWhysDialogueResponseBodyChoices> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["choices"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ExecuteHundredThousandWhysDialogueResponseBodyChoices model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        choices = make_shared<vector<ExecuteHundredThousandWhysDialogueResponseBodyChoices>>(expect1);
      }
    }
    if (m.find("created") != m.end() && !m["created"].empty()) {
      created = make_shared<long>(boost::any_cast<long>(m["created"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("model") != m.end() && !m["model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["model"]));
    }
    if (m.find("object") != m.end() && !m["object"].empty()) {
      object = make_shared<string>(boost::any_cast<string>(m["object"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~ExecuteHundredThousandWhysDialogueResponseBody() = default;
};
class ExecuteHundredThousandWhysDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteHundredThousandWhysDialogueResponseBody> body{};

  ExecuteHundredThousandWhysDialogueResponse() {}

  explicit ExecuteHundredThousandWhysDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteHundredThousandWhysDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteHundredThousandWhysDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteHundredThousandWhysDialogueResponse() = default;
};
class ExecuteTextbookAssistantDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<string> chatId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> userMessage{};

  ExecuteTextbookAssistantDialogueRequest() {}

  explicit ExecuteTextbookAssistantDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    if (userMessage) {
      res["userMessage"] = boost::any(*userMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
    if (m.find("userMessage") != m.end() && !m["userMessage"].empty()) {
      userMessage = make_shared<string>(boost::any_cast<string>(m["userMessage"]));
    }
  }


  virtual ~ExecuteTextbookAssistantDialogueRequest() = default;
};
class ExecuteTextbookAssistantDialogueResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> chineseResult{};
  shared_ptr<string> englishResult{};
  shared_ptr<bool> isFinish{};
  shared_ptr<bool> isTaskCompleted{};

  ExecuteTextbookAssistantDialogueResponseBodyDataResult() {}

  explicit ExecuteTextbookAssistantDialogueResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (isTaskCompleted) {
      res["isTaskCompleted"] = boost::any(*isTaskCompleted);
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
    if (m.find("isTaskCompleted") != m.end() && !m["isTaskCompleted"].empty()) {
      isTaskCompleted = make_shared<bool>(boost::any_cast<bool>(m["isTaskCompleted"]));
    }
  }


  virtual ~ExecuteTextbookAssistantDialogueResponseBodyDataResult() = default;
};
class ExecuteTextbookAssistantDialogueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> chatId{};
  shared_ptr<ExecuteTextbookAssistantDialogueResponseBodyDataResult> result{};
  shared_ptr<string> user{};

  ExecuteTextbookAssistantDialogueResponseBodyData() {}

  explicit ExecuteTextbookAssistantDialogueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExecuteTextbookAssistantDialogueResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExecuteTextbookAssistantDialogueResponseBodyDataResult>(model1);
      }
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteTextbookAssistantDialogueResponseBodyData() = default;
};
class ExecuteTextbookAssistantDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantDialogueResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<string> success{};

  ExecuteTextbookAssistantDialogueResponseBody() {}

  explicit ExecuteTextbookAssistantDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantDialogueResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteTextbookAssistantDialogueResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<string>(boost::any_cast<string>(m["success"]));
    }
  }


  virtual ~ExecuteTextbookAssistantDialogueResponseBody() = default;
};
class ExecuteTextbookAssistantDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteTextbookAssistantDialogueResponseBody> body{};

  ExecuteTextbookAssistantDialogueResponse() {}

  explicit ExecuteTextbookAssistantDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteTextbookAssistantDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantDialogueResponse() = default;
};
class ExecuteTextbookAssistantDifficultyRequest : public Darabonba::Model {
public:
  shared_ptr<string> action{};
  shared_ptr<string> assistant{};
  shared_ptr<string> authToken{};
  shared_ptr<string> chatId{};
  shared_ptr<string> scenario{};

  ExecuteTextbookAssistantDifficultyRequest() {}

  explicit ExecuteTextbookAssistantDifficultyRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (action) {
      res["action"] = boost::any(*action);
    }
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("action") != m.end() && !m["action"].empty()) {
      action = make_shared<string>(boost::any_cast<string>(m["action"]));
    }
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
  }


  virtual ~ExecuteTextbookAssistantDifficultyRequest() = default;
};
class ExecuteTextbookAssistantDifficultyResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> result{};

  ExecuteTextbookAssistantDifficultyResponseBodyDataResult() {}

  explicit ExecuteTextbookAssistantDifficultyResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteTextbookAssistantDifficultyResponseBodyDataResult() = default;
};
class ExecuteTextbookAssistantDifficultyResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantDifficultyResponseBodyDataResult> result{};

  ExecuteTextbookAssistantDifficultyResponseBodyData() {}

  explicit ExecuteTextbookAssistantDifficultyResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExecuteTextbookAssistantDifficultyResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExecuteTextbookAssistantDifficultyResponseBodyDataResult>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantDifficultyResponseBodyData() = default;
};
class ExecuteTextbookAssistantDifficultyResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantDifficultyResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteTextbookAssistantDifficultyResponseBody() {}

  explicit ExecuteTextbookAssistantDifficultyResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantDifficultyResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteTextbookAssistantDifficultyResponseBodyData>(model1);
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


  virtual ~ExecuteTextbookAssistantDifficultyResponseBody() = default;
};
class ExecuteTextbookAssistantDifficultyResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteTextbookAssistantDifficultyResponseBody> body{};

  ExecuteTextbookAssistantDifficultyResponse() {}

  explicit ExecuteTextbookAssistantDifficultyResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantDifficultyResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteTextbookAssistantDifficultyResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantDifficultyResponse() = default;
};
class ExecuteTextbookAssistantGrammarCheckRequest : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<string> chatId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> user{};

  ExecuteTextbookAssistantGrammarCheckRequest() {}

  explicit ExecuteTextbookAssistantGrammarCheckRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteTextbookAssistantGrammarCheckRequest() = default;
};
class ExecuteTextbookAssistantGrammarCheckResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> analysis{};
  shared_ptr<string> correction{};
  shared_ptr<string> correctionStatus{};

  ExecuteTextbookAssistantGrammarCheckResponseBodyDataResult() {}

  explicit ExecuteTextbookAssistantGrammarCheckResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
  }


  virtual ~ExecuteTextbookAssistantGrammarCheckResponseBodyDataResult() = default;
};
class ExecuteTextbookAssistantGrammarCheckResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantGrammarCheckResponseBodyDataResult> result{};

  ExecuteTextbookAssistantGrammarCheckResponseBodyData() {}

  explicit ExecuteTextbookAssistantGrammarCheckResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExecuteTextbookAssistantGrammarCheckResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExecuteTextbookAssistantGrammarCheckResponseBodyDataResult>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantGrammarCheckResponseBodyData() = default;
};
class ExecuteTextbookAssistantGrammarCheckResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantGrammarCheckResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteTextbookAssistantGrammarCheckResponseBody() {}

  explicit ExecuteTextbookAssistantGrammarCheckResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantGrammarCheckResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteTextbookAssistantGrammarCheckResponseBodyData>(model1);
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


  virtual ~ExecuteTextbookAssistantGrammarCheckResponseBody() = default;
};
class ExecuteTextbookAssistantGrammarCheckResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteTextbookAssistantGrammarCheckResponseBody> body{};

  ExecuteTextbookAssistantGrammarCheckResponse() {}

  explicit ExecuteTextbookAssistantGrammarCheckResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantGrammarCheckResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteTextbookAssistantGrammarCheckResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantGrammarCheckResponse() = default;
};
class ExecuteTextbookAssistantRefineByContextRequest : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<string> chatId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> user{};

  ExecuteTextbookAssistantRefineByContextRequest() {}

  explicit ExecuteTextbookAssistantRefineByContextRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    if (user) {
      res["user"] = boost::any(*user);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteTextbookAssistantRefineByContextRequest() = default;
};
class ExecuteTextbookAssistantRefineByContextResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> result{};

  ExecuteTextbookAssistantRefineByContextResponseBodyDataResult() {}

  explicit ExecuteTextbookAssistantRefineByContextResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteTextbookAssistantRefineByContextResponseBodyDataResult() = default;
};
class ExecuteTextbookAssistantRefineByContextResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantRefineByContextResponseBodyDataResult> result{};

  ExecuteTextbookAssistantRefineByContextResponseBodyData() {}

  explicit ExecuteTextbookAssistantRefineByContextResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExecuteTextbookAssistantRefineByContextResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExecuteTextbookAssistantRefineByContextResponseBodyDataResult>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantRefineByContextResponseBodyData() = default;
};
class ExecuteTextbookAssistantRefineByContextResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantRefineByContextResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<long> errMessage{};
  shared_ptr<string> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteTextbookAssistantRefineByContextResponseBody() {}

  explicit ExecuteTextbookAssistantRefineByContextResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantRefineByContextResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteTextbookAssistantRefineByContextResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<long>(boost::any_cast<long>(m["errMessage"]));
    }
    if (m.find("httpStatusCode") != m.end() && !m["httpStatusCode"].empty()) {
      httpStatusCode = make_shared<string>(boost::any_cast<string>(m["httpStatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ExecuteTextbookAssistantRefineByContextResponseBody() = default;
};
class ExecuteTextbookAssistantRefineByContextResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteTextbookAssistantRefineByContextResponseBody> body{};

  ExecuteTextbookAssistantRefineByContextResponse() {}

  explicit ExecuteTextbookAssistantRefineByContextResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantRefineByContextResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteTextbookAssistantRefineByContextResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantRefineByContextResponse() = default;
};
class ExecuteTextbookAssistantRetryConversationRequest : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> authToken{};
  shared_ptr<string> chatId{};
  shared_ptr<string> scenario{};

  ExecuteTextbookAssistantRetryConversationRequest() {}

  explicit ExecuteTextbookAssistantRetryConversationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
  }


  virtual ~ExecuteTextbookAssistantRetryConversationRequest() = default;
};
class ExecuteTextbookAssistantRetryConversationResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> chineseResult{};
  shared_ptr<string> englishResult{};

  ExecuteTextbookAssistantRetryConversationResponseBodyDataResult() {}

  explicit ExecuteTextbookAssistantRetryConversationResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteTextbookAssistantRetryConversationResponseBodyDataResult() = default;
};
class ExecuteTextbookAssistantRetryConversationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> chatId{};
  shared_ptr<ExecuteTextbookAssistantRetryConversationResponseBodyDataResult> result{};
  shared_ptr<string> user{};

  ExecuteTextbookAssistantRetryConversationResponseBodyData() {}

  explicit ExecuteTextbookAssistantRetryConversationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExecuteTextbookAssistantRetryConversationResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExecuteTextbookAssistantRetryConversationResponseBodyDataResult>(model1);
      }
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteTextbookAssistantRetryConversationResponseBodyData() = default;
};
class ExecuteTextbookAssistantRetryConversationResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantRetryConversationResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteTextbookAssistantRetryConversationResponseBody() {}

  explicit ExecuteTextbookAssistantRetryConversationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantRetryConversationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteTextbookAssistantRetryConversationResponseBodyData>(model1);
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


  virtual ~ExecuteTextbookAssistantRetryConversationResponseBody() = default;
};
class ExecuteTextbookAssistantRetryConversationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteTextbookAssistantRetryConversationResponseBody> body{};

  ExecuteTextbookAssistantRetryConversationResponse() {}

  explicit ExecuteTextbookAssistantRetryConversationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantRetryConversationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteTextbookAssistantRetryConversationResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantRetryConversationResponse() = default;
};
class ExecuteTextbookAssistantSseDialogueRequest : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<string> chatId{};
  shared_ptr<string> scenario{};
  shared_ptr<string> userMessage{};

  ExecuteTextbookAssistantSseDialogueRequest() {}

  explicit ExecuteTextbookAssistantSseDialogueRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    if (userMessage) {
      res["userMessage"] = boost::any(*userMessage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
    if (m.find("userMessage") != m.end() && !m["userMessage"].empty()) {
      userMessage = make_shared<string>(boost::any_cast<string>(m["userMessage"]));
    }
  }


  virtual ~ExecuteTextbookAssistantSseDialogueRequest() = default;
};
class ExecuteTextbookAssistantSseDialogueResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> englishResult{};
  shared_ptr<bool> isFinish{};

  ExecuteTextbookAssistantSseDialogueResponseBodyData() {}

  explicit ExecuteTextbookAssistantSseDialogueResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("englishResult") != m.end() && !m["englishResult"].empty()) {
      englishResult = make_shared<string>(boost::any_cast<string>(m["englishResult"]));
    }
    if (m.find("isFinish") != m.end() && !m["isFinish"].empty()) {
      isFinish = make_shared<bool>(boost::any_cast<bool>(m["isFinish"]));
    }
  }


  virtual ~ExecuteTextbookAssistantSseDialogueResponseBodyData() = default;
};
class ExecuteTextbookAssistantSseDialogueResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> chatId{};
  shared_ptr<ExecuteTextbookAssistantSseDialogueResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> user{};

  ExecuteTextbookAssistantSseDialogueResponseBody() {}

  explicit ExecuteTextbookAssistantSseDialogueResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (errCode) {
      res["errCode"] = boost::any(*errCode);
    }
    if (errMessage) {
      res["errMessage"] = boost::any(*errMessage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
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
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ExecuteTextbookAssistantSseDialogueResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteTextbookAssistantSseDialogueResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteTextbookAssistantSseDialogueResponseBody() = default;
};
class ExecuteTextbookAssistantSseDialogueResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteTextbookAssistantSseDialogueResponseBody> body{};

  ExecuteTextbookAssistantSseDialogueResponse() {}

  explicit ExecuteTextbookAssistantSseDialogueResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantSseDialogueResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteTextbookAssistantSseDialogueResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantSseDialogueResponse() = default;
};
class ExecuteTextbookAssistantStartConversationRequest : public Darabonba::Model {
public:
  shared_ptr<string> articleId{};
  shared_ptr<string> authToken{};
  shared_ptr<string> scenario{};

  ExecuteTextbookAssistantStartConversationRequest() {}

  explicit ExecuteTextbookAssistantStartConversationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (articleId) {
      res["articleId"] = boost::any(*articleId);
    }
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("articleId") != m.end() && !m["articleId"].empty()) {
      articleId = make_shared<string>(boost::any_cast<string>(m["articleId"]));
    }
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
  }


  virtual ~ExecuteTextbookAssistantStartConversationRequest() = default;
};
class ExecuteTextbookAssistantStartConversationResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> chineseResult{};
  shared_ptr<string> englishResult{};

  ExecuteTextbookAssistantStartConversationResponseBodyDataResult() {}

  explicit ExecuteTextbookAssistantStartConversationResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteTextbookAssistantStartConversationResponseBodyDataResult() = default;
};
class ExecuteTextbookAssistantStartConversationResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> chatId{};
  shared_ptr<ExecuteTextbookAssistantStartConversationResponseBodyDataResult> result{};
  shared_ptr<string> user{};

  ExecuteTextbookAssistantStartConversationResponseBodyData() {}

  explicit ExecuteTextbookAssistantStartConversationResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExecuteTextbookAssistantStartConversationResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExecuteTextbookAssistantStartConversationResponseBodyDataResult>(model1);
      }
    }
    if (m.find("user") != m.end() && !m["user"].empty()) {
      user = make_shared<string>(boost::any_cast<string>(m["user"]));
    }
  }


  virtual ~ExecuteTextbookAssistantStartConversationResponseBodyData() = default;
};
class ExecuteTextbookAssistantStartConversationResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantStartConversationResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteTextbookAssistantStartConversationResponseBody() {}

  explicit ExecuteTextbookAssistantStartConversationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantStartConversationResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteTextbookAssistantStartConversationResponseBodyData>(model1);
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


  virtual ~ExecuteTextbookAssistantStartConversationResponseBody() = default;
};
class ExecuteTextbookAssistantStartConversationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteTextbookAssistantStartConversationResponseBody> body{};

  ExecuteTextbookAssistantStartConversationResponse() {}

  explicit ExecuteTextbookAssistantStartConversationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantStartConversationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteTextbookAssistantStartConversationResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantStartConversationResponse() = default;
};
class ExecuteTextbookAssistantSuggestionRequest : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> authToken{};
  shared_ptr<string> chatId{};
  shared_ptr<string> scenario{};

  ExecuteTextbookAssistantSuggestionRequest() {}

  explicit ExecuteTextbookAssistantSuggestionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
  }


  virtual ~ExecuteTextbookAssistantSuggestionRequest() = default;
};
class ExecuteTextbookAssistantSuggestionResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> chineseResult{};
  shared_ptr<string> englishResult{};

  ExecuteTextbookAssistantSuggestionResponseBodyDataResult() {}

  explicit ExecuteTextbookAssistantSuggestionResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteTextbookAssistantSuggestionResponseBodyDataResult() = default;
};
class ExecuteTextbookAssistantSuggestionResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantSuggestionResponseBodyDataResult> result{};

  ExecuteTextbookAssistantSuggestionResponseBodyData() {}

  explicit ExecuteTextbookAssistantSuggestionResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExecuteTextbookAssistantSuggestionResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExecuteTextbookAssistantSuggestionResponseBodyDataResult>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantSuggestionResponseBodyData() = default;
};
class ExecuteTextbookAssistantSuggestionResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantSuggestionResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpstatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteTextbookAssistantSuggestionResponseBody() {}

  explicit ExecuteTextbookAssistantSuggestionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (httpstatusCode) {
      res["httpstatusCode"] = boost::any(*httpstatusCode);
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
        ExecuteTextbookAssistantSuggestionResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteTextbookAssistantSuggestionResponseBodyData>(model1);
      }
    }
    if (m.find("errCode") != m.end() && !m["errCode"].empty()) {
      errCode = make_shared<string>(boost::any_cast<string>(m["errCode"]));
    }
    if (m.find("errMessage") != m.end() && !m["errMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["errMessage"]));
    }
    if (m.find("httpstatusCode") != m.end() && !m["httpstatusCode"].empty()) {
      httpstatusCode = make_shared<long>(boost::any_cast<long>(m["httpstatusCode"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~ExecuteTextbookAssistantSuggestionResponseBody() = default;
};
class ExecuteTextbookAssistantSuggestionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteTextbookAssistantSuggestionResponseBody> body{};

  ExecuteTextbookAssistantSuggestionResponse() {}

  explicit ExecuteTextbookAssistantSuggestionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantSuggestionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteTextbookAssistantSuggestionResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantSuggestionResponse() = default;
};
class ExecuteTextbookAssistantTranslateRequest : public Darabonba::Model {
public:
  shared_ptr<string> assistant{};
  shared_ptr<string> authToken{};
  shared_ptr<string> chatId{};
  shared_ptr<string> scenario{};

  ExecuteTextbookAssistantTranslateRequest() {}

  explicit ExecuteTextbookAssistantTranslateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (assistant) {
      res["assistant"] = boost::any(*assistant);
    }
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (chatId) {
      res["chatId"] = boost::any(*chatId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("assistant") != m.end() && !m["assistant"].empty()) {
      assistant = make_shared<string>(boost::any_cast<string>(m["assistant"]));
    }
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("chatId") != m.end() && !m["chatId"].empty()) {
      chatId = make_shared<string>(boost::any_cast<string>(m["chatId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
  }


  virtual ~ExecuteTextbookAssistantTranslateRequest() = default;
};
class ExecuteTextbookAssistantTranslateResponseBodyDataResult : public Darabonba::Model {
public:
  shared_ptr<string> result{};

  ExecuteTextbookAssistantTranslateResponseBodyDataResult() {}

  explicit ExecuteTextbookAssistantTranslateResponseBodyDataResult(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~ExecuteTextbookAssistantTranslateResponseBodyDataResult() = default;
};
class ExecuteTextbookAssistantTranslateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantTranslateResponseBodyDataResult> result{};

  ExecuteTextbookAssistantTranslateResponseBodyData() {}

  explicit ExecuteTextbookAssistantTranslateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (result) {
      res["result"] = result ? boost::any(result->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("result") != m.end() && !m["result"].empty()) {
      if (typeid(map<string, boost::any>) == m["result"].type()) {
        ExecuteTextbookAssistantTranslateResponseBodyDataResult model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["result"]));
        result = make_shared<ExecuteTextbookAssistantTranslateResponseBodyDataResult>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantTranslateResponseBodyData() = default;
};
class ExecuteTextbookAssistantTranslateResponseBody : public Darabonba::Model {
public:
  shared_ptr<ExecuteTextbookAssistantTranslateResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ExecuteTextbookAssistantTranslateResponseBody() {}

  explicit ExecuteTextbookAssistantTranslateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantTranslateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ExecuteTextbookAssistantTranslateResponseBodyData>(model1);
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


  virtual ~ExecuteTextbookAssistantTranslateResponseBody() = default;
};
class ExecuteTextbookAssistantTranslateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ExecuteTextbookAssistantTranslateResponseBody> body{};

  ExecuteTextbookAssistantTranslateResponse() {}

  explicit ExecuteTextbookAssistantTranslateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ExecuteTextbookAssistantTranslateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ExecuteTextbookAssistantTranslateResponseBody>(model1);
      }
    }
  }


  virtual ~ExecuteTextbookAssistantTranslateResponse() = default;
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
class GetTextbookAssistantTokenRequest : public Darabonba::Model {
public:
  shared_ptr<string> deviceId{};
  shared_ptr<string> model{};

  GetTextbookAssistantTokenRequest() {}

  explicit GetTextbookAssistantTokenRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (deviceId) {
      res["deviceId"] = boost::any(*deviceId);
    }
    if (model) {
      res["model"] = boost::any(*model);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("deviceId") != m.end() && !m["deviceId"].empty()) {
      deviceId = make_shared<string>(boost::any_cast<string>(m["deviceId"]));
    }
    if (m.find("model") != m.end() && !m["model"].empty()) {
      model = make_shared<string>(boost::any_cast<string>(m["model"]));
    }
  }


  virtual ~GetTextbookAssistantTokenRequest() = default;
};
class GetTextbookAssistantTokenResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<long> expire{};

  GetTextbookAssistantTokenResponseBodyData() {}

  explicit GetTextbookAssistantTokenResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (expire) {
      res["expire"] = boost::any(*expire);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("expire") != m.end() && !m["expire"].empty()) {
      expire = make_shared<long>(boost::any_cast<long>(m["expire"]));
    }
  }


  virtual ~GetTextbookAssistantTokenResponseBodyData() = default;
};
class GetTextbookAssistantTokenResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetTextbookAssistantTokenResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetTextbookAssistantTokenResponseBody() {}

  explicit GetTextbookAssistantTokenResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTextbookAssistantTokenResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetTextbookAssistantTokenResponseBodyData>(model1);
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


  virtual ~GetTextbookAssistantTokenResponseBody() = default;
};
class GetTextbookAssistantTokenResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetTextbookAssistantTokenResponseBody> body{};

  GetTextbookAssistantTokenResponse() {}

  explicit GetTextbookAssistantTokenResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetTextbookAssistantTokenResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetTextbookAssistantTokenResponseBody>(model1);
      }
    }
  }


  virtual ~GetTextbookAssistantTokenResponse() = default;
};
class ListTextbookAssistantArticleDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<vector<string>> articleIdList{};
  shared_ptr<string> authToken{};

  ListTextbookAssistantArticleDetailsRequest() {}

  explicit ListTextbookAssistantArticleDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (articleIdList) {
      res["articleIdList"] = boost::any(*articleIdList);
    }
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("articleIdList") != m.end() && !m["articleIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["articleIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["articleIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      articleIdList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
  }


  virtual ~ListTextbookAssistantArticleDetailsRequest() = default;
};
class ListTextbookAssistantArticleDetailsResponseBodyDataQuestionList : public Darabonba::Model {
public:
  shared_ptr<string> answer{};
  shared_ptr<string> question{};
  shared_ptr<string> questionTranslate{};

  ListTextbookAssistantArticleDetailsResponseBodyDataQuestionList() {}

  explicit ListTextbookAssistantArticleDetailsResponseBodyDataQuestionList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (answer) {
      res["answer"] = boost::any(*answer);
    }
    if (question) {
      res["question"] = boost::any(*question);
    }
    if (questionTranslate) {
      res["questionTranslate"] = boost::any(*questionTranslate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("answer") != m.end() && !m["answer"].empty()) {
      answer = make_shared<string>(boost::any_cast<string>(m["answer"]));
    }
    if (m.find("question") != m.end() && !m["question"].empty()) {
      question = make_shared<string>(boost::any_cast<string>(m["question"]));
    }
    if (m.find("questionTranslate") != m.end() && !m["questionTranslate"].empty()) {
      questionTranslate = make_shared<string>(boost::any_cast<string>(m["questionTranslate"]));
    }
  }


  virtual ~ListTextbookAssistantArticleDetailsResponseBodyDataQuestionList() = default;
};
class ListTextbookAssistantArticleDetailsResponseBodyDataSceneList : public Darabonba::Model {
public:
  shared_ptr<string> scene{};
  shared_ptr<string> sceneId{};
  shared_ptr<vector<string>> sceneImageList{};
  shared_ptr<string> sceneTransLate{};

  ListTextbookAssistantArticleDetailsResponseBodyDataSceneList() {}

  explicit ListTextbookAssistantArticleDetailsResponseBodyDataSceneList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (sceneImageList) {
      res["sceneImageList"] = boost::any(*sceneImageList);
    }
    if (sceneTransLate) {
      res["sceneTransLate"] = boost::any(*sceneTransLate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("sceneImageList") != m.end() && !m["sceneImageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sceneImageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sceneImageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sceneImageList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sceneTransLate") != m.end() && !m["sceneTransLate"].empty()) {
      sceneTransLate = make_shared<string>(boost::any_cast<string>(m["sceneTransLate"]));
    }
  }


  virtual ~ListTextbookAssistantArticleDetailsResponseBodyDataSceneList() = default;
};
class ListTextbookAssistantArticleDetailsResponseBodyDataSentenceList : public Darabonba::Model {
public:
  shared_ptr<string> sentenceAnalysis{};
  shared_ptr<string> sentenceId{};
  shared_ptr<string> sentenceText{};

  ListTextbookAssistantArticleDetailsResponseBodyDataSentenceList() {}

  explicit ListTextbookAssistantArticleDetailsResponseBodyDataSentenceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sentenceAnalysis) {
      res["sentenceAnalysis"] = boost::any(*sentenceAnalysis);
    }
    if (sentenceId) {
      res["sentenceId"] = boost::any(*sentenceId);
    }
    if (sentenceText) {
      res["sentenceText"] = boost::any(*sentenceText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sentenceAnalysis") != m.end() && !m["sentenceAnalysis"].empty()) {
      sentenceAnalysis = make_shared<string>(boost::any_cast<string>(m["sentenceAnalysis"]));
    }
    if (m.find("sentenceId") != m.end() && !m["sentenceId"].empty()) {
      sentenceId = make_shared<string>(boost::any_cast<string>(m["sentenceId"]));
    }
    if (m.find("sentenceText") != m.end() && !m["sentenceText"].empty()) {
      sentenceText = make_shared<string>(boost::any_cast<string>(m["sentenceText"]));
    }
  }


  virtual ~ListTextbookAssistantArticleDetailsResponseBodyDataSentenceList() = default;
};
class ListTextbookAssistantArticleDetailsResponseBodyDataTheme : public Darabonba::Model {
public:
  shared_ptr<vector<string>> themeImageList{};
  shared_ptr<string> themeName{};
  shared_ptr<string> themeTranslate{};

  ListTextbookAssistantArticleDetailsResponseBodyDataTheme() {}

  explicit ListTextbookAssistantArticleDetailsResponseBodyDataTheme(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (themeImageList) {
      res["themeImageList"] = boost::any(*themeImageList);
    }
    if (themeName) {
      res["themeName"] = boost::any(*themeName);
    }
    if (themeTranslate) {
      res["themeTranslate"] = boost::any(*themeTranslate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("themeImageList") != m.end() && !m["themeImageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["themeImageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["themeImageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      themeImageList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("themeName") != m.end() && !m["themeName"].empty()) {
      themeName = make_shared<string>(boost::any_cast<string>(m["themeName"]));
    }
    if (m.find("themeTranslate") != m.end() && !m["themeTranslate"].empty()) {
      themeTranslate = make_shared<string>(boost::any_cast<string>(m["themeTranslate"]));
    }
  }


  virtual ~ListTextbookAssistantArticleDetailsResponseBodyDataTheme() = default;
};
class ListTextbookAssistantArticleDetailsResponseBodyDataTopic : public Darabonba::Model {
public:
  shared_ptr<vector<string>> topicImageList{};
  shared_ptr<string> topicName{};
  shared_ptr<string> topicTranslate{};

  ListTextbookAssistantArticleDetailsResponseBodyDataTopic() {}

  explicit ListTextbookAssistantArticleDetailsResponseBodyDataTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicImageList) {
      res["topicImageList"] = boost::any(*topicImageList);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    if (topicTranslate) {
      res["topicTranslate"] = boost::any(*topicTranslate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("topicImageList") != m.end() && !m["topicImageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["topicImageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["topicImageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      topicImageList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
    if (m.find("topicTranslate") != m.end() && !m["topicTranslate"].empty()) {
      topicTranslate = make_shared<string>(boost::any_cast<string>(m["topicTranslate"]));
    }
  }


  virtual ~ListTextbookAssistantArticleDetailsResponseBodyDataTopic() = default;
};
class ListTextbookAssistantArticleDetailsResponseBodyDataWordList : public Darabonba::Model {
public:
  shared_ptr<string> wordAnalysis{};
  shared_ptr<string> wordId{};
  shared_ptr<string> wordText{};

  ListTextbookAssistantArticleDetailsResponseBodyDataWordList() {}

  explicit ListTextbookAssistantArticleDetailsResponseBodyDataWordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (wordAnalysis) {
      res["wordAnalysis"] = boost::any(*wordAnalysis);
    }
    if (wordId) {
      res["wordId"] = boost::any(*wordId);
    }
    if (wordText) {
      res["wordText"] = boost::any(*wordText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("wordAnalysis") != m.end() && !m["wordAnalysis"].empty()) {
      wordAnalysis = make_shared<string>(boost::any_cast<string>(m["wordAnalysis"]));
    }
    if (m.find("wordId") != m.end() && !m["wordId"].empty()) {
      wordId = make_shared<string>(boost::any_cast<string>(m["wordId"]));
    }
    if (m.find("wordText") != m.end() && !m["wordText"].empty()) {
      wordText = make_shared<string>(boost::any_cast<string>(m["wordText"]));
    }
  }


  virtual ~ListTextbookAssistantArticleDetailsResponseBodyDataWordList() = default;
};
class ListTextbookAssistantArticleDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> articleId{};
  shared_ptr<vector<ListTextbookAssistantArticleDetailsResponseBodyDataQuestionList>> questionList{};
  shared_ptr<vector<ListTextbookAssistantArticleDetailsResponseBodyDataSceneList>> sceneList{};
  shared_ptr<vector<ListTextbookAssistantArticleDetailsResponseBodyDataSentenceList>> sentenceList{};
  shared_ptr<string> target{};
  shared_ptr<ListTextbookAssistantArticleDetailsResponseBodyDataTheme> theme{};
  shared_ptr<ListTextbookAssistantArticleDetailsResponseBodyDataTopic> topic{};
  shared_ptr<vector<ListTextbookAssistantArticleDetailsResponseBodyDataWordList>> wordList{};

  ListTextbookAssistantArticleDetailsResponseBodyData() {}

  explicit ListTextbookAssistantArticleDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (articleId) {
      res["articleId"] = boost::any(*articleId);
    }
    if (questionList) {
      vector<boost::any> temp1;
      for(auto item1:*questionList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["questionList"] = boost::any(temp1);
    }
    if (sceneList) {
      vector<boost::any> temp1;
      for(auto item1:*sceneList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sceneList"] = boost::any(temp1);
    }
    if (sentenceList) {
      vector<boost::any> temp1;
      for(auto item1:*sentenceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sentenceList"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (theme) {
      res["theme"] = theme ? boost::any(theme->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wordList) {
      vector<boost::any> temp1;
      for(auto item1:*wordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["wordList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("articleId") != m.end() && !m["articleId"].empty()) {
      articleId = make_shared<string>(boost::any_cast<string>(m["articleId"]));
    }
    if (m.find("questionList") != m.end() && !m["questionList"].empty()) {
      if (typeid(vector<boost::any>) == m["questionList"].type()) {
        vector<ListTextbookAssistantArticleDetailsResponseBodyDataQuestionList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["questionList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantArticleDetailsResponseBodyDataQuestionList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        questionList = make_shared<vector<ListTextbookAssistantArticleDetailsResponseBodyDataQuestionList>>(expect1);
      }
    }
    if (m.find("sceneList") != m.end() && !m["sceneList"].empty()) {
      if (typeid(vector<boost::any>) == m["sceneList"].type()) {
        vector<ListTextbookAssistantArticleDetailsResponseBodyDataSceneList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sceneList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantArticleDetailsResponseBodyDataSceneList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sceneList = make_shared<vector<ListTextbookAssistantArticleDetailsResponseBodyDataSceneList>>(expect1);
      }
    }
    if (m.find("sentenceList") != m.end() && !m["sentenceList"].empty()) {
      if (typeid(vector<boost::any>) == m["sentenceList"].type()) {
        vector<ListTextbookAssistantArticleDetailsResponseBodyDataSentenceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sentenceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantArticleDetailsResponseBodyDataSentenceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sentenceList = make_shared<vector<ListTextbookAssistantArticleDetailsResponseBodyDataSentenceList>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["target"]));
    }
    if (m.find("theme") != m.end() && !m["theme"].empty()) {
      if (typeid(map<string, boost::any>) == m["theme"].type()) {
        ListTextbookAssistantArticleDetailsResponseBodyDataTheme model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["theme"]));
        theme = make_shared<ListTextbookAssistantArticleDetailsResponseBodyDataTheme>(model1);
      }
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["topic"].type()) {
        ListTextbookAssistantArticleDetailsResponseBodyDataTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["topic"]));
        topic = make_shared<ListTextbookAssistantArticleDetailsResponseBodyDataTopic>(model1);
      }
    }
    if (m.find("wordList") != m.end() && !m["wordList"].empty()) {
      if (typeid(vector<boost::any>) == m["wordList"].type()) {
        vector<ListTextbookAssistantArticleDetailsResponseBodyDataWordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["wordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantArticleDetailsResponseBodyDataWordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wordList = make_shared<vector<ListTextbookAssistantArticleDetailsResponseBodyDataWordList>>(expect1);
      }
    }
  }


  virtual ~ListTextbookAssistantArticleDetailsResponseBodyData() = default;
};
class ListTextbookAssistantArticleDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTextbookAssistantArticleDetailsResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTextbookAssistantArticleDetailsResponseBody() {}

  explicit ListTextbookAssistantArticleDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListTextbookAssistantArticleDetailsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantArticleDetailsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTextbookAssistantArticleDetailsResponseBodyData>>(expect1);
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


  virtual ~ListTextbookAssistantArticleDetailsResponseBody() = default;
};
class ListTextbookAssistantArticleDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTextbookAssistantArticleDetailsResponseBody> body{};

  ListTextbookAssistantArticleDetailsResponse() {}

  explicit ListTextbookAssistantArticleDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTextbookAssistantArticleDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTextbookAssistantArticleDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTextbookAssistantArticleDetailsResponse() = default;
};
class ListTextbookAssistantArticlesRequest : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<string> directoryId{};

  ListTextbookAssistantArticlesRequest() {}

  explicit ListTextbookAssistantArticlesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (directoryId) {
      res["directoryId"] = boost::any(*directoryId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("directoryId") != m.end() && !m["directoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["directoryId"]));
    }
  }


  virtual ~ListTextbookAssistantArticlesRequest() = default;
};
class ListTextbookAssistantArticlesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> articleId{};

  ListTextbookAssistantArticlesResponseBodyData() {}

  explicit ListTextbookAssistantArticlesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (articleId) {
      res["articleId"] = boost::any(*articleId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("articleId") != m.end() && !m["articleId"].empty()) {
      articleId = make_shared<string>(boost::any_cast<string>(m["articleId"]));
    }
  }


  virtual ~ListTextbookAssistantArticlesResponseBodyData() = default;
};
class ListTextbookAssistantArticlesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTextbookAssistantArticlesResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTextbookAssistantArticlesResponseBody() {}

  explicit ListTextbookAssistantArticlesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListTextbookAssistantArticlesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantArticlesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTextbookAssistantArticlesResponseBodyData>>(expect1);
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


  virtual ~ListTextbookAssistantArticlesResponseBody() = default;
};
class ListTextbookAssistantArticlesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTextbookAssistantArticlesResponseBody> body{};

  ListTextbookAssistantArticlesResponse() {}

  explicit ListTextbookAssistantArticlesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTextbookAssistantArticlesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTextbookAssistantArticlesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTextbookAssistantArticlesResponse() = default;
};
class ListTextbookAssistantBookDirectoriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<string> bookId{};
  shared_ptr<string> scenario{};

  ListTextbookAssistantBookDirectoriesRequest() {}

  explicit ListTextbookAssistantBookDirectoriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (bookId) {
      res["bookId"] = boost::any(*bookId);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("bookId") != m.end() && !m["bookId"].empty()) {
      bookId = make_shared<string>(boost::any_cast<string>(m["bookId"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
  }


  virtual ~ListTextbookAssistantBookDirectoriesRequest() = default;
};
class ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTreeTopic : public Darabonba::Model {
public:
  shared_ptr<string> labelId{};
  shared_ptr<string> labelName{};

  ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTreeTopic() {}

  explicit ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTreeTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (labelId) {
      res["labelId"] = boost::any(*labelId);
    }
    if (labelName) {
      res["labelName"] = boost::any(*labelName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("labelId") != m.end() && !m["labelId"].empty()) {
      labelId = make_shared<string>(boost::any_cast<string>(m["labelId"]));
    }
    if (m.find("labelName") != m.end() && !m["labelName"].empty()) {
      labelName = make_shared<string>(boost::any_cast<string>(m["labelName"]));
    }
  }


  virtual ~ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTreeTopic() = default;
};
class ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTree : public Darabonba::Model {
public:
  shared_ptr<string> directoryId{};
  shared_ptr<string> directoryName{};
  shared_ptr<vector<ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTreeTopic>> topic{};

  ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTree() {}

  explicit ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTree(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryId) {
      res["directoryId"] = boost::any(*directoryId);
    }
    if (directoryName) {
      res["directoryName"] = boost::any(*directoryName);
    }
    if (topic) {
      vector<boost::any> temp1;
      for(auto item1:*topic){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["topic"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("directoryId") != m.end() && !m["directoryId"].empty()) {
      directoryId = make_shared<string>(boost::any_cast<string>(m["directoryId"]));
    }
    if (m.find("directoryName") != m.end() && !m["directoryName"].empty()) {
      directoryName = make_shared<string>(boost::any_cast<string>(m["directoryName"]));
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      if (typeid(vector<boost::any>) == m["topic"].type()) {
        vector<ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTreeTopic> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["topic"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTreeTopic model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        topic = make_shared<vector<ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTreeTopic>>(expect1);
      }
    }
  }


  virtual ~ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTree() = default;
};
class ListTextbookAssistantBookDirectoriesResponseBodyDataEditionInfo : public Darabonba::Model {
public:
  shared_ptr<string> bookId{};
  shared_ptr<string> bookVolume{};
  shared_ptr<string> edition{};
  shared_ptr<string> grade{};
  shared_ptr<string> impression{};
  shared_ptr<string> isbn{};
  shared_ptr<string> publisher{};
  shared_ptr<string> subject{};
  shared_ptr<string> version{};

  ListTextbookAssistantBookDirectoriesResponseBodyDataEditionInfo() {}

  explicit ListTextbookAssistantBookDirectoriesResponseBodyDataEditionInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bookId) {
      res["bookId"] = boost::any(*bookId);
    }
    if (bookVolume) {
      res["bookVolume"] = boost::any(*bookVolume);
    }
    if (edition) {
      res["edition"] = boost::any(*edition);
    }
    if (grade) {
      res["grade"] = boost::any(*grade);
    }
    if (impression) {
      res["impression"] = boost::any(*impression);
    }
    if (isbn) {
      res["isbn"] = boost::any(*isbn);
    }
    if (publisher) {
      res["publisher"] = boost::any(*publisher);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bookId") != m.end() && !m["bookId"].empty()) {
      bookId = make_shared<string>(boost::any_cast<string>(m["bookId"]));
    }
    if (m.find("bookVolume") != m.end() && !m["bookVolume"].empty()) {
      bookVolume = make_shared<string>(boost::any_cast<string>(m["bookVolume"]));
    }
    if (m.find("edition") != m.end() && !m["edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["edition"]));
    }
    if (m.find("grade") != m.end() && !m["grade"].empty()) {
      grade = make_shared<string>(boost::any_cast<string>(m["grade"]));
    }
    if (m.find("impression") != m.end() && !m["impression"].empty()) {
      impression = make_shared<string>(boost::any_cast<string>(m["impression"]));
    }
    if (m.find("isbn") != m.end() && !m["isbn"].empty()) {
      isbn = make_shared<string>(boost::any_cast<string>(m["isbn"]));
    }
    if (m.find("publisher") != m.end() && !m["publisher"].empty()) {
      publisher = make_shared<string>(boost::any_cast<string>(m["publisher"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListTextbookAssistantBookDirectoriesResponseBodyDataEditionInfo() = default;
};
class ListTextbookAssistantBookDirectoriesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTree>> directoryTree{};
  shared_ptr<ListTextbookAssistantBookDirectoriesResponseBodyDataEditionInfo> editionInfo{};

  ListTextbookAssistantBookDirectoriesResponseBodyData() {}

  explicit ListTextbookAssistantBookDirectoriesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (directoryTree) {
      vector<boost::any> temp1;
      for(auto item1:*directoryTree){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["directoryTree"] = boost::any(temp1);
    }
    if (editionInfo) {
      res["editionInfo"] = editionInfo ? boost::any(editionInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("directoryTree") != m.end() && !m["directoryTree"].empty()) {
      if (typeid(vector<boost::any>) == m["directoryTree"].type()) {
        vector<ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTree> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["directoryTree"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTree model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        directoryTree = make_shared<vector<ListTextbookAssistantBookDirectoriesResponseBodyDataDirectoryTree>>(expect1);
      }
    }
    if (m.find("editionInfo") != m.end() && !m["editionInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["editionInfo"].type()) {
        ListTextbookAssistantBookDirectoriesResponseBodyDataEditionInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["editionInfo"]));
        editionInfo = make_shared<ListTextbookAssistantBookDirectoriesResponseBodyDataEditionInfo>(model1);
      }
    }
  }


  virtual ~ListTextbookAssistantBookDirectoriesResponseBodyData() = default;
};
class ListTextbookAssistantBookDirectoriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListTextbookAssistantBookDirectoriesResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTextbookAssistantBookDirectoriesResponseBody() {}

  explicit ListTextbookAssistantBookDirectoriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTextbookAssistantBookDirectoriesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListTextbookAssistantBookDirectoriesResponseBodyData>(model1);
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


  virtual ~ListTextbookAssistantBookDirectoriesResponseBody() = default;
};
class ListTextbookAssistantBookDirectoriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTextbookAssistantBookDirectoriesResponseBody> body{};

  ListTextbookAssistantBookDirectoriesResponse() {}

  explicit ListTextbookAssistantBookDirectoriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTextbookAssistantBookDirectoriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTextbookAssistantBookDirectoriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTextbookAssistantBookDirectoriesResponse() = default;
};
class ListTextbookAssistantBooksRequest : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<string> bookId{};
  shared_ptr<string> grade{};
  shared_ptr<string> maxResults{};
  shared_ptr<string> page{};
  shared_ptr<string> version{};
  shared_ptr<string> volume{};

  ListTextbookAssistantBooksRequest() {}

  explicit ListTextbookAssistantBooksRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (bookId) {
      res["bookId"] = boost::any(*bookId);
    }
    if (grade) {
      res["grade"] = boost::any(*grade);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
    }
    if (page) {
      res["page"] = boost::any(*page);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (volume) {
      res["volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("bookId") != m.end() && !m["bookId"].empty()) {
      bookId = make_shared<string>(boost::any_cast<string>(m["bookId"]));
    }
    if (m.find("grade") != m.end() && !m["grade"].empty()) {
      grade = make_shared<string>(boost::any_cast<string>(m["grade"]));
    }
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<string>(boost::any_cast<string>(m["maxResults"]));
    }
    if (m.find("page") != m.end() && !m["page"].empty()) {
      page = make_shared<string>(boost::any_cast<string>(m["page"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("volume") != m.end() && !m["volume"].empty()) {
      volume = make_shared<string>(boost::any_cast<string>(m["volume"]));
    }
  }


  virtual ~ListTextbookAssistantBooksRequest() = default;
};
class ListTextbookAssistantBooksResponseBodyDataBookList : public Darabonba::Model {
public:
  shared_ptr<string> author{};
  shared_ptr<string> bookId{};
  shared_ptr<string> bookName{};
  shared_ptr<string> coverImage{};
  shared_ptr<string> edition{};
  shared_ptr<string> grade{};
  shared_ptr<string> impression{};
  shared_ptr<string> isbn{};
  shared_ptr<string> publisher{};
  shared_ptr<string> subject{};
  shared_ptr<string> version{};
  shared_ptr<string> volume{};

  ListTextbookAssistantBooksResponseBodyDataBookList() {}

  explicit ListTextbookAssistantBooksResponseBodyDataBookList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (author) {
      res["author"] = boost::any(*author);
    }
    if (bookId) {
      res["bookId"] = boost::any(*bookId);
    }
    if (bookName) {
      res["bookName"] = boost::any(*bookName);
    }
    if (coverImage) {
      res["coverImage"] = boost::any(*coverImage);
    }
    if (edition) {
      res["edition"] = boost::any(*edition);
    }
    if (grade) {
      res["grade"] = boost::any(*grade);
    }
    if (impression) {
      res["impression"] = boost::any(*impression);
    }
    if (isbn) {
      res["isbn"] = boost::any(*isbn);
    }
    if (publisher) {
      res["publisher"] = boost::any(*publisher);
    }
    if (subject) {
      res["subject"] = boost::any(*subject);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    if (volume) {
      res["volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("author") != m.end() && !m["author"].empty()) {
      author = make_shared<string>(boost::any_cast<string>(m["author"]));
    }
    if (m.find("bookId") != m.end() && !m["bookId"].empty()) {
      bookId = make_shared<string>(boost::any_cast<string>(m["bookId"]));
    }
    if (m.find("bookName") != m.end() && !m["bookName"].empty()) {
      bookName = make_shared<string>(boost::any_cast<string>(m["bookName"]));
    }
    if (m.find("coverImage") != m.end() && !m["coverImage"].empty()) {
      coverImage = make_shared<string>(boost::any_cast<string>(m["coverImage"]));
    }
    if (m.find("edition") != m.end() && !m["edition"].empty()) {
      edition = make_shared<string>(boost::any_cast<string>(m["edition"]));
    }
    if (m.find("grade") != m.end() && !m["grade"].empty()) {
      grade = make_shared<string>(boost::any_cast<string>(m["grade"]));
    }
    if (m.find("impression") != m.end() && !m["impression"].empty()) {
      impression = make_shared<string>(boost::any_cast<string>(m["impression"]));
    }
    if (m.find("isbn") != m.end() && !m["isbn"].empty()) {
      isbn = make_shared<string>(boost::any_cast<string>(m["isbn"]));
    }
    if (m.find("publisher") != m.end() && !m["publisher"].empty()) {
      publisher = make_shared<string>(boost::any_cast<string>(m["publisher"]));
    }
    if (m.find("subject") != m.end() && !m["subject"].empty()) {
      subject = make_shared<string>(boost::any_cast<string>(m["subject"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
    if (m.find("volume") != m.end() && !m["volume"].empty()) {
      volume = make_shared<string>(boost::any_cast<string>(m["volume"]));
    }
  }


  virtual ~ListTextbookAssistantBooksResponseBodyDataBookList() = default;
};
class ListTextbookAssistantBooksResponseBodyDataPaginationData : public Darabonba::Model {
public:
  shared_ptr<long> currentPage{};
  shared_ptr<long> maxResults{};
  shared_ptr<long> totalCount{};

  ListTextbookAssistantBooksResponseBodyDataPaginationData() {}

  explicit ListTextbookAssistantBooksResponseBodyDataPaginationData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (currentPage) {
      res["currentPage"] = boost::any(*currentPage);
    }
    if (maxResults) {
      res["maxResults"] = boost::any(*maxResults);
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
    if (m.find("maxResults") != m.end() && !m["maxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["maxResults"]));
    }
    if (m.find("totalCount") != m.end() && !m["totalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["totalCount"]));
    }
  }


  virtual ~ListTextbookAssistantBooksResponseBodyDataPaginationData() = default;
};
class ListTextbookAssistantBooksResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTextbookAssistantBooksResponseBodyDataBookList>> bookList{};
  shared_ptr<ListTextbookAssistantBooksResponseBodyDataPaginationData> paginationData{};

  ListTextbookAssistantBooksResponseBodyData() {}

  explicit ListTextbookAssistantBooksResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bookList) {
      vector<boost::any> temp1;
      for(auto item1:*bookList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["bookList"] = boost::any(temp1);
    }
    if (paginationData) {
      res["paginationData"] = paginationData ? boost::any(paginationData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bookList") != m.end() && !m["bookList"].empty()) {
      if (typeid(vector<boost::any>) == m["bookList"].type()) {
        vector<ListTextbookAssistantBooksResponseBodyDataBookList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["bookList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantBooksResponseBodyDataBookList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        bookList = make_shared<vector<ListTextbookAssistantBooksResponseBodyDataBookList>>(expect1);
      }
    }
    if (m.find("paginationData") != m.end() && !m["paginationData"].empty()) {
      if (typeid(map<string, boost::any>) == m["paginationData"].type()) {
        ListTextbookAssistantBooksResponseBodyDataPaginationData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["paginationData"]));
        paginationData = make_shared<ListTextbookAssistantBooksResponseBodyDataPaginationData>(model1);
      }
    }
  }


  virtual ~ListTextbookAssistantBooksResponseBodyData() = default;
};
class ListTextbookAssistantBooksResponseBody : public Darabonba::Model {
public:
  shared_ptr<ListTextbookAssistantBooksResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTextbookAssistantBooksResponseBody() {}

  explicit ListTextbookAssistantBooksResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTextbookAssistantBooksResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListTextbookAssistantBooksResponseBodyData>(model1);
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


  virtual ~ListTextbookAssistantBooksResponseBody() = default;
};
class ListTextbookAssistantBooksResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTextbookAssistantBooksResponseBody> body{};

  ListTextbookAssistantBooksResponse() {}

  explicit ListTextbookAssistantBooksResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTextbookAssistantBooksResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTextbookAssistantBooksResponseBody>(model1);
      }
    }
  }


  virtual ~ListTextbookAssistantBooksResponse() = default;
};
class ListTextbookAssistantGradeVolumesRequest : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<string> scenario{};

  ListTextbookAssistantGradeVolumesRequest() {}

  explicit ListTextbookAssistantGradeVolumesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (scenario) {
      res["scenario"] = boost::any(*scenario);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("scenario") != m.end() && !m["scenario"].empty()) {
      scenario = make_shared<string>(boost::any_cast<string>(m["scenario"]));
    }
  }


  virtual ~ListTextbookAssistantGradeVolumesRequest() = default;
};
class ListTextbookAssistantGradeVolumesResponseBodyDataGradeVolumes : public Darabonba::Model {
public:
  shared_ptr<string> grade{};
  shared_ptr<string> volume{};

  ListTextbookAssistantGradeVolumesResponseBodyDataGradeVolumes() {}

  explicit ListTextbookAssistantGradeVolumesResponseBodyDataGradeVolumes(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (grade) {
      res["grade"] = boost::any(*grade);
    }
    if (volume) {
      res["volume"] = boost::any(*volume);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("grade") != m.end() && !m["grade"].empty()) {
      grade = make_shared<string>(boost::any_cast<string>(m["grade"]));
    }
    if (m.find("volume") != m.end() && !m["volume"].empty()) {
      volume = make_shared<string>(boost::any_cast<string>(m["volume"]));
    }
  }


  virtual ~ListTextbookAssistantGradeVolumesResponseBodyDataGradeVolumes() = default;
};
class ListTextbookAssistantGradeVolumesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTextbookAssistantGradeVolumesResponseBodyDataGradeVolumes>> gradeVolumes{};
  shared_ptr<string> textbookVersion{};

  ListTextbookAssistantGradeVolumesResponseBodyData() {}

  explicit ListTextbookAssistantGradeVolumesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (gradeVolumes) {
      vector<boost::any> temp1;
      for(auto item1:*gradeVolumes){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["gradeVolumes"] = boost::any(temp1);
    }
    if (textbookVersion) {
      res["textbookVersion"] = boost::any(*textbookVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("gradeVolumes") != m.end() && !m["gradeVolumes"].empty()) {
      if (typeid(vector<boost::any>) == m["gradeVolumes"].type()) {
        vector<ListTextbookAssistantGradeVolumesResponseBodyDataGradeVolumes> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["gradeVolumes"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantGradeVolumesResponseBodyDataGradeVolumes model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        gradeVolumes = make_shared<vector<ListTextbookAssistantGradeVolumesResponseBodyDataGradeVolumes>>(expect1);
      }
    }
    if (m.find("textbookVersion") != m.end() && !m["textbookVersion"].empty()) {
      textbookVersion = make_shared<string>(boost::any_cast<string>(m["textbookVersion"]));
    }
  }


  virtual ~ListTextbookAssistantGradeVolumesResponseBodyData() = default;
};
class ListTextbookAssistantGradeVolumesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTextbookAssistantGradeVolumesResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTextbookAssistantGradeVolumesResponseBody() {}

  explicit ListTextbookAssistantGradeVolumesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListTextbookAssistantGradeVolumesResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantGradeVolumesResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTextbookAssistantGradeVolumesResponseBodyData>>(expect1);
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


  virtual ~ListTextbookAssistantGradeVolumesResponseBody() = default;
};
class ListTextbookAssistantGradeVolumesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTextbookAssistantGradeVolumesResponseBody> body{};

  ListTextbookAssistantGradeVolumesResponse() {}

  explicit ListTextbookAssistantGradeVolumesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTextbookAssistantGradeVolumesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTextbookAssistantGradeVolumesResponseBody>(model1);
      }
    }
  }


  virtual ~ListTextbookAssistantGradeVolumesResponse() = default;
};
class ListTextbookAssistantSceneDetailsRequest : public Darabonba::Model {
public:
  shared_ptr<string> authToken{};
  shared_ptr<vector<string>> sceneIdList{};

  ListTextbookAssistantSceneDetailsRequest() {}

  explicit ListTextbookAssistantSceneDetailsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (authToken) {
      res["authToken"] = boost::any(*authToken);
    }
    if (sceneIdList) {
      res["sceneIdList"] = boost::any(*sceneIdList);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("authToken") != m.end() && !m["authToken"].empty()) {
      authToken = make_shared<string>(boost::any_cast<string>(m["authToken"]));
    }
    if (m.find("sceneIdList") != m.end() && !m["sceneIdList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sceneIdList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sceneIdList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sceneIdList = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListTextbookAssistantSceneDetailsRequest() = default;
};
class ListTextbookAssistantSceneDetailsResponseBodyDataRoleList : public Darabonba::Model {
public:
  shared_ptr<string> introduction{};
  shared_ptr<string> introductionTranslate{};
  shared_ptr<string> promoting{};
  shared_ptr<string> promotingTranslate{};
  shared_ptr<string> roleName{};
  shared_ptr<string> roleNameTranslate{};
  shared_ptr<string> roleType{};

  ListTextbookAssistantSceneDetailsResponseBodyDataRoleList() {}

  explicit ListTextbookAssistantSceneDetailsResponseBodyDataRoleList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (introduction) {
      res["introduction"] = boost::any(*introduction);
    }
    if (introductionTranslate) {
      res["introductionTranslate"] = boost::any(*introductionTranslate);
    }
    if (promoting) {
      res["promoting"] = boost::any(*promoting);
    }
    if (promotingTranslate) {
      res["promotingTranslate"] = boost::any(*promotingTranslate);
    }
    if (roleName) {
      res["roleName"] = boost::any(*roleName);
    }
    if (roleNameTranslate) {
      res["roleNameTranslate"] = boost::any(*roleNameTranslate);
    }
    if (roleType) {
      res["roleType"] = boost::any(*roleType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("introduction") != m.end() && !m["introduction"].empty()) {
      introduction = make_shared<string>(boost::any_cast<string>(m["introduction"]));
    }
    if (m.find("introductionTranslate") != m.end() && !m["introductionTranslate"].empty()) {
      introductionTranslate = make_shared<string>(boost::any_cast<string>(m["introductionTranslate"]));
    }
    if (m.find("promoting") != m.end() && !m["promoting"].empty()) {
      promoting = make_shared<string>(boost::any_cast<string>(m["promoting"]));
    }
    if (m.find("promotingTranslate") != m.end() && !m["promotingTranslate"].empty()) {
      promotingTranslate = make_shared<string>(boost::any_cast<string>(m["promotingTranslate"]));
    }
    if (m.find("roleName") != m.end() && !m["roleName"].empty()) {
      roleName = make_shared<string>(boost::any_cast<string>(m["roleName"]));
    }
    if (m.find("roleNameTranslate") != m.end() && !m["roleNameTranslate"].empty()) {
      roleNameTranslate = make_shared<string>(boost::any_cast<string>(m["roleNameTranslate"]));
    }
    if (m.find("roleType") != m.end() && !m["roleType"].empty()) {
      roleType = make_shared<string>(boost::any_cast<string>(m["roleType"]));
    }
  }


  virtual ~ListTextbookAssistantSceneDetailsResponseBodyDataRoleList() = default;
};
class ListTextbookAssistantSceneDetailsResponseBodyDataSceneTaskList : public Darabonba::Model {
public:
  shared_ptr<string> sceneTask{};
  shared_ptr<string> sceneTaskTranslate{};

  ListTextbookAssistantSceneDetailsResponseBodyDataSceneTaskList() {}

  explicit ListTextbookAssistantSceneDetailsResponseBodyDataSceneTaskList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sceneTask) {
      res["sceneTask"] = boost::any(*sceneTask);
    }
    if (sceneTaskTranslate) {
      res["sceneTaskTranslate"] = boost::any(*sceneTaskTranslate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sceneTask") != m.end() && !m["sceneTask"].empty()) {
      sceneTask = make_shared<string>(boost::any_cast<string>(m["sceneTask"]));
    }
    if (m.find("sceneTaskTranslate") != m.end() && !m["sceneTaskTranslate"].empty()) {
      sceneTaskTranslate = make_shared<string>(boost::any_cast<string>(m["sceneTaskTranslate"]));
    }
  }


  virtual ~ListTextbookAssistantSceneDetailsResponseBodyDataSceneTaskList() = default;
};
class ListTextbookAssistantSceneDetailsResponseBodyDataSentenceList : public Darabonba::Model {
public:
  shared_ptr<string> sentenceAnalysis{};
  shared_ptr<string> sentenceId{};
  shared_ptr<string> sentenceText{};

  ListTextbookAssistantSceneDetailsResponseBodyDataSentenceList() {}

  explicit ListTextbookAssistantSceneDetailsResponseBodyDataSentenceList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sentenceAnalysis) {
      res["sentenceAnalysis"] = boost::any(*sentenceAnalysis);
    }
    if (sentenceId) {
      res["sentenceId"] = boost::any(*sentenceId);
    }
    if (sentenceText) {
      res["sentenceText"] = boost::any(*sentenceText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("sentenceAnalysis") != m.end() && !m["sentenceAnalysis"].empty()) {
      sentenceAnalysis = make_shared<string>(boost::any_cast<string>(m["sentenceAnalysis"]));
    }
    if (m.find("sentenceId") != m.end() && !m["sentenceId"].empty()) {
      sentenceId = make_shared<string>(boost::any_cast<string>(m["sentenceId"]));
    }
    if (m.find("sentenceText") != m.end() && !m["sentenceText"].empty()) {
      sentenceText = make_shared<string>(boost::any_cast<string>(m["sentenceText"]));
    }
  }


  virtual ~ListTextbookAssistantSceneDetailsResponseBodyDataSentenceList() = default;
};
class ListTextbookAssistantSceneDetailsResponseBodyDataTheme : public Darabonba::Model {
public:
  shared_ptr<vector<string>> themeImageList{};
  shared_ptr<string> themeName{};
  shared_ptr<string> themeTranslate{};

  ListTextbookAssistantSceneDetailsResponseBodyDataTheme() {}

  explicit ListTextbookAssistantSceneDetailsResponseBodyDataTheme(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (themeImageList) {
      res["themeImageList"] = boost::any(*themeImageList);
    }
    if (themeName) {
      res["themeName"] = boost::any(*themeName);
    }
    if (themeTranslate) {
      res["themeTranslate"] = boost::any(*themeTranslate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("themeImageList") != m.end() && !m["themeImageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["themeImageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["themeImageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      themeImageList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("themeName") != m.end() && !m["themeName"].empty()) {
      themeName = make_shared<string>(boost::any_cast<string>(m["themeName"]));
    }
    if (m.find("themeTranslate") != m.end() && !m["themeTranslate"].empty()) {
      themeTranslate = make_shared<string>(boost::any_cast<string>(m["themeTranslate"]));
    }
  }


  virtual ~ListTextbookAssistantSceneDetailsResponseBodyDataTheme() = default;
};
class ListTextbookAssistantSceneDetailsResponseBodyDataTopic : public Darabonba::Model {
public:
  shared_ptr<vector<string>> topicImageList{};
  shared_ptr<string> topicName{};
  shared_ptr<string> topicTranslate{};

  ListTextbookAssistantSceneDetailsResponseBodyDataTopic() {}

  explicit ListTextbookAssistantSceneDetailsResponseBodyDataTopic(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (topicImageList) {
      res["topicImageList"] = boost::any(*topicImageList);
    }
    if (topicName) {
      res["topicName"] = boost::any(*topicName);
    }
    if (topicTranslate) {
      res["topicTranslate"] = boost::any(*topicTranslate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("topicImageList") != m.end() && !m["topicImageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["topicImageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["topicImageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      topicImageList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("topicName") != m.end() && !m["topicName"].empty()) {
      topicName = make_shared<string>(boost::any_cast<string>(m["topicName"]));
    }
    if (m.find("topicTranslate") != m.end() && !m["topicTranslate"].empty()) {
      topicTranslate = make_shared<string>(boost::any_cast<string>(m["topicTranslate"]));
    }
  }


  virtual ~ListTextbookAssistantSceneDetailsResponseBodyDataTopic() = default;
};
class ListTextbookAssistantSceneDetailsResponseBodyDataWordList : public Darabonba::Model {
public:
  shared_ptr<string> wordAnalysis{};
  shared_ptr<string> wordId{};
  shared_ptr<string> wordText{};

  ListTextbookAssistantSceneDetailsResponseBodyDataWordList() {}

  explicit ListTextbookAssistantSceneDetailsResponseBodyDataWordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (wordAnalysis) {
      res["wordAnalysis"] = boost::any(*wordAnalysis);
    }
    if (wordId) {
      res["wordId"] = boost::any(*wordId);
    }
    if (wordText) {
      res["wordText"] = boost::any(*wordText);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("wordAnalysis") != m.end() && !m["wordAnalysis"].empty()) {
      wordAnalysis = make_shared<string>(boost::any_cast<string>(m["wordAnalysis"]));
    }
    if (m.find("wordId") != m.end() && !m["wordId"].empty()) {
      wordId = make_shared<string>(boost::any_cast<string>(m["wordId"]));
    }
    if (m.find("wordText") != m.end() && !m["wordText"].empty()) {
      wordText = make_shared<string>(boost::any_cast<string>(m["wordText"]));
    }
  }


  virtual ~ListTextbookAssistantSceneDetailsResponseBodyDataWordList() = default;
};
class ListTextbookAssistantSceneDetailsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<ListTextbookAssistantSceneDetailsResponseBodyDataRoleList>> roleList{};
  shared_ptr<string> scene{};
  shared_ptr<string> sceneId{};
  shared_ptr<vector<string>> sceneImageList{};
  shared_ptr<vector<ListTextbookAssistantSceneDetailsResponseBodyDataSceneTaskList>> sceneTaskList{};
  shared_ptr<vector<ListTextbookAssistantSceneDetailsResponseBodyDataSentenceList>> sentenceList{};
  shared_ptr<string> target{};
  shared_ptr<ListTextbookAssistantSceneDetailsResponseBodyDataTheme> theme{};
  shared_ptr<ListTextbookAssistantSceneDetailsResponseBodyDataTopic> topic{};
  shared_ptr<vector<ListTextbookAssistantSceneDetailsResponseBodyDataWordList>> wordList{};

  ListTextbookAssistantSceneDetailsResponseBodyData() {}

  explicit ListTextbookAssistantSceneDetailsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (roleList) {
      vector<boost::any> temp1;
      for(auto item1:*roleList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["roleList"] = boost::any(temp1);
    }
    if (scene) {
      res["scene"] = boost::any(*scene);
    }
    if (sceneId) {
      res["sceneId"] = boost::any(*sceneId);
    }
    if (sceneImageList) {
      res["sceneImageList"] = boost::any(*sceneImageList);
    }
    if (sceneTaskList) {
      vector<boost::any> temp1;
      for(auto item1:*sceneTaskList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sceneTaskList"] = boost::any(temp1);
    }
    if (sentenceList) {
      vector<boost::any> temp1;
      for(auto item1:*sentenceList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["sentenceList"] = boost::any(temp1);
    }
    if (target) {
      res["target"] = boost::any(*target);
    }
    if (theme) {
      res["theme"] = theme ? boost::any(theme->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (topic) {
      res["topic"] = topic ? boost::any(topic->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (wordList) {
      vector<boost::any> temp1;
      for(auto item1:*wordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["wordList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("roleList") != m.end() && !m["roleList"].empty()) {
      if (typeid(vector<boost::any>) == m["roleList"].type()) {
        vector<ListTextbookAssistantSceneDetailsResponseBodyDataRoleList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["roleList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantSceneDetailsResponseBodyDataRoleList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        roleList = make_shared<vector<ListTextbookAssistantSceneDetailsResponseBodyDataRoleList>>(expect1);
      }
    }
    if (m.find("scene") != m.end() && !m["scene"].empty()) {
      scene = make_shared<string>(boost::any_cast<string>(m["scene"]));
    }
    if (m.find("sceneId") != m.end() && !m["sceneId"].empty()) {
      sceneId = make_shared<string>(boost::any_cast<string>(m["sceneId"]));
    }
    if (m.find("sceneImageList") != m.end() && !m["sceneImageList"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["sceneImageList"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["sceneImageList"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      sceneImageList = make_shared<vector<string>>(toVec1);
    }
    if (m.find("sceneTaskList") != m.end() && !m["sceneTaskList"].empty()) {
      if (typeid(vector<boost::any>) == m["sceneTaskList"].type()) {
        vector<ListTextbookAssistantSceneDetailsResponseBodyDataSceneTaskList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sceneTaskList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantSceneDetailsResponseBodyDataSceneTaskList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sceneTaskList = make_shared<vector<ListTextbookAssistantSceneDetailsResponseBodyDataSceneTaskList>>(expect1);
      }
    }
    if (m.find("sentenceList") != m.end() && !m["sentenceList"].empty()) {
      if (typeid(vector<boost::any>) == m["sentenceList"].type()) {
        vector<ListTextbookAssistantSceneDetailsResponseBodyDataSentenceList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["sentenceList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantSceneDetailsResponseBodyDataSentenceList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sentenceList = make_shared<vector<ListTextbookAssistantSceneDetailsResponseBodyDataSentenceList>>(expect1);
      }
    }
    if (m.find("target") != m.end() && !m["target"].empty()) {
      target = make_shared<string>(boost::any_cast<string>(m["target"]));
    }
    if (m.find("theme") != m.end() && !m["theme"].empty()) {
      if (typeid(map<string, boost::any>) == m["theme"].type()) {
        ListTextbookAssistantSceneDetailsResponseBodyDataTheme model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["theme"]));
        theme = make_shared<ListTextbookAssistantSceneDetailsResponseBodyDataTheme>(model1);
      }
    }
    if (m.find("topic") != m.end() && !m["topic"].empty()) {
      if (typeid(map<string, boost::any>) == m["topic"].type()) {
        ListTextbookAssistantSceneDetailsResponseBodyDataTopic model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["topic"]));
        topic = make_shared<ListTextbookAssistantSceneDetailsResponseBodyDataTopic>(model1);
      }
    }
    if (m.find("wordList") != m.end() && !m["wordList"].empty()) {
      if (typeid(vector<boost::any>) == m["wordList"].type()) {
        vector<ListTextbookAssistantSceneDetailsResponseBodyDataWordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["wordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantSceneDetailsResponseBodyDataWordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        wordList = make_shared<vector<ListTextbookAssistantSceneDetailsResponseBodyDataWordList>>(expect1);
      }
    }
  }


  virtual ~ListTextbookAssistantSceneDetailsResponseBodyData() = default;
};
class ListTextbookAssistantSceneDetailsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListTextbookAssistantSceneDetailsResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListTextbookAssistantSceneDetailsResponseBody() {}

  explicit ListTextbookAssistantSceneDetailsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListTextbookAssistantSceneDetailsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListTextbookAssistantSceneDetailsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListTextbookAssistantSceneDetailsResponseBodyData>>(expect1);
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


  virtual ~ListTextbookAssistantSceneDetailsResponseBody() = default;
};
class ListTextbookAssistantSceneDetailsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListTextbookAssistantSceneDetailsResponseBody> body{};

  ListTextbookAssistantSceneDetailsResponse() {}

  explicit ListTextbookAssistantSceneDetailsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListTextbookAssistantSceneDetailsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListTextbookAssistantSceneDetailsResponseBody>(model1);
      }
    }
  }


  virtual ~ListTextbookAssistantSceneDetailsResponse() = default;
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
class QueryApplicationAccessIdRequest : public Darabonba::Model {
public:
  shared_ptr<string> applicationAccessId{};

  QueryApplicationAccessIdRequest() {}

  explicit QueryApplicationAccessIdRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
  }


  virtual ~QueryApplicationAccessIdRequest() = default;
};
class QueryApplicationAccessIdResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> applicationAccessId{};
  shared_ptr<string> applicationAccessSecret{};

  QueryApplicationAccessIdResponseBodyData() {}

  explicit QueryApplicationAccessIdResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    if (applicationAccessSecret) {
      res["applicationAccessSecret"] = boost::any(*applicationAccessSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
    if (m.find("applicationAccessSecret") != m.end() && !m["applicationAccessSecret"].empty()) {
      applicationAccessSecret = make_shared<string>(boost::any_cast<string>(m["applicationAccessSecret"]));
    }
  }


  virtual ~QueryApplicationAccessIdResponseBodyData() = default;
};
class QueryApplicationAccessIdResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryApplicationAccessIdResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryApplicationAccessIdResponseBody() {}

  explicit QueryApplicationAccessIdResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryApplicationAccessIdResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryApplicationAccessIdResponseBodyData>(model1);
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


  virtual ~QueryApplicationAccessIdResponseBody() = default;
};
class QueryApplicationAccessIdResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryApplicationAccessIdResponseBody> body{};

  QueryApplicationAccessIdResponse() {}

  explicit QueryApplicationAccessIdResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryApplicationAccessIdResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryApplicationAccessIdResponseBody>(model1);
      }
    }
  }


  virtual ~QueryApplicationAccessIdResponse() = default;
};
class QueryProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};

  QueryProjectRequest() {}

  explicit QueryProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
  }


  virtual ~QueryProjectRequest() = default;
};
class QueryProjectResponseBodyDataProjectAppsApplicationAccessIds : public Darabonba::Model {
public:
  shared_ptr<string> applicationAccessId{};
  shared_ptr<string> applicationAccessSecret{};

  QueryProjectResponseBodyDataProjectAppsApplicationAccessIds() {}

  explicit QueryProjectResponseBodyDataProjectAppsApplicationAccessIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    if (applicationAccessSecret) {
      res["applicationAccessSecret"] = boost::any(*applicationAccessSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
    if (m.find("applicationAccessSecret") != m.end() && !m["applicationAccessSecret"].empty()) {
      applicationAccessSecret = make_shared<string>(boost::any_cast<string>(m["applicationAccessSecret"]));
    }
  }


  virtual ~QueryProjectResponseBodyDataProjectAppsApplicationAccessIds() = default;
};
class QueryProjectResponseBodyDataProjectApps : public Darabonba::Model {
public:
  shared_ptr<vector<QueryProjectResponseBodyDataProjectAppsApplicationAccessIds>> applicationAccessIds{};
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  QueryProjectResponseBodyDataProjectApps() {}

  explicit QueryProjectResponseBodyDataProjectApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessIds) {
      vector<boost::any> temp1;
      for(auto item1:*applicationAccessIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationAccessIds"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationAccessIds") != m.end() && !m["ApplicationAccessIds"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationAccessIds"].type()) {
        vector<QueryProjectResponseBodyDataProjectAppsApplicationAccessIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationAccessIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProjectResponseBodyDataProjectAppsApplicationAccessIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationAccessIds = make_shared<vector<QueryProjectResponseBodyDataProjectAppsApplicationAccessIds>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~QueryProjectResponseBodyDataProjectApps() = default;
};
class QueryProjectResponseBodyDataProjectSDK : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> demoUrl{};
  shared_ptr<string> deployMode{};
  shared_ptr<string> developLanguage{};
  shared_ptr<string> docUrl{};
  shared_ptr<string> sdkName{};
  shared_ptr<string> sdkUrl{};
  shared_ptr<string> sdkVersion{};

  QueryProjectResponseBodyDataProjectSDK() {}

  explicit QueryProjectResponseBodyDataProjectSDK(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (demoUrl) {
      res["DemoUrl"] = boost::any(*demoUrl);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (developLanguage) {
      res["DevelopLanguage"] = boost::any(*developLanguage);
    }
    if (docUrl) {
      res["DocUrl"] = boost::any(*docUrl);
    }
    if (sdkName) {
      res["SdkName"] = boost::any(*sdkName);
    }
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DemoUrl") != m.end() && !m["DemoUrl"].empty()) {
      demoUrl = make_shared<string>(boost::any_cast<string>(m["DemoUrl"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("DevelopLanguage") != m.end() && !m["DevelopLanguage"].empty()) {
      developLanguage = make_shared<string>(boost::any_cast<string>(m["DevelopLanguage"]));
    }
    if (m.find("DocUrl") != m.end() && !m["DocUrl"].empty()) {
      docUrl = make_shared<string>(boost::any_cast<string>(m["DocUrl"]));
    }
    if (m.find("SdkName") != m.end() && !m["SdkName"].empty()) {
      sdkName = make_shared<string>(boost::any_cast<string>(m["SdkName"]));
    }
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
  }


  virtual ~QueryProjectResponseBodyDataProjectSDK() = default;
};
class QueryProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<QueryProjectResponseBodyDataProjectApps>> projectApps{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<vector<QueryProjectResponseBodyDataProjectSDK>> projectSDK{};
  shared_ptr<string> projectType{};

  QueryProjectResponseBodyData() {}

  explicit QueryProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (projectApps) {
      vector<boost::any> temp1;
      for(auto item1:*projectApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectApps"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (projectSDK) {
      vector<boost::any> temp1;
      for(auto item1:*projectSDK){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectSDK"] = boost::any(temp1);
    }
    if (projectType) {
      res["ProjectType"] = boost::any(*projectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ProjectApps") != m.end() && !m["ProjectApps"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectApps"].type()) {
        vector<QueryProjectResponseBodyDataProjectApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProjectResponseBodyDataProjectApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectApps = make_shared<vector<QueryProjectResponseBodyDataProjectApps>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ProjectSDK") != m.end() && !m["ProjectSDK"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectSDK"].type()) {
        vector<QueryProjectResponseBodyDataProjectSDK> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectSDK"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProjectResponseBodyDataProjectSDK model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectSDK = make_shared<vector<QueryProjectResponseBodyDataProjectSDK>>(expect1);
      }
    }
    if (m.find("ProjectType") != m.end() && !m["ProjectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["ProjectType"]));
    }
  }


  virtual ~QueryProjectResponseBodyData() = default;
};
class QueryProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<QueryProjectResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryProjectResponseBody() {}

  explicit QueryProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<QueryProjectResponseBodyData>(model1);
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


  virtual ~QueryProjectResponseBody() = default;
};
class QueryProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryProjectResponseBody> body{};

  QueryProjectResponse() {}

  explicit QueryProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryProjectResponseBody>(model1);
      }
    }
  }


  virtual ~QueryProjectResponse() = default;
};
class QueryProjectListResponseBodyDataProjectAppsApplicationAccessIds : public Darabonba::Model {
public:
  shared_ptr<string> applicationAccessId{};
  shared_ptr<string> applicationAccessSecret{};

  QueryProjectListResponseBodyDataProjectAppsApplicationAccessIds() {}

  explicit QueryProjectListResponseBodyDataProjectAppsApplicationAccessIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    if (applicationAccessSecret) {
      res["applicationAccessSecret"] = boost::any(*applicationAccessSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
    if (m.find("applicationAccessSecret") != m.end() && !m["applicationAccessSecret"].empty()) {
      applicationAccessSecret = make_shared<string>(boost::any_cast<string>(m["applicationAccessSecret"]));
    }
  }


  virtual ~QueryProjectListResponseBodyDataProjectAppsApplicationAccessIds() = default;
};
class QueryProjectListResponseBodyDataProjectApps : public Darabonba::Model {
public:
  shared_ptr<vector<QueryProjectListResponseBodyDataProjectAppsApplicationAccessIds>> applicationAccessIds{};
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  QueryProjectListResponseBodyDataProjectApps() {}

  explicit QueryProjectListResponseBodyDataProjectApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessIds) {
      vector<boost::any> temp1;
      for(auto item1:*applicationAccessIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationAccessIds"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationAccessIds") != m.end() && !m["ApplicationAccessIds"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationAccessIds"].type()) {
        vector<QueryProjectListResponseBodyDataProjectAppsApplicationAccessIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationAccessIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProjectListResponseBodyDataProjectAppsApplicationAccessIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationAccessIds = make_shared<vector<QueryProjectListResponseBodyDataProjectAppsApplicationAccessIds>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~QueryProjectListResponseBodyDataProjectApps() = default;
};
class QueryProjectListResponseBodyDataProjectSDK : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> demoUrl{};
  shared_ptr<string> deployMode{};
  shared_ptr<string> developLanguage{};
  shared_ptr<string> docUrl{};
  shared_ptr<string> sdkName{};
  shared_ptr<string> sdkUrl{};
  shared_ptr<string> sdkVersion{};

  QueryProjectListResponseBodyDataProjectSDK() {}

  explicit QueryProjectListResponseBodyDataProjectSDK(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (demoUrl) {
      res["DemoUrl"] = boost::any(*demoUrl);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (developLanguage) {
      res["DevelopLanguage"] = boost::any(*developLanguage);
    }
    if (docUrl) {
      res["DocUrl"] = boost::any(*docUrl);
    }
    if (sdkName) {
      res["SdkName"] = boost::any(*sdkName);
    }
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DemoUrl") != m.end() && !m["DemoUrl"].empty()) {
      demoUrl = make_shared<string>(boost::any_cast<string>(m["DemoUrl"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("DevelopLanguage") != m.end() && !m["DevelopLanguage"].empty()) {
      developLanguage = make_shared<string>(boost::any_cast<string>(m["DevelopLanguage"]));
    }
    if (m.find("DocUrl") != m.end() && !m["DocUrl"].empty()) {
      docUrl = make_shared<string>(boost::any_cast<string>(m["DocUrl"]));
    }
    if (m.find("SdkName") != m.end() && !m["SdkName"].empty()) {
      sdkName = make_shared<string>(boost::any_cast<string>(m["SdkName"]));
    }
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
  }


  virtual ~QueryProjectListResponseBodyDataProjectSDK() = default;
};
class QueryProjectListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<QueryProjectListResponseBodyDataProjectApps>> projectApps{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<vector<QueryProjectListResponseBodyDataProjectSDK>> projectSDK{};
  shared_ptr<string> projectType{};

  QueryProjectListResponseBodyData() {}

  explicit QueryProjectListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (projectApps) {
      vector<boost::any> temp1;
      for(auto item1:*projectApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectApps"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (projectSDK) {
      vector<boost::any> temp1;
      for(auto item1:*projectSDK){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectSDK"] = boost::any(temp1);
    }
    if (projectType) {
      res["ProjectType"] = boost::any(*projectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ProjectApps") != m.end() && !m["ProjectApps"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectApps"].type()) {
        vector<QueryProjectListResponseBodyDataProjectApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProjectListResponseBodyDataProjectApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectApps = make_shared<vector<QueryProjectListResponseBodyDataProjectApps>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ProjectSDK") != m.end() && !m["ProjectSDK"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectSDK"].type()) {
        vector<QueryProjectListResponseBodyDataProjectSDK> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectSDK"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProjectListResponseBodyDataProjectSDK model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectSDK = make_shared<vector<QueryProjectListResponseBodyDataProjectSDK>>(expect1);
      }
    }
    if (m.find("ProjectType") != m.end() && !m["ProjectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["ProjectType"]));
    }
  }


  virtual ~QueryProjectListResponseBodyData() = default;
};
class QueryProjectListResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<QueryProjectListResponseBodyData>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryProjectListResponseBody() {}

  explicit QueryProjectListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<QueryProjectListResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            QueryProjectListResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<QueryProjectListResponseBodyData>>(expect1);
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


  virtual ~QueryProjectListResponseBody() = default;
};
class QueryProjectListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryProjectListResponseBody> body{};

  QueryProjectListResponse() {}

  explicit QueryProjectListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryProjectListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryProjectListResponseBody>(model1);
      }
    }
  }


  virtual ~QueryProjectListResponse() = default;
};
class QueryPurchasedServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<AliyunConsoleServiceInfoDTO>> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  QueryPurchasedServiceResponseBody() {}

  explicit QueryPurchasedServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<AliyunConsoleServiceInfoDTO> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AliyunConsoleServiceInfoDTO model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<AliyunConsoleServiceInfoDTO>>(expect1);
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


  virtual ~QueryPurchasedServiceResponseBody() = default;
};
class QueryPurchasedServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<QueryPurchasedServiceResponseBody> body{};

  QueryPurchasedServiceResponse() {}

  explicit QueryPurchasedServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        QueryPurchasedServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<QueryPurchasedServiceResponseBody>(model1);
      }
    }
  }


  virtual ~QueryPurchasedServiceResponse() = default;
};
class UpdateProjectRequest : public Darabonba::Model {
public:
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};

  UpdateProjectRequest() {}

  explicit UpdateProjectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (projectId) {
      res["projectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["projectName"] = boost::any(*projectName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("projectId") != m.end() && !m["projectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["projectId"]));
    }
    if (m.find("projectName") != m.end() && !m["projectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["projectName"]));
    }
  }


  virtual ~UpdateProjectRequest() = default;
};
class UpdateProjectResponseBodyDataProjectAppsApplicationAccessIds : public Darabonba::Model {
public:
  shared_ptr<string> applicationAccessId{};
  shared_ptr<string> applicationAccessSecret{};

  UpdateProjectResponseBodyDataProjectAppsApplicationAccessIds() {}

  explicit UpdateProjectResponseBodyDataProjectAppsApplicationAccessIds(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessId) {
      res["applicationAccessId"] = boost::any(*applicationAccessId);
    }
    if (applicationAccessSecret) {
      res["applicationAccessSecret"] = boost::any(*applicationAccessSecret);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("applicationAccessId") != m.end() && !m["applicationAccessId"].empty()) {
      applicationAccessId = make_shared<string>(boost::any_cast<string>(m["applicationAccessId"]));
    }
    if (m.find("applicationAccessSecret") != m.end() && !m["applicationAccessSecret"].empty()) {
      applicationAccessSecret = make_shared<string>(boost::any_cast<string>(m["applicationAccessSecret"]));
    }
  }


  virtual ~UpdateProjectResponseBodyDataProjectAppsApplicationAccessIds() = default;
};
class UpdateProjectResponseBodyDataProjectApps : public Darabonba::Model {
public:
  shared_ptr<vector<UpdateProjectResponseBodyDataProjectAppsApplicationAccessIds>> applicationAccessIds{};
  shared_ptr<string> id{};
  shared_ptr<string> projectId{};

  UpdateProjectResponseBodyDataProjectApps() {}

  explicit UpdateProjectResponseBodyDataProjectApps(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (applicationAccessIds) {
      vector<boost::any> temp1;
      for(auto item1:*applicationAccessIds){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ApplicationAccessIds"] = boost::any(temp1);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApplicationAccessIds") != m.end() && !m["ApplicationAccessIds"].empty()) {
      if (typeid(vector<boost::any>) == m["ApplicationAccessIds"].type()) {
        vector<UpdateProjectResponseBodyDataProjectAppsApplicationAccessIds> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ApplicationAccessIds"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateProjectResponseBodyDataProjectAppsApplicationAccessIds model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        applicationAccessIds = make_shared<vector<UpdateProjectResponseBodyDataProjectAppsApplicationAccessIds>>(expect1);
      }
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
  }


  virtual ~UpdateProjectResponseBodyDataProjectApps() = default;
};
class UpdateProjectResponseBodyDataProjectSDK : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<string> demoUrl{};
  shared_ptr<string> deployMode{};
  shared_ptr<string> developLanguage{};
  shared_ptr<string> docUrl{};
  shared_ptr<string> sdkName{};
  shared_ptr<string> sdkUrl{};
  shared_ptr<string> sdkVersion{};

  UpdateProjectResponseBodyDataProjectSDK() {}

  explicit UpdateProjectResponseBodyDataProjectSDK(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (demoUrl) {
      res["DemoUrl"] = boost::any(*demoUrl);
    }
    if (deployMode) {
      res["DeployMode"] = boost::any(*deployMode);
    }
    if (developLanguage) {
      res["DevelopLanguage"] = boost::any(*developLanguage);
    }
    if (docUrl) {
      res["DocUrl"] = boost::any(*docUrl);
    }
    if (sdkName) {
      res["SdkName"] = boost::any(*sdkName);
    }
    if (sdkUrl) {
      res["SdkUrl"] = boost::any(*sdkUrl);
    }
    if (sdkVersion) {
      res["SdkVersion"] = boost::any(*sdkVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("DemoUrl") != m.end() && !m["DemoUrl"].empty()) {
      demoUrl = make_shared<string>(boost::any_cast<string>(m["DemoUrl"]));
    }
    if (m.find("DeployMode") != m.end() && !m["DeployMode"].empty()) {
      deployMode = make_shared<string>(boost::any_cast<string>(m["DeployMode"]));
    }
    if (m.find("DevelopLanguage") != m.end() && !m["DevelopLanguage"].empty()) {
      developLanguage = make_shared<string>(boost::any_cast<string>(m["DevelopLanguage"]));
    }
    if (m.find("DocUrl") != m.end() && !m["DocUrl"].empty()) {
      docUrl = make_shared<string>(boost::any_cast<string>(m["DocUrl"]));
    }
    if (m.find("SdkName") != m.end() && !m["SdkName"].empty()) {
      sdkName = make_shared<string>(boost::any_cast<string>(m["SdkName"]));
    }
    if (m.find("SdkUrl") != m.end() && !m["SdkUrl"].empty()) {
      sdkUrl = make_shared<string>(boost::any_cast<string>(m["SdkUrl"]));
    }
    if (m.find("SdkVersion") != m.end() && !m["SdkVersion"].empty()) {
      sdkVersion = make_shared<string>(boost::any_cast<string>(m["SdkVersion"]));
    }
  }


  virtual ~UpdateProjectResponseBodyDataProjectSDK() = default;
};
class UpdateProjectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createTime{};
  shared_ptr<vector<UpdateProjectResponseBodyDataProjectApps>> projectApps{};
  shared_ptr<string> projectId{};
  shared_ptr<string> projectName{};
  shared_ptr<vector<UpdateProjectResponseBodyDataProjectSDK>> projectSDK{};
  shared_ptr<string> projectType{};

  UpdateProjectResponseBodyData() {}

  explicit UpdateProjectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (projectApps) {
      vector<boost::any> temp1;
      for(auto item1:*projectApps){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectApps"] = boost::any(temp1);
    }
    if (projectId) {
      res["ProjectId"] = boost::any(*projectId);
    }
    if (projectName) {
      res["ProjectName"] = boost::any(*projectName);
    }
    if (projectSDK) {
      vector<boost::any> temp1;
      for(auto item1:*projectSDK){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ProjectSDK"] = boost::any(temp1);
    }
    if (projectType) {
      res["ProjectType"] = boost::any(*projectType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ProjectApps") != m.end() && !m["ProjectApps"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectApps"].type()) {
        vector<UpdateProjectResponseBodyDataProjectApps> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectApps"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateProjectResponseBodyDataProjectApps model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectApps = make_shared<vector<UpdateProjectResponseBodyDataProjectApps>>(expect1);
      }
    }
    if (m.find("ProjectId") != m.end() && !m["ProjectId"].empty()) {
      projectId = make_shared<string>(boost::any_cast<string>(m["ProjectId"]));
    }
    if (m.find("ProjectName") != m.end() && !m["ProjectName"].empty()) {
      projectName = make_shared<string>(boost::any_cast<string>(m["ProjectName"]));
    }
    if (m.find("ProjectSDK") != m.end() && !m["ProjectSDK"].empty()) {
      if (typeid(vector<boost::any>) == m["ProjectSDK"].type()) {
        vector<UpdateProjectResponseBodyDataProjectSDK> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ProjectSDK"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpdateProjectResponseBodyDataProjectSDK model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        projectSDK = make_shared<vector<UpdateProjectResponseBodyDataProjectSDK>>(expect1);
      }
    }
    if (m.find("ProjectType") != m.end() && !m["ProjectType"].empty()) {
      projectType = make_shared<string>(boost::any_cast<string>(m["ProjectType"]));
    }
  }


  virtual ~UpdateProjectResponseBodyData() = default;
};
class UpdateProjectResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdateProjectResponseBodyData> data{};
  shared_ptr<string> errCode{};
  shared_ptr<string> errMessage{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  UpdateProjectResponseBody() {}

  explicit UpdateProjectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpdateProjectResponseBodyData>(model1);
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


  virtual ~UpdateProjectResponseBody() = default;
};
class UpdateProjectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateProjectResponseBody> body{};

  UpdateProjectResponse() {}

  explicit UpdateProjectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateProjectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateProjectResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateProjectResponse() = default;
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
  CountOralEvaluationStatisticsCallsResponse countOralEvaluationStatisticsCallsWithOptions(shared_ptr<CountOralEvaluationStatisticsCallsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CountOralEvaluationStatisticsCallsResponse countOralEvaluationStatisticsCalls(shared_ptr<CountOralEvaluationStatisticsCallsRequest> request);
  CountOralEvaluationStatisticsConcurrentResponse countOralEvaluationStatisticsConcurrentWithOptions(shared_ptr<CountOralEvaluationStatisticsConcurrentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CountOralEvaluationStatisticsConcurrentResponse countOralEvaluationStatisticsConcurrent(shared_ptr<CountOralEvaluationStatisticsConcurrentRequest> request);
  CountOralEvaluationStatisticsErrorResponse countOralEvaluationStatisticsErrorWithOptions(shared_ptr<CountOralEvaluationStatisticsErrorRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CountOralEvaluationStatisticsErrorResponse countOralEvaluationStatisticsError(shared_ptr<CountOralEvaluationStatisticsErrorRequest> request);
  CreateAccessWarrantResponse createAccessWarrantWithOptions(shared_ptr<CreateAccessWarrantRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAccessWarrantResponse createAccessWarrant(shared_ptr<CreateAccessWarrantRequest> request);
  CreateProjectResponse createProjectWithOptions(shared_ptr<CreateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateProjectResponse createProject(shared_ptr<CreateProjectRequest> request);
  ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse executeAITeacherChineseCompositionTutoringWorkflowRunWithOptions(shared_ptr<ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteAITeacherChineseCompositionTutoringWorkflowRunResponse executeAITeacherChineseCompositionTutoringWorkflowRun(shared_ptr<ExecuteAITeacherChineseCompositionTutoringWorkflowRunRequest> request);
  ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse executeAITeacherEnglishCompositionTutoringWorkflowRunWithOptions(shared_ptr<ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteAITeacherEnglishCompositionTutoringWorkflowRunResponse executeAITeacherEnglishCompositionTutoringWorkflowRun(shared_ptr<ExecuteAITeacherEnglishCompositionTutoringWorkflowRunRequest> request);
  ExecuteAITeacherEnglishParaphraseChatMessageResponse executeAITeacherEnglishParaphraseChatMessageWithOptions(shared_ptr<ExecuteAITeacherEnglishParaphraseChatMessageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteAITeacherEnglishParaphraseChatMessageResponse executeAITeacherEnglishParaphraseChatMessage(shared_ptr<ExecuteAITeacherEnglishParaphraseChatMessageRequest> request);
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
  ExecuteHundredThousandWhysDialogueResponse executeHundredThousandWhysDialogueWithOptions(shared_ptr<ExecuteHundredThousandWhysDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteHundredThousandWhysDialogueResponse executeHundredThousandWhysDialogue(shared_ptr<ExecuteHundredThousandWhysDialogueRequest> request);
  ExecuteTextbookAssistantDialogueResponse executeTextbookAssistantDialogueWithOptions(shared_ptr<ExecuteTextbookAssistantDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteTextbookAssistantDialogueResponse executeTextbookAssistantDialogue(shared_ptr<ExecuteTextbookAssistantDialogueRequest> request);
  ExecuteTextbookAssistantDifficultyResponse executeTextbookAssistantDifficultyWithOptions(shared_ptr<ExecuteTextbookAssistantDifficultyRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteTextbookAssistantDifficultyResponse executeTextbookAssistantDifficulty(shared_ptr<ExecuteTextbookAssistantDifficultyRequest> request);
  ExecuteTextbookAssistantGrammarCheckResponse executeTextbookAssistantGrammarCheckWithOptions(shared_ptr<ExecuteTextbookAssistantGrammarCheckRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteTextbookAssistantGrammarCheckResponse executeTextbookAssistantGrammarCheck(shared_ptr<ExecuteTextbookAssistantGrammarCheckRequest> request);
  ExecuteTextbookAssistantRefineByContextResponse executeTextbookAssistantRefineByContextWithOptions(shared_ptr<ExecuteTextbookAssistantRefineByContextRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteTextbookAssistantRefineByContextResponse executeTextbookAssistantRefineByContext(shared_ptr<ExecuteTextbookAssistantRefineByContextRequest> request);
  ExecuteTextbookAssistantRetryConversationResponse executeTextbookAssistantRetryConversationWithOptions(shared_ptr<ExecuteTextbookAssistantRetryConversationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteTextbookAssistantRetryConversationResponse executeTextbookAssistantRetryConversation(shared_ptr<ExecuteTextbookAssistantRetryConversationRequest> request);
  ExecuteTextbookAssistantSseDialogueResponse executeTextbookAssistantSseDialogueWithOptions(shared_ptr<ExecuteTextbookAssistantSseDialogueRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteTextbookAssistantSseDialogueResponse executeTextbookAssistantSseDialogue(shared_ptr<ExecuteTextbookAssistantSseDialogueRequest> request);
  ExecuteTextbookAssistantStartConversationResponse executeTextbookAssistantStartConversationWithOptions(shared_ptr<ExecuteTextbookAssistantStartConversationRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteTextbookAssistantStartConversationResponse executeTextbookAssistantStartConversation(shared_ptr<ExecuteTextbookAssistantStartConversationRequest> request);
  ExecuteTextbookAssistantSuggestionResponse executeTextbookAssistantSuggestionWithOptions(shared_ptr<ExecuteTextbookAssistantSuggestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteTextbookAssistantSuggestionResponse executeTextbookAssistantSuggestion(shared_ptr<ExecuteTextbookAssistantSuggestionRequest> request);
  ExecuteTextbookAssistantTranslateResponse executeTextbookAssistantTranslateWithOptions(shared_ptr<ExecuteTextbookAssistantTranslateRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ExecuteTextbookAssistantTranslateResponse executeTextbookAssistantTranslate(shared_ptr<ExecuteTextbookAssistantTranslateRequest> request);
  GetAITeacherExpansionDialogueSuggestionResponse getAITeacherExpansionDialogueSuggestionWithOptions(shared_ptr<GetAITeacherExpansionDialogueSuggestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAITeacherExpansionDialogueSuggestionResponse getAITeacherExpansionDialogueSuggestion(shared_ptr<GetAITeacherExpansionDialogueSuggestionRequest> request);
  GetAITeacherSyncDialogueSuggestionResponse getAITeacherSyncDialogueSuggestionWithOptions(shared_ptr<GetAITeacherSyncDialogueSuggestionRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAITeacherSyncDialogueSuggestionResponse getAITeacherSyncDialogueSuggestion(shared_ptr<GetAITeacherSyncDialogueSuggestionRequest> request);
  GetTextbookAssistantTokenResponse getTextbookAssistantTokenWithOptions(shared_ptr<GetTextbookAssistantTokenRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetTextbookAssistantTokenResponse getTextbookAssistantToken(shared_ptr<GetTextbookAssistantTokenRequest> request);
  ListTextbookAssistantArticleDetailsResponse listTextbookAssistantArticleDetailsWithOptions(shared_ptr<ListTextbookAssistantArticleDetailsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextbookAssistantArticleDetailsResponse listTextbookAssistantArticleDetails(shared_ptr<ListTextbookAssistantArticleDetailsRequest> request);
  ListTextbookAssistantArticlesResponse listTextbookAssistantArticlesWithOptions(shared_ptr<ListTextbookAssistantArticlesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextbookAssistantArticlesResponse listTextbookAssistantArticles(shared_ptr<ListTextbookAssistantArticlesRequest> request);
  ListTextbookAssistantBookDirectoriesResponse listTextbookAssistantBookDirectoriesWithOptions(shared_ptr<ListTextbookAssistantBookDirectoriesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextbookAssistantBookDirectoriesResponse listTextbookAssistantBookDirectories(shared_ptr<ListTextbookAssistantBookDirectoriesRequest> request);
  ListTextbookAssistantBooksResponse listTextbookAssistantBooksWithOptions(shared_ptr<ListTextbookAssistantBooksRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextbookAssistantBooksResponse listTextbookAssistantBooks(shared_ptr<ListTextbookAssistantBooksRequest> request);
  ListTextbookAssistantGradeVolumesResponse listTextbookAssistantGradeVolumesWithOptions(shared_ptr<ListTextbookAssistantGradeVolumesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextbookAssistantGradeVolumesResponse listTextbookAssistantGradeVolumes(shared_ptr<ListTextbookAssistantGradeVolumesRequest> request);
  ListTextbookAssistantSceneDetailsResponse listTextbookAssistantSceneDetailsWithOptions(shared_ptr<ListTextbookAssistantSceneDetailsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListTextbookAssistantSceneDetailsResponse listTextbookAssistantSceneDetails(shared_ptr<ListTextbookAssistantSceneDetailsRequest> request);
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
  QueryApplicationAccessIdResponse queryApplicationAccessIdWithOptions(shared_ptr<QueryApplicationAccessIdRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryApplicationAccessIdResponse queryApplicationAccessId(shared_ptr<QueryApplicationAccessIdRequest> request);
  QueryProjectResponse queryProjectWithOptions(shared_ptr<QueryProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryProjectResponse queryProject(shared_ptr<QueryProjectRequest> request);
  QueryProjectListResponse queryProjectListWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryProjectListResponse queryProjectList();
  QueryPurchasedServiceResponse queryPurchasedServiceWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  QueryPurchasedServiceResponse queryPurchasedService();
  UpdateProjectResponse updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateProjectResponse updateProject(shared_ptr<UpdateProjectRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_AiContent20240611

#endif
