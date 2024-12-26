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
class GetAIQueryResultRequest : public Darabonba::Model {
public:
  shared_ptr<string> analysisId{};

  GetAIQueryResultRequest() {}

  explicit GetAIQueryResultRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisId) {
      res["analysisId"] = boost::any(*analysisId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisId") != m.end() && !m["analysisId"].empty()) {
      analysisId = make_shared<string>(boost::any_cast<string>(m["analysisId"]));
    }
  }


  virtual ~GetAIQueryResultRequest() = default;
};
class GetAIQueryResultResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetAIQueryResultResponseBody() {}

  explicit GetAIQueryResultResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetAIQueryResultResponseBody() = default;
};
class GetAIQueryResultResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAIQueryResultResponseBody> body{};

  GetAIQueryResultResponse() {}

  explicit GetAIQueryResultResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAIQueryResultResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAIQueryResultResponseBody>(model1);
      }
    }
  }


  virtual ~GetAIQueryResultResponse() = default;
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
class GetAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};

  GetAgentRequest() {}

  explicit GetAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agent_id"] = boost::any(*agentId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("agent_id") != m.end() && !m["agent_id"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agent_id"]));
    }
  }


  virtual ~GetAgentRequest() = default;
};
class GetAgentResponseBodyDataVersions : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> installScript{};
  shared_ptr<string> uninstallScript{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> upgradeScript{};
  shared_ptr<string> version{};

  GetAgentResponseBodyDataVersions() {}

  explicit GetAgentResponseBodyDataVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["created_at"] = boost::any(*createdAt);
    }
    if (installScript) {
      res["install_script"] = boost::any(*installScript);
    }
    if (uninstallScript) {
      res["uninstall_script"] = boost::any(*uninstallScript);
    }
    if (updatedAt) {
      res["updated_at"] = boost::any(*updatedAt);
    }
    if (upgradeScript) {
      res["upgrade_script"] = boost::any(*upgradeScript);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created_at") != m.end() && !m["created_at"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["created_at"]));
    }
    if (m.find("install_script") != m.end() && !m["install_script"].empty()) {
      installScript = make_shared<string>(boost::any_cast<string>(m["install_script"]));
    }
    if (m.find("uninstall_script") != m.end() && !m["uninstall_script"].empty()) {
      uninstallScript = make_shared<string>(boost::any_cast<string>(m["uninstall_script"]));
    }
    if (m.find("updated_at") != m.end() && !m["updated_at"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updated_at"]));
    }
    if (m.find("upgrade_script") != m.end() && !m["upgrade_script"].empty()) {
      upgradeScript = make_shared<string>(boost::any_cast<string>(m["upgrade_script"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~GetAgentResponseBodyDataVersions() = default;
};
class GetAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> supportArch{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedAt{};
  shared_ptr<vector<GetAgentResponseBodyDataVersions>> versions{};

  GetAgentResponseBodyData() {}

  explicit GetAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["created_at"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (supportArch) {
      res["support_arch"] = boost::any(*supportArch);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updatedAt) {
      res["updated_at"] = boost::any(*updatedAt);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created_at") != m.end() && !m["created_at"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["created_at"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("support_arch") != m.end() && !m["support_arch"].empty()) {
      supportArch = make_shared<string>(boost::any_cast<string>(m["support_arch"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated_at") != m.end() && !m["updated_at"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updated_at"]));
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      if (typeid(vector<boost::any>) == m["versions"].type()) {
        vector<GetAgentResponseBodyDataVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAgentResponseBodyDataVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<GetAgentResponseBodyDataVersions>>(expect1);
      }
    }
  }


  virtual ~GetAgentResponseBodyData() = default;
};
class GetAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<GetAgentResponseBodyData> data{};
  shared_ptr<string> message{};

  GetAgentResponseBody() {}

  explicit GetAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetAgentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetAgentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~GetAgentResponseBody() = default;
};
class GetAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAgentResponseBody> body{};

  GetAgentResponse() {}

  explicit GetAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentResponse() = default;
};
class GetAgentTaskRequest : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  GetAgentTaskRequest() {}

  explicit GetAgentTaskRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetAgentTaskRequest() = default;
};
class GetAgentTaskResponseBodyDataJobs : public Darabonba::Model {
public:
  shared_ptr<string> error{};
  shared_ptr<string> instance{};
  shared_ptr<boost::any> params{};
  shared_ptr<string> region{};
  shared_ptr<string> result{};
  shared_ptr<string> status{};

  GetAgentTaskResponseBodyDataJobs() {}

  explicit GetAgentTaskResponseBodyDataJobs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (error) {
      res["error"] = boost::any(*error);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (result) {
      res["result"] = boost::any(*result);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("error") != m.end() && !m["error"].empty()) {
      error = make_shared<string>(boost::any_cast<string>(m["error"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<boost::any>(boost::any_cast<boost::any>(m["params"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("result") != m.end() && !m["result"].empty()) {
      result = make_shared<string>(boost::any_cast<string>(m["result"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetAgentTaskResponseBodyDataJobs() = default;
};
class GetAgentTaskResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<GetAgentTaskResponseBodyDataJobs>> jobs{};
  shared_ptr<string> taskId{};

  GetAgentTaskResponseBodyData() {}

  explicit GetAgentTaskResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["jobs"] = boost::any(temp1);
    }
    if (taskId) {
      res["task_id"] = boost::any(*taskId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("jobs") != m.end() && !m["jobs"].empty()) {
      if (typeid(vector<boost::any>) == m["jobs"].type()) {
        vector<GetAgentTaskResponseBodyDataJobs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["jobs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetAgentTaskResponseBodyDataJobs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        jobs = make_shared<vector<GetAgentTaskResponseBodyDataJobs>>(expect1);
      }
    }
    if (m.find("task_id") != m.end() && !m["task_id"].empty()) {
      taskId = make_shared<string>(boost::any_cast<string>(m["task_id"]));
    }
  }


  virtual ~GetAgentTaskResponseBodyData() = default;
};
class GetAgentTaskResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<GetAgentTaskResponseBodyData> data{};
  shared_ptr<string> message{};

  GetAgentTaskResponseBody() {}

  explicit GetAgentTaskResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetAgentTaskResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetAgentTaskResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~GetAgentTaskResponseBody() = default;
};
class GetAgentTaskResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetAgentTaskResponseBody> body{};

  GetAgentTaskResponse() {}

  explicit GetAgentTaskResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetAgentTaskResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetAgentTaskResponseBody>(model1);
      }
    }
  }


  virtual ~GetAgentTaskResponse() = default;
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
class GetHostCountRequest : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<double> end{};
  shared_ptr<string> instance{};
  shared_ptr<double> start{};

  GetHostCountRequest() {}

  explicit GetHostCountRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetHostCountRequest() = default;
};
class GetHostCountResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<long> time{};
  shared_ptr<long> value{};

  GetHostCountResponseBodyData() {}

  explicit GetHostCountResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<long>(boost::any_cast<long>(m["time"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["value"]));
    }
  }


  virtual ~GetHostCountResponseBodyData() = default;
};
class GetHostCountResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetHostCountResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  GetHostCountResponseBody() {}

  explicit GetHostCountResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetHostCountResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetHostCountResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetHostCountResponseBodyData>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetHostCountResponseBody() = default;
};
class GetHostCountResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHostCountResponseBody> body{};

  GetHostCountResponse() {}

  explicit GetHostCountResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHostCountResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHostCountResponseBody>(model1);
      }
    }
  }


  virtual ~GetHostCountResponse() = default;
};
class GetHotspotAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> appType{};
  shared_ptr<long> begEnd{};
  shared_ptr<long> begStart{};
  shared_ptr<string> instance{};
  shared_ptr<long> pid{};
  shared_ptr<string> table{};

  GetHotspotAnalysisRequest() {}

  explicit GetHotspotAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appType) {
      res["appType"] = boost::any(*appType);
    }
    if (begEnd) {
      res["beg_end"] = boost::any(*begEnd);
    }
    if (begStart) {
      res["beg_start"] = boost::any(*begStart);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (pid) {
      res["pid"] = boost::any(*pid);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("appType") != m.end() && !m["appType"].empty()) {
      appType = make_shared<string>(boost::any_cast<string>(m["appType"]));
    }
    if (m.find("beg_end") != m.end() && !m["beg_end"].empty()) {
      begEnd = make_shared<long>(boost::any_cast<long>(m["beg_end"]));
    }
    if (m.find("beg_start") != m.end() && !m["beg_start"].empty()) {
      begStart = make_shared<long>(boost::any_cast<long>(m["beg_start"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("pid") != m.end() && !m["pid"].empty()) {
      pid = make_shared<long>(boost::any_cast<long>(m["pid"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~GetHotspotAnalysisRequest() = default;
};
class GetHotspotAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<bool> success{};

  GetHotspotAnalysisResponseBody() {}

  explicit GetHotspotAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["requestId"] = boost::any(*requestId);
    }
    if (success) {
      res["success"] = boost::any(*success);
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
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
  }


  virtual ~GetHotspotAnalysisResponseBody() = default;
};
class GetHotspotAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHotspotAnalysisResponseBody> body{};

  GetHotspotAnalysisResponse() {}

  explicit GetHotspotAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHotspotAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotspotAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotspotAnalysisResponse() = default;
};
class GetHotspotInstanceListRequest : public Darabonba::Model {
public:
  shared_ptr<long> begEnd{};
  shared_ptr<long> begStart{};
  shared_ptr<string> table{};

  GetHotspotInstanceListRequest() {}

  explicit GetHotspotInstanceListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begEnd) {
      res["beg_end"] = boost::any(*begEnd);
    }
    if (begStart) {
      res["beg_start"] = boost::any(*begStart);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("beg_end") != m.end() && !m["beg_end"].empty()) {
      begEnd = make_shared<long>(boost::any_cast<long>(m["beg_end"]));
    }
    if (m.find("beg_start") != m.end() && !m["beg_start"].empty()) {
      begStart = make_shared<long>(boost::any_cast<long>(m["beg_start"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~GetHotspotInstanceListRequest() = default;
};
class GetHotspotInstanceListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> columns{};
  shared_ptr<vector<string>> values{};

  GetHotspotInstanceListResponseBodyData() {}

  explicit GetHotspotInstanceListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["columns"] = boost::any(*columns);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["columns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columns = make_shared<vector<string>>(toVec1);
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      values = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~GetHotspotInstanceListResponseBodyData() = default;
};
class GetHotspotInstanceListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetHotspotInstanceListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetHotspotInstanceListResponseBody() {}

  explicit GetHotspotInstanceListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetHotspotInstanceListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetHotspotInstanceListResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetHotspotInstanceListResponseBody() = default;
};
class GetHotspotInstanceListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHotspotInstanceListResponseBody> body{};

  GetHotspotInstanceListResponse() {}

  explicit GetHotspotInstanceListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHotspotInstanceListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotspotInstanceListResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotspotInstanceListResponse() = default;
};
class GetHotspotPidListRequest : public Darabonba::Model {
public:
  shared_ptr<long> begEnd{};
  shared_ptr<long> begStart{};
  shared_ptr<string> instance{};
  shared_ptr<string> table{};

  GetHotspotPidListRequest() {}

  explicit GetHotspotPidListRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (begEnd) {
      res["beg_end"] = boost::any(*begEnd);
    }
    if (begStart) {
      res["beg_start"] = boost::any(*begStart);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (table) {
      res["table"] = boost::any(*table);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("beg_end") != m.end() && !m["beg_end"].empty()) {
      begEnd = make_shared<long>(boost::any_cast<long>(m["beg_end"]));
    }
    if (m.find("beg_start") != m.end() && !m["beg_start"].empty()) {
      begStart = make_shared<long>(boost::any_cast<long>(m["beg_start"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("table") != m.end() && !m["table"].empty()) {
      table = make_shared<string>(boost::any_cast<string>(m["table"]));
    }
  }


  virtual ~GetHotspotPidListRequest() = default;
};
class GetHotspotPidListResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> columns{};
  shared_ptr<vector<vector<string>>> values{};

  GetHotspotPidListResponseBodyData() {}

  explicit GetHotspotPidListResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (columns) {
      res["columns"] = boost::any(*columns);
    }
    if (values) {
      res["values"] = boost::any(*values);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("columns") != m.end() && !m["columns"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["columns"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["columns"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      columns = make_shared<vector<string>>(toVec1);
    }
    if (m.find("values") != m.end() && !m["values"].empty()) {
      vector<vector<string>> toVec1;
      if (typeid(vector<boost::any>) == m["values"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["values"]);
        for (auto item:vec1) {
          vector<string> toVec2;
          if (typeid(vector<boost::any>) == item.type()) {
            vector<boost::any> vec2 = boost::any_cast<vector<boost::any>>(item);
            for (auto item:vec2) {
               toVec2.push_back(boost::any_cast<string>(item));
            }
          }
           toVec1 = toVec2;
        }
      }
      values = make_shared<vector<vector<string>>>(toVec1);
    }
  }


  virtual ~GetHotspotPidListResponseBodyData() = default;
};
class GetHotspotPidListResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetHotspotPidListResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetHotspotPidListResponseBody() {}

  explicit GetHotspotPidListResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        GetHotspotPidListResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetHotspotPidListResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~GetHotspotPidListResponseBody() = default;
};
class GetHotspotPidListResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetHotspotPidListResponseBody> body{};

  GetHotspotPidListResponse() {}

  explicit GetHotspotPidListResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetHotspotPidListResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetHotspotPidListResponseBody>(model1);
      }
    }
  }


  virtual ~GetHotspotPidListResponse() = default;
};
class GetListRecordRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<long> pageSize{};

  GetListRecordRequest() {}

  explicit GetListRecordRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
  }


  virtual ~GetListRecordRequest() = default;
};
class GetListRecordResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> analysisId{};
  shared_ptr<string> analysisTime{};
  shared_ptr<string> arguments{};
  shared_ptr<string> failedLog{};
  shared_ptr<string> status{};

  GetListRecordResponseBodyData() {}

  explicit GetListRecordResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisId) {
      res["analysisId"] = boost::any(*analysisId);
    }
    if (analysisTime) {
      res["analysisTime"] = boost::any(*analysisTime);
    }
    if (arguments) {
      res["arguments"] = boost::any(*arguments);
    }
    if (failedLog) {
      res["failedLog"] = boost::any(*failedLog);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysisId") != m.end() && !m["analysisId"].empty()) {
      analysisId = make_shared<string>(boost::any_cast<string>(m["analysisId"]));
    }
    if (m.find("analysisTime") != m.end() && !m["analysisTime"].empty()) {
      analysisTime = make_shared<string>(boost::any_cast<string>(m["analysisTime"]));
    }
    if (m.find("arguments") != m.end() && !m["arguments"].empty()) {
      arguments = make_shared<string>(boost::any_cast<string>(m["arguments"]));
    }
    if (m.find("failedLog") != m.end() && !m["failedLog"].empty()) {
      failedLog = make_shared<string>(boost::any_cast<string>(m["failedLog"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~GetListRecordResponseBodyData() = default;
};
class GetListRecordResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetListRecordResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  GetListRecordResponseBody() {}

  explicit GetListRecordResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["requestId"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetListRecordResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetListRecordResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetListRecordResponseBodyData>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetListRecordResponseBody() = default;
};
class GetListRecordResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetListRecordResponseBody> body{};

  GetListRecordResponse() {}

  explicit GetListRecordResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetListRecordResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetListRecordResponseBody>(model1);
      }
    }
  }


  virtual ~GetListRecordResponse() = default;
};
class GetProblemPercentageRequest : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<double> end{};
  shared_ptr<string> instance{};
  shared_ptr<double> start{};

  GetProblemPercentageRequest() {}

  explicit GetProblemPercentageRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetProblemPercentageRequest() = default;
};
class GetProblemPercentageResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> type{};
  shared_ptr<long> value{};

  GetProblemPercentageResponseBodyData() {}

  explicit GetProblemPercentageResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetProblemPercentageResponseBodyData() = default;
};
class GetProblemPercentageResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetProblemPercentageResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  GetProblemPercentageResponseBody() {}

  explicit GetProblemPercentageResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetProblemPercentageResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetProblemPercentageResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetProblemPercentageResponseBodyData>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~GetProblemPercentageResponseBody() = default;
};
class GetProblemPercentageResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetProblemPercentageResponseBody> body{};

  GetProblemPercentageResponse() {}

  explicit GetProblemPercentageResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetProblemPercentageResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetProblemPercentageResponseBody>(model1);
      }
    }
  }


  virtual ~GetProblemPercentageResponse() = default;
};
class GetRangeScoreRequest : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<double> end{};
  shared_ptr<string> instance{};
  shared_ptr<double> start{};

  GetRangeScoreRequest() {}

  explicit GetRangeScoreRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~GetRangeScoreRequest() = default;
};
class GetRangeScoreResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> time{};
  shared_ptr<string> type{};
  shared_ptr<double> value{};

  GetRangeScoreResponseBodyData() {}

  explicit GetRangeScoreResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (time) {
      res["time"] = boost::any(*time);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (value) {
      res["value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("time") != m.end() && !m["time"].empty()) {
      time = make_shared<double>(boost::any_cast<double>(m["time"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("value") != m.end() && !m["value"].empty()) {
      value = make_shared<double>(boost::any_cast<double>(m["value"]));
    }
  }


  virtual ~GetRangeScoreResponseBodyData() = default;
};
class GetRangeScoreResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<GetRangeScoreResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<double> total{};

  GetRangeScoreResponseBody() {}

  explicit GetRangeScoreResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (requestId) {
      res["request_id"] = boost::any(*requestId);
    }
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<GetRangeScoreResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            GetRangeScoreResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<GetRangeScoreResponseBodyData>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<double>(boost::any_cast<double>(m["total"]));
    }
  }


  virtual ~GetRangeScoreResponseBody() = default;
};
class GetRangeScoreResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetRangeScoreResponseBody> body{};

  GetRangeScoreResponse() {}

  explicit GetRangeScoreResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetRangeScoreResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetRangeScoreResponseBody>(model1);
      }
    }
  }


  virtual ~GetRangeScoreResponse() = default;
};
class GetResourcesRequest : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<string> instance{};
  shared_ptr<string> type{};

  GetResourcesRequest() {}

  explicit GetResourcesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("cluster") != m.end() && !m["cluster"].empty()) {
      cluster = make_shared<string>(boost::any_cast<string>(m["cluster"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~GetResourcesRequest() = default;
};
class GetResourcesResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> total{};
  shared_ptr<string> unit{};
  shared_ptr<double> usage{};

  GetResourcesResponseBodyData() {}

  explicit GetResourcesResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (total) {
      res["total"] = boost::any(*total);
    }
    if (unit) {
      res["unit"] = boost::any(*unit);
    }
    if (usage) {
      res["usage"] = boost::any(*usage);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<double>(boost::any_cast<double>(m["total"]));
    }
    if (m.find("unit") != m.end() && !m["unit"].empty()) {
      unit = make_shared<string>(boost::any_cast<string>(m["unit"]));
    }
    if (m.find("usage") != m.end() && !m["usage"].empty()) {
      usage = make_shared<double>(boost::any_cast<double>(m["usage"]));
    }
  }


  virtual ~GetResourcesResponseBodyData() = default;
};
class GetResourcesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<GetResourcesResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  GetResourcesResponseBody() {}

  explicit GetResourcesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourcesResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<GetResourcesResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
  }


  virtual ~GetResourcesResponseBody() = default;
};
class GetResourcesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetResourcesResponseBody> body{};

  GetResourcesResponse() {}

  explicit GetResourcesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetResourcesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetResourcesResponseBody>(model1);
      }
    }
  }


  virtual ~GetResourcesResponse() = default;
};
class InstallAgentRequestInstances : public Darabonba::Model {
public:
  shared_ptr<string> instance{};
  shared_ptr<string> region{};

