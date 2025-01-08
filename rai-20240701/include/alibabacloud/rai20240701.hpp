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
  ListSensitiveWordResponse listSensitiveWordWithOptions(shared_ptr<ListSensitiveWordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListSensitiveWordResponse listSensitiveWord(shared_ptr<ListSensitiveWordRequest> request);
  RegisterAccountResponse registerAccountWithOptions(shared_ptr<RegisterAccountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  RegisterAccountResponse registerAccount(shared_ptr<RegisterAccountRequest> request);
  SyncSensitiveWordResponse syncSensitiveWordWithOptions(shared_ptr<SyncSensitiveWordRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SyncSensitiveWordResponse syncSensitiveWord(shared_ptr<SyncSensitiveWordRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_RAI20240701

#endif
