// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_SYSOM20231230_H_
#define ALIBABACLOUD_SYSOM20231230_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_SysOM20231230 {
class AuthDiagnosisRequestInstances : public Darabonba::Model {
public:
  shared_ptr<string> instance{};
  shared_ptr<string> region{};

  AuthDiagnosisRequestInstances() {}

  explicit AuthDiagnosisRequestInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
  }


  virtual ~AuthDiagnosisRequestInstances() = default;
};
class AuthDiagnosisRequest : public Darabonba::Model {
public:
  shared_ptr<bool> autoCreateRole{};
  shared_ptr<bool> autoInstallAgent{};
  shared_ptr<vector<AuthDiagnosisRequestInstances>> instances{};

  AuthDiagnosisRequest() {}

  explicit AuthDiagnosisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (autoCreateRole) {
      res["autoCreateRole"] = boost::any(*autoCreateRole);
    }
    if (autoInstallAgent) {
      res["autoInstallAgent"] = boost::any(*autoInstallAgent);
    }
    if (instances) {
      vector<boost::any> temp1;
      for(auto item1:*instances){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["instances"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("autoCreateRole") != m.end() && !m["autoCreateRole"].empty()) {
      autoCreateRole = make_shared<bool>(boost::any_cast<bool>(m["autoCreateRole"]));
    }
    if (m.find("autoInstallAgent") != m.end() && !m["autoInstallAgent"].empty()) {
      autoInstallAgent = make_shared<bool>(boost::any_cast<bool>(m["autoInstallAgent"]));
    }
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<AuthDiagnosisRequestInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            AuthDiagnosisRequestInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<AuthDiagnosisRequestInstances>>(expect1);
      }
    }
  }


  virtual ~AuthDiagnosisRequest() = default;
};
class AuthDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<boost::any> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  AuthDiagnosisResponseBody() {}

  explicit AuthDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<boost::any>(boost::any_cast<boost::any>(m["data"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
  }


  virtual ~AuthDiagnosisResponseBody() = default;
};
class AuthDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuthDiagnosisResponseBody> body{};

  AuthDiagnosisResponse() {}

  explicit AuthDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuthDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuthDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~AuthDiagnosisResponse() = default;
};
class GenerateCopilotResponseRequest : public Darabonba::Model {
public:
  shared_ptr<string> llmParamString{};

  GenerateCopilotResponseRequest() {}