  InstallAgentRequestInstances() {}

  explicit InstallAgentRequestInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InstallAgentRequestInstances() = default;
};
class InstallAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentVersion{};
  shared_ptr<string> installType{};
  shared_ptr<vector<InstallAgentRequestInstances>> instances{};

  InstallAgentRequest() {}

  explicit InstallAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agent_id"] = boost::any(*agentId);
    }
    if (agentVersion) {
      res["agent_version"] = boost::any(*agentVersion);
    }
    if (installType) {
      res["install_type"] = boost::any(*installType);
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
    if (m.find("agent_id") != m.end() && !m["agent_id"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agent_id"]));
    }
    if (m.find("agent_version") != m.end() && !m["agent_version"].empty()) {
      agentVersion = make_shared<string>(boost::any_cast<string>(m["agent_version"]));
    }
    if (m.find("install_type") != m.end() && !m["install_type"].empty()) {
      installType = make_shared<string>(boost::any_cast<string>(m["install_type"]));
    }
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<InstallAgentRequestInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            InstallAgentRequestInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<InstallAgentRequestInstances>>(expect1);
      }
    }
  }


  virtual ~InstallAgentRequest() = default;
};
class InstallAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  InstallAgentResponseBodyData() {}

  explicit InstallAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~InstallAgentResponseBodyData() = default;
};
class InstallAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<InstallAgentResponseBodyData> data{};
  shared_ptr<string> message{};

  InstallAgentResponseBody() {}

  explicit InstallAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        InstallAgentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<InstallAgentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~InstallAgentResponseBody() = default;
};
class InstallAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InstallAgentResponseBody> body{};

  InstallAgentResponse() {}

  explicit InstallAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InstallAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InstallAgentResponseBody>(model1);
      }
    }
  }


  virtual ~InstallAgentResponse() = default;
};
class InvokeAnomalyDiagnosisRequest : public Darabonba::Model {
public:
  shared_ptr<string> uuid{};

