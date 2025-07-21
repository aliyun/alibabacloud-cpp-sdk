// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_MOBI20240411_H_
#define ALIBABACLOUD_MOBI20240411_H_

#include <alibabacloud/open_api.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>

using namespace std;

namespace Alibabacloud_Mobi20240411 {
class CreateAppFromTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> actualParameters{};
  shared_ptr<string> agentId{};
  shared_ptr<string> connectionsContent{};
  shared_ptr<string> databasesContent{};
  shared_ptr<string> description{};
  shared_ptr<string> from{};
  shared_ptr<string> icon{};
  shared_ptr<string> name{};
  shared_ptr<string> templateId{};
  shared_ptr<string> type{};
  shared_ptr<string> variablesContent{};
  shared_ptr<string> workspaceId{};

  CreateAppFromTemplateRequest() {}

  explicit CreateAppFromTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actualParameters) {
      res["ActualParameters"] = boost::any(*actualParameters);
    }
    if (agentId) {
      res["AgentId"] = boost::any(*agentId);
    }
    if (connectionsContent) {
      res["ConnectionsContent"] = boost::any(*connectionsContent);
    }
    if (databasesContent) {
      res["DatabasesContent"] = boost::any(*databasesContent);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (from) {
      res["From"] = boost::any(*from);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (variablesContent) {
      res["VariablesContent"] = boost::any(*variablesContent);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActualParameters") != m.end() && !m["ActualParameters"].empty()) {
      actualParameters = make_shared<string>(boost::any_cast<string>(m["ActualParameters"]));
    }
    if (m.find("AgentId") != m.end() && !m["AgentId"].empty()) {
      agentId = make_shared<string>(boost::any_cast<string>(m["AgentId"]));
    }
    if (m.find("ConnectionsContent") != m.end() && !m["ConnectionsContent"].empty()) {
      connectionsContent = make_shared<string>(boost::any_cast<string>(m["ConnectionsContent"]));
    }
    if (m.find("DatabasesContent") != m.end() && !m["DatabasesContent"].empty()) {
      databasesContent = make_shared<string>(boost::any_cast<string>(m["DatabasesContent"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("From") != m.end() && !m["From"].empty()) {
      from = make_shared<string>(boost::any_cast<string>(m["From"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("VariablesContent") != m.end() && !m["VariablesContent"].empty()) {
      variablesContent = make_shared<string>(boost::any_cast<string>(m["VariablesContent"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateAppFromTemplateRequest() = default;
};
class CreateAppFromTemplateResponseBodyData : public Darabonba::Model {
public:
  shared_ptr<string> appId{};
  shared_ptr<string> description{};
  shared_ptr<string> gmtCreate{};
  shared_ptr<string> gmtModified{};
  shared_ptr<string> icon{};
  shared_ptr<string> name{};
  shared_ptr<string> workspaceId{};

  CreateAppFromTemplateResponseBodyData() {}

  explicit CreateAppFromTemplateResponseBodyData(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (appId) {
      res["AppId"] = boost::any(*appId);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (gmtCreate) {
      res["GmtCreate"] = boost::any(*gmtCreate);
    }
    if (gmtModified) {
      res["GmtModified"] = boost::any(*gmtModified);
    }
    if (icon) {
      res["Icon"] = boost::any(*icon);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (workspaceId) {
      res["WorkspaceId"] = boost::any(*workspaceId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AppId") != m.end() && !m["AppId"].empty()) {
      appId = make_shared<string>(boost::any_cast<string>(m["AppId"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("GmtCreate") != m.end() && !m["GmtCreate"].empty()) {
      gmtCreate = make_shared<string>(boost::any_cast<string>(m["GmtCreate"]));
    }
    if (m.find("GmtModified") != m.end() && !m["GmtModified"].empty()) {
      gmtModified = make_shared<string>(boost::any_cast<string>(m["GmtModified"]));
    }
    if (m.find("Icon") != m.end() && !m["Icon"].empty()) {
      icon = make_shared<string>(boost::any_cast<string>(m["Icon"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("WorkspaceId") != m.end() && !m["WorkspaceId"].empty()) {
      workspaceId = make_shared<string>(boost::any_cast<string>(m["WorkspaceId"]));
    }
  }


  virtual ~CreateAppFromTemplateResponseBodyData() = default;
};
class CreateAppFromTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreateAppFromTemplateResponseBodyData> data{};
  shared_ptr<string> requestId{};

  CreateAppFromTemplateResponseBody() {}

  explicit CreateAppFromTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (data) {
      res["Data"] = data ? boost::any(data->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Data") != m.end() && !m["Data"].empty()) {
      if (typeid(map<string, boost::any>) == m["Data"].type()) {
        CreateAppFromTemplateResponseBodyData model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Data"]));
        data = make_shared<CreateAppFromTemplateResponseBodyData>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreateAppFromTemplateResponseBody() = default;
};
class CreateAppFromTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateAppFromTemplateResponseBody> body{};

  CreateAppFromTemplateResponse() {}

  explicit CreateAppFromTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateAppFromTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateAppFromTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreateAppFromTemplateResponse() = default;
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
  CreateAppFromTemplateResponse createAppFromTemplateWithOptions(shared_ptr<CreateAppFromTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateAppFromTemplateResponse createAppFromTemplate(shared_ptr<CreateAppFromTemplateRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Mobi20240411

#endif
