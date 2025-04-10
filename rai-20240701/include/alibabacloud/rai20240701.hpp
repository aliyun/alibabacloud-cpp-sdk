// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_RAI20240701_H_
#define ALIBABACLOUD_RAI20240701_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_RAI20240701 {
class BatchContentAsyncDetectRequestServiceParameterList : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  BatchContentAsyncDetectRequestServiceParameterList() {}

  explicit BatchContentAsyncDetectRequestServiceParameterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
  }


  virtual ~BatchContentAsyncDetectRequestServiceParameterList() = default;
};
class BatchContentAsyncDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};
  shared_ptr<vector<BatchContentAsyncDetectRequestServiceParameterList>> serviceParameterList{};

  BatchContentAsyncDetectRequest() {}

  explicit BatchContentAsyncDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceParameterList) {
      vector<boost::any> temp1;
      for(auto item1:*serviceParameterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceParameterList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("serviceParameterList") != m.end() && !m["serviceParameterList"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceParameterList"].type()) {
        vector<BatchContentAsyncDetectRequestServiceParameterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceParameterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchContentAsyncDetectRequestServiceParameterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceParameterList = make_shared<vector<BatchContentAsyncDetectRequestServiceParameterList>>(expect1);
      }
    }
  }


  virtual ~BatchContentAsyncDetectRequest() = default;
};
class BatchContentAsyncDetectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  BatchContentAsyncDetectResponseBodyData() {}

  explicit BatchContentAsyncDetectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~BatchContentAsyncDetectResponseBodyData() = default;
};
class BatchContentAsyncDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BatchContentAsyncDetectResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchContentAsyncDetectResponseBody() {}

  explicit BatchContentAsyncDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchContentAsyncDetectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchContentAsyncDetectResponseBodyData>(model1);
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


  virtual ~BatchContentAsyncDetectResponseBody() = default;
};
class BatchContentAsyncDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchContentAsyncDetectResponseBody> body{};

  BatchContentAsyncDetectResponse() {}

  explicit BatchContentAsyncDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchContentAsyncDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchContentAsyncDetectResponseBody>(model1);
      }
    }
  }


  virtual ~BatchContentAsyncDetectResponse() = default;
};
class BatchContentSyncDetectRequestServiceParameterList : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  BatchContentSyncDetectRequestServiceParameterList() {}

  explicit BatchContentSyncDetectRequestServiceParameterList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
  }


  virtual ~BatchContentSyncDetectRequestServiceParameterList() = default;
};
class BatchContentSyncDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};
  shared_ptr<vector<BatchContentSyncDetectRequestServiceParameterList>> serviceParameterList{};

  BatchContentSyncDetectRequest() {}

  explicit BatchContentSyncDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceParameterList) {
      vector<boost::any> temp1;
      for(auto item1:*serviceParameterList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["serviceParameterList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("serviceParameterList") != m.end() && !m["serviceParameterList"].empty()) {
      if (typeid(vector<boost::any>) == m["serviceParameterList"].type()) {
        vector<BatchContentSyncDetectRequestServiceParameterList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["serviceParameterList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchContentSyncDetectRequestServiceParameterList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        serviceParameterList = make_shared<vector<BatchContentSyncDetectRequestServiceParameterList>>(expect1);
      }
    }
  }


  virtual ~BatchContentSyncDetectRequest() = default;
};
class BatchContentSyncDetectResponseBodyDataDetectResultList : public Darabonba::Model {
public:
  shared_ptr<string> riskInfo{};
  shared_ptr<long> riskResult{};

  BatchContentSyncDetectResponseBodyDataDetectResultList() {}

  explicit BatchContentSyncDetectResponseBodyDataDetectResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskInfo) {
      res["RiskInfo"] = boost::any(*riskInfo);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskInfo") != m.end() && !m["RiskInfo"].empty()) {
      riskInfo = make_shared<string>(boost::any_cast<string>(m["RiskInfo"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~BatchContentSyncDetectResponseBodyDataDetectResultList() = default;
};
class BatchContentSyncDetectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<BatchContentSyncDetectResponseBodyDataDetectResultList>> detectResultList{};

  BatchContentSyncDetectResponseBodyData() {}

  explicit BatchContentSyncDetectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detectResultList) {
      vector<boost::any> temp1;
      for(auto item1:*detectResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetectResultList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetectResultList") != m.end() && !m["DetectResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["DetectResultList"].type()) {
        vector<BatchContentSyncDetectResponseBodyDataDetectResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetectResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            BatchContentSyncDetectResponseBodyDataDetectResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detectResultList = make_shared<vector<BatchContentSyncDetectResponseBodyDataDetectResultList>>(expect1);
      }
    }
  }


  virtual ~BatchContentSyncDetectResponseBodyData() = default;
};
class BatchContentSyncDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<BatchContentSyncDetectResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  BatchContentSyncDetectResponseBody() {}

  explicit BatchContentSyncDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchContentSyncDetectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<BatchContentSyncDetectResponseBodyData>(model1);
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


  virtual ~BatchContentSyncDetectResponseBody() = default;
};
class BatchContentSyncDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<BatchContentSyncDetectResponseBody> body{};

  BatchContentSyncDetectResponse() {}

  explicit BatchContentSyncDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        BatchContentSyncDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<BatchContentSyncDetectResponseBody>(model1);
      }
    }
  }


  virtual ~BatchContentSyncDetectResponse() = default;
};
class CheckAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};

  CheckAccountRequest() {}

  explicit CheckAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CheckAccountRequest() = default;
};
class CheckAccountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> checkResult{};

  CheckAccountResponseBodyData() {}

  explicit CheckAccountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (checkResult) {
      res["CheckResult"] = boost::any(*checkResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CheckResult") != m.end() && !m["CheckResult"].empty()) {
      checkResult = make_shared<long>(boost::any_cast<long>(m["CheckResult"]));
    }
  }


  virtual ~CheckAccountResponseBodyData() = default;
};
class CheckAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<CheckAccountResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  CheckAccountResponseBody() {}

  explicit CheckAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckAccountResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CheckAccountResponseBodyData>(model1);
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


  virtual ~CheckAccountResponseBody() = default;
};
class CheckAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CheckAccountResponseBody> body{};

  CheckAccountResponse() {}

  explicit CheckAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CheckAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CheckAccountResponseBody>(model1);
      }
    }
  }


  virtual ~CheckAccountResponse() = default;
};
class ContentAsyncDetectRequestServiceParameter : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  ContentAsyncDetectRequestServiceParameter() {}

  explicit ContentAsyncDetectRequestServiceParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
  }


  virtual ~ContentAsyncDetectRequestServiceParameter() = default;
};
class ContentAsyncDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};
  shared_ptr<ContentAsyncDetectRequestServiceParameter> serviceParameter{};

  ContentAsyncDetectRequest() {}

  explicit ContentAsyncDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceParameter) {
      res["serviceParameter"] = serviceParameter ? boost::any(serviceParameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("serviceParameter") != m.end() && !m["serviceParameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceParameter"].type()) {
        ContentAsyncDetectRequestServiceParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceParameter"]));
        serviceParameter = make_shared<ContentAsyncDetectRequestServiceParameter>(model1);
      }
    }
  }


  virtual ~ContentAsyncDetectRequest() = default;
};
class ContentAsyncDetectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  ContentAsyncDetectResponseBodyData() {}

  explicit ContentAsyncDetectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ContentAsyncDetectResponseBodyData() = default;
};
class ContentAsyncDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ContentAsyncDetectResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ContentAsyncDetectResponseBody() {}

  explicit ContentAsyncDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContentAsyncDetectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ContentAsyncDetectResponseBodyData>(model1);
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


  virtual ~ContentAsyncDetectResponseBody() = default;
};
class ContentAsyncDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContentAsyncDetectResponseBody> body{};

  ContentAsyncDetectResponse() {}

  explicit ContentAsyncDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContentAsyncDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContentAsyncDetectResponseBody>(model1);
      }
    }
  }


  virtual ~ContentAsyncDetectResponse() = default;
};
class ContentSyncDetectRequestServiceParameter : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  ContentSyncDetectRequestServiceParameter() {}

  explicit ContentSyncDetectRequestServiceParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("content") != m.end() && !m["content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["content"]));
    }
  }


  virtual ~ContentSyncDetectRequestServiceParameter() = default;
};
class ContentSyncDetectRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};
  shared_ptr<ContentSyncDetectRequestServiceParameter> serviceParameter{};

  ContentSyncDetectRequest() {}

  explicit ContentSyncDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    if (serviceParameter) {
      res["serviceParameter"] = serviceParameter ? boost::any(serviceParameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
    if (m.find("serviceParameter") != m.end() && !m["serviceParameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["serviceParameter"].type()) {
        ContentSyncDetectRequestServiceParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["serviceParameter"]));
        serviceParameter = make_shared<ContentSyncDetectRequestServiceParameter>(model1);
      }
    }
  }


  virtual ~ContentSyncDetectRequest() = default;
};
class ContentSyncDetectResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> riskInfo{};
  shared_ptr<long> riskResult{};

  ContentSyncDetectResponseBodyData() {}

  explicit ContentSyncDetectResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskInfo) {
      res["RiskInfo"] = boost::any(*riskInfo);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskInfo") != m.end() && !m["RiskInfo"].empty()) {
      riskInfo = make_shared<string>(boost::any_cast<string>(m["RiskInfo"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~ContentSyncDetectResponseBodyData() = default;
};
class ContentSyncDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ContentSyncDetectResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ContentSyncDetectResponseBody() {}

  explicit ContentSyncDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContentSyncDetectResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ContentSyncDetectResponseBodyData>(model1);
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


  virtual ~ContentSyncDetectResponseBody() = default;
};
class ContentSyncDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ContentSyncDetectResponseBody> body{};

  ContentSyncDetectResponse() {}

  explicit ContentSyncDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ContentSyncDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ContentSyncDetectResponseBody>(model1);
      }
    }
  }


  virtual ~ContentSyncDetectResponse() = default;
};
class GetContentDetectResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> taskId{};

  GetContentDetectResultRequest() {}

  explicit GetContentDetectResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetContentDetectResultRequest() = default;
};
class GetContentDetectResultResponseBodyDataDetectResultList : public Darabonba::Model {
public:
  shared_ptr<string> riskInfo{};
  shared_ptr<long> riskResult{};
  shared_ptr<long> status{};