  InvokeAnomalyDiagnosisRequest() {}

  explicit InvokeAnomalyDiagnosisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (uuid) {
      res["uuid"] = boost::any(*uuid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("uuid") != m.end() && !m["uuid"].empty()) {
      uuid = make_shared<string>(boost::any_cast<string>(m["uuid"]));
    }
  }


  virtual ~InvokeAnomalyDiagnosisRequest() = default;
};
class InvokeAnomalyDiagnosisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  InvokeAnomalyDiagnosisResponseBody() {}

  explicit InvokeAnomalyDiagnosisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (message) {
      res["message"] = boost::any(*message);
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
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~InvokeAnomalyDiagnosisResponseBody() = default;
};
class InvokeAnomalyDiagnosisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<InvokeAnomalyDiagnosisResponseBody> body{};

  InvokeAnomalyDiagnosisResponse() {}

  explicit InvokeAnomalyDiagnosisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        InvokeAnomalyDiagnosisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<InvokeAnomalyDiagnosisResponseBody>(model1);
      }
    }
  }


  virtual ~InvokeAnomalyDiagnosisResponse() = default;
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
class ListAbnormalyEventsRequest : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<long> current{};
  shared_ptr<double> end{};
  shared_ptr<string> instance{};
  shared_ptr<string> level{};
  shared_ptr<string> namespace_{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pod{};
  shared_ptr<long> showPod{};
  shared_ptr<double> start{};

  ListAbnormalyEventsRequest() {}

  explicit ListAbnormalyEventsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (namespace_) {
      res["namespace"] = boost::any(*namespace_);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
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
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<double>(boost::any_cast<double>(m["end"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<string>(boost::any_cast<string>(m["level"]));
    }
    if (m.find("namespace") != m.end() && !m["namespace"].empty()) {
      namespace_ = make_shared<string>(boost::any_cast<string>(m["namespace"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
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


  virtual ~ListAbnormalyEventsRequest() = default;
};
class ListAbnormalyEventsResponseBodyDataOpts : public Darabonba::Model {
public:
  shared_ptr<string> label{};
  shared_ptr<string> params{};
  shared_ptr<string> type{};

  ListAbnormalyEventsResponseBodyDataOpts() {}

  explicit ListAbnormalyEventsResponseBodyDataOpts(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (label) {
      res["label"] = boost::any(*label);
    }
    if (params) {
      res["params"] = boost::any(*params);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("label") != m.end() && !m["label"].empty()) {
      label = make_shared<string>(boost::any_cast<string>(m["label"]));
    }
    if (m.find("params") != m.end() && !m["params"].empty()) {
      params = make_shared<string>(boost::any_cast<string>(m["params"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListAbnormalyEventsResponseBodyDataOpts() = default;
};
class ListAbnormalyEventsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<double> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> instance{};
  shared_ptr<string> item{};
  shared_ptr<ListAbnormalyEventsResponseBodyDataOpts> opts{};
  shared_ptr<string> regionId{};
  shared_ptr<string> type{};

  ListAbnormalyEventsResponseBodyData() {}

  explicit ListAbnormalyEventsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["created_at"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (item) {
      res["item"] = boost::any(*item);
    }
    if (opts) {
      res["opts"] = opts ? boost::any(opts->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created_at") != m.end() && !m["created_at"].empty()) {
      createdAt = make_shared<double>(boost::any_cast<double>(m["created_at"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("item") != m.end() && !m["item"].empty()) {
      item = make_shared<string>(boost::any_cast<string>(m["item"]));
    }
    if (m.find("opts") != m.end() && !m["opts"].empty()) {
      if (typeid(map<string, boost::any>) == m["opts"].type()) {
        ListAbnormalyEventsResponseBodyDataOpts model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["opts"]));
        opts = make_shared<ListAbnormalyEventsResponseBodyDataOpts>(model1);
      }
    }
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListAbnormalyEventsResponseBodyData() = default;
};
class ListAbnormalyEventsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<vector<ListAbnormalyEventsResponseBodyData>> data{};
  shared_ptr<string> message{};

  ListAbnormalyEventsResponseBody() {}

  explicit ListAbnormalyEventsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        vector<ListAbnormalyEventsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAbnormalyEventsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAbnormalyEventsResponseBodyData>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~ListAbnormalyEventsResponseBody() = default;
};
class ListAbnormalyEventsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAbnormalyEventsResponseBody> body{};

  ListAbnormalyEventsResponse() {}

  explicit ListAbnormalyEventsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAbnormalyEventsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAbnormalyEventsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAbnormalyEventsResponse() = default;
};
class ListAgentInstallRecordsRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginVersion{};
  shared_ptr<string> status{};

  ListAgentInstallRecordsRequest() {}

  explicit ListAgentInstallRecordsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (instanceId) {
      res["instance_id"] = boost::any(*instanceId);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (pluginId) {
      res["plugin_id"] = boost::any(*pluginId);
    }
    if (pluginVersion) {
      res["plugin_version"] = boost::any(*pluginVersion);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("instance_id") != m.end() && !m["instance_id"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instance_id"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("plugin_id") != m.end() && !m["plugin_id"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["plugin_id"]));
    }
    if (m.find("plugin_version") != m.end() && !m["plugin_version"].empty()) {
      pluginVersion = make_shared<string>(boost::any_cast<string>(m["plugin_version"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListAgentInstallRecordsRequest() = default;
};
class ListAgentInstallRecordsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> pluginId{};
  shared_ptr<string> pluginVersion{};
  shared_ptr<string> status{};
  shared_ptr<string> updatedAt{};

  ListAgentInstallRecordsResponseBodyData() {}

  explicit ListAgentInstallRecordsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["created_at"] = boost::any(*createdAt);
    }
    if (instanceId) {
      res["instance_id"] = boost::any(*instanceId);
    }
    if (pluginId) {
      res["plugin_id"] = boost::any(*pluginId);
    }
    if (pluginVersion) {
      res["plugin_version"] = boost::any(*pluginVersion);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    if (updatedAt) {
      res["updated_at"] = boost::any(*updatedAt);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created_at") != m.end() && !m["created_at"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["created_at"]));
    }
    if (m.find("instance_id") != m.end() && !m["instance_id"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["instance_id"]));
    }
    if (m.find("plugin_id") != m.end() && !m["plugin_id"].empty()) {
      pluginId = make_shared<string>(boost::any_cast<string>(m["plugin_id"]));
    }
    if (m.find("plugin_version") != m.end() && !m["plugin_version"].empty()) {
      pluginVersion = make_shared<string>(boost::any_cast<string>(m["plugin_version"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
    if (m.find("updated_at") != m.end() && !m["updated_at"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updated_at"]));
    }
  }


  virtual ~ListAgentInstallRecordsResponseBodyData() = default;
};
class ListAgentInstallRecordsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<vector<ListAgentInstallRecordsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> total{};

  ListAgentInstallRecordsResponseBody() {}

  explicit ListAgentInstallRecordsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
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
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListAgentInstallRecordsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAgentInstallRecordsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAgentInstallRecordsResponseBodyData>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListAgentInstallRecordsResponseBody() = default;
};
class ListAgentInstallRecordsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAgentInstallRecordsResponseBody> body{};

  ListAgentInstallRecordsResponse() {}

  explicit ListAgentInstallRecordsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAgentInstallRecordsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAgentInstallRecordsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAgentInstallRecordsResponse() = default;
};
class ListAgentsRequest : public Darabonba::Model {
public:
  shared_ptr<long> current{};
  shared_ptr<string> name{};
  shared_ptr<long> pageSize{};
  shared_ptr<string> type{};

  ListAgentsRequest() {}

  explicit ListAgentsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
  }


  virtual ~ListAgentsRequest() = default;
};
class ListAgentsResponseBodyDataVersions : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> installScript{};
  shared_ptr<string> uninstallScript{};
  shared_ptr<string> updatedAt{};
  shared_ptr<string> upgradeScript{};
  shared_ptr<string> version{};

  ListAgentsResponseBodyDataVersions() {}

  explicit ListAgentsResponseBodyDataVersions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["created_at"] = boost::any(*createdAt);
    }
    if (installScript) {
      res["install_script"] = boost::any(*installScript);
    }
    if (uninstallScript) {
      res["uninstall_script"] = boost::any(*uninstallScript);
    }
    if (updatedAt) {
      res["updated_at"] = boost::any(*updatedAt);
    }
    if (upgradeScript) {
      res["upgrade_script"] = boost::any(*upgradeScript);
    }
    if (version) {
      res["version"] = boost::any(*version);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created_at") != m.end() && !m["created_at"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["created_at"]));
    }
    if (m.find("install_script") != m.end() && !m["install_script"].empty()) {
      installScript = make_shared<string>(boost::any_cast<string>(m["install_script"]));
    }
    if (m.find("uninstall_script") != m.end() && !m["uninstall_script"].empty()) {
      uninstallScript = make_shared<string>(boost::any_cast<string>(m["uninstall_script"]));
    }
    if (m.find("updated_at") != m.end() && !m["updated_at"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updated_at"]));
    }
    if (m.find("upgrade_script") != m.end() && !m["upgrade_script"].empty()) {
      upgradeScript = make_shared<string>(boost::any_cast<string>(m["upgrade_script"]));
    }
    if (m.find("version") != m.end() && !m["version"].empty()) {
      version = make_shared<string>(boost::any_cast<string>(m["version"]));
    }
  }


  virtual ~ListAgentsResponseBodyDataVersions() = default;
};
class ListAgentsResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> createdAt{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> supportArch{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedAt{};
  shared_ptr<vector<ListAgentsResponseBodyDataVersions>> versions{};

  ListAgentsResponseBodyData() {}

  explicit ListAgentsResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdAt) {
      res["created_at"] = boost::any(*createdAt);
    }
    if (description) {
      res["description"] = boost::any(*description);
    }
    if (id) {
      res["id"] = boost::any(*id);
    }
    if (name) {
      res["name"] = boost::any(*name);
    }
    if (supportArch) {
      res["support_arch"] = boost::any(*supportArch);
    }
    if (type) {
      res["type"] = boost::any(*type);
    }
    if (updatedAt) {
      res["updated_at"] = boost::any(*updatedAt);
    }
    if (versions) {
      vector<boost::any> temp1;
      for(auto item1:*versions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["versions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("created_at") != m.end() && !m["created_at"].empty()) {
      createdAt = make_shared<string>(boost::any_cast<string>(m["created_at"]));
    }
    if (m.find("description") != m.end() && !m["description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["description"]));
    }
    if (m.find("id") != m.end() && !m["id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["id"]));
    }
    if (m.find("name") != m.end() && !m["name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["name"]));
    }
    if (m.find("support_arch") != m.end() && !m["support_arch"].empty()) {
      supportArch = make_shared<string>(boost::any_cast<string>(m["support_arch"]));
    }
    if (m.find("type") != m.end() && !m["type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["type"]));
    }
    if (m.find("updated_at") != m.end() && !m["updated_at"].empty()) {
      updatedAt = make_shared<string>(boost::any_cast<string>(m["updated_at"]));
    }
    if (m.find("versions") != m.end() && !m["versions"].empty()) {
      if (typeid(vector<boost::any>) == m["versions"].type()) {
        vector<ListAgentsResponseBodyDataVersions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["versions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAgentsResponseBodyDataVersions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        versions = make_shared<vector<ListAgentsResponseBodyDataVersions>>(expect1);
      }
    }
  }


  virtual ~ListAgentsResponseBodyData() = default;
};
class ListAgentsResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<vector<ListAgentsResponseBodyData>> data{};
  shared_ptr<string> message{};
  shared_ptr<long> total{};

  ListAgentsResponseBody() {}

  explicit ListAgentsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
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
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(vector<boost::any>) == m["data"].type()) {
        vector<ListAgentsResponseBodyData> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["data"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListAgentsResponseBodyData model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        data = make_shared<vector<ListAgentsResponseBodyData>>(expect1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListAgentsResponseBody() = default;
};
class ListAgentsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListAgentsResponseBody> body{};

  ListAgentsResponse() {}

  explicit ListAgentsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListAgentsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListAgentsResponseBody>(model1);
      }
    }
  }


  virtual ~ListAgentsResponse() = default;
};
class ListInstanceHealthRequest : public Darabonba::Model {
public:
  shared_ptr<string> cluster{};
  shared_ptr<long> current{};
  shared_ptr<double> end{};
  shared_ptr<string> instance{};
  shared_ptr<long> pageSize{};
  shared_ptr<double> start{};

  ListInstanceHealthRequest() {}

  explicit ListInstanceHealthRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (cluster) {
      res["cluster"] = boost::any(*cluster);
    }
    if (current) {
      res["current"] = boost::any(*current);
    }
    if (end) {
      res["end"] = boost::any(*end);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (pageSize) {
      res["pageSize"] = boost::any(*pageSize);
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
    if (m.find("current") != m.end() && !m["current"].empty()) {
      current = make_shared<long>(boost::any_cast<long>(m["current"]));
    }
    if (m.find("end") != m.end() && !m["end"].empty()) {
      end = make_shared<double>(boost::any_cast<double>(m["end"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("pageSize") != m.end() && !m["pageSize"].empty()) {
      pageSize = make_shared<long>(boost::any_cast<long>(m["pageSize"]));
    }
    if (m.find("start") != m.end() && !m["start"].empty()) {
      start = make_shared<double>(boost::any_cast<double>(m["start"]));
    }
  }


  virtual ~ListInstanceHealthRequest() = default;
};
class ListInstanceHealthResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<vector<string>> images{};
  shared_ptr<string> instance{};
  shared_ptr<string> namespace_{};
  shared_ptr<string> pod{};
  shared_ptr<string> regionId{};
  shared_ptr<double> score{};
  shared_ptr<string> status{};

  ListInstanceHealthResponseBodyData() {}

  explicit ListInstanceHealthResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (images) {
      res["images"] = boost::any(*images);
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
    if (regionId) {
      res["region_id"] = boost::any(*regionId);
    }
    if (score) {
      res["score"] = boost::any(*score);
    }
    if (status) {
      res["status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("images") != m.end() && !m["images"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["images"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["images"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      images = make_shared<vector<string>>(toVec1);
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
    if (m.find("region_id") != m.end() && !m["region_id"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["region_id"]));
    }
    if (m.find("score") != m.end() && !m["score"].empty()) {
      score = make_shared<double>(boost::any_cast<double>(m["score"]));
    }
    if (m.find("status") != m.end() && !m["status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["status"]));
    }
  }


  virtual ~ListInstanceHealthResponseBodyData() = default;
};
class ListInstanceHealthResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<ListInstanceHealthResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};
  shared_ptr<long> total{};

  ListInstanceHealthResponseBody() {}

  explicit ListInstanceHealthResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (total) {
      res["total"] = boost::any(*total);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        ListInstanceHealthResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<ListInstanceHealthResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("request_id") != m.end() && !m["request_id"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["request_id"]));
    }
    if (m.find("total") != m.end() && !m["total"].empty()) {
      total = make_shared<long>(boost::any_cast<long>(m["total"]));
    }
  }


  virtual ~ListInstanceHealthResponseBody() = default;
};
class ListInstanceHealthResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListInstanceHealthResponseBody> body{};

  ListInstanceHealthResponse() {}

  explicit ListInstanceHealthResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListInstanceHealthResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListInstanceHealthResponseBody>(model1);
      }
    }
  }


  virtual ~ListInstanceHealthResponse() = default;
};
class StartAIAnalysisRequest : public Darabonba::Model {
public:
  shared_ptr<string> channel{};
  shared_ptr<string> comms{};
  shared_ptr<string> instance{};
  shared_ptr<string> pids{};
  shared_ptr<string> region{};
  shared_ptr<long> timeout{};

  StartAIAnalysisRequest() {}

  explicit StartAIAnalysisRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (channel) {
      res["channel"] = boost::any(*channel);
    }
    if (comms) {
      res["comms"] = boost::any(*comms);
    }
    if (instance) {
      res["instance"] = boost::any(*instance);
    }
    if (pids) {
      res["pids"] = boost::any(*pids);
    }
    if (region) {
      res["region"] = boost::any(*region);
    }
    if (timeout) {
      res["timeout"] = boost::any(*timeout);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("channel") != m.end() && !m["channel"].empty()) {
      channel = make_shared<string>(boost::any_cast<string>(m["channel"]));
    }
    if (m.find("comms") != m.end() && !m["comms"].empty()) {
      comms = make_shared<string>(boost::any_cast<string>(m["comms"]));
    }
    if (m.find("instance") != m.end() && !m["instance"].empty()) {
      instance = make_shared<string>(boost::any_cast<string>(m["instance"]));
    }
    if (m.find("pids") != m.end() && !m["pids"].empty()) {
      pids = make_shared<string>(boost::any_cast<string>(m["pids"]));
    }
    if (m.find("region") != m.end() && !m["region"].empty()) {
      region = make_shared<string>(boost::any_cast<string>(m["region"]));
    }
    if (m.find("timeout") != m.end() && !m["timeout"].empty()) {
      timeout = make_shared<long>(boost::any_cast<long>(m["timeout"]));
    }
  }


  virtual ~StartAIAnalysisRequest() = default;
};
class StartAIAnalysisResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> analysisId{};

  StartAIAnalysisResponseBodyData() {}

  explicit StartAIAnalysisResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (analysisId) {
      res["analysis_id"] = boost::any(*analysisId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("analysis_id") != m.end() && !m["analysis_id"].empty()) {
      analysisId = make_shared<string>(boost::any_cast<string>(m["analysis_id"]));
    }
  }


  virtual ~StartAIAnalysisResponseBodyData() = default;
};
class StartAIAnalysisResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> code{};
  shared_ptr<StartAIAnalysisResponseBodyData> data{};
  shared_ptr<string> message{};
  shared_ptr<string> requestId{};

  StartAIAnalysisResponseBody() {}

  explicit StartAIAnalysisResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
      res["requestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        StartAIAnalysisResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<StartAIAnalysisResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("requestId") != m.end() && !m["requestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["requestId"]));
    }
  }


  virtual ~StartAIAnalysisResponseBody() = default;
};
class StartAIAnalysisResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<StartAIAnalysisResponseBody> body{};

  StartAIAnalysisResponse() {}

  explicit StartAIAnalysisResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        StartAIAnalysisResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<StartAIAnalysisResponseBody>(model1);
      }
    }
  }


  virtual ~StartAIAnalysisResponse() = default;
};
class UninstallAgentRequestInstances : public Darabonba::Model {
public:
  shared_ptr<string> instance{};
  shared_ptr<string> region{};

  UninstallAgentRequestInstances() {}

  explicit UninstallAgentRequestInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UninstallAgentRequestInstances() = default;
};
class UninstallAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentVersion{};
  shared_ptr<vector<UninstallAgentRequestInstances>> instances{};

  UninstallAgentRequest() {}

  explicit UninstallAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agent_id"] = boost::any(*agentId);
    }
    if (agentVersion) {
      res["agent_version"] = boost::any(*agentVersion);
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
    if (m.find("agent_id") != m.end() && !m["agent_id"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agent_id"]));
    }
    if (m.find("agent_version") != m.end() && !m["agent_version"].empty()) {
      agentVersion = make_shared<string>(boost::any_cast<string>(m["agent_version"]));
    }
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<UninstallAgentRequestInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UninstallAgentRequestInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<UninstallAgentRequestInstances>>(expect1);
      }
    }
  }


  virtual ~UninstallAgentRequest() = default;
};
class UninstallAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  UninstallAgentResponseBodyData() {}

  explicit UninstallAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UninstallAgentResponseBodyData() = default;
};
class UninstallAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<UninstallAgentResponseBodyData> data{};
  shared_ptr<string> message{};

  UninstallAgentResponseBody() {}

  explicit UninstallAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UninstallAgentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UninstallAgentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~UninstallAgentResponseBody() = default;
};
class UninstallAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UninstallAgentResponseBody> body{};

  UninstallAgentResponse() {}

  explicit UninstallAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UninstallAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UninstallAgentResponseBody>(model1);
      }
    }
  }


  virtual ~UninstallAgentResponse() = default;
};
class UpgradeAgentRequestInstances : public Darabonba::Model {
public:
  shared_ptr<string> instance{};
  shared_ptr<string> region{};