  explicit GenerateCopilotResponseRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (llmParamString) {
      res["llmParamString"] = boost::any(*llmParamString);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("llmParamString") != m.end() && !m["llmParamString"].empty()) {
      llmParamString = make_shared<string>(boost::any_cast<string>(m["llmParamString"]));
    }
  }


  virtual ~GenerateCopilotResponseRequest() = default;
};
class GenerateCopilotResponseResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> massage{};
  shared_ptr<string> requestId{};

  GenerateCopilotResponseResponseBody() {}

  explicit GenerateCopilotResponseResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = boost::any(*data);
    }
    if (massage) {
      res["massage"] = boost::any(*massage);
    }
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      data = make_shared<string>(boost::any_cast<string>(m["data"]));
    }
    if (m.find("massage") != m.end() && !m["massage"].empty()) {
      massage = make_shared<string>(boost::any_cast<string>(m["massage"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GenerateCopilotResponseResponseBody() = default;
};
class GenerateCopilotResponseResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GenerateCopilotResponseResponseBody> body{};

  GenerateCopilotResponseResponse() {}

  explicit GenerateCopilotResponseResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GenerateCopilotResponseResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GenerateCopilotResponseResponseBody>(model1);
      }
    }
  }


  virtual ~GenerateCopilotResponseResponse() = default;
};
class GetAbnormalEventsCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<double> end{};
  shared_ptr<string> instance{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> pod{};
  shared_ptr<long> showPod{};
  shared_ptr<double> start{};

  GetAbnormalEventsCountRequest() {}

  explicit GetAbnormalEventsCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (pod) {
      res["pod"] = boost::any(*pod);
    }
    if (showPod) {
      res["showPod"] = boost::any(*showPod);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<double>(boost::any_cast<double>(m["end"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("pod") != m.end() && !m["pod"].empty()) {
      pod = make_shared<string>(boost::any_cast<string>(m["pod"]));
    }
    if (m.find("showPod") != m.end() && !m["showPod"].empty()) {
      showPod = make_shared<long>(boost::any_cast<long>(m["showPod"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<double>(boost::any_cast<double>(m["start"]));
    }
  }


  virtual ~GetAbnormalEventsCountRequest() = default;
};
class GetAbnormalEventsCountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> value{};

  GetAbnormalEventsCountResponseBodyData() {}

  explicit GetAbnormalEventsCountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["value"]));
    }
  }


  virtual ~GetAbnormalEventsCountResponseBodyData() = default;
};
class GetAbnormalEventsCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetAbnormalEventsCountResponseBodyData>> data{};
  shared_ptr<string> message{};

  GetAbnormalEventsCountResponseBody() {}

  explicit GetAbnormalEventsCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetAbnormalEventsCountResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAbnormalEventsCountResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetAbnormalEventsCountResponseBodyData>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~GetAbnormalEventsCountResponseBody() = default;
};
class GetAbnormalEventsCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAbnormalEventsCountResponseBody> body{};

  GetAbnormalEventsCountResponse() {}

  explicit GetAbnormalEventsCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAbnormalEventsCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAbnormalEventsCountResponseBody>(model1);
      }
    }
  }


  virtual ~GetAbnormalEventsCountResponse() = default;
};
class GetDiagnosisResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetDiagnosisResultRequest() {}

  explicit GetDiagnosisResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
  }


  virtual ~GetDiagnosisResultRequest() = default;
};
class GetDiagnosisResultResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> code{};
  shared_ptr<boost::any> command{};
  shared_ptr<string> createdAt{};
  shared_ptr<string> errMsg{};
  shared_ptr<boost::any> params{};
  shared_ptr<boost::any> result{};
  shared_ptr<string> serviceName{};
  shared_ptr<string> status{};
  shared_ptr<string> taskId{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> url{};

  GetDiagnosisResultResponseBodyData() {}

  explicit GetDiagnosisResultResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (command) {
      res["command"] = boost::any(*command);
    }
    if (createdAt) {
      res["created_at"] = boost::any(*createdAt);
    }
    if (errMsg) {
      res["err_msg"] = boost::any(*errMsg);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (serviceName) {
      res["service_name"] = boost::any(*serviceName);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    if (updatedAt) {
      res["updated_at"] = boost::any(*updatedAt);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<long>(boost::any_cast<long>(m["code"]));
    }
    if (m.find("command") != m.end() && !m["command"].empty()) {
      command = make_shared<boost::any>(boost::any_cast<boost::any>(m["command"]));
    }
    if (m.find("created_at") != m.end() && !m["created_at"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["created_at"]));
    }
    if (m.find("err_msg") != m.end() && !m["err_msg"].empty()) {
      errMsg = make_shared<string>(boost::any_cast<string>(m["err_msg"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<boost::any>(boost::any_cast<boost::any>(m["params"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<boost::any>(boost::any_cast<boost::any>(m["result"]));
    }
    if (m.find("service_name") != m.end() && !m["service_name"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["service_name"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
    if (m.find("updated_at") != m.end() && !m["updated_at"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updated_at"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~GetDiagnosisResultResponseBodyData() = default;
};
class GetDiagnosisResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetDiagnosisResultResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetDiagnosisResultResponseBody() {}

  explicit GetDiagnosisResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetDiagnosisResultResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetDiagnosisResultResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
  }


  virtual ~GetDiagnosisResultResponseBody() = default;
};
class GetDiagnosisResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetDiagnosisResultResponseBody> body{};

  GetDiagnosisResultResponse() {}

  explicit GetDiagnosisResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetDiagnosisResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetDiagnosisResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetDiagnosisResultResponse() = default;
};
class GetHealthPercentageRequest : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<double> end{};
  shared_ptr<string> instance{};
  shared_ptr<double> start{};

  GetHealthPercentageRequest() {}

  explicit GetHealthPercentageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (start) {
      res["start"] = boost::any(*start);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<double>(boost::any_cast<double>(m["end"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<double>(boost::any_cast<double>(m["start"]));
    }
  }


  virtual ~GetHealthPercentageRequest() = default;
};
class GetHealthPercentageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> value{};

  GetHealthPercentageResponseBodyData() {}

  explicit GetHealthPercentageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["value"]));
    }
  }


  virtual ~GetHealthPercentageResponseBodyData() = default;
};
class GetHealthPercentageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetHealthPercentageResponseBodyData>> data{};
  shared_ptr<string> message{};

  GetHealthPercentageResponseBody() {}

  explicit GetHealthPercentageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      vector<boost::any> temp1;
      for(auto item1:*data){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["data"] = boost::any(temp1);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetHealthPercentageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHealthPercentageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetHealthPercentageResponseBodyData>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~GetHealthPercentageResponseBody() = default;
};
class GetHealthPercentageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHealthPercentageResponseBody> body{};

  GetHealthPercentageResponse() {}

  explicit GetHealthPercentageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHealthPercentageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHealthPercentageResponseBody>(model1);
      }
    }
  }


  virtual ~GetHealthPercentageResponse() = default;
};
class InvokeDiagnosisRequest : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> params{};
  shared_ptr<string> serviceName{};

  InvokeDiagnosisRequest() {}

  explicit InvokeDiagnosisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (serviceName) {
      res["service_name"] = boost::any(*serviceName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["params"]));
    }
    if (m.find("service_name") != m.end() && !m["service_name"].empty()) {
      serviceName = make_shared<string>(boost::any_cast<string>(m["service_name"]));
    }
  }


  virtual ~InvokeDiagnosisRequest() = default;
};
class InvokeDiagnosisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  InvokeDiagnosisResponseBodyData() {}

  explicit InvokeDiagnosisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
  }


  virtual ~InvokeDiagnosisResponseBodyData() = default;
};
class InvokeDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<InvokeDiagnosisResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  InvokeDiagnosisResponseBody() {}

  explicit InvokeDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        InvokeDiagnosisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<InvokeDiagnosisResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
  }


  virtual ~InvokeDiagnosisResponseBody() = default;
};
class InvokeDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvokeDiagnosisResponseBody> body{};

  InvokeDiagnosisResponse() {}

  explicit InvokeDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvokeDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvokeDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~InvokeDiagnosisResponse() = default;
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
  AuthDiagnosisResponse authDiagnosisWithOptions(shared_ptr<AuthDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuthDiagnosisResponse authDiagnosis(shared_ptr<AuthDiagnosisRequest> request);
  GenerateCopilotResponseResponse generateCopilotResponseWithOptions(shared_ptr<GenerateCopilotResponseRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GenerateCopilotResponseResponse generateCopilotResponse(shared_ptr<GenerateCopilotResponseRequest> request);
  GetAbnormalEventsCountResponse getAbnormalEventsCountWithOptions(shared_ptr<GetAbnormalEventsCountRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAbnormalEventsCountResponse getAbnormalEventsCount(shared_ptr<GetAbnormalEventsCountRequest> request);
  GetDiagnosisResultResponse getDiagnosisResultWithOptions(shared_ptr<GetDiagnosisResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiagnosisResultResponse getDiagnosisResult(shared_ptr<GetDiagnosisResultRequest> request);
  GetHealthPercentageResponse getHealthPercentageWithOptions(shared_ptr<GetHealthPercentageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHealthPercentageResponse getHealthPercentage(shared_ptr<GetHealthPercentageRequest> request);
  InvokeDiagnosisResponse invokeDiagnosisWithOptions(shared_ptr<InvokeDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvokeDiagnosisResponse invokeDiagnosis(shared_ptr<InvokeDiagnosisRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_SysOM20231230

#endif
