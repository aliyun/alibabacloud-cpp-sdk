// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_NLP-AUTOML20191111_H_
#define ALIBABACLOUD_NLP-AUTOML20191111_H_

#include <alibabacloud/open_api.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Nlp-automl20191111 {
class CreateAsyncPredictRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> detailTag{};
  shared_ptr<string> fetchContent{};
  shared_ptr<string> fileContent{};
  shared_ptr<string> fileType{};
  shared_ptr<string> fileUrl{};
  shared_ptr<long> modelId{};
  shared_ptr<string> modelVersion{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceVersion{};
  shared_ptr<long> topK{};

  CreateAsyncPredictRequest() {}

  explicit CreateAsyncPredictRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (detailTag) {
      res["DetailTag"] = boost::any(*detailTag);
    }
    if (fetchContent) {
      res["FetchContent"] = boost::any(*fetchContent);
    }
    if (fileContent) {
      res["FileContent"] = boost::any(*fileContent);
    }
    if (fileType) {
      res["FileType"] = boost::any(*fileType);
    }
    if (fileUrl) {
      res["FileUrl"] = boost::any(*fileUrl);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelVersion) {
      res["ModelVersion"] = boost::any(*modelVersion);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DetailTag") != m.end() && !m["DetailTag"].empty()) {
      detailTag = make_shared<string>(boost::any_cast<string>(m["DetailTag"]));
    }
    if (m.find("FetchContent") != m.end() && !m["FetchContent"].empty()) {
      fetchContent = make_shared<string>(boost::any_cast<string>(m["FetchContent"]));
    }
    if (m.find("FileContent") != m.end() && !m["FileContent"].empty()) {
      fileContent = make_shared<string>(boost::any_cast<string>(m["FileContent"]));
    }
    if (m.find("FileType") != m.end() && !m["FileType"].empty()) {
      fileType = make_shared<string>(boost::any_cast<string>(m["FileType"]));
    }
    if (m.find("FileUrl") != m.end() && !m["FileUrl"].empty()) {
      fileUrl = make_shared<string>(boost::any_cast<string>(m["FileUrl"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModelVersion") != m.end() && !m["ModelVersion"].empty()) {
      modelVersion = make_shared<string>(boost::any_cast<string>(m["ModelVersion"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
  }


  virtual ~CreateAsyncPredictRequest() = default;
};
class CreateAsyncPredictResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> asyncPredictId{};
  shared_ptr<string> requestId{};

  CreateAsyncPredictResponseBody() {}

  explicit CreateAsyncPredictResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncPredictId) {
      res["AsyncPredictId"] = boost::any(*asyncPredictId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsyncPredictId") != m.end() && !m["AsyncPredictId"].empty()) {
      asyncPredictId = make_shared<long>(boost::any_cast<long>(m["AsyncPredictId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAsyncPredictResponseBody() = default;
};
class CreateAsyncPredictResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAsyncPredictResponseBody> body{};

  CreateAsyncPredictResponse() {}

  explicit CreateAsyncPredictResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAsyncPredictResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAsyncPredictResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAsyncPredictResponse() = default;
};
class FindUserReport4AlinlpRequest : public Darabonba::Model {
public:
  shared_ptr<string> beginTime{};
  shared_ptr<long> customerUserParentId{};
  shared_ptr<string> endTime{};
  shared_ptr<string> modelType{};
  shared_ptr<string> type{};

  FindUserReport4AlinlpRequest() {}

  explicit FindUserReport4AlinlpRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (beginTime) {
      res["BeginTime"] = boost::any(*beginTime);
    }
    if (customerUserParentId) {
      res["CustomerUserParentId"] = boost::any(*customerUserParentId);
    }
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (modelType) {
      res["ModelType"] = boost::any(*modelType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BeginTime") != m.end() && !m["BeginTime"].empty()) {
      beginTime = make_shared<string>(boost::any_cast<string>(m["BeginTime"]));
    }
    if (m.find("CustomerUserParentId") != m.end() && !m["CustomerUserParentId"].empty()) {
      customerUserParentId = make_shared<long>(boost::any_cast<long>(m["CustomerUserParentId"]));
    }
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ModelType") != m.end() && !m["ModelType"].empty()) {
      modelType = make_shared<string>(boost::any_cast<string>(m["ModelType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~FindUserReport4AlinlpRequest() = default;
};
class FindUserReport4AlinlpResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> failCount{};
  shared_ptr<long> qpsMax{};
  shared_ptr<string> rptTime{};
  shared_ptr<long> successCount{};
  shared_ptr<long> totalCount{};

  FindUserReport4AlinlpResponseBodyData() {}

  explicit FindUserReport4AlinlpResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failCount) {
      res["FailCount"] = boost::any(*failCount);
    }
    if (qpsMax) {
      res["QpsMax"] = boost::any(*qpsMax);
    }
    if (rptTime) {
      res["RptTime"] = boost::any(*rptTime);
    }
    if (successCount) {
      res["SuccessCount"] = boost::any(*successCount);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailCount") != m.end() && !m["FailCount"].empty()) {
      failCount = make_shared<long>(boost::any_cast<long>(m["FailCount"]));
    }
    if (m.find("QpsMax") != m.end() && !m["QpsMax"].empty()) {
      qpsMax = make_shared<long>(boost::any_cast<long>(m["QpsMax"]));
    }
    if (m.find("RptTime") != m.end() && !m["RptTime"].empty()) {
      rptTime = make_shared<string>(boost::any_cast<string>(m["RptTime"]));
    }
    if (m.find("SuccessCount") != m.end() && !m["SuccessCount"].empty()) {
      successCount = make_shared<long>(boost::any_cast<long>(m["SuccessCount"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~FindUserReport4AlinlpResponseBodyData() = default;
};
class FindUserReport4AlinlpResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<FindUserReport4AlinlpResponseBodyData>> data{};
  shared_ptr<string> requestId{};

  FindUserReport4AlinlpResponseBody() {}

  explicit FindUserReport4AlinlpResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Data"] = boost::any(temp1);
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
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(vector<boost::any>) == m["Data"].type()) {
        vector<FindUserReport4AlinlpResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            FindUserReport4AlinlpResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<FindUserReport4AlinlpResponseBodyData>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~FindUserReport4AlinlpResponseBody() = default;
};
class FindUserReport4AlinlpResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<FindUserReport4AlinlpResponseBody> body{};

  FindUserReport4AlinlpResponse() {}

  explicit FindUserReport4AlinlpResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        FindUserReport4AlinlpResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<FindUserReport4AlinlpResponseBody>(model1);
      }
    }
  }


  virtual ~FindUserReport4AlinlpResponse() = default;
};
class GetAsyncPredictRequest : public Darabonba::Model {
public:
  shared_ptr<long> asyncPredictId{};

  GetAsyncPredictRequest() {}

  explicit GetAsyncPredictRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncPredictId) {
      res["AsyncPredictId"] = boost::any(*asyncPredictId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AsyncPredictId") != m.end() && !m["AsyncPredictId"].empty()) {
      asyncPredictId = make_shared<long>(boost::any_cast<long>(m["AsyncPredictId"]));
    }
  }


  virtual ~GetAsyncPredictRequest() = default;
};
class GetAsyncPredictResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> asyncPredictId{};
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};
  shared_ptr<long> status{};

  GetAsyncPredictResponseBody() {}

  explicit GetAsyncPredictResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (asyncPredictId) {
      res["AsyncPredictId"] = boost::any(*asyncPredictId);
    }
    if (content) {
      res["Content"] = boost::any(*content);
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
    if (m.find("AsyncPredictId") != m.end() && !m["AsyncPredictId"].empty()) {
      asyncPredictId = make_shared<long>(boost::any_cast<long>(m["AsyncPredictId"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetAsyncPredictResponseBody() = default;
};
class GetAsyncPredictResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAsyncPredictResponseBody> body{};

  GetAsyncPredictResponse() {}

  explicit GetAsyncPredictResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAsyncPredictResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAsyncPredictResponseBody>(model1);
      }
    }
  }


  virtual ~GetAsyncPredictResponse() = default;
};
class GetPredictResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> detailTag{};
  shared_ptr<long> modelId{};
  shared_ptr<string> modelVersion{};
  shared_ptr<long> topK{};

  GetPredictResultRequest() {}

  explicit GetPredictResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (detailTag) {
      res["DetailTag"] = boost::any(*detailTag);
    }
    if (modelId) {
      res["ModelId"] = boost::any(*modelId);
    }
    if (modelVersion) {
      res["ModelVersion"] = boost::any(*modelVersion);
    }
    if (topK) {
      res["TopK"] = boost::any(*topK);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("DetailTag") != m.end() && !m["DetailTag"].empty()) {
      detailTag = make_shared<string>(boost::any_cast<string>(m["DetailTag"]));
    }
    if (m.find("ModelId") != m.end() && !m["ModelId"].empty()) {
      modelId = make_shared<long>(boost::any_cast<long>(m["ModelId"]));
    }
    if (m.find("ModelVersion") != m.end() && !m["ModelVersion"].empty()) {
      modelVersion = make_shared<string>(boost::any_cast<string>(m["ModelVersion"]));
    }
    if (m.find("TopK") != m.end() && !m["TopK"].empty()) {
      topK = make_shared<long>(boost::any_cast<long>(m["TopK"]));
    }
  }


  virtual ~GetPredictResultRequest() = default;
};
class GetPredictResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};

  GetPredictResultResponseBody() {}

  explicit GetPredictResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPredictResultResponseBody() = default;
};
class GetPredictResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPredictResultResponseBody> body{};

  GetPredictResultResponse() {}

  explicit GetPredictResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPredictResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPredictResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetPredictResultResponse() = default;
};
class RunPreTrainServiceRequest : public Darabonba::Model {
public:
  shared_ptr<string> predictContent{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceVersion{};

  RunPreTrainServiceRequest() {}

  explicit RunPreTrainServiceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predictContent) {
      res["PredictContent"] = boost::any(*predictContent);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredictContent") != m.end() && !m["PredictContent"].empty()) {
      predictContent = make_shared<string>(boost::any_cast<string>(m["PredictContent"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~RunPreTrainServiceRequest() = default;
};
class RunPreTrainServiceResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> billingCount{};
  shared_ptr<string> predictResult{};
  shared_ptr<string> requestId{};

  RunPreTrainServiceResponseBody() {}

  explicit RunPreTrainServiceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCount) {
      res["BillingCount"] = boost::any(*billingCount);
    }
    if (predictResult) {
      res["PredictResult"] = boost::any(*predictResult);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCount") != m.end() && !m["BillingCount"].empty()) {
      billingCount = make_shared<long>(boost::any_cast<long>(m["BillingCount"]));
    }
    if (m.find("PredictResult") != m.end() && !m["PredictResult"].empty()) {
      predictResult = make_shared<string>(boost::any_cast<string>(m["PredictResult"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunPreTrainServiceResponseBody() = default;
};
class RunPreTrainServiceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunPreTrainServiceResponseBody> body{};

  RunPreTrainServiceResponse() {}

  explicit RunPreTrainServiceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunPreTrainServiceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunPreTrainServiceResponseBody>(model1);
      }
    }
  }


  virtual ~RunPreTrainServiceResponse() = default;
};
class RunPreTrainServiceNewRequest : public Darabonba::Model {
public:
  shared_ptr<string> predictContent{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> serviceVersion{};

  RunPreTrainServiceNewRequest() {}

  explicit RunPreTrainServiceNewRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (predictContent) {
      res["PredictContent"] = boost::any(*predictContent);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceVersion) {
      res["ServiceVersion"] = boost::any(*serviceVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PredictContent") != m.end() && !m["PredictContent"].empty()) {
      predictContent = make_shared<string>(boost::any_cast<string>(m["PredictContent"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("ServiceVersion") != m.end() && !m["ServiceVersion"].empty()) {
      serviceVersion = make_shared<string>(boost::any_cast<string>(m["ServiceVersion"]));
    }
  }


  virtual ~RunPreTrainServiceNewRequest() = default;
};
class RunPreTrainServiceNewResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> billingCount{};
  shared_ptr<string> predictResult{};
  shared_ptr<string> requestId{};

  RunPreTrainServiceNewResponseBody() {}

  explicit RunPreTrainServiceNewResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (billingCount) {
      res["BillingCount"] = boost::any(*billingCount);
    }
    if (predictResult) {
      res["PredictResult"] = boost::any(*predictResult);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BillingCount") != m.end() && !m["BillingCount"].empty()) {
      billingCount = make_shared<long>(boost::any_cast<long>(m["BillingCount"]));
    }
    if (m.find("PredictResult") != m.end() && !m["PredictResult"].empty()) {
      predictResult = make_shared<string>(boost::any_cast<string>(m["PredictResult"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~RunPreTrainServiceNewResponseBody() = default;
};
class RunPreTrainServiceNewResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RunPreTrainServiceNewResponseBody> body{};

  RunPreTrainServiceNewResponse() {}

  explicit RunPreTrainServiceNewResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RunPreTrainServiceNewResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RunPreTrainServiceNewResponseBody>(model1);
      }
    }
  }


  virtual ~RunPreTrainServiceNewResponse() = default;
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
  CreateAsyncPredictResponse createAsyncPredictWithOptions(shared_ptr<CreateAsyncPredictRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAsyncPredictResponse createAsyncPredict(shared_ptr<CreateAsyncPredictRequest> request);
  FindUserReport4AlinlpResponse findUserReport4AlinlpWithOptions(shared_ptr<FindUserReport4AlinlpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  FindUserReport4AlinlpResponse findUserReport4Alinlp(shared_ptr<FindUserReport4AlinlpRequest> request);
  GetAsyncPredictResponse getAsyncPredictWithOptions(shared_ptr<GetAsyncPredictRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAsyncPredictResponse getAsyncPredict(shared_ptr<GetAsyncPredictRequest> request);
  GetPredictResultResponse getPredictResultWithOptions(shared_ptr<GetPredictResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPredictResultResponse getPredictResult(shared_ptr<GetPredictResultRequest> request);
  RunPreTrainServiceResponse runPreTrainServiceWithOptions(shared_ptr<RunPreTrainServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunPreTrainServiceResponse runPreTrainService(shared_ptr<RunPreTrainServiceRequest> request);
  RunPreTrainServiceNewResponse runPreTrainServiceNewWithOptions(shared_ptr<RunPreTrainServiceNewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RunPreTrainServiceNewResponse runPreTrainServiceNew(shared_ptr<RunPreTrainServiceNewRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Nlp-automl20191111

#endif