  UpgradeAgentRequestInstances() {}

  explicit UpgradeAgentRequestInstances(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeAgentRequestInstances() = default;
};
class UpgradeAgentRequest : public Darabonba::Model {
public:
  shared_ptr<string> agentId{};
  shared_ptr<string> agentVersion{};
  shared_ptr<vector<UpgradeAgentRequestInstances>> instances{};

  UpgradeAgentRequest() {}

  explicit UpgradeAgentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (agentId) {
      res["agent_id"] = boost::any(*agentId);
    }
    if (agentVersion) {
      res["agent_version"] = boost::any(*agentVersion);
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
    if (m.find("agent_id") != m.end() && !m["agent_id"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["agent_id"]));
    }
    if (m.find("agent_version") != m.end() && !m["agent_version"].empty()) {
      agentVersion = make_shared<string>(boost::any_cast<string>(m["agent_version"]));
    }
    if (m.find("instances") != m.end() && !m["instances"].empty()) {
      if (typeid(vector<boost::any>) == m["instances"].type()) {
        vector<UpgradeAgentRequestInstances> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["instances"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            UpgradeAgentRequestInstances model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instances = make_shared<vector<UpgradeAgentRequestInstances>>(expect1);
      }
    }
  }


  virtual ~UpgradeAgentRequest() = default;
};
class UpgradeAgentResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> taskId{};