  GetContentDetectResultResponseBodyDataDetectResultList() {}

  explicit GetContentDetectResultResponseBodyDataDetectResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskInfo) {
      res["RiskInfo"] = boost::any(*riskInfo);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskInfo") != m.end() && !m["RiskInfo"].empty()) {
      riskInfo = make_shared<string>(boost::any_cast<string>(m["RiskInfo"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
  }


  virtual ~GetContentDetectResultResponseBodyDataDetectResultList() = default;
};
class GetContentDetectResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetContentDetectResultResponseBodyDataDetectResultList>> detectResultList{};
  shared_ptr<long> processedCount{};
  shared_ptr<string> taskId{};
  shared_ptr<long> taskStatus{};
  shared_ptr<long> totalCount{};

  GetContentDetectResultResponseBodyData() {}

  explicit GetContentDetectResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (detectResultList) {
      vector<boost::any> temp1;
      for(auto item1:*detectResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetectResultList"] = boost::any(temp1);
    }
    if (processedCount) {
      res["ProcessedCount"] = boost::any(*processedCount);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("DetectResultList") != m.end() && !m["DetectResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["DetectResultList"].type()) {
        vector<GetContentDetectResultResponseBodyDataDetectResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetectResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetContentDetectResultResponseBodyDataDetectResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detectResultList = make_shared<vector<GetContentDetectResultResponseBodyDataDetectResultList>>(expect1);
      }
    }
    if (m.find("ProcessedCount") != m.end() && !m["ProcessedCount"].empty()) {
      processedCount = make_shared<long>(boost::any_cast<long>(m["ProcessedCount"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetContentDetectResultResponseBodyData() = default;
};
class GetContentDetectResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetContentDetectResultResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetContentDetectResultResponseBody() {}

  explicit GetContentDetectResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetContentDetectResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<GetContentDetectResultResponseBodyData>(model1);
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


  virtual ~GetContentDetectResultResponseBody() = default;
};
class GetContentDetectResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetContentDetectResultResponseBody> body{};

  GetContentDetectResultResponse() {}

  explicit GetContentDetectResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetContentDetectResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetContentDetectResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetContentDetectResultResponse() = default;
};
class GetModelInputContentDetectResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> taskId{};

  GetModelInputContentDetectResultRequest() {}

  explicit GetModelInputContentDetectResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetModelInputContentDetectResultRequest() = default;
};
class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList : public Darabonba::Model {
public:
  shared_ptr<string> word{};
  shared_ptr<string> wordLabel{};

  GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() {}

  explicit GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (word) {
      res["Word"] = boost::any(*word);
    }
    if (wordLabel) {
      res["WordLabel"] = boost::any(*wordLabel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
    if (m.find("WordLabel") != m.end() && !m["WordLabel"].empty()) {
      wordLabel = make_shared<string>(boost::any_cast<string>(m["WordLabel"]));
    }
  }


  virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() = default;
};
class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>> blockWordList{};
  shared_ptr<string> groupName{};

  GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList() {}

  explicit GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWordList) {
      vector<boost::any> temp1;
      for(auto item1:*blockWordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockWordList"] = boost::any(temp1);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWordList") != m.end() && !m["BlockWordList"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockWordList"].type()) {
        vector<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockWordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockWordList = make_shared<vector<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>>(expect1);
      }
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList() = default;
};
class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord : public Darabonba::Model {
public:
  shared_ptr<vector<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>> blockWordGroupInfoList{};
  shared_ptr<long> riskResult{};

  GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord() {}

  explicit GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWordGroupInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*blockWordGroupInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockWordGroupInfoList"] = boost::any(temp1);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWordGroupInfoList") != m.end() && !m["BlockWordGroupInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockWordGroupInfoList"].type()) {
        vector<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockWordGroupInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockWordGroupInfoList = make_shared<vector<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>>(expect1);
      }
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord() = default;
};
class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList : public Darabonba::Model {
public:
  shared_ptr<string> categoryLabel{};
  shared_ptr<long> categoryType{};
  shared_ptr<long> riskResult{};
  shared_ptr<long> securityLevel{};

  GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList() {}

  explicit GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryLabel) {
      res["CategoryLabel"] = boost::any(*categoryLabel);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryLabel") != m.end() && !m["CategoryLabel"].empty()) {
      categoryLabel = make_shared<string>(boost::any_cast<string>(m["CategoryLabel"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["CategoryType"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<long>(boost::any_cast<long>(m["SecurityLevel"]));
    }
  }


  virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList() = default;
};
class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories : public Darabonba::Model {
public:
  shared_ptr<double> confidenceScore{};
  shared_ptr<vector<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>> harmfulCategoryInfoList{};
  shared_ptr<long> riskResult{};

  GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories() {}

  explicit GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidenceScore) {
      res["ConfidenceScore"] = boost::any(*confidenceScore);
    }
    if (harmfulCategoryInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*harmfulCategoryInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HarmfulCategoryInfoList"] = boost::any(temp1);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfidenceScore") != m.end() && !m["ConfidenceScore"].empty()) {
      confidenceScore = make_shared<double>(boost::any_cast<double>(m["ConfidenceScore"]));
    }
    if (m.find("HarmfulCategoryInfoList") != m.end() && !m["HarmfulCategoryInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["HarmfulCategoryInfoList"].type()) {
        vector<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HarmfulCategoryInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        harmfulCategoryInfoList = make_shared<vector<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>>(expect1);
      }
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories() = default;
};
class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack : public Darabonba::Model {
public:
  shared_ptr<string> promptAttackInfo{};
  shared_ptr<long> riskResult{};
  shared_ptr<long> securityLevel{};

  GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack() {}

  explicit GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promptAttackInfo) {
      res["PromptAttackInfo"] = boost::any(*promptAttackInfo);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromptAttackInfo") != m.end() && !m["PromptAttackInfo"].empty()) {
      promptAttackInfo = make_shared<string>(boost::any_cast<string>(m["PromptAttackInfo"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<long>(boost::any_cast<long>(m["SecurityLevel"]));
    }
  }


  virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack() = default;
};
class GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo : public Darabonba::Model {
public:
  shared_ptr<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord> blockWord{};
  shared_ptr<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories> harmfulCategories{};
  shared_ptr<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack> promptAttack{};

  GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo() {}

  explicit GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWord) {
      res["BlockWord"] = blockWord ? boost::any(blockWord->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (harmfulCategories) {
      res["HarmfulCategories"] = harmfulCategories ? boost::any(harmfulCategories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promptAttack) {
      res["PromptAttack"] = promptAttack ? boost::any(promptAttack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWord") != m.end() && !m["BlockWord"].empty()) {
      if (typeid(map<string, boost::any>) == m["BlockWord"].type()) {
        GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BlockWord"]));
        blockWord = make_shared<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord>(model1);
      }
    }
    if (m.find("HarmfulCategories") != m.end() && !m["HarmfulCategories"].empty()) {
      if (typeid(map<string, boost::any>) == m["HarmfulCategories"].type()) {
        GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HarmfulCategories"]));
        harmfulCategories = make_shared<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories>(model1);
      }
    }
    if (m.find("PromptAttack") != m.end() && !m["PromptAttack"].empty()) {
      if (typeid(map<string, boost::any>) == m["PromptAttack"].type()) {
        GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PromptAttack"]));
        promptAttack = make_shared<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack>(model1);
      }
    }
  }


  virtual ~GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo() = default;
};
class GetModelInputContentDetectResultResponseBodyDetectResultList : public Darabonba::Model {
public:
  shared_ptr<long> riskResult{};
  shared_ptr<long> status{};
  shared_ptr<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo> traceInfo{};

  GetModelInputContentDetectResultResponseBodyDetectResultList() {}

  explicit GetModelInputContentDetectResultResponseBodyDetectResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (traceInfo) {
      res["TraceInfo"] = traceInfo ? boost::any(traceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TraceInfo") != m.end() && !m["TraceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TraceInfo"].type()) {
        GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TraceInfo"]));
        traceInfo = make_shared<GetModelInputContentDetectResultResponseBodyDetectResultListTraceInfo>(model1);
      }
    }
  }


  virtual ~GetModelInputContentDetectResultResponseBodyDetectResultList() = default;
};
class GetModelInputContentDetectResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetModelInputContentDetectResultResponseBodyDetectResultList>> detectResultList{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<long> processedCount{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};
  shared_ptr<long> taskStatus{};
  shared_ptr<long> totalCount{};

  GetModelInputContentDetectResultResponseBody() {}

  explicit GetModelInputContentDetectResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (detectResultList) {
      vector<boost::any> temp1;
      for(auto item1:*detectResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetectResultList"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (processedCount) {
      res["ProcessedCount"] = boost::any(*processedCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
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
    if (m.find("DetectResultList") != m.end() && !m["DetectResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["DetectResultList"].type()) {
        vector<GetModelInputContentDetectResultResponseBodyDetectResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetectResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelInputContentDetectResultResponseBodyDetectResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detectResultList = make_shared<vector<GetModelInputContentDetectResultResponseBodyDetectResultList>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ProcessedCount") != m.end() && !m["ProcessedCount"].empty()) {
      processedCount = make_shared<long>(boost::any_cast<long>(m["ProcessedCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetModelInputContentDetectResultResponseBody() = default;
};
class GetModelInputContentDetectResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelInputContentDetectResultResponseBody> body{};

  GetModelInputContentDetectResultResponse() {}

  explicit GetModelInputContentDetectResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModelInputContentDetectResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelInputContentDetectResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelInputContentDetectResultResponse() = default;
};
class GetModelOutputContentDetectResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> taskId{};

  GetModelOutputContentDetectResultRequest() {}

  explicit GetModelOutputContentDetectResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~GetModelOutputContentDetectResultRequest() = default;
};
class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList : public Darabonba::Model {
public:
  shared_ptr<string> word{};
  shared_ptr<string> wordLabel{};

  GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() {}

  explicit GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (word) {
      res["Word"] = boost::any(*word);
    }
    if (wordLabel) {
      res["WordLabel"] = boost::any(*wordLabel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
    if (m.find("WordLabel") != m.end() && !m["WordLabel"].empty()) {
      wordLabel = make_shared<string>(boost::any_cast<string>(m["WordLabel"]));
    }
  }


  virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() = default;
};
class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>> blockWordList{};
  shared_ptr<string> groupName{};

  GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList() {}

  explicit GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWordList) {
      vector<boost::any> temp1;
      for(auto item1:*blockWordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockWordList"] = boost::any(temp1);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWordList") != m.end() && !m["BlockWordList"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockWordList"].type()) {
        vector<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockWordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockWordList = make_shared<vector<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>>(expect1);
      }
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList() = default;
};
class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord : public Darabonba::Model {
public:
  shared_ptr<vector<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>> blockWordGroupInfoList{};
  shared_ptr<long> riskResult{};

  GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord() {}

  explicit GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWordGroupInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*blockWordGroupInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockWordGroupInfoList"] = boost::any(temp1);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWordGroupInfoList") != m.end() && !m["BlockWordGroupInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockWordGroupInfoList"].type()) {
        vector<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockWordGroupInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockWordGroupInfoList = make_shared<vector<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWordBlockWordGroupInfoList>>(expect1);
      }
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord() = default;
};
class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList : public Darabonba::Model {
public:
  shared_ptr<string> categoryLabel{};
  shared_ptr<long> categoryType{};
  shared_ptr<long> riskResult{};
  shared_ptr<long> securityLevel{};

  GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList() {}

  explicit GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryLabel) {
      res["CategoryLabel"] = boost::any(*categoryLabel);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryLabel") != m.end() && !m["CategoryLabel"].empty()) {
      categoryLabel = make_shared<string>(boost::any_cast<string>(m["CategoryLabel"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["CategoryType"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<long>(boost::any_cast<long>(m["SecurityLevel"]));
    }
  }


  virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList() = default;
};
class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories : public Darabonba::Model {
public:
  shared_ptr<double> confidenceScore{};
  shared_ptr<vector<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>> harmfulCategoryInfoList{};
  shared_ptr<long> riskResult{};

  GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories() {}

  explicit GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidenceScore) {
      res["ConfidenceScore"] = boost::any(*confidenceScore);
    }
    if (harmfulCategoryInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*harmfulCategoryInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HarmfulCategoryInfoList"] = boost::any(temp1);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfidenceScore") != m.end() && !m["ConfidenceScore"].empty()) {
      confidenceScore = make_shared<double>(boost::any_cast<double>(m["ConfidenceScore"]));
    }
    if (m.find("HarmfulCategoryInfoList") != m.end() && !m["HarmfulCategoryInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["HarmfulCategoryInfoList"].type()) {
        vector<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HarmfulCategoryInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        harmfulCategoryInfoList = make_shared<vector<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>>(expect1);
      }
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories() = default;
};
class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack : public Darabonba::Model {
public:
  shared_ptr<string> promptAttackInfo{};
  shared_ptr<long> riskResult{};
  shared_ptr<long> securityLevel{};

  GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack() {}

  explicit GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promptAttackInfo) {
      res["PromptAttackInfo"] = boost::any(*promptAttackInfo);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromptAttackInfo") != m.end() && !m["PromptAttackInfo"].empty()) {
      promptAttackInfo = make_shared<string>(boost::any_cast<string>(m["PromptAttackInfo"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<long>(boost::any_cast<long>(m["SecurityLevel"]));
    }
  }


  virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack() = default;
};
class GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo : public Darabonba::Model {
public:
  shared_ptr<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord> blockWord{};
  shared_ptr<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories> harmfulCategories{};
  shared_ptr<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack> promptAttack{};

  GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo() {}

  explicit GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWord) {
      res["BlockWord"] = blockWord ? boost::any(blockWord->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (harmfulCategories) {
      res["HarmfulCategories"] = harmfulCategories ? boost::any(harmfulCategories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promptAttack) {
      res["PromptAttack"] = promptAttack ? boost::any(promptAttack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWord") != m.end() && !m["BlockWord"].empty()) {
      if (typeid(map<string, boost::any>) == m["BlockWord"].type()) {
        GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BlockWord"]));
        blockWord = make_shared<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoBlockWord>(model1);
      }
    }
    if (m.find("HarmfulCategories") != m.end() && !m["HarmfulCategories"].empty()) {
      if (typeid(map<string, boost::any>) == m["HarmfulCategories"].type()) {
        GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HarmfulCategories"]));
        harmfulCategories = make_shared<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoHarmfulCategories>(model1);
      }
    }
    if (m.find("PromptAttack") != m.end() && !m["PromptAttack"].empty()) {
      if (typeid(map<string, boost::any>) == m["PromptAttack"].type()) {
        GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PromptAttack"]));
        promptAttack = make_shared<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfoPromptAttack>(model1);
      }
    }
  }


  virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo() = default;
};
class GetModelOutputContentDetectResultResponseBodyDetectResultList : public Darabonba::Model {
public:
  shared_ptr<long> riskResult{};
  shared_ptr<long> status{};
  shared_ptr<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo> traceInfo{};

  GetModelOutputContentDetectResultResponseBodyDetectResultList() {}

  explicit GetModelOutputContentDetectResultResponseBodyDetectResultList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (traceInfo) {
      res["TraceInfo"] = traceInfo ? boost::any(traceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("TraceInfo") != m.end() && !m["TraceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TraceInfo"].type()) {
        GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TraceInfo"]));
        traceInfo = make_shared<GetModelOutputContentDetectResultResponseBodyDetectResultListTraceInfo>(model1);
      }
    }
  }


  virtual ~GetModelOutputContentDetectResultResponseBodyDetectResultList() = default;
};
class GetModelOutputContentDetectResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetModelOutputContentDetectResultResponseBodyDetectResultList>> detectResultList{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<long> processedCount{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};
  shared_ptr<long> taskStatus{};
  shared_ptr<long> totalCount{};

  GetModelOutputContentDetectResultResponseBody() {}

  explicit GetModelOutputContentDetectResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
    }
    if (detectResultList) {
      vector<boost::any> temp1;
      for(auto item1:*detectResultList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["DetectResultList"] = boost::any(temp1);
    }
    if (httpStatusCode) {
      res["HttpStatusCode"] = boost::any(*httpStatusCode);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (processedCount) {
      res["ProcessedCount"] = boost::any(*processedCount);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    if (taskStatus) {
      res["TaskStatus"] = boost::any(*taskStatus);
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
    if (m.find("DetectResultList") != m.end() && !m["DetectResultList"].empty()) {
      if (typeid(vector<boost::any>) == m["DetectResultList"].type()) {
        vector<GetModelOutputContentDetectResultResponseBodyDetectResultList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["DetectResultList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetModelOutputContentDetectResultResponseBodyDetectResultList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        detectResultList = make_shared<vector<GetModelOutputContentDetectResultResponseBodyDetectResultList>>(expect1);
      }
    }
    if (m.find("HttpStatusCode") != m.end() && !m["HttpStatusCode"].empty()) {
      httpStatusCode = make_shared<long>(boost::any_cast<long>(m["HttpStatusCode"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("ProcessedCount") != m.end() && !m["ProcessedCount"].empty()) {
      processedCount = make_shared<long>(boost::any_cast<long>(m["ProcessedCount"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
    if (m.find("TaskStatus") != m.end() && !m["TaskStatus"].empty()) {
      taskStatus = make_shared<long>(boost::any_cast<long>(m["TaskStatus"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~GetModelOutputContentDetectResultResponseBody() = default;
};
class GetModelOutputContentDetectResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetModelOutputContentDetectResultResponseBody> body{};

  GetModelOutputContentDetectResultResponse() {}

  explicit GetModelOutputContentDetectResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetModelOutputContentDetectResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetModelOutputContentDetectResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetModelOutputContentDetectResultResponse() = default;
};
class ListSensitiveWordRequest : public Darabonba::Model {
public:
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> regionId{};

  ListSensitiveWordRequest() {}

  explicit ListSensitiveWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListSensitiveWordRequest() = default;
};
class ListSensitiveWordResponseBodyDataSensitiveWordList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> label{};
  shared_ptr<string> word{};

  ListSensitiveWordResponseBodyDataSensitiveWordList() {}

  explicit ListSensitiveWordResponseBodyDataSensitiveWordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~ListSensitiveWordResponseBodyDataSensitiveWordList() = default;
};
class ListSensitiveWordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> maxCount{};
  shared_ptr<long> pageNumber{};
  shared_ptr<long> pageSize{};
  shared_ptr<vector<ListSensitiveWordResponseBodyDataSensitiveWordList>> sensitiveWordList{};
  shared_ptr<long> totalCount{};

  ListSensitiveWordResponseBodyData() {}

  explicit ListSensitiveWordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxCount) {
      res["MaxCount"] = boost::any(*maxCount);
    }
    if (pageNumber) {
      res["PageNumber"] = boost::any(*pageNumber);
    }
    if (pageSize) {
      res["PageSize"] = boost::any(*pageSize);
    }
    if (sensitiveWordList) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveWordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveWordList"] = boost::any(temp1);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxCount") != m.end() && !m["MaxCount"].empty()) {
      maxCount = make_shared<long>(boost::any_cast<long>(m["MaxCount"]));
    }
    if (m.find("PageNumber") != m.end() && !m["PageNumber"].empty()) {
      pageNumber = make_shared<long>(boost::any_cast<long>(m["PageNumber"]));
    }
    if (m.find("PageSize") != m.end() && !m["PageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["PageSize"]));
    }
    if (m.find("SensitiveWordList") != m.end() && !m["SensitiveWordList"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveWordList"].type()) {
        vector<ListSensitiveWordResponseBodyDataSensitiveWordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveWordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListSensitiveWordResponseBodyDataSensitiveWordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveWordList = make_shared<vector<ListSensitiveWordResponseBodyDataSensitiveWordList>>(expect1);
      }
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListSensitiveWordResponseBodyData() = default;
};
class ListSensitiveWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListSensitiveWordResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  ListSensitiveWordResponseBody() {}

  explicit ListSensitiveWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSensitiveWordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<ListSensitiveWordResponseBodyData>(model1);
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


  virtual ~ListSensitiveWordResponseBody() = default;
};
class ListSensitiveWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListSensitiveWordResponseBody> body{};

  ListSensitiveWordResponse() {}

  explicit ListSensitiveWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListSensitiveWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListSensitiveWordResponseBody>(model1);
      }
    }
  }


  virtual ~ListSensitiveWordResponse() = default;
};
class ModelInputContentAsyncDetectRequestBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  ModelInputContentAsyncDetectRequestBodyData() {}

  explicit ModelInputContentAsyncDetectRequestBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~ModelInputContentAsyncDetectRequestBodyData() = default;
};
class ModelInputContentAsyncDetectRequest : public Darabonba::Model {
public:
  shared_ptr<ModelInputContentAsyncDetectRequestBodyData> bodyData{};
  shared_ptr<string> policyIdentifier{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};

  ModelInputContentAsyncDetectRequest() {}

  explicit ModelInputContentAsyncDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyData) {
      res["BodyData"] = bodyData ? boost::any(bodyData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyIdentifier) {
      res["PolicyIdentifier"] = boost::any(*policyIdentifier);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      if (typeid(map<string, boost::any>) == m["BodyData"].type()) {
        ModelInputContentAsyncDetectRequestBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BodyData"]));
        bodyData = make_shared<ModelInputContentAsyncDetectRequestBodyData>(model1);
      }
    }
    if (m.find("PolicyIdentifier") != m.end() && !m["PolicyIdentifier"].empty()) {
      policyIdentifier = make_shared<string>(boost::any_cast<string>(m["PolicyIdentifier"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ModelInputContentAsyncDetectRequest() = default;
};
class ModelInputContentAsyncDetectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyDataShrink{};
  shared_ptr<string> policyIdentifier{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};

  ModelInputContentAsyncDetectShrinkRequest() {}

  explicit ModelInputContentAsyncDetectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyDataShrink) {
      res["BodyData"] = boost::any(*bodyDataShrink);
    }
    if (policyIdentifier) {
      res["PolicyIdentifier"] = boost::any(*policyIdentifier);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      bodyDataShrink = make_shared<string>(boost::any_cast<string>(m["BodyData"]));
    }
    if (m.find("PolicyIdentifier") != m.end() && !m["PolicyIdentifier"].empty()) {
      policyIdentifier = make_shared<string>(boost::any_cast<string>(m["PolicyIdentifier"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ModelInputContentAsyncDetectShrinkRequest() = default;
};
class ModelInputContentAsyncDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ModelInputContentAsyncDetectResponseBody() {}

  explicit ModelInputContentAsyncDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ModelInputContentAsyncDetectResponseBody() = default;
};
class ModelInputContentAsyncDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModelInputContentAsyncDetectResponseBody> body{};

  ModelInputContentAsyncDetectResponse() {}

  explicit ModelInputContentAsyncDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModelInputContentAsyncDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModelInputContentAsyncDetectResponseBody>(model1);
      }
    }
  }


  virtual ~ModelInputContentAsyncDetectResponse() = default;
};
class ModelInputContentSyncDetectRequestBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  ModelInputContentSyncDetectRequestBodyData() {}

  explicit ModelInputContentSyncDetectRequestBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~ModelInputContentSyncDetectRequestBodyData() = default;
};
class ModelInputContentSyncDetectRequest : public Darabonba::Model {
public:
  shared_ptr<ModelInputContentSyncDetectRequestBodyData> bodyData{};
  shared_ptr<string> policyIdentifier{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};

  ModelInputContentSyncDetectRequest() {}

  explicit ModelInputContentSyncDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyData) {
      res["BodyData"] = bodyData ? boost::any(bodyData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyIdentifier) {
      res["PolicyIdentifier"] = boost::any(*policyIdentifier);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      if (typeid(map<string, boost::any>) == m["BodyData"].type()) {
        ModelInputContentSyncDetectRequestBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BodyData"]));
        bodyData = make_shared<ModelInputContentSyncDetectRequestBodyData>(model1);
      }
    }
    if (m.find("PolicyIdentifier") != m.end() && !m["PolicyIdentifier"].empty()) {
      policyIdentifier = make_shared<string>(boost::any_cast<string>(m["PolicyIdentifier"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ModelInputContentSyncDetectRequest() = default;
};
class ModelInputContentSyncDetectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyDataShrink{};
  shared_ptr<string> policyIdentifier{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};

  ModelInputContentSyncDetectShrinkRequest() {}

  explicit ModelInputContentSyncDetectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyDataShrink) {
      res["BodyData"] = boost::any(*bodyDataShrink);
    }
    if (policyIdentifier) {
      res["PolicyIdentifier"] = boost::any(*policyIdentifier);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      bodyDataShrink = make_shared<string>(boost::any_cast<string>(m["BodyData"]));
    }
    if (m.find("PolicyIdentifier") != m.end() && !m["PolicyIdentifier"].empty()) {
      policyIdentifier = make_shared<string>(boost::any_cast<string>(m["PolicyIdentifier"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ModelInputContentSyncDetectShrinkRequest() = default;
};
class ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList : public Darabonba::Model {
public:
  shared_ptr<string> word{};
  shared_ptr<string> wordLabel{};

  ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() {}

  explicit ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (word) {
      res["Word"] = boost::any(*word);
    }
    if (wordLabel) {
      res["WordLabel"] = boost::any(*wordLabel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
    if (m.find("WordLabel") != m.end() && !m["WordLabel"].empty()) {
      wordLabel = make_shared<string>(boost::any_cast<string>(m["WordLabel"]));
    }
  }


  virtual ~ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() = default;
};
class ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>> blockWordList{};
  shared_ptr<string> groupName{};

  ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList() {}

  explicit ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWordList) {
      vector<boost::any> temp1;
      for(auto item1:*blockWordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockWordList"] = boost::any(temp1);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWordList") != m.end() && !m["BlockWordList"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockWordList"].type()) {
        vector<ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockWordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockWordList = make_shared<vector<ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>>(expect1);
      }
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList() = default;
};
class ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord : public Darabonba::Model {
public:
  shared_ptr<vector<ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>> blockWordGroupInfoList{};
  shared_ptr<long> riskResult{};

  ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord() {}

  explicit ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWordGroupInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*blockWordGroupInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockWordGroupInfoList"] = boost::any(temp1);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWordGroupInfoList") != m.end() && !m["BlockWordGroupInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockWordGroupInfoList"].type()) {
        vector<ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockWordGroupInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockWordGroupInfoList = make_shared<vector<ModelInputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>>(expect1);
      }
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord() = default;
};
class ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList : public Darabonba::Model {
public:
  shared_ptr<string> categoryLabel{};
  shared_ptr<long> categoryType{};
  shared_ptr<long> riskResult{};
  shared_ptr<long> securityLevel{};

  ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList() {}

  explicit ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryLabel) {
      res["CategoryLabel"] = boost::any(*categoryLabel);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryLabel") != m.end() && !m["CategoryLabel"].empty()) {
      categoryLabel = make_shared<string>(boost::any_cast<string>(m["CategoryLabel"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["CategoryType"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<long>(boost::any_cast<long>(m["SecurityLevel"]));
    }
  }


  virtual ~ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList() = default;
};
class ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories : public Darabonba::Model {
public:
  shared_ptr<double> confidenceScore{};
  shared_ptr<vector<ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>> harmfulCategoryInfoList{};
  shared_ptr<long> riskResult{};

  ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories() {}

  explicit ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidenceScore) {
      res["ConfidenceScore"] = boost::any(*confidenceScore);
    }
    if (harmfulCategoryInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*harmfulCategoryInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HarmfulCategoryInfoList"] = boost::any(temp1);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfidenceScore") != m.end() && !m["ConfidenceScore"].empty()) {
      confidenceScore = make_shared<double>(boost::any_cast<double>(m["ConfidenceScore"]));
    }
    if (m.find("HarmfulCategoryInfoList") != m.end() && !m["HarmfulCategoryInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["HarmfulCategoryInfoList"].type()) {
        vector<ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HarmfulCategoryInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        harmfulCategoryInfoList = make_shared<vector<ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>>(expect1);
      }
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories() = default;
};
class ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack : public Darabonba::Model {
public:
  shared_ptr<double> confidenceScore{};
  shared_ptr<string> promptAttackInfo{};
  shared_ptr<long> riskResult{};
  shared_ptr<long> securityLevel{};

  ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack() {}

  explicit ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidenceScore) {
      res["ConfidenceScore"] = boost::any(*confidenceScore);
    }
    if (promptAttackInfo) {
      res["PromptAttackInfo"] = boost::any(*promptAttackInfo);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfidenceScore") != m.end() && !m["ConfidenceScore"].empty()) {
      confidenceScore = make_shared<double>(boost::any_cast<double>(m["ConfidenceScore"]));
    }
    if (m.find("PromptAttackInfo") != m.end() && !m["PromptAttackInfo"].empty()) {
      promptAttackInfo = make_shared<string>(boost::any_cast<string>(m["PromptAttackInfo"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<long>(boost::any_cast<long>(m["SecurityLevel"]));
    }
  }


  virtual ~ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack() = default;
};
class ModelInputContentSyncDetectResponseBodyTraceInfo : public Darabonba::Model {
public:
  shared_ptr<ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord> blockWord{};
  shared_ptr<ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories> harmfulCategories{};
  shared_ptr<ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack> promptAttack{};

  ModelInputContentSyncDetectResponseBodyTraceInfo() {}

  explicit ModelInputContentSyncDetectResponseBodyTraceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWord) {
      res["BlockWord"] = blockWord ? boost::any(blockWord->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (harmfulCategories) {
      res["HarmfulCategories"] = harmfulCategories ? boost::any(harmfulCategories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promptAttack) {
      res["PromptAttack"] = promptAttack ? boost::any(promptAttack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWord") != m.end() && !m["BlockWord"].empty()) {
      if (typeid(map<string, boost::any>) == m["BlockWord"].type()) {
        ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BlockWord"]));
        blockWord = make_shared<ModelInputContentSyncDetectResponseBodyTraceInfoBlockWord>(model1);
      }
    }
    if (m.find("HarmfulCategories") != m.end() && !m["HarmfulCategories"].empty()) {
      if (typeid(map<string, boost::any>) == m["HarmfulCategories"].type()) {
        ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HarmfulCategories"]));
        harmfulCategories = make_shared<ModelInputContentSyncDetectResponseBodyTraceInfoHarmfulCategories>(model1);
      }
    }
    if (m.find("PromptAttack") != m.end() && !m["PromptAttack"].empty()) {
      if (typeid(map<string, boost::any>) == m["PromptAttack"].type()) {
        ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PromptAttack"]));
        promptAttack = make_shared<ModelInputContentSyncDetectResponseBodyTraceInfoPromptAttack>(model1);
      }
    }
  }


  virtual ~ModelInputContentSyncDetectResponseBodyTraceInfo() = default;
};
class ModelInputContentSyncDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> riskResult{};
  shared_ptr<bool> success{};
  shared_ptr<ModelInputContentSyncDetectResponseBodyTraceInfo> traceInfo{};

  ModelInputContentSyncDetectResponseBody() {}

  explicit ModelInputContentSyncDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (traceInfo) {
      res["TraceInfo"] = traceInfo ? boost::any(traceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TraceInfo") != m.end() && !m["TraceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TraceInfo"].type()) {
        ModelInputContentSyncDetectResponseBodyTraceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TraceInfo"]));
        traceInfo = make_shared<ModelInputContentSyncDetectResponseBodyTraceInfo>(model1);
      }
    }
  }


  virtual ~ModelInputContentSyncDetectResponseBody() = default;
};
class ModelInputContentSyncDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModelInputContentSyncDetectResponseBody> body{};

  ModelInputContentSyncDetectResponse() {}

  explicit ModelInputContentSyncDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModelInputContentSyncDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModelInputContentSyncDetectResponseBody>(model1);
      }
    }
  }


  virtual ~ModelInputContentSyncDetectResponse() = default;
};
class ModelOutputContentAsyncDetectRequestBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  ModelOutputContentAsyncDetectRequestBodyData() {}

  explicit ModelOutputContentAsyncDetectRequestBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~ModelOutputContentAsyncDetectRequestBodyData() = default;
};
class ModelOutputContentAsyncDetectRequest : public Darabonba::Model {
public:
  shared_ptr<ModelOutputContentAsyncDetectRequestBodyData> bodyData{};
  shared_ptr<string> policyIdentifier{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};

  ModelOutputContentAsyncDetectRequest() {}

  explicit ModelOutputContentAsyncDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyData) {
      res["BodyData"] = bodyData ? boost::any(bodyData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyIdentifier) {
      res["PolicyIdentifier"] = boost::any(*policyIdentifier);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      if (typeid(map<string, boost::any>) == m["BodyData"].type()) {
        ModelOutputContentAsyncDetectRequestBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BodyData"]));
        bodyData = make_shared<ModelOutputContentAsyncDetectRequestBodyData>(model1);
      }
    }
    if (m.find("PolicyIdentifier") != m.end() && !m["PolicyIdentifier"].empty()) {
      policyIdentifier = make_shared<string>(boost::any_cast<string>(m["PolicyIdentifier"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ModelOutputContentAsyncDetectRequest() = default;
};
class ModelOutputContentAsyncDetectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyDataShrink{};
  shared_ptr<string> policyIdentifier{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};

  ModelOutputContentAsyncDetectShrinkRequest() {}

  explicit ModelOutputContentAsyncDetectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyDataShrink) {
      res["BodyData"] = boost::any(*bodyDataShrink);
    }
    if (policyIdentifier) {
      res["PolicyIdentifier"] = boost::any(*policyIdentifier);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      bodyDataShrink = make_shared<string>(boost::any_cast<string>(m["BodyData"]));
    }
    if (m.find("PolicyIdentifier") != m.end() && !m["PolicyIdentifier"].empty()) {
      policyIdentifier = make_shared<string>(boost::any_cast<string>(m["PolicyIdentifier"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ModelOutputContentAsyncDetectShrinkRequest() = default;
};
class ModelOutputContentAsyncDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskId{};

  ModelOutputContentAsyncDetectResponseBody() {}

  explicit ModelOutputContentAsyncDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (taskId) {
      res["TaskId"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("TaskId") != m.end() && !m["TaskId"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["TaskId"]));
    }
  }


  virtual ~ModelOutputContentAsyncDetectResponseBody() = default;
};
class ModelOutputContentAsyncDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModelOutputContentAsyncDetectResponseBody> body{};

  ModelOutputContentAsyncDetectResponse() {}

  explicit ModelOutputContentAsyncDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModelOutputContentAsyncDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModelOutputContentAsyncDetectResponseBody>(model1);
      }
    }
  }


  virtual ~ModelOutputContentAsyncDetectResponse() = default;
};
class ModelOutputContentSyncDetectRequestBodyData : public Darabonba::Model {
public:
  shared_ptr<string> content{};

  ModelOutputContentSyncDetectRequestBodyData() {}

  explicit ModelOutputContentSyncDetectRequestBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
  }


  virtual ~ModelOutputContentSyncDetectRequestBodyData() = default;
};
class ModelOutputContentSyncDetectRequest : public Darabonba::Model {
public:
  shared_ptr<ModelOutputContentSyncDetectRequestBodyData> bodyData{};
  shared_ptr<string> policyIdentifier{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};

  ModelOutputContentSyncDetectRequest() {}

  explicit ModelOutputContentSyncDetectRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyData) {
      res["BodyData"] = bodyData ? boost::any(bodyData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (policyIdentifier) {
      res["PolicyIdentifier"] = boost::any(*policyIdentifier);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      if (typeid(map<string, boost::any>) == m["BodyData"].type()) {
        ModelOutputContentSyncDetectRequestBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BodyData"]));
        bodyData = make_shared<ModelOutputContentSyncDetectRequestBodyData>(model1);
      }
    }
    if (m.find("PolicyIdentifier") != m.end() && !m["PolicyIdentifier"].empty()) {
      policyIdentifier = make_shared<string>(boost::any_cast<string>(m["PolicyIdentifier"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ModelOutputContentSyncDetectRequest() = default;
};
class ModelOutputContentSyncDetectShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyDataShrink{};
  shared_ptr<string> policyIdentifier{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sceneName{};
  shared_ptr<string> serviceName{};

  ModelOutputContentSyncDetectShrinkRequest() {}

  explicit ModelOutputContentSyncDetectShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyDataShrink) {
      res["BodyData"] = boost::any(*bodyDataShrink);
    }
    if (policyIdentifier) {
      res["PolicyIdentifier"] = boost::any(*policyIdentifier);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sceneName) {
      res["SceneName"] = boost::any(*sceneName);
    }
    if (serviceName) {
      res["ServiceName"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      bodyDataShrink = make_shared<string>(boost::any_cast<string>(m["BodyData"]));
    }
    if (m.find("PolicyIdentifier") != m.end() && !m["PolicyIdentifier"].empty()) {
      policyIdentifier = make_shared<string>(boost::any_cast<string>(m["PolicyIdentifier"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SceneName") != m.end() && !m["SceneName"].empty()) {
      sceneName = make_shared<string>(boost::any_cast<string>(m["SceneName"]));
    }
    if (m.find("ServiceName") != m.end() && !m["ServiceName"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["ServiceName"]));
    }
  }


  virtual ~ModelOutputContentSyncDetectShrinkRequest() = default;
};
class ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList : public Darabonba::Model {
public:
  shared_ptr<string> word{};
  shared_ptr<string> wordLabel{};

  ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() {}

  explicit ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (word) {
      res["Word"] = boost::any(*word);
    }
    if (wordLabel) {
      res["WordLabel"] = boost::any(*wordLabel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
    if (m.find("WordLabel") != m.end() && !m["WordLabel"].empty()) {
      wordLabel = make_shared<string>(boost::any_cast<string>(m["WordLabel"]));
    }
  }


  virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList() = default;
};
class ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList : public Darabonba::Model {
public:
  shared_ptr<vector<ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>> blockWordList{};
  shared_ptr<string> groupName{};

  ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList() {}

  explicit ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWordList) {
      vector<boost::any> temp1;
      for(auto item1:*blockWordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockWordList"] = boost::any(temp1);
    }
    if (groupName) {
      res["GroupName"] = boost::any(*groupName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWordList") != m.end() && !m["BlockWordList"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockWordList"].type()) {
        vector<ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockWordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockWordList = make_shared<vector<ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoListBlockWordList>>(expect1);
      }
    }
    if (m.find("GroupName") != m.end() && !m["GroupName"].empty()) {
      groupName = make_shared<string>(boost::any_cast<string>(m["GroupName"]));
    }
  }


  virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList() = default;
};
class ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord : public Darabonba::Model {
public:
  shared_ptr<vector<ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>> blockWordGroupInfoList{};
  shared_ptr<long> riskResult{};

  ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord() {}

  explicit ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWordGroupInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*blockWordGroupInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["BlockWordGroupInfoList"] = boost::any(temp1);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWordGroupInfoList") != m.end() && !m["BlockWordGroupInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["BlockWordGroupInfoList"].type()) {
        vector<ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["BlockWordGroupInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        blockWordGroupInfoList = make_shared<vector<ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWordBlockWordGroupInfoList>>(expect1);
      }
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord() = default;
};
class ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList : public Darabonba::Model {
public:
  shared_ptr<string> categoryLabel{};
  shared_ptr<long> categoryType{};
  shared_ptr<long> riskResult{};
  shared_ptr<long> securityLevel{};

  ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList() {}

  explicit ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (categoryLabel) {
      res["CategoryLabel"] = boost::any(*categoryLabel);
    }
    if (categoryType) {
      res["CategoryType"] = boost::any(*categoryType);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CategoryLabel") != m.end() && !m["CategoryLabel"].empty()) {
      categoryLabel = make_shared<string>(boost::any_cast<string>(m["CategoryLabel"]));
    }
    if (m.find("CategoryType") != m.end() && !m["CategoryType"].empty()) {
      categoryType = make_shared<long>(boost::any_cast<long>(m["CategoryType"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<long>(boost::any_cast<long>(m["SecurityLevel"]));
    }
  }


  virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList() = default;
};
class ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories : public Darabonba::Model {
public:
  shared_ptr<double> confidenceScore{};
  shared_ptr<vector<ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>> harmfulCategoryInfoList{};
  shared_ptr<long> riskResult{};

  ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories() {}

  explicit ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (confidenceScore) {
      res["ConfidenceScore"] = boost::any(*confidenceScore);
    }
    if (harmfulCategoryInfoList) {
      vector<boost::any> temp1;
      for(auto item1:*harmfulCategoryInfoList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["HarmfulCategoryInfoList"] = boost::any(temp1);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConfidenceScore") != m.end() && !m["ConfidenceScore"].empty()) {
      confidenceScore = make_shared<double>(boost::any_cast<double>(m["ConfidenceScore"]));
    }
    if (m.find("HarmfulCategoryInfoList") != m.end() && !m["HarmfulCategoryInfoList"].empty()) {
      if (typeid(vector<boost::any>) == m["HarmfulCategoryInfoList"].type()) {
        vector<ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["HarmfulCategoryInfoList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        harmfulCategoryInfoList = make_shared<vector<ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategoriesHarmfulCategoryInfoList>>(expect1);
      }
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
  }


  virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories() = default;
};
class ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack : public Darabonba::Model {
public:
  shared_ptr<string> promptAttackInfo{};
  shared_ptr<long> riskResult{};
  shared_ptr<long> securityLevel{};

  ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack() {}

  explicit ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (promptAttackInfo) {
      res["PromptAttackInfo"] = boost::any(*promptAttackInfo);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (securityLevel) {
      res["SecurityLevel"] = boost::any(*securityLevel);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PromptAttackInfo") != m.end() && !m["PromptAttackInfo"].empty()) {
      promptAttackInfo = make_shared<string>(boost::any_cast<string>(m["PromptAttackInfo"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("SecurityLevel") != m.end() && !m["SecurityLevel"].empty()) {
      securityLevel = make_shared<long>(boost::any_cast<long>(m["SecurityLevel"]));
    }
  }


  virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack() = default;
};
class ModelOutputContentSyncDetectResponseBodyTraceInfo : public Darabonba::Model {
public:
  shared_ptr<ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord> blockWord{};
  shared_ptr<ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories> harmfulCategories{};
  shared_ptr<ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack> promptAttack{};

  ModelOutputContentSyncDetectResponseBodyTraceInfo() {}

  explicit ModelOutputContentSyncDetectResponseBodyTraceInfo(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (blockWord) {
      res["BlockWord"] = blockWord ? boost::any(blockWord->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (harmfulCategories) {
      res["HarmfulCategories"] = harmfulCategories ? boost::any(harmfulCategories->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (promptAttack) {
      res["PromptAttack"] = promptAttack ? boost::any(promptAttack->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BlockWord") != m.end() && !m["BlockWord"].empty()) {
      if (typeid(map<string, boost::any>) == m["BlockWord"].type()) {
        ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BlockWord"]));
        blockWord = make_shared<ModelOutputContentSyncDetectResponseBodyTraceInfoBlockWord>(model1);
      }
    }
    if (m.find("HarmfulCategories") != m.end() && !m["HarmfulCategories"].empty()) {
      if (typeid(map<string, boost::any>) == m["HarmfulCategories"].type()) {
        ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["HarmfulCategories"]));
        harmfulCategories = make_shared<ModelOutputContentSyncDetectResponseBodyTraceInfoHarmfulCategories>(model1);
      }
    }
    if (m.find("PromptAttack") != m.end() && !m["PromptAttack"].empty()) {
      if (typeid(map<string, boost::any>) == m["PromptAttack"].type()) {
        ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PromptAttack"]));
        promptAttack = make_shared<ModelOutputContentSyncDetectResponseBodyTraceInfoPromptAttack>(model1);
      }
    }
  }


  virtual ~ModelOutputContentSyncDetectResponseBodyTraceInfo() = default;
};
class ModelOutputContentSyncDetectResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<string> riskInfo{};
  shared_ptr<long> riskResult{};
  shared_ptr<bool> success{};
  shared_ptr<ModelOutputContentSyncDetectResponseBodyTraceInfo> traceInfo{};

  ModelOutputContentSyncDetectResponseBody() {}

  explicit ModelOutputContentSyncDetectResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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
    if (riskInfo) {
      res["RiskInfo"] = boost::any(*riskInfo);
    }
    if (riskResult) {
      res["RiskResult"] = boost::any(*riskResult);
    }
    if (success) {
      res["Success"] = boost::any(*success);
    }
    if (traceInfo) {
      res["TraceInfo"] = traceInfo ? boost::any(traceInfo->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Code") != m.end() && !m["Code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["Code"]));
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
    if (m.find("RiskInfo") != m.end() && !m["RiskInfo"].empty()) {
      riskInfo = make_shared<string>(boost::any_cast<string>(m["RiskInfo"]));
    }
    if (m.find("RiskResult") != m.end() && !m["RiskResult"].empty()) {
      riskResult = make_shared<long>(boost::any_cast<long>(m["RiskResult"]));
    }
    if (m.find("Success") != m.end() && !m["Success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["Success"]));
    }
    if (m.find("TraceInfo") != m.end() && !m["TraceInfo"].empty()) {
      if (typeid(map<string, boost::any>) == m["TraceInfo"].type()) {
        ModelOutputContentSyncDetectResponseBodyTraceInfo model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["TraceInfo"]));
        traceInfo = make_shared<ModelOutputContentSyncDetectResponseBodyTraceInfo>(model1);
      }
    }
  }


  virtual ~ModelOutputContentSyncDetectResponseBody() = default;
};
class ModelOutputContentSyncDetectResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ModelOutputContentSyncDetectResponseBody> body{};

  ModelOutputContentSyncDetectResponse() {}

  explicit ModelOutputContentSyncDetectResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ModelOutputContentSyncDetectResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ModelOutputContentSyncDetectResponseBody>(model1);
      }
    }
  }


  virtual ~ModelOutputContentSyncDetectResponse() = default;
};
class RegisterAccountRequest : public Darabonba::Model {
public:
  shared_ptr<string> memo{};
  shared_ptr<string> regionId{};

  RegisterAccountRequest() {}

  explicit RegisterAccountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (memo) {
      res["Memo"] = boost::any(*memo);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Memo") != m.end() && !m["Memo"].empty()) {
      memo = make_shared<string>(boost::any_cast<string>(m["Memo"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~RegisterAccountRequest() = default;
};
class RegisterAccountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  RegisterAccountResponseBody() {}

  explicit RegisterAccountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["Code"] = boost::any(*code);
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


  virtual ~RegisterAccountResponseBody() = default;
};
class RegisterAccountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<RegisterAccountResponseBody> body{};

  RegisterAccountResponse() {}

  explicit RegisterAccountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        RegisterAccountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<RegisterAccountResponseBody>(model1);
      }
    }
  }


  virtual ~RegisterAccountResponse() = default;
};
class SyncSensitiveWordRequestBodyDataSensitiveWordList : public Darabonba::Model {
public:
  shared_ptr<long> id{};
  shared_ptr<string> label{};
  shared_ptr<long> status{};
  shared_ptr<string> word{};

  SyncSensitiveWordRequestBodyDataSensitiveWordList() {}

  explicit SyncSensitiveWordRequestBodyDataSensitiveWordList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<long>(boost::any_cast<long>(m["Id"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<long>(boost::any_cast<long>(m["Status"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~SyncSensitiveWordRequestBodyDataSensitiveWordList() = default;
};
class SyncSensitiveWordRequestBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SyncSensitiveWordRequestBodyDataSensitiveWordList>> sensitiveWordList{};

  SyncSensitiveWordRequestBodyData() {}

  explicit SyncSensitiveWordRequestBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sensitiveWordList) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveWordList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveWordList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SensitiveWordList") != m.end() && !m["SensitiveWordList"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveWordList"].type()) {
        vector<SyncSensitiveWordRequestBodyDataSensitiveWordList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveWordList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SyncSensitiveWordRequestBodyDataSensitiveWordList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveWordList = make_shared<vector<SyncSensitiveWordRequestBodyDataSensitiveWordList>>(expect1);
      }
    }
  }


  virtual ~SyncSensitiveWordRequestBodyData() = default;
};
class SyncSensitiveWordRequest : public Darabonba::Model {
public:
  shared_ptr<SyncSensitiveWordRequestBodyData> bodyData{};
  shared_ptr<bool> commit{};
  shared_ptr<string> regionId{};

  SyncSensitiveWordRequest() {}

  explicit SyncSensitiveWordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyData) {
      res["BodyData"] = bodyData ? boost::any(bodyData->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (commit) {
      res["Commit"] = boost::any(*commit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      if (typeid(map<string, boost::any>) == m["BodyData"].type()) {
        SyncSensitiveWordRequestBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["BodyData"]));
        bodyData = make_shared<SyncSensitiveWordRequestBodyData>(model1);
      }
    }
    if (m.find("Commit") != m.end() && !m["Commit"].empty()) {
      commit = make_shared<bool>(boost::any_cast<bool>(m["Commit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SyncSensitiveWordRequest() = default;
};
class SyncSensitiveWordShrinkRequest : public Darabonba::Model {
public:
  shared_ptr<string> bodyDataShrink{};
  shared_ptr<bool> commit{};
  shared_ptr<string> regionId{};

  SyncSensitiveWordShrinkRequest() {}

  explicit SyncSensitiveWordShrinkRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bodyDataShrink) {
      res["BodyData"] = boost::any(*bodyDataShrink);
    }
    if (commit) {
      res["Commit"] = boost::any(*commit);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BodyData") != m.end() && !m["BodyData"].empty()) {
      bodyDataShrink = make_shared<string>(boost::any_cast<string>(m["BodyData"]));
    }
    if (m.find("Commit") != m.end() && !m["Commit"].empty()) {
      commit = make_shared<bool>(boost::any_cast<bool>(m["Commit"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~SyncSensitiveWordShrinkRequest() = default;
};
class SyncSensitiveWordResponseBodyDataSensitiveWordErrorList : public Darabonba::Model {
public:
  shared_ptr<string> errMessage{};
  shared_ptr<long> errStatus{};
  shared_ptr<long> index{};
  shared_ptr<string> label{};
  shared_ptr<string> word{};

  SyncSensitiveWordResponseBodyDataSensitiveWordErrorList() {}

  explicit SyncSensitiveWordResponseBodyDataSensitiveWordErrorList(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (errMessage) {
      res["ErrMessage"] = boost::any(*errMessage);
    }
    if (errStatus) {
      res["ErrStatus"] = boost::any(*errStatus);
    }
    if (index) {
      res["Index"] = boost::any(*index);
    }
    if (label) {
      res["Label"] = boost::any(*label);
    }
    if (word) {
      res["Word"] = boost::any(*word);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ErrMessage") != m.end() && !m["ErrMessage"].empty()) {
      errMessage = make_shared<string>(boost::any_cast<string>(m["ErrMessage"]));
    }
    if (m.find("ErrStatus") != m.end() && !m["ErrStatus"].empty()) {
      errStatus = make_shared<long>(boost::any_cast<long>(m["ErrStatus"]));
    }
    if (m.find("Index") != m.end() && !m["Index"].empty()) {
      index = make_shared<long>(boost::any_cast<long>(m["Index"]));
    }
    if (m.find("Label") != m.end() && !m["Label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["Label"]));
    }
    if (m.find("Word") != m.end() && !m["Word"].empty()) {
      word = make_shared<string>(boost::any_cast<string>(m["Word"]));
    }
  }


  virtual ~SyncSensitiveWordResponseBodyDataSensitiveWordErrorList() = default;
};
class SyncSensitiveWordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<SyncSensitiveWordResponseBodyDataSensitiveWordErrorList>> sensitiveWordErrorList{};

  SyncSensitiveWordResponseBodyData() {}

  explicit SyncSensitiveWordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (sensitiveWordErrorList) {
      vector<boost::any> temp1;
      for(auto item1:*sensitiveWordErrorList){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["SensitiveWordErrorList"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("SensitiveWordErrorList") != m.end() && !m["SensitiveWordErrorList"].empty()) {
      if (typeid(vector<boost::any>) == m["SensitiveWordErrorList"].type()) {
        vector<SyncSensitiveWordResponseBodyDataSensitiveWordErrorList> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["SensitiveWordErrorList"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            SyncSensitiveWordResponseBodyDataSensitiveWordErrorList model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        sensitiveWordErrorList = make_shared<vector<SyncSensitiveWordResponseBodyDataSensitiveWordErrorList>>(expect1);
      }
    }
  }


  virtual ~SyncSensitiveWordResponseBodyData() = default;
};
class SyncSensitiveWordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<SyncSensitiveWordResponseBodyData> data{};
  shared_ptr<long> httpStatusCode{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  SyncSensitiveWordResponseBody() {}

  explicit SyncSensitiveWordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncSensitiveWordResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<SyncSensitiveWordResponseBodyData>(model1);
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


  virtual ~SyncSensitiveWordResponseBody() = default;
};
class SyncSensitiveWordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SyncSensitiveWordResponseBody> body{};

  SyncSensitiveWordResponse() {}

  explicit SyncSensitiveWordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SyncSensitiveWordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SyncSensitiveWordResponseBody>(model1);
      }
    }
  }


  virtual ~SyncSensitiveWordResponse() = default;
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
  BatchContentAsyncDetectResponse batchContentAsyncDetectWithOptions(shared_ptr<BatchContentAsyncDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchContentAsyncDetectResponse batchContentAsyncDetect(shared_ptr<BatchContentAsyncDetectRequest> request);
  BatchContentSyncDetectResponse batchContentSyncDetectWithOptions(shared_ptr<BatchContentSyncDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  BatchContentSyncDetectResponse batchContentSyncDetect(shared_ptr<BatchContentSyncDetectRequest> request);
  CheckAccountResponse checkAccountWithOptions(shared_ptr<CheckAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CheckAccountResponse checkAccount(shared_ptr<CheckAccountRequest> request);
  ContentAsyncDetectResponse contentAsyncDetectWithOptions(shared_ptr<ContentAsyncDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContentAsyncDetectResponse contentAsyncDetect(shared_ptr<ContentAsyncDetectRequest> request);
  ContentSyncDetectResponse contentSyncDetectWithOptions(shared_ptr<ContentSyncDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ContentSyncDetectResponse contentSyncDetect(shared_ptr<ContentSyncDetectRequest> request);
  GetContentDetectResultResponse getContentDetectResultWithOptions(shared_ptr<GetContentDetectResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetContentDetectResultResponse getContentDetectResult(shared_ptr<GetContentDetectResultRequest> request);
  GetModelInputContentDetectResultResponse getModelInputContentDetectResultWithOptions(shared_ptr<GetModelInputContentDetectResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelInputContentDetectResultResponse getModelInputContentDetectResult(shared_ptr<GetModelInputContentDetectResultRequest> request);
  GetModelOutputContentDetectResultResponse getModelOutputContentDetectResultWithOptions(shared_ptr<GetModelOutputContentDetectResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetModelOutputContentDetectResultResponse getModelOutputContentDetectResult(shared_ptr<GetModelOutputContentDetectResultRequest> request);
  ListSensitiveWordResponse listSensitiveWordWithOptions(shared_ptr<ListSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSensitiveWordResponse listSensitiveWord(shared_ptr<ListSensitiveWordRequest> request);
  ModelInputContentAsyncDetectResponse modelInputContentAsyncDetectWithOptions(shared_ptr<ModelInputContentAsyncDetectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModelInputContentAsyncDetectResponse modelInputContentAsyncDetect(shared_ptr<ModelInputContentAsyncDetectRequest> request);
  ModelInputContentSyncDetectResponse modelInputContentSyncDetectWithOptions(shared_ptr<ModelInputContentSyncDetectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModelInputContentSyncDetectResponse modelInputContentSyncDetect(shared_ptr<ModelInputContentSyncDetectRequest> request);
  ModelOutputContentAsyncDetectResponse modelOutputContentAsyncDetectWithOptions(shared_ptr<ModelOutputContentAsyncDetectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModelOutputContentAsyncDetectResponse modelOutputContentAsyncDetect(shared_ptr<ModelOutputContentAsyncDetectRequest> request);
  ModelOutputContentSyncDetectResponse modelOutputContentSyncDetectWithOptions(shared_ptr<ModelOutputContentSyncDetectRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ModelOutputContentSyncDetectResponse modelOutputContentSyncDetect(shared_ptr<ModelOutputContentSyncDetectRequest> request);
  RegisterAccountResponse registerAccountWithOptions(shared_ptr<RegisterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterAccountResponse registerAccount(shared_ptr<RegisterAccountRequest> request);
  SyncSensitiveWordResponse syncSensitiveWordWithOptions(shared_ptr<SyncSensitiveWordRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncSensitiveWordResponse syncSensitiveWord(shared_ptr<SyncSensitiveWordRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_RAI20240701

#endif