  UpgradeAgentResponseBodyData() {}

  explicit UpgradeAgentResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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


  virtual ~UpgradeAgentResponseBodyData() = default;
};
class UpgradeAgentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> code{};
  shared_ptr<UpgradeAgentResponseBodyData> data{};
  shared_ptr<string> message{};

  UpgradeAgentResponseBody() {}

  explicit UpgradeAgentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (code) {
      res["code"] = boost::any(*code);
    }
    if (data) {
      res["data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("code") != m.end() && !m["code"].empty()) {
      code = make_shared<string>(boost::any_cast<string>(m["code"]));
    }
    if (m.find("data") != m.end() && !m["data"].empty()) {
      if (typeid(map<string, boost::any>) == m["data"].type()) {
        UpgradeAgentResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["data"]));
        data = make_shared<UpgradeAgentResponseBodyData>(model1);
      }
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
  }


  virtual ~UpgradeAgentResponseBody() = default;
};
class UpgradeAgentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpgradeAgentResponseBody> body{};

  UpgradeAgentResponse() {}

  explicit UpgradeAgentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpgradeAgentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpgradeAgentResponseBody>(model1);
      }
    }
  }


  virtual ~UpgradeAgentResponse() = default;
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
  GetAIQueryResultResponse getAIQueryResultWithOptions(shared_ptr<GetAIQueryResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAIQueryResultResponse getAIQueryResult(shared_ptr<GetAIQueryResultRequest> request);
  GetAbnormalEventsCountResponse getAbnormalEventsCountWithOptions(shared_ptr<GetAbnormalEventsCountRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAbnormalEventsCountResponse getAbnormalEventsCount(shared_ptr<GetAbnormalEventsCountRequest> request);
  GetAgentResponse getAgentWithOptions(shared_ptr<GetAgentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentResponse getAgent(shared_ptr<GetAgentRequest> request);
  GetAgentTaskResponse getAgentTaskWithOptions(shared_ptr<GetAgentTaskRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetAgentTaskResponse getAgentTask(shared_ptr<GetAgentTaskRequest> request);
  GetDiagnosisResultResponse getDiagnosisResultWithOptions(shared_ptr<GetDiagnosisResultRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetDiagnosisResultResponse getDiagnosisResult(shared_ptr<GetDiagnosisResultRequest> request);
  GetHealthPercentageResponse getHealthPercentageWithOptions(shared_ptr<GetHealthPercentageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHealthPercentageResponse getHealthPercentage(shared_ptr<GetHealthPercentageRequest> request);
  GetHostCountResponse getHostCountWithOptions(shared_ptr<GetHostCountRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHostCountResponse getHostCount(shared_ptr<GetHostCountRequest> request);
  GetHotspotAnalysisResponse getHotspotAnalysisWithOptions(shared_ptr<GetHotspotAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotspotAnalysisResponse getHotspotAnalysis(shared_ptr<GetHotspotAnalysisRequest> request);
  GetHotspotInstanceListResponse getHotspotInstanceListWithOptions(shared_ptr<GetHotspotInstanceListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotspotInstanceListResponse getHotspotInstanceList(shared_ptr<GetHotspotInstanceListRequest> request);
  GetHotspotPidListResponse getHotspotPidListWithOptions(shared_ptr<GetHotspotPidListRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetHotspotPidListResponse getHotspotPidList(shared_ptr<GetHotspotPidListRequest> request);
  GetListRecordResponse getListRecordWithOptions(shared_ptr<GetListRecordRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetListRecordResponse getListRecord(shared_ptr<GetListRecordRequest> request);
  GetProblemPercentageResponse getProblemPercentageWithOptions(shared_ptr<GetProblemPercentageRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetProblemPercentageResponse getProblemPercentage(shared_ptr<GetProblemPercentageRequest> request);
  GetRangeScoreResponse getRangeScoreWithOptions(shared_ptr<GetRangeScoreRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetRangeScoreResponse getRangeScore(shared_ptr<GetRangeScoreRequest> request);
  GetResourcesResponse getResourcesWithOptions(shared_ptr<GetResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetResourcesResponse getResources(shared_ptr<GetResourcesRequest> request);
  InstallAgentResponse installAgentWithOptions(shared_ptr<InstallAgentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InstallAgentResponse installAgent(shared_ptr<InstallAgentRequest> request);
  InvokeAnomalyDiagnosisResponse invokeAnomalyDiagnosisWithOptions(shared_ptr<InvokeAnomalyDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvokeAnomalyDiagnosisResponse invokeAnomalyDiagnosis(shared_ptr<InvokeAnomalyDiagnosisRequest> request);
  InvokeDiagnosisResponse invokeDiagnosisWithOptions(shared_ptr<InvokeDiagnosisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  InvokeDiagnosisResponse invokeDiagnosis(shared_ptr<InvokeDiagnosisRequest> request);
  ListAbnormalyEventsResponse listAbnormalyEventsWithOptions(shared_ptr<ListAbnormalyEventsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAbnormalyEventsResponse listAbnormalyEvents(shared_ptr<ListAbnormalyEventsRequest> request);
  ListAgentInstallRecordsResponse listAgentInstallRecordsWithOptions(shared_ptr<ListAgentInstallRecordsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAgentInstallRecordsResponse listAgentInstallRecords(shared_ptr<ListAgentInstallRecordsRequest> request);
  ListAgentsResponse listAgentsWithOptions(shared_ptr<ListAgentsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListAgentsResponse listAgents(shared_ptr<ListAgentsRequest> request);
  ListInstanceHealthResponse listInstanceHealthWithOptions(shared_ptr<ListInstanceHealthRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListInstanceHealthResponse listInstanceHealth(shared_ptr<ListInstanceHealthRequest> request);
  StartAIAnalysisResponse startAIAnalysisWithOptions(shared_ptr<StartAIAnalysisRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  StartAIAnalysisResponse startAIAnalysis(shared_ptr<StartAIAnalysisRequest> request);
  UninstallAgentResponse uninstallAgentWithOptions(shared_ptr<UninstallAgentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UninstallAgentResponse uninstallAgent(shared_ptr<UninstallAgentRequest> request);
  UpgradeAgentResponse upgradeAgentWithOptions(shared_ptr<UpgradeAgentRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpgradeAgentResponse upgradeAgent(shared_ptr<UpgradeAgentRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_SysOM20231230

#endif
