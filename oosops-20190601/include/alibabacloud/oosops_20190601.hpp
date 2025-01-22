// This file is auto-generated, don't edit it. Thanks.

#ifndef ALIBABACLOUD_OOSOPS20190601_H_
#define ALIBABACLOUD_OOSOPS20190601_H_

#include <alibabacloud/open_api.hpp>
#include <boost/any.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

namespace Alibabacloud_Oosops20190601 {
class AuditPublicTemplateRegistrationRequest : public Darabonba::Model {
public:
  shared_ptr<string> auditAction{};
  shared_ptr<string> comment{};
  shared_ptr<string> regionId{};
  shared_ptr<string> registrationId{};

  AuditPublicTemplateRegistrationRequest() {}

  explicit AuditPublicTemplateRegistrationRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (auditAction) {
      res["AuditAction"] = boost::any(*auditAction);
    }
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AuditAction") != m.end() && !m["AuditAction"].empty()) {
      auditAction = make_shared<string>(boost::any_cast<string>(m["AuditAction"]));
    }
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
  }


  virtual ~AuditPublicTemplateRegistrationRequest() = default;
};
class AuditPublicTemplateRegistrationResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> detail{};
  shared_ptr<string> registrationId{};
  shared_ptr<string> requestId{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  AuditPublicTemplateRegistrationResponseBody() {}

  explicit AuditPublicTemplateRegistrationResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~AuditPublicTemplateRegistrationResponseBody() = default;
};
class AuditPublicTemplateRegistrationResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<AuditPublicTemplateRegistrationResponseBody> body{};

  AuditPublicTemplateRegistrationResponse() {}

  explicit AuditPublicTemplateRegistrationResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        AuditPublicTemplateRegistrationResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<AuditPublicTemplateRegistrationResponseBody>(model1);
      }
    }
  }


  virtual ~AuditPublicTemplateRegistrationResponse() = default;
};
class CreateActionRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<string> actionType{};
  shared_ptr<string> content{};
  shared_ptr<long> popularity{};
  shared_ptr<string> regionId{};

  CreateActionRequest() {}

  explicit CreateActionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreateActionRequest() = default;
};
class CreateActionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<string> actionType{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<long> popularity{};
  shared_ptr<string> properties{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateVersion{};

  CreateActionResponseBody() {}

  explicit CreateActionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~CreateActionResponseBody() = default;
};
class CreateActionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreateActionResponseBody> body{};

  CreateActionResponse() {}

  explicit CreateActionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreateActionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreateActionResponseBody>(model1);
      }
    }
  }


  virtual ~CreateActionResponse() = default;
};
class CreatePublicParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> clientToken{};
  shared_ptr<string> constraints{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> regionId{};
  shared_ptr<string> value{};

  CreatePublicParameterRequest() {}

  explicit CreatePublicParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (constraints) {
      res["Constraints"] = boost::any(*constraints);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Constraints") != m.end() && !m["Constraints"].empty()) {
      constraints = make_shared<string>(boost::any_cast<string>(m["Constraints"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~CreatePublicParameterRequest() = default;
};
class CreatePublicParameterResponseBodyParameter : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  CreatePublicParameterResponseBodyParameter() {}

  explicit CreatePublicParameterResponseBodyParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraints) {
      res["Constraints"] = boost::any(*constraints);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Constraints") != m.end() && !m["Constraints"].empty()) {
      constraints = make_shared<string>(boost::any_cast<string>(m["Constraints"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~CreatePublicParameterResponseBodyParameter() = default;
};
class CreatePublicParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePublicParameterResponseBodyParameter> parameter{};
  shared_ptr<string> requestId{};

  CreatePublicParameterResponseBody() {}

  explicit CreatePublicParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      res["Parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parameter"].type()) {
        CreatePublicParameterResponseBodyParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameter"]));
        parameter = make_shared<CreatePublicParameterResponseBodyParameter>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePublicParameterResponseBody() = default;
};
class CreatePublicParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePublicParameterResponseBody> body{};

  CreatePublicParameterResponse() {}

  explicit CreatePublicParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePublicParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePublicParameterResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePublicParameterResponse() = default;
};
class CreatePublicPatchBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> regionId{};

  CreatePublicPatchBaselineRequest() {}

  explicit CreatePublicPatchBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalRules") != m.end() && !m["ApprovalRules"].empty()) {
      approvalRules = make_shared<string>(boost::any_cast<string>(m["ApprovalRules"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~CreatePublicPatchBaselineRequest() = default;
};
class CreatePublicPatchBaselineResponseBodyPatchBaseline : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> shareType{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  CreatePublicPatchBaselineResponseBodyPatchBaseline() {}

  explicit CreatePublicPatchBaselineResponseBodyPatchBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalRules") != m.end() && !m["ApprovalRules"].empty()) {
      approvalRules = make_shared<string>(boost::any_cast<string>(m["ApprovalRules"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~CreatePublicPatchBaselineResponseBodyPatchBaseline() = default;
};
class CreatePublicPatchBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<CreatePublicPatchBaselineResponseBodyPatchBaseline> patchBaseline{};
  shared_ptr<string> requestId{};

  CreatePublicPatchBaselineResponseBody() {}

  explicit CreatePublicPatchBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (patchBaseline) {
      res["PatchBaseline"] = patchBaseline ? boost::any(patchBaseline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PatchBaseline") != m.end() && !m["PatchBaseline"].empty()) {
      if (typeid(map<string, boost::any>) == m["PatchBaseline"].type()) {
        CreatePublicPatchBaselineResponseBodyPatchBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PatchBaseline"]));
        patchBaseline = make_shared<CreatePublicPatchBaselineResponseBodyPatchBaseline>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~CreatePublicPatchBaselineResponseBody() = default;
};
class CreatePublicPatchBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePublicPatchBaselineResponseBody> body{};

  CreatePublicPatchBaselineResponse() {}

  explicit CreatePublicPatchBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePublicPatchBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePublicPatchBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePublicPatchBaselineResponse() = default;
};
class CreatePublicTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> content{};
  shared_ptr<bool> isExample{};
  shared_ptr<long> popularity{};
  shared_ptr<string> publisher{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> versionName{};

  CreatePublicTemplateRequest() {}

  explicit CreatePublicTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (isExample) {
      res["IsExample"] = boost::any(*isExample);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (publisher) {
      res["Publisher"] = boost::any(*publisher);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("IsExample") != m.end() && !m["IsExample"].empty()) {
      isExample = make_shared<bool>(boost::any_cast<bool>(m["IsExample"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("Publisher") != m.end() && !m["Publisher"].empty()) {
      publisher = make_shared<string>(boost::any_cast<string>(m["Publisher"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~CreatePublicTemplateRequest() = default;
};
class CreatePublicTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> hash{};
  shared_ptr<long> popularity{};
  shared_ptr<string> shareType{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  CreatePublicTemplateResponseBodyTemplate() {}

  explicit CreatePublicTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~CreatePublicTemplateResponseBodyTemplate() = default;
};
class CreatePublicTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<CreatePublicTemplateResponseBodyTemplate> template_{};

  CreatePublicTemplateResponseBody() {}

  explicit CreatePublicTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        CreatePublicTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<CreatePublicTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~CreatePublicTemplateResponseBody() = default;
};
class CreatePublicTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<CreatePublicTemplateResponseBody> body{};

  CreatePublicTemplateResponse() {}

  explicit CreatePublicTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        CreatePublicTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<CreatePublicTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~CreatePublicTemplateResponse() = default;
};
class DeleteFailureMsgRequest : public Darabonba::Model {
public:
  shared_ptr<string> operation{};
  shared_ptr<string> requestFingerprint{};

  DeleteFailureMsgRequest() {}

  explicit DeleteFailureMsgRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (operation) {
      res["Operation"] = boost::any(*operation);
    }
    if (requestFingerprint) {
      res["RequestFingerprint"] = boost::any(*requestFingerprint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Operation") != m.end() && !m["Operation"].empty()) {
      operation = make_shared<string>(boost::any_cast<string>(m["Operation"]));
    }
    if (m.find("RequestFingerprint") != m.end() && !m["RequestFingerprint"].empty()) {
      requestFingerprint = make_shared<string>(boost::any_cast<string>(m["RequestFingerprint"]));
    }
  }


  virtual ~DeleteFailureMsgRequest() = default;
};
class DeleteFailureMsgResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeleteFailureMsgResponseBody() {}

  explicit DeleteFailureMsgResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeleteFailureMsgResponseBody() = default;
};
class DeleteFailureMsgResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeleteFailureMsgResponseBody> body{};

  DeleteFailureMsgResponse() {}

  explicit DeleteFailureMsgResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeleteFailureMsgResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeleteFailureMsgResponseBody>(model1);
      }
    }
  }


  virtual ~DeleteFailureMsgResponse() = default;
};
class DeletePublicParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  DeletePublicParameterRequest() {}

  explicit DeletePublicParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~DeletePublicParameterRequest() = default;
};
class DeletePublicParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePublicParameterResponseBody() {}

  explicit DeletePublicParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeletePublicParameterResponseBody() = default;
};
class DeletePublicParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePublicParameterResponseBody> body{};

  DeletePublicParameterResponse() {}

  explicit DeletePublicParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePublicParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePublicParameterResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePublicParameterResponse() = default;
};
class DeletePublicPatchBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};

  DeletePublicPatchBaselineRequest() {}

  explicit DeletePublicPatchBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
  }


  virtual ~DeletePublicPatchBaselineRequest() = default;
};
class DeletePublicPatchBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePublicPatchBaselineResponseBody() {}

  explicit DeletePublicPatchBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeletePublicPatchBaselineResponseBody() = default;
};
class DeletePublicPatchBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePublicPatchBaselineResponseBody> body{};

  DeletePublicPatchBaselineResponse() {}

  explicit DeletePublicPatchBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePublicPatchBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePublicPatchBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePublicPatchBaselineResponse() = default;
};
class DeletePublicTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};

  DeletePublicTemplateRequest() {}

  explicit DeletePublicTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~DeletePublicTemplateRequest() = default;
};
class DeletePublicTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  DeletePublicTemplateResponseBody() {}

  explicit DeletePublicTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~DeletePublicTemplateResponseBody() = default;
};
class DeletePublicTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DeletePublicTemplateResponseBody> body{};

  DeletePublicTemplateResponse() {}

  explicit DeletePublicTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DeletePublicTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DeletePublicTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~DeletePublicTemplateResponse() = default;
};
class DoCheckResourceRequest : public Darabonba::Model {
public:
  shared_ptr<string> bid{};
  shared_ptr<string> country{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<long> level{};
  shared_ptr<string> message{};
  shared_ptr<string> pk{};
  shared_ptr<string> prompt{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> url{};

  DoCheckResourceRequest() {}

  explicit DoCheckResourceRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (bid) {
      res["bid"] = boost::any(*bid);
    }
    if (country) {
      res["country"] = boost::any(*country);
    }
    if (gmtWakeup) {
      res["gmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["hid"] = boost::any(*hid);
    }
    if (interrupt) {
      res["interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["invoker"] = boost::any(*invoker);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (pk) {
      res["pk"] = boost::any(*pk);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (taskExtraData) {
      res["taskExtraData"] = boost::any(*taskExtraData);
    }
    if (taskIdentifier) {
      res["taskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("bid") != m.end() && !m["bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["bid"]));
    }
    if (m.find("country") != m.end() && !m["country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["country"]));
    }
    if (m.find("gmtWakeup") != m.end() && !m["gmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["gmtWakeup"]));
    }
    if (m.find("hid") != m.end() && !m["hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["hid"]));
    }
    if (m.find("interrupt") != m.end() && !m["interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["interrupt"]));
    }
    if (m.find("invoker") != m.end() && !m["invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["invoker"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["level"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("pk") != m.end() && !m["pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["pk"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("taskExtraData") != m.end() && !m["taskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["taskExtraData"]));
    }
    if (m.find("taskIdentifier") != m.end() && !m["taskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["taskIdentifier"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~DoCheckResourceRequest() = default;
};
class DoCheckResourceResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<string> bid{};
  shared_ptr<string> country{};
  shared_ptr<string> gmtWakeup{};
  shared_ptr<long> hid{};
  shared_ptr<bool> interrupt{};
  shared_ptr<string> invoker{};
  shared_ptr<long> level{};
  shared_ptr<string> message{};
  shared_ptr<string> pk{};
  shared_ptr<string> prompt{};
  shared_ptr<bool> success{};
  shared_ptr<string> taskExtraData{};
  shared_ptr<string> taskIdentifier{};
  shared_ptr<string> url{};

  DoCheckResourceResponseBody() {}

  explicit DoCheckResourceResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (bid) {
      res["bid"] = boost::any(*bid);
    }
    if (country) {
      res["country"] = boost::any(*country);
    }
    if (gmtWakeup) {
      res["gmtWakeup"] = boost::any(*gmtWakeup);
    }
    if (hid) {
      res["hid"] = boost::any(*hid);
    }
    if (interrupt) {
      res["interrupt"] = boost::any(*interrupt);
    }
    if (invoker) {
      res["invoker"] = boost::any(*invoker);
    }
    if (level) {
      res["level"] = boost::any(*level);
    }
    if (message) {
      res["message"] = boost::any(*message);
    }
    if (pk) {
      res["pk"] = boost::any(*pk);
    }
    if (prompt) {
      res["prompt"] = boost::any(*prompt);
    }
    if (success) {
      res["success"] = boost::any(*success);
    }
    if (taskExtraData) {
      res["taskExtraData"] = boost::any(*taskExtraData);
    }
    if (taskIdentifier) {
      res["taskIdentifier"] = boost::any(*taskIdentifier);
    }
    if (url) {
      res["url"] = boost::any(*url);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("bid") != m.end() && !m["bid"].empty()) {
      bid = make_shared<string>(boost::any_cast<string>(m["bid"]));
    }
    if (m.find("country") != m.end() && !m["country"].empty()) {
      country = make_shared<string>(boost::any_cast<string>(m["country"]));
    }
    if (m.find("gmtWakeup") != m.end() && !m["gmtWakeup"].empty()) {
      gmtWakeup = make_shared<string>(boost::any_cast<string>(m["gmtWakeup"]));
    }
    if (m.find("hid") != m.end() && !m["hid"].empty()) {
      hid = make_shared<long>(boost::any_cast<long>(m["hid"]));
    }
    if (m.find("interrupt") != m.end() && !m["interrupt"].empty()) {
      interrupt = make_shared<bool>(boost::any_cast<bool>(m["interrupt"]));
    }
    if (m.find("invoker") != m.end() && !m["invoker"].empty()) {
      invoker = make_shared<string>(boost::any_cast<string>(m["invoker"]));
    }
    if (m.find("level") != m.end() && !m["level"].empty()) {
      level = make_shared<long>(boost::any_cast<long>(m["level"]));
    }
    if (m.find("message") != m.end() && !m["message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["message"]));
    }
    if (m.find("pk") != m.end() && !m["pk"].empty()) {
      pk = make_shared<string>(boost::any_cast<string>(m["pk"]));
    }
    if (m.find("prompt") != m.end() && !m["prompt"].empty()) {
      prompt = make_shared<string>(boost::any_cast<string>(m["prompt"]));
    }
    if (m.find("success") != m.end() && !m["success"].empty()) {
      success = make_shared<bool>(boost::any_cast<bool>(m["success"]));
    }
    if (m.find("taskExtraData") != m.end() && !m["taskExtraData"].empty()) {
      taskExtraData = make_shared<string>(boost::any_cast<string>(m["taskExtraData"]));
    }
    if (m.find("taskIdentifier") != m.end() && !m["taskIdentifier"].empty()) {
      taskIdentifier = make_shared<string>(boost::any_cast<string>(m["taskIdentifier"]));
    }
    if (m.find("url") != m.end() && !m["url"].empty()) {
      url = make_shared<string>(boost::any_cast<string>(m["url"]));
    }
  }


  virtual ~DoCheckResourceResponseBody() = default;
};
class DoCheckResourceResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<DoCheckResourceResponseBody> body{};

  DoCheckResourceResponse() {}

  explicit DoCheckResourceResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        DoCheckResourceResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<DoCheckResourceResponseBody>(model1);
      }
    }
  }


  virtual ~DoCheckResourceResponse() = default;
};
class GetActionRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<string> regionId{};

  GetActionRequest() {}

  explicit GetActionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetActionRequest() = default;
};
class GetActionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<string> actionType{};
  shared_ptr<vector<uint8_t>> content{};
  shared_ptr<string> createTime{};
  shared_ptr<string> modifiedTime{};
  shared_ptr<string> popularity{};
  shared_ptr<string> requestId{};

  GetActionResponseBody() {}

  explicit GetActionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (createTime) {
      res["CreateTime"] = boost::any(*createTime);
    }
    if (modifiedTime) {
      res["ModifiedTime"] = boost::any(*modifiedTime);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<vector<uint8_t>>(boost::any_cast<vector<uint8_t>>(m["Content"]));
    }
    if (m.find("CreateTime") != m.end() && !m["CreateTime"].empty()) {
      createTime = make_shared<string>(boost::any_cast<string>(m["CreateTime"]));
    }
    if (m.find("ModifiedTime") != m.end() && !m["ModifiedTime"].empty()) {
      modifiedTime = make_shared<string>(boost::any_cast<string>(m["ModifiedTime"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<string>(boost::any_cast<string>(m["Popularity"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetActionResponseBody() = default;
};
class GetActionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetActionResponseBody> body{};

  GetActionResponse() {}

  explicit GetActionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetActionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetActionResponseBody>(model1);
      }
    }
  }


  virtual ~GetActionResponse() = default;
};
class GetFlowControlRequest : public Darabonba::Model {
public:
  shared_ptr<string> api{};
  shared_ptr<string> service{};
  shared_ptr<long> type{};
  shared_ptr<string> uid{};

  GetFlowControlRequest() {}

  explicit GetFlowControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (api) {
      res["Api"] = boost::any(*api);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Api") != m.end() && !m["Api"].empty()) {
      api = make_shared<string>(boost::any_cast<string>(m["Api"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetFlowControlRequest() = default;
};
class GetFlowControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<long> value{};

  GetFlowControlResponseBody() {}

  explicit GetFlowControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["Value"]));
    }
  }


  virtual ~GetFlowControlResponseBody() = default;
};
class GetFlowControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetFlowControlResponseBody> body{};

  GetFlowControlResponse() {}

  explicit GetFlowControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetFlowControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetFlowControlResponseBody>(model1);
      }
    }
  }


  virtual ~GetFlowControlResponse() = default;
};
class GetPublicParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> regionId{};

  GetPublicParameterRequest() {}

  explicit GetPublicParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetPublicParameterRequest() = default;
};
class GetPublicParameterResponseBodyParameter : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};
  shared_ptr<string> value{};

  GetPublicParameterResponseBodyParameter() {}

  explicit GetPublicParameterResponseBodyParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraints) {
      res["Constraints"] = boost::any(*constraints);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Constraints") != m.end() && !m["Constraints"].empty()) {
      constraints = make_shared<string>(boost::any_cast<string>(m["Constraints"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~GetPublicParameterResponseBodyParameter() = default;
};
class GetPublicParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPublicParameterResponseBodyParameter> parameter{};
  shared_ptr<string> requestId{};

  GetPublicParameterResponseBody() {}

  explicit GetPublicParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      res["Parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parameter"].type()) {
        GetPublicParameterResponseBodyParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameter"]));
        parameter = make_shared<GetPublicParameterResponseBodyParameter>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPublicParameterResponseBody() = default;
};
class GetPublicParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPublicParameterResponseBody> body{};

  GetPublicParameterResponse() {}

  explicit GetPublicParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublicParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublicParameterResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublicParameterResponse() = default;
};
class GetPublicPatchBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  GetPublicPatchBaselineRequest() {}

  explicit GetPublicPatchBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetPublicPatchBaselineRequest() = default;
};
class GetPublicPatchBaselineResponseBodyPatchBaseline : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> shareType{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  GetPublicPatchBaselineResponseBodyPatchBaseline() {}

  explicit GetPublicPatchBaselineResponseBodyPatchBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalRules") != m.end() && !m["ApprovalRules"].empty()) {
      approvalRules = make_shared<string>(boost::any_cast<string>(m["ApprovalRules"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~GetPublicPatchBaselineResponseBodyPatchBaseline() = default;
};
class GetPublicPatchBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetPublicPatchBaselineResponseBodyPatchBaseline> patchBaseline{};
  shared_ptr<string> requestId{};

  GetPublicPatchBaselineResponseBody() {}

  explicit GetPublicPatchBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (patchBaseline) {
      res["PatchBaseline"] = patchBaseline ? boost::any(patchBaseline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PatchBaseline") != m.end() && !m["PatchBaseline"].empty()) {
      if (typeid(map<string, boost::any>) == m["PatchBaseline"].type()) {
        GetPublicPatchBaselineResponseBodyPatchBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PatchBaseline"]));
        patchBaseline = make_shared<GetPublicPatchBaselineResponseBodyPatchBaseline>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~GetPublicPatchBaselineResponseBody() = default;
};
class GetPublicPatchBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPublicPatchBaselineResponseBody> body{};

  GetPublicPatchBaselineResponse() {}

  explicit GetPublicPatchBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublicPatchBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublicPatchBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublicPatchBaselineResponse() = default;
};
class GetPublicTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  GetPublicTemplateRequest() {}

  explicit GetPublicTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GetPublicTemplateRequest() = default;
};
class GetPublicTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> hash{};
  shared_ptr<long> popularity{};
  shared_ptr<string> shareType{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  GetPublicTemplateResponseBodyTemplate() {}

  explicit GetPublicTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~GetPublicTemplateResponseBodyTemplate() = default;
};
class GetPublicTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};
  shared_ptr<GetPublicTemplateResponseBodyTemplate> template_{};

  GetPublicTemplateResponseBody() {}

  explicit GetPublicTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        GetPublicTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<GetPublicTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~GetPublicTemplateResponseBody() = default;
};
class GetPublicTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetPublicTemplateResponseBody> body{};

  GetPublicTemplateResponse() {}

  explicit GetPublicTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetPublicTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetPublicTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetPublicTemplateResponse() = default;
};
class GetQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> quotaName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> uid{};

  GetQuotaRequest() {}

  explicit GetQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetQuotaRequest() = default;
};
class GetQuotaResponseBodyQuota : public Darabonba::Model {
public:
  shared_ptr<long> concurrentExecution{};
  shared_ptr<long> dailyTasks{};
  shared_ptr<long> totalTemplate{};

  GetQuotaResponseBodyQuota() {}

  explicit GetQuotaResponseBodyQuota(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrentExecution) {
      res["ConcurrentExecution"] = boost::any(*concurrentExecution);
    }
    if (dailyTasks) {
      res["DailyTasks"] = boost::any(*dailyTasks);
    }
    if (totalTemplate) {
      res["TotalTemplate"] = boost::any(*totalTemplate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConcurrentExecution") != m.end() && !m["ConcurrentExecution"].empty()) {
      concurrentExecution = make_shared<long>(boost::any_cast<long>(m["ConcurrentExecution"]));
    }
    if (m.find("DailyTasks") != m.end() && !m["DailyTasks"].empty()) {
      dailyTasks = make_shared<long>(boost::any_cast<long>(m["DailyTasks"]));
    }
    if (m.find("TotalTemplate") != m.end() && !m["TotalTemplate"].empty()) {
      totalTemplate = make_shared<long>(boost::any_cast<long>(m["TotalTemplate"]));
    }
  }


  virtual ~GetQuotaResponseBodyQuota() = default;
};
class GetQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<GetQuotaResponseBodyQuota> quota{};
  shared_ptr<string> requestId{};
  shared_ptr<string> uid{};

  GetQuotaResponseBody() {}

  explicit GetQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quota) {
      res["Quota"] = quota ? boost::any(quota->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      if (typeid(map<string, boost::any>) == m["Quota"].type()) {
        GetQuotaResponseBodyQuota model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Quota"]));
        quota = make_shared<GetQuotaResponseBodyQuota>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~GetQuotaResponseBody() = default;
};
class GetQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetQuotaResponseBody> body{};

  GetQuotaResponse() {}

  explicit GetQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~GetQuotaResponse() = default;
};
class GetUserExecutionTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> executionId{};
  shared_ptr<string> regionId{};

  GetUserExecutionTemplateRequest() {}

  explicit GetUserExecutionTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~GetUserExecutionTemplateRequest() = default;
};
class GetUserExecutionTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> hash{};
  shared_ptr<string> shareType{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  GetUserExecutionTemplateResponseBodyTemplate() {}

  explicit GetUserExecutionTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~GetUserExecutionTemplateResponseBodyTemplate() = default;
};
class GetUserExecutionTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};
  shared_ptr<GetUserExecutionTemplateResponseBodyTemplate> template_{};

  GetUserExecutionTemplateResponseBody() {}

  explicit GetUserExecutionTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        GetUserExecutionTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<GetUserExecutionTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~GetUserExecutionTemplateResponseBody() = default;
};
class GetUserExecutionTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserExecutionTemplateResponseBody> body{};

  GetUserExecutionTemplateResponse() {}

  explicit GetUserExecutionTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserExecutionTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserExecutionTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserExecutionTemplateResponse() = default;
};
class GetUserTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};

  GetUserTemplateRequest() {}

  explicit GetUserTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~GetUserTemplateRequest() = default;
};
class GetUserTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> hash{};
  shared_ptr<string> shareType{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  GetUserTemplateResponseBodyTemplate() {}

  explicit GetUserTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~GetUserTemplateResponseBodyTemplate() = default;
};
class GetUserTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> requestId{};
  shared_ptr<GetUserTemplateResponseBodyTemplate> template_{};

  GetUserTemplateResponseBody() {}

  explicit GetUserTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
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
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        GetUserTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<GetUserTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~GetUserTemplateResponseBody() = default;
};
class GetUserTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<GetUserTemplateResponseBody> body{};

  GetUserTemplateResponse() {}

  explicit GetUserTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        GetUserTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<GetUserTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~GetUserTemplateResponse() = default;
};
class ListActionsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> OOSActionName{};
  shared_ptr<string> regionId{};

  ListActionsRequest() {}

  explicit ListActionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (OOSActionName) {
      res["OOSActionName"] = boost::any(*OOSActionName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OOSActionName") != m.end() && !m["OOSActionName"].empty()) {
      OOSActionName = make_shared<string>(boost::any_cast<string>(m["OOSActionName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListActionsRequest() = default;
};
class ListActionsResponseBodyActions : public Darabonba::Model {
public:
  shared_ptr<string> actionType{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> OOSActionName{};
  shared_ptr<long> popularity{};
  shared_ptr<string> properties{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updateDate{};

  ListActionsResponseBodyActions() {}

  explicit ListActionsResponseBodyActions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (OOSActionName) {
      res["OOSActionName"] = boost::any(*OOSActionName);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("OOSActionName") != m.end() && !m["OOSActionName"].empty()) {
      OOSActionName = make_shared<string>(boost::any_cast<string>(m["OOSActionName"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListActionsResponseBodyActions() = default;
};
class ListActionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListActionsResponseBodyActions>> actions{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListActionsResponseBody() {}

  explicit ListActionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actions) {
      vector<boost::any> temp1;
      for(auto item1:*actions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Actions"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Actions") != m.end() && !m["Actions"].empty()) {
      if (typeid(vector<boost::any>) == m["Actions"].type()) {
        vector<ListActionsResponseBodyActions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Actions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListActionsResponseBodyActions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        actions = make_shared<vector<ListActionsResponseBodyActions>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListActionsResponseBody() = default;
};
class ListActionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListActionsResponseBody> body{};

  ListActionsResponse() {}

  explicit ListActionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListActionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListActionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListActionsResponse() = default;
};
class ListDefaultQuotaResponseBodyQuotas : public Darabonba::Model {
public:
  shared_ptr<long> concurrentExecution{};
  shared_ptr<long> dailyTasks{};
  shared_ptr<long> totalTemplate{};

  ListDefaultQuotaResponseBodyQuotas() {}

  explicit ListDefaultQuotaResponseBodyQuotas(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (concurrentExecution) {
      res["ConcurrentExecution"] = boost::any(*concurrentExecution);
    }
    if (dailyTasks) {
      res["DailyTasks"] = boost::any(*dailyTasks);
    }
    if (totalTemplate) {
      res["TotalTemplate"] = boost::any(*totalTemplate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ConcurrentExecution") != m.end() && !m["ConcurrentExecution"].empty()) {
      concurrentExecution = make_shared<long>(boost::any_cast<long>(m["ConcurrentExecution"]));
    }
    if (m.find("DailyTasks") != m.end() && !m["DailyTasks"].empty()) {
      dailyTasks = make_shared<long>(boost::any_cast<long>(m["DailyTasks"]));
    }
    if (m.find("TotalTemplate") != m.end() && !m["TotalTemplate"].empty()) {
      totalTemplate = make_shared<long>(boost::any_cast<long>(m["TotalTemplate"]));
    }
  }


  virtual ~ListDefaultQuotaResponseBodyQuotas() = default;
};
class ListDefaultQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListDefaultQuotaResponseBodyQuotas>> quotas{};
  shared_ptr<string> requestId{};

  ListDefaultQuotaResponseBody() {}

  explicit ListDefaultQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotas) {
      vector<boost::any> temp1;
      for(auto item1:*quotas){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Quotas"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quotas") != m.end() && !m["Quotas"].empty()) {
      if (typeid(vector<boost::any>) == m["Quotas"].type()) {
        vector<ListDefaultQuotaResponseBodyQuotas> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Quotas"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListDefaultQuotaResponseBodyQuotas model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        quotas = make_shared<vector<ListDefaultQuotaResponseBodyQuotas>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListDefaultQuotaResponseBody() = default;
};
class ListDefaultQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListDefaultQuotaResponseBody> body{};

  ListDefaultQuotaResponse() {}

  explicit ListDefaultQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListDefaultQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListDefaultQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~ListDefaultQuotaResponse() = default;
};
class ListFailureMsgsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestFingerprint{};

  ListFailureMsgsRequest() {}

  explicit ListFailureMsgsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestFingerprint) {
      res["RequestFingerprint"] = boost::any(*requestFingerprint);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestFingerprint") != m.end() && !m["RequestFingerprint"].empty()) {
      requestFingerprint = make_shared<string>(boost::any_cast<string>(m["RequestFingerprint"]));
    }
  }


  virtual ~ListFailureMsgsRequest() = default;
};
class ListFailureMsgsResponseBodyFailureMsgs : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> executionId{};
  shared_ptr<string> messageBody{};
  shared_ptr<string> reason{};
  shared_ptr<string> taskExecutionId{};

  ListFailureMsgsResponseBodyFailureMsgs() {}

  explicit ListFailureMsgsResponseBodyFailureMsgs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (messageBody) {
      res["MessageBody"] = boost::any(*messageBody);
    }
    if (reason) {
      res["Reason"] = boost::any(*reason);
    }
    if (taskExecutionId) {
      res["TaskExecutionId"] = boost::any(*taskExecutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("MessageBody") != m.end() && !m["MessageBody"].empty()) {
      messageBody = make_shared<string>(boost::any_cast<string>(m["MessageBody"]));
    }
    if (m.find("Reason") != m.end() && !m["Reason"].empty()) {
      reason = make_shared<string>(boost::any_cast<string>(m["Reason"]));
    }
    if (m.find("TaskExecutionId") != m.end() && !m["TaskExecutionId"].empty()) {
      taskExecutionId = make_shared<string>(boost::any_cast<string>(m["TaskExecutionId"]));
    }
  }


  virtual ~ListFailureMsgsResponseBodyFailureMsgs() = default;
};
class ListFailureMsgsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListFailureMsgsResponseBodyFailureMsgs>> failureMsgs{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListFailureMsgsResponseBody() {}

  explicit ListFailureMsgsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (failureMsgs) {
      vector<boost::any> temp1;
      for(auto item1:*failureMsgs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["FailureMsgs"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("FailureMsgs") != m.end() && !m["FailureMsgs"].empty()) {
      if (typeid(vector<boost::any>) == m["FailureMsgs"].type()) {
        vector<ListFailureMsgsResponseBodyFailureMsgs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["FailureMsgs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListFailureMsgsResponseBodyFailureMsgs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        failureMsgs = make_shared<vector<ListFailureMsgsResponseBodyFailureMsgs>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListFailureMsgsResponseBody() = default;
};
class ListFailureMsgsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListFailureMsgsResponseBody> body{};

  ListFailureMsgsResponse() {}

  explicit ListFailureMsgsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListFailureMsgsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListFailureMsgsResponseBody>(model1);
      }
    }
  }


  virtual ~ListFailureMsgsResponse() = default;
};
class ListOOSLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> endTime{};
  shared_ptr<string> executionId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> requestFingerprint{};
  shared_ptr<string> startTime{};

  ListOOSLogsRequest() {}

  explicit ListOOSLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (endTime) {
      res["EndTime"] = boost::any(*endTime);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (requestFingerprint) {
      res["RequestFingerprint"] = boost::any(*requestFingerprint);
    }
    if (startTime) {
      res["StartTime"] = boost::any(*startTime);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("EndTime") != m.end() && !m["EndTime"].empty()) {
      endTime = make_shared<string>(boost::any_cast<string>(m["EndTime"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RequestFingerprint") != m.end() && !m["RequestFingerprint"].empty()) {
      requestFingerprint = make_shared<string>(boost::any_cast<string>(m["RequestFingerprint"]));
    }
    if (m.find("StartTime") != m.end() && !m["StartTime"].empty()) {
      startTime = make_shared<string>(boost::any_cast<string>(m["StartTime"]));
    }
  }


  virtual ~ListOOSLogsRequest() = default;
};
class ListOOSLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> OOSLogs{};
  shared_ptr<string> requestId{};

  ListOOSLogsResponseBody() {}

  explicit ListOOSLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (OOSLogs) {
      res["OOSLogs"] = boost::any(*OOSLogs);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OOSLogs") != m.end() && !m["OOSLogs"].empty()) {
      OOSLogs = make_shared<string>(boost::any_cast<string>(m["OOSLogs"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListOOSLogsResponseBody() = default;
};
class ListOOSLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListOOSLogsResponseBody> body{};

  ListOOSLogsResponse() {}

  explicit ListOOSLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListOOSLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListOOSLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListOOSLogsResponse() = default;
};
class ListPublicParametersRequest : public Darabonba::Model {
public:
  shared_ptr<string> createdDateAfter{};
  shared_ptr<string> createdDateBefore{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> parameterType{};
  shared_ptr<string> path{};
  shared_ptr<bool> recursive{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};

  ListPublicParametersRequest() {}

  explicit ListPublicParametersRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdDateAfter) {
      res["CreatedDateAfter"] = boost::any(*createdDateAfter);
    }
    if (createdDateBefore) {
      res["CreatedDateBefore"] = boost::any(*createdDateBefore);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (parameterType) {
      res["ParameterType"] = boost::any(*parameterType);
    }
    if (path) {
      res["Path"] = boost::any(*path);
    }
    if (recursive) {
      res["Recursive"] = boost::any(*recursive);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedDateAfter") != m.end() && !m["CreatedDateAfter"].empty()) {
      createdDateAfter = make_shared<string>(boost::any_cast<string>(m["CreatedDateAfter"]));
    }
    if (m.find("CreatedDateBefore") != m.end() && !m["CreatedDateBefore"].empty()) {
      createdDateBefore = make_shared<string>(boost::any_cast<string>(m["CreatedDateBefore"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ParameterType") != m.end() && !m["ParameterType"].empty()) {
      parameterType = make_shared<string>(boost::any_cast<string>(m["ParameterType"]));
    }
    if (m.find("Path") != m.end() && !m["Path"].empty()) {
      path = make_shared<string>(boost::any_cast<string>(m["Path"]));
    }
    if (m.find("Recursive") != m.end() && !m["Recursive"].empty()) {
      recursive = make_shared<bool>(boost::any_cast<bool>(m["Recursive"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
  }


  virtual ~ListPublicParametersRequest() = default;
};
class ListPublicParametersResponseBodyParameters : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> parameterVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  ListPublicParametersResponseBodyParameters() {}

  explicit ListPublicParametersResponseBodyParameters(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<string>(boost::any_cast<string>(m["ParameterVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~ListPublicParametersResponseBodyParameters() = default;
};
class ListPublicParametersResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPublicParametersResponseBodyParameters>> parameters{};
  shared_ptr<string> requestId{};
  shared_ptr<long> totalCount{};

  ListPublicParametersResponseBody() {}

  explicit ListPublicParametersResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (parameters) {
      vector<boost::any> temp1;
      for(auto item1:*parameters){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Parameters"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (totalCount) {
      res["TotalCount"] = boost::any(*totalCount);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      if (typeid(vector<boost::any>) == m["Parameters"].type()) {
        vector<ListPublicParametersResponseBodyParameters> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Parameters"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicParametersResponseBodyParameters model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        parameters = make_shared<vector<ListPublicParametersResponseBodyParameters>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TotalCount") != m.end() && !m["TotalCount"].empty()) {
      totalCount = make_shared<long>(boost::any_cast<long>(m["TotalCount"]));
    }
  }


  virtual ~ListPublicParametersResponseBody() = default;
};
class ListPublicParametersResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublicParametersResponseBody> body{};

  ListPublicParametersResponse() {}

  explicit ListPublicParametersResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublicParametersResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicParametersResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicParametersResponse() = default;
};
class ListPublicPatchBaselinesRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> name{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};

  ListPublicPatchBaselinesRequest() {}

  explicit ListPublicPatchBaselinesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
  }


  virtual ~ListPublicPatchBaselinesRequest() = default;
};
class ListPublicPatchBaselinesResponseBodyPatchBaselines : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<bool> isDefault{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> shareType{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  ListPublicPatchBaselinesResponseBodyPatchBaselines() {}

  explicit ListPublicPatchBaselinesResponseBodyPatchBaselines(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (isDefault) {
      res["IsDefault"] = boost::any(*isDefault);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("IsDefault") != m.end() && !m["IsDefault"].empty()) {
      isDefault = make_shared<bool>(boost::any_cast<bool>(m["IsDefault"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~ListPublicPatchBaselinesResponseBodyPatchBaselines() = default;
};
class ListPublicPatchBaselinesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPublicPatchBaselinesResponseBodyPatchBaselines>> patchBaselines{};
  shared_ptr<string> requestId{};

  ListPublicPatchBaselinesResponseBody() {}

  explicit ListPublicPatchBaselinesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (patchBaselines) {
      vector<boost::any> temp1;
      for(auto item1:*patchBaselines){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["PatchBaselines"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("PatchBaselines") != m.end() && !m["PatchBaselines"].empty()) {
      if (typeid(vector<boost::any>) == m["PatchBaselines"].type()) {
        vector<ListPublicPatchBaselinesResponseBodyPatchBaselines> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["PatchBaselines"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicPatchBaselinesResponseBodyPatchBaselines model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        patchBaselines = make_shared<vector<ListPublicPatchBaselinesResponseBodyPatchBaselines>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPublicPatchBaselinesResponseBody() = default;
};
class ListPublicPatchBaselinesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublicPatchBaselinesResponseBody> body{};

  ListPublicPatchBaselinesResponse() {}

  explicit ListPublicPatchBaselinesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublicPatchBaselinesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicPatchBaselinesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicPatchBaselinesResponse() = default;
};
class ListPublicTemplateRegistrationsRequest : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> registrationId{};
  shared_ptr<string> status{};
  shared_ptr<string> templateName{};

  ListPublicTemplateRegistrationsRequest() {}

  explicit ListPublicTemplateRegistrationsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListPublicTemplateRegistrationsRequest() = default;
};
class ListPublicTemplateRegistrationsResponseBodyRegistrations : public Darabonba::Model {
public:
  shared_ptr<string> comment{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> detail{};
  shared_ptr<string> registrationId{};
  shared_ptr<string> showPages{};
  shared_ptr<string> status{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedDate{};

  ListPublicTemplateRegistrationsResponseBodyRegistrations() {}

  explicit ListPublicTemplateRegistrationsResponseBodyRegistrations(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (comment) {
      res["Comment"] = boost::any(*comment);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (detail) {
      res["Detail"] = boost::any(*detail);
    }
    if (registrationId) {
      res["RegistrationId"] = boost::any(*registrationId);
    }
    if (showPages) {
      res["ShowPages"] = boost::any(*showPages);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Comment") != m.end() && !m["Comment"].empty()) {
      comment = make_shared<string>(boost::any_cast<string>(m["Comment"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Detail") != m.end() && !m["Detail"].empty()) {
      detail = make_shared<string>(boost::any_cast<string>(m["Detail"]));
    }
    if (m.find("RegistrationId") != m.end() && !m["RegistrationId"].empty()) {
      registrationId = make_shared<string>(boost::any_cast<string>(m["RegistrationId"]));
    }
    if (m.find("ShowPages") != m.end() && !m["ShowPages"].empty()) {
      showPages = make_shared<string>(boost::any_cast<string>(m["ShowPages"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~ListPublicTemplateRegistrationsResponseBodyRegistrations() = default;
};
class ListPublicTemplateRegistrationsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListPublicTemplateRegistrationsResponseBodyRegistrations>> registrations{};
  shared_ptr<string> requestId{};

  ListPublicTemplateRegistrationsResponseBody() {}

  explicit ListPublicTemplateRegistrationsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (registrations) {
      vector<boost::any> temp1;
      for(auto item1:*registrations){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Registrations"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Registrations") != m.end() && !m["Registrations"].empty()) {
      if (typeid(vector<boost::any>) == m["Registrations"].type()) {
        vector<ListPublicTemplateRegistrationsResponseBodyRegistrations> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Registrations"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicTemplateRegistrationsResponseBodyRegistrations model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        registrations = make_shared<vector<ListPublicTemplateRegistrationsResponseBodyRegistrations>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListPublicTemplateRegistrationsResponseBody() = default;
};
class ListPublicTemplateRegistrationsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublicTemplateRegistrationsResponseBody> body{};

  ListPublicTemplateRegistrationsResponse() {}

  explicit ListPublicTemplateRegistrationsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublicTemplateRegistrationsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicTemplateRegistrationsResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicTemplateRegistrationsResponse() = default;
};
class ListPublicTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDateAfter{};
  shared_ptr<string> createdDateBefore{};
  shared_ptr<bool> isExample{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> popularity{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateName{};

  ListPublicTemplatesRequest() {}

  explicit ListPublicTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDateAfter) {
      res["CreatedDateAfter"] = boost::any(*createdDateAfter);
    }
    if (createdDateBefore) {
      res["CreatedDateBefore"] = boost::any(*createdDateBefore);
    }
    if (isExample) {
      res["IsExample"] = boost::any(*isExample);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDateAfter") != m.end() && !m["CreatedDateAfter"].empty()) {
      createdDateAfter = make_shared<string>(boost::any_cast<string>(m["CreatedDateAfter"]));
    }
    if (m.find("CreatedDateBefore") != m.end() && !m["CreatedDateBefore"].empty()) {
      createdDateBefore = make_shared<string>(boost::any_cast<string>(m["CreatedDateBefore"]));
    }
    if (m.find("IsExample") != m.end() && !m["IsExample"].empty()) {
      isExample = make_shared<bool>(boost::any_cast<bool>(m["IsExample"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListPublicTemplatesRequest() = default;
};
class ListPublicTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> hash{};
  shared_ptr<long> popularity{};
  shared_ptr<string> shareType{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> totalExecutionCount{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  ListPublicTemplatesResponseBodyTemplates() {}

  explicit ListPublicTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (totalExecutionCount) {
      res["TotalExecutionCount"] = boost::any(*totalExecutionCount);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TotalExecutionCount") != m.end() && !m["TotalExecutionCount"].empty()) {
      totalExecutionCount = make_shared<long>(boost::any_cast<long>(m["TotalExecutionCount"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~ListPublicTemplatesResponseBodyTemplates() = default;
};
class ListPublicTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListPublicTemplatesResponseBodyTemplates>> templates{};

  ListPublicTemplatesResponseBody() {}

  explicit ListPublicTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListPublicTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListPublicTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListPublicTemplatesResponseBodyTemplates>>(expect1);
      }
    }
  }


  virtual ~ListPublicTemplatesResponseBody() = default;
};
class ListPublicTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListPublicTemplatesResponseBody> body{};

  ListPublicTemplatesResponse() {}

  explicit ListPublicTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListPublicTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListPublicTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListPublicTemplatesResponse() = default;
};
class ListUserExecutionLogsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> executionId{};
  shared_ptr<string> logType{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> taskExecutionId{};

  ListUserExecutionLogsRequest() {}

  explicit ListUserExecutionLogsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (taskExecutionId) {
      res["TaskExecutionId"] = boost::any(*taskExecutionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TaskExecutionId") != m.end() && !m["TaskExecutionId"].empty()) {
      taskExecutionId = make_shared<string>(boost::any_cast<string>(m["TaskExecutionId"]));
    }
  }


  virtual ~ListUserExecutionLogsRequest() = default;
};
class ListUserExecutionLogsResponseBodyExecutionLogs : public Darabonba::Model {
public:
  shared_ptr<string> logType{};
  shared_ptr<string> message{};
  shared_ptr<string> taskExecutionId{};
  shared_ptr<string> timestamp{};

  ListUserExecutionLogsResponseBodyExecutionLogs() {}

  explicit ListUserExecutionLogsResponseBodyExecutionLogs(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (logType) {
      res["LogType"] = boost::any(*logType);
    }
    if (message) {
      res["Message"] = boost::any(*message);
    }
    if (taskExecutionId) {
      res["TaskExecutionId"] = boost::any(*taskExecutionId);
    }
    if (timestamp) {
      res["Timestamp"] = boost::any(*timestamp);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("LogType") != m.end() && !m["LogType"].empty()) {
      logType = make_shared<string>(boost::any_cast<string>(m["LogType"]));
    }
    if (m.find("Message") != m.end() && !m["Message"].empty()) {
      message = make_shared<string>(boost::any_cast<string>(m["Message"]));
    }
    if (m.find("TaskExecutionId") != m.end() && !m["TaskExecutionId"].empty()) {
      taskExecutionId = make_shared<string>(boost::any_cast<string>(m["TaskExecutionId"]));
    }
    if (m.find("Timestamp") != m.end() && !m["Timestamp"].empty()) {
      timestamp = make_shared<string>(boost::any_cast<string>(m["Timestamp"]));
    }
  }


  virtual ~ListUserExecutionLogsResponseBodyExecutionLogs() = default;
};
class ListUserExecutionLogsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserExecutionLogsResponseBodyExecutionLogs>> executionLogs{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListUserExecutionLogsResponseBody() {}

  explicit ListUserExecutionLogsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executionLogs) {
      vector<boost::any> temp1;
      for(auto item1:*executionLogs){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["ExecutionLogs"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ExecutionLogs") != m.end() && !m["ExecutionLogs"].empty()) {
      if (typeid(vector<boost::any>) == m["ExecutionLogs"].type()) {
        vector<ListUserExecutionLogsResponseBodyExecutionLogs> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["ExecutionLogs"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserExecutionLogsResponseBodyExecutionLogs model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        executionLogs = make_shared<vector<ListUserExecutionLogsResponseBodyExecutionLogs>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserExecutionLogsResponseBody() = default;
};
class ListUserExecutionLogsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserExecutionLogsResponseBody> body{};

  ListUserExecutionLogsResponse() {}

  explicit ListUserExecutionLogsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserExecutionLogsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserExecutionLogsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserExecutionLogsResponse() = default;
};
class ListUserExecutionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> endDateAfter{};
  shared_ptr<string> endDateBefore{};
  shared_ptr<string> executedBy{};
  shared_ptr<string> executionId{};
  shared_ptr<bool> includeChildExecution{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> mode{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> parentExecutionId{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> startDateAfter{};
  shared_ptr<string> startDateBefore{};
  shared_ptr<string> status{};
  shared_ptr<string> templateName{};

  ListUserExecutionsRequest() {}

  explicit ListUserExecutionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (endDateAfter) {
      res["EndDateAfter"] = boost::any(*endDateAfter);
    }
    if (endDateBefore) {
      res["EndDateBefore"] = boost::any(*endDateBefore);
    }
    if (executedBy) {
      res["ExecutedBy"] = boost::any(*executedBy);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (includeChildExecution) {
      res["IncludeChildExecution"] = boost::any(*includeChildExecution);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (parentExecutionId) {
      res["ParentExecutionId"] = boost::any(*parentExecutionId);
    }
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (startDateAfter) {
      res["StartDateAfter"] = boost::any(*startDateAfter);
    }
    if (startDateBefore) {
      res["StartDateBefore"] = boost::any(*startDateBefore);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("EndDateAfter") != m.end() && !m["EndDateAfter"].empty()) {
      endDateAfter = make_shared<string>(boost::any_cast<string>(m["EndDateAfter"]));
    }
    if (m.find("EndDateBefore") != m.end() && !m["EndDateBefore"].empty()) {
      endDateBefore = make_shared<string>(boost::any_cast<string>(m["EndDateBefore"]));
    }
    if (m.find("ExecutedBy") != m.end() && !m["ExecutedBy"].empty()) {
      executedBy = make_shared<string>(boost::any_cast<string>(m["ExecutedBy"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("IncludeChildExecution") != m.end() && !m["IncludeChildExecution"].empty()) {
      includeChildExecution = make_shared<bool>(boost::any_cast<bool>(m["IncludeChildExecution"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ParentExecutionId") != m.end() && !m["ParentExecutionId"].empty()) {
      parentExecutionId = make_shared<string>(boost::any_cast<string>(m["ParentExecutionId"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("StartDateAfter") != m.end() && !m["StartDateAfter"].empty()) {
      startDateAfter = make_shared<string>(boost::any_cast<string>(m["StartDateAfter"]));
    }
    if (m.find("StartDateBefore") != m.end() && !m["StartDateBefore"].empty()) {
      startDateBefore = make_shared<string>(boost::any_cast<string>(m["StartDateBefore"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
  }


  virtual ~ListUserExecutionsRequest() = default;
};
class ListUserExecutionsResponseBodyExecutionsCurrentTasks : public Darabonba::Model {
public:
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskExecutionId{};
  shared_ptr<string> taskName{};

  ListUserExecutionsResponseBodyExecutionsCurrentTasks() {}

  explicit ListUserExecutionsResponseBodyExecutionsCurrentTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    if (taskExecutionId) {
      res["TaskExecutionId"] = boost::any(*taskExecutionId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
    if (m.find("TaskExecutionId") != m.end() && !m["TaskExecutionId"].empty()) {
      taskExecutionId = make_shared<string>(boost::any_cast<string>(m["TaskExecutionId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~ListUserExecutionsResponseBodyExecutionsCurrentTasks() = default;
};
class ListUserExecutionsResponseBodyExecutions : public Darabonba::Model {
public:
  shared_ptr<string> counters{};
  shared_ptr<string> createDate{};
  shared_ptr<vector<ListUserExecutionsResponseBodyExecutionsCurrentTasks>> currentTasks{};
  shared_ptr<string> endDate{};
  shared_ptr<string> executedBy{};
  shared_ptr<string> executionId{};
  shared_ptr<bool> isParent{};
  shared_ptr<string> mode{};
  shared_ptr<string> outputs{};
  shared_ptr<string> parameters{};
  shared_ptr<string> parentExecutionId{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> safetyCheck{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updateDate{};
  shared_ptr<string> waitingStatus{};

  ListUserExecutionsResponseBodyExecutions() {}

  explicit ListUserExecutionsResponseBodyExecutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (counters) {
      res["Counters"] = boost::any(*counters);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (currentTasks) {
      vector<boost::any> temp1;
      for(auto item1:*currentTasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["CurrentTasks"] = boost::any(temp1);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (executedBy) {
      res["ExecutedBy"] = boost::any(*executedBy);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (isParent) {
      res["IsParent"] = boost::any(*isParent);
    }
    if (mode) {
      res["Mode"] = boost::any(*mode);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (parentExecutionId) {
      res["ParentExecutionId"] = boost::any(*parentExecutionId);
    }
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (safetyCheck) {
      res["SafetyCheck"] = boost::any(*safetyCheck);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    if (waitingStatus) {
      res["WaitingStatus"] = boost::any(*waitingStatus);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Counters") != m.end() && !m["Counters"].empty()) {
      counters = make_shared<string>(boost::any_cast<string>(m["Counters"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("CurrentTasks") != m.end() && !m["CurrentTasks"].empty()) {
      if (typeid(vector<boost::any>) == m["CurrentTasks"].type()) {
        vector<ListUserExecutionsResponseBodyExecutionsCurrentTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["CurrentTasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserExecutionsResponseBodyExecutionsCurrentTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        currentTasks = make_shared<vector<ListUserExecutionsResponseBodyExecutionsCurrentTasks>>(expect1);
      }
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ExecutedBy") != m.end() && !m["ExecutedBy"].empty()) {
      executedBy = make_shared<string>(boost::any_cast<string>(m["ExecutedBy"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("IsParent") != m.end() && !m["IsParent"].empty()) {
      isParent = make_shared<bool>(boost::any_cast<bool>(m["IsParent"]));
    }
    if (m.find("Mode") != m.end() && !m["Mode"].empty()) {
      mode = make_shared<string>(boost::any_cast<string>(m["Mode"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("ParentExecutionId") != m.end() && !m["ParentExecutionId"].empty()) {
      parentExecutionId = make_shared<string>(boost::any_cast<string>(m["ParentExecutionId"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("SafetyCheck") != m.end() && !m["SafetyCheck"].empty()) {
      safetyCheck = make_shared<string>(boost::any_cast<string>(m["SafetyCheck"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
    if (m.find("WaitingStatus") != m.end() && !m["WaitingStatus"].empty()) {
      waitingStatus = make_shared<string>(boost::any_cast<string>(m["WaitingStatus"]));
    }
  }


  virtual ~ListUserExecutionsResponseBodyExecutions() = default;
};
class ListUserExecutionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserExecutionsResponseBodyExecutions>> executions{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListUserExecutionsResponseBody() {}

  explicit ListUserExecutionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (executions) {
      vector<boost::any> temp1;
      for(auto item1:*executions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Executions"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Executions") != m.end() && !m["Executions"].empty()) {
      if (typeid(vector<boost::any>) == m["Executions"].type()) {
        vector<ListUserExecutionsResponseBodyExecutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Executions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserExecutionsResponseBodyExecutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        executions = make_shared<vector<ListUserExecutionsResponseBodyExecutions>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserExecutionsResponseBody() = default;
};
class ListUserExecutionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserExecutionsResponseBody> body{};

  ListUserExecutionsResponse() {}

  explicit ListUserExecutionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserExecutionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserExecutionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserExecutionsResponse() = default;
};
class ListUserInstancePatchStatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> instanceIds{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListUserInstancePatchStatesRequest() {}

  explicit ListUserInstancePatchStatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (instanceIds) {
      res["InstanceIds"] = boost::any(*instanceIds);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("InstanceIds") != m.end() && !m["InstanceIds"].empty()) {
      instanceIds = make_shared<string>(boost::any_cast<string>(m["InstanceIds"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListUserInstancePatchStatesRequest() = default;
};
class ListUserInstancePatchStatesResponseBodyInstancePatchStates : public Darabonba::Model {
public:
  shared_ptr<string> baselineId{};
  shared_ptr<string> failedCount{};
  shared_ptr<string> installedCount{};
  shared_ptr<string> installedOtherCount{};
  shared_ptr<string> installedPendingRebootCount{};
  shared_ptr<string> installedRejectedCount{};
  shared_ptr<string> instanceId{};
  shared_ptr<string> missingCount{};
  shared_ptr<string> operationEndTime{};
  shared_ptr<string> operationStartTime{};
  shared_ptr<string> operationType{};
  shared_ptr<string> ownerInformation{};
  shared_ptr<string> patchGroup{};

  ListUserInstancePatchStatesResponseBodyInstancePatchStates() {}

  explicit ListUserInstancePatchStatesResponseBodyInstancePatchStates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (baselineId) {
      res["BaselineId"] = boost::any(*baselineId);
    }
    if (failedCount) {
      res["FailedCount"] = boost::any(*failedCount);
    }
    if (installedCount) {
      res["InstalledCount"] = boost::any(*installedCount);
    }
    if (installedOtherCount) {
      res["InstalledOtherCount"] = boost::any(*installedOtherCount);
    }
    if (installedPendingRebootCount) {
      res["InstalledPendingRebootCount"] = boost::any(*installedPendingRebootCount);
    }
    if (installedRejectedCount) {
      res["InstalledRejectedCount"] = boost::any(*installedRejectedCount);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (missingCount) {
      res["MissingCount"] = boost::any(*missingCount);
    }
    if (operationEndTime) {
      res["OperationEndTime"] = boost::any(*operationEndTime);
    }
    if (operationStartTime) {
      res["OperationStartTime"] = boost::any(*operationStartTime);
    }
    if (operationType) {
      res["OperationType"] = boost::any(*operationType);
    }
    if (ownerInformation) {
      res["OwnerInformation"] = boost::any(*ownerInformation);
    }
    if (patchGroup) {
      res["PatchGroup"] = boost::any(*patchGroup);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("BaselineId") != m.end() && !m["BaselineId"].empty()) {
      baselineId = make_shared<string>(boost::any_cast<string>(m["BaselineId"]));
    }
    if (m.find("FailedCount") != m.end() && !m["FailedCount"].empty()) {
      failedCount = make_shared<string>(boost::any_cast<string>(m["FailedCount"]));
    }
    if (m.find("InstalledCount") != m.end() && !m["InstalledCount"].empty()) {
      installedCount = make_shared<string>(boost::any_cast<string>(m["InstalledCount"]));
    }
    if (m.find("InstalledOtherCount") != m.end() && !m["InstalledOtherCount"].empty()) {
      installedOtherCount = make_shared<string>(boost::any_cast<string>(m["InstalledOtherCount"]));
    }
    if (m.find("InstalledPendingRebootCount") != m.end() && !m["InstalledPendingRebootCount"].empty()) {
      installedPendingRebootCount = make_shared<string>(boost::any_cast<string>(m["InstalledPendingRebootCount"]));
    }
    if (m.find("InstalledRejectedCount") != m.end() && !m["InstalledRejectedCount"].empty()) {
      installedRejectedCount = make_shared<string>(boost::any_cast<string>(m["InstalledRejectedCount"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MissingCount") != m.end() && !m["MissingCount"].empty()) {
      missingCount = make_shared<string>(boost::any_cast<string>(m["MissingCount"]));
    }
    if (m.find("OperationEndTime") != m.end() && !m["OperationEndTime"].empty()) {
      operationEndTime = make_shared<string>(boost::any_cast<string>(m["OperationEndTime"]));
    }
    if (m.find("OperationStartTime") != m.end() && !m["OperationStartTime"].empty()) {
      operationStartTime = make_shared<string>(boost::any_cast<string>(m["OperationStartTime"]));
    }
    if (m.find("OperationType") != m.end() && !m["OperationType"].empty()) {
      operationType = make_shared<string>(boost::any_cast<string>(m["OperationType"]));
    }
    if (m.find("OwnerInformation") != m.end() && !m["OwnerInformation"].empty()) {
      ownerInformation = make_shared<string>(boost::any_cast<string>(m["OwnerInformation"]));
    }
    if (m.find("PatchGroup") != m.end() && !m["PatchGroup"].empty()) {
      patchGroup = make_shared<string>(boost::any_cast<string>(m["PatchGroup"]));
    }
  }


  virtual ~ListUserInstancePatchStatesResponseBodyInstancePatchStates() = default;
};
class ListUserInstancePatchStatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<vector<ListUserInstancePatchStatesResponseBodyInstancePatchStates>> instancePatchStates{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};

  ListUserInstancePatchStatesResponseBody() {}

  explicit ListUserInstancePatchStatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (instancePatchStates) {
      vector<boost::any> temp1;
      for(auto item1:*instancePatchStates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["InstancePatchStates"] = boost::any(temp1);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("InstancePatchStates") != m.end() && !m["InstancePatchStates"].empty()) {
      if (typeid(vector<boost::any>) == m["InstancePatchStates"].type()) {
        vector<ListUserInstancePatchStatesResponseBodyInstancePatchStates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["InstancePatchStates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserInstancePatchStatesResponseBodyInstancePatchStates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        instancePatchStates = make_shared<vector<ListUserInstancePatchStatesResponseBodyInstancePatchStates>>(expect1);
      }
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserInstancePatchStatesResponseBody() = default;
};
class ListUserInstancePatchStatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserInstancePatchStatesResponseBody> body{};

  ListUserInstancePatchStatesResponse() {}

  explicit ListUserInstancePatchStatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserInstancePatchStatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserInstancePatchStatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserInstancePatchStatesResponse() = default;
};
class ListUserInstancePatchesRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};

  ListUserInstancePatchesRequest() {}

  explicit ListUserInstancePatchesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ListUserInstancePatchesRequest() = default;
};
class ListUserInstancePatchesResponseBodyPatches : public Darabonba::Model {
public:
  shared_ptr<string> classification{};
  shared_ptr<string> installedTime{};
  shared_ptr<string> KBId{};
  shared_ptr<string> severity{};
  shared_ptr<string> status{};
  shared_ptr<string> title{};

  ListUserInstancePatchesResponseBodyPatches() {}

  explicit ListUserInstancePatchesResponseBodyPatches(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (classification) {
      res["Classification"] = boost::any(*classification);
    }
    if (installedTime) {
      res["InstalledTime"] = boost::any(*installedTime);
    }
    if (KBId) {
      res["KBId"] = boost::any(*KBId);
    }
    if (severity) {
      res["Severity"] = boost::any(*severity);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (title) {
      res["Title"] = boost::any(*title);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Classification") != m.end() && !m["Classification"].empty()) {
      classification = make_shared<string>(boost::any_cast<string>(m["Classification"]));
    }
    if (m.find("InstalledTime") != m.end() && !m["InstalledTime"].empty()) {
      installedTime = make_shared<string>(boost::any_cast<string>(m["InstalledTime"]));
    }
    if (m.find("KBId") != m.end() && !m["KBId"].empty()) {
      KBId = make_shared<string>(boost::any_cast<string>(m["KBId"]));
    }
    if (m.find("Severity") != m.end() && !m["Severity"].empty()) {
      severity = make_shared<string>(boost::any_cast<string>(m["Severity"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("Title") != m.end() && !m["Title"].empty()) {
      title = make_shared<string>(boost::any_cast<string>(m["Title"]));
    }
  }


  virtual ~ListUserInstancePatchesResponseBodyPatches() = default;
};
class ListUserInstancePatchesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<vector<ListUserInstancePatchesResponseBodyPatches>> patches{};
  shared_ptr<string> requestId{};

  ListUserInstancePatchesResponseBody() {}

  explicit ListUserInstancePatchesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (patches) {
      vector<boost::any> temp1;
      for(auto item1:*patches){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Patches"] = boost::any(temp1);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Patches") != m.end() && !m["Patches"].empty()) {
      if (typeid(vector<boost::any>) == m["Patches"].type()) {
        vector<ListUserInstancePatchesResponseBodyPatches> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Patches"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserInstancePatchesResponseBodyPatches model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        patches = make_shared<vector<ListUserInstancePatchesResponseBodyPatches>>(expect1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ListUserInstancePatchesResponseBody() = default;
};
class ListUserInstancePatchesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserInstancePatchesResponseBody> body{};

  ListUserInstancePatchesResponse() {}

  explicit ListUserInstancePatchesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserInstancePatchesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserInstancePatchesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserInstancePatchesResponse() = default;
};
class ListUserInventoryEntriesRequestFilter : public Darabonba::Model {
public:
  shared_ptr<string> name{};
  shared_ptr<string> operator_{};
  shared_ptr<vector<string>> value{};

  ListUserInventoryEntriesRequestFilter() {}

  explicit ListUserInventoryEntriesRequestFilter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operator_) {
      res["Operator"] = boost::any(*operator_);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Operator") != m.end() && !m["Operator"].empty()) {
      operator_ = make_shared<string>(boost::any_cast<string>(m["Operator"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      vector<string> toVec1;
      if (typeid(vector<boost::any>) == m["Value"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Value"]);
        for (auto item:vec1) {
           toVec1.push_back(boost::any_cast<string>(item));
        }
      }
      value = make_shared<vector<string>>(toVec1);
    }
  }


  virtual ~ListUserInventoryEntriesRequestFilter() = default;
};
class ListUserInventoryEntriesRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<vector<ListUserInventoryEntriesRequestFilter>> filter{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> regionId{};
  shared_ptr<string> typeName_{};

  ListUserInventoryEntriesRequest() {}

  explicit ListUserInventoryEntriesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (filter) {
      vector<boost::any> temp1;
      for(auto item1:*filter){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Filter"] = boost::any(temp1);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Filter") != m.end() && !m["Filter"].empty()) {
      if (typeid(vector<boost::any>) == m["Filter"].type()) {
        vector<ListUserInventoryEntriesRequestFilter> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Filter"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserInventoryEntriesRequestFilter model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        filter = make_shared<vector<ListUserInventoryEntriesRequestFilter>>(expect1);
      }
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~ListUserInventoryEntriesRequest() = default;
};
class ListUserInventoryEntriesResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> captureTime{};
  shared_ptr<vector<map<string, boost::any>>> entries{};
  shared_ptr<string> instanceId{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<string> schemaVersion{};
  shared_ptr<string> typeName_{};

  ListUserInventoryEntriesResponseBody() {}

  explicit ListUserInventoryEntriesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (captureTime) {
      res["CaptureTime"] = boost::any(*captureTime);
    }
    if (entries) {
      res["Entries"] = boost::any(*entries);
    }
    if (instanceId) {
      res["InstanceId"] = boost::any(*instanceId);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (schemaVersion) {
      res["SchemaVersion"] = boost::any(*schemaVersion);
    }
    if (typeName_) {
      res["TypeName"] = boost::any(*typeName_);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CaptureTime") != m.end() && !m["CaptureTime"].empty()) {
      captureTime = make_shared<string>(boost::any_cast<string>(m["CaptureTime"]));
    }
    if (m.find("Entries") != m.end() && !m["Entries"].empty()) {
      vector<map<string, boost::any>> toVec1;
      if (typeid(vector<boost::any>) == m["Entries"].type()) {
        vector<boost::any> vec1 = boost::any_cast<vector<boost::any>>(m["Entries"]);
        for (auto item:vec1) {
          map<string, boost::any> map2 = boost::any_cast<map<string, boost::any>>(item);
          map<string, boost::any> toMap2;
          for (auto item:map2) {
             toMap2[item.first] = item.second;
          }
           toVec1.push_back(toMap2);
        }
      }
      entries = make_shared<vector<map<string, boost::any>>>(toVec1);
    }
    if (m.find("InstanceId") != m.end() && !m["InstanceId"].empty()) {
      instanceId = make_shared<string>(boost::any_cast<string>(m["InstanceId"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("SchemaVersion") != m.end() && !m["SchemaVersion"].empty()) {
      schemaVersion = make_shared<string>(boost::any_cast<string>(m["SchemaVersion"]));
    }
    if (m.find("TypeName") != m.end() && !m["TypeName"].empty()) {
      typeName_ = make_shared<string>(boost::any_cast<string>(m["TypeName"]));
    }
  }


  virtual ~ListUserInventoryEntriesResponseBody() = default;
};
class ListUserInventoryEntriesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserInventoryEntriesResponseBody> body{};

  ListUserInventoryEntriesResponse() {}

  explicit ListUserInventoryEntriesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserInventoryEntriesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserInventoryEntriesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserInventoryEntriesResponse() = default;
};
class ListUserTaskExecutionsRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> endDateAfter{};
  shared_ptr<string> endDateBefore{};
  shared_ptr<string> executionId{};
  shared_ptr<bool> includeChildTaskExecution{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> parentTaskExecutionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> startDateAfter{};
  shared_ptr<string> startDateBefore{};
  shared_ptr<string> status{};
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskExecutionId{};
  shared_ptr<string> taskName{};

  ListUserTaskExecutionsRequest() {}

  explicit ListUserTaskExecutionsRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (endDateAfter) {
      res["EndDateAfter"] = boost::any(*endDateAfter);
    }
    if (endDateBefore) {
      res["EndDateBefore"] = boost::any(*endDateBefore);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (includeChildTaskExecution) {
      res["IncludeChildTaskExecution"] = boost::any(*includeChildTaskExecution);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (parentTaskExecutionId) {
      res["ParentTaskExecutionId"] = boost::any(*parentTaskExecutionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (startDateAfter) {
      res["StartDateAfter"] = boost::any(*startDateAfter);
    }
    if (startDateBefore) {
      res["StartDateBefore"] = boost::any(*startDateBefore);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    if (taskExecutionId) {
      res["TaskExecutionId"] = boost::any(*taskExecutionId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("EndDateAfter") != m.end() && !m["EndDateAfter"].empty()) {
      endDateAfter = make_shared<string>(boost::any_cast<string>(m["EndDateAfter"]));
    }
    if (m.find("EndDateBefore") != m.end() && !m["EndDateBefore"].empty()) {
      endDateBefore = make_shared<string>(boost::any_cast<string>(m["EndDateBefore"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("IncludeChildTaskExecution") != m.end() && !m["IncludeChildTaskExecution"].empty()) {
      includeChildTaskExecution = make_shared<bool>(boost::any_cast<bool>(m["IncludeChildTaskExecution"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("ParentTaskExecutionId") != m.end() && !m["ParentTaskExecutionId"].empty()) {
      parentTaskExecutionId = make_shared<string>(boost::any_cast<string>(m["ParentTaskExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("StartDateAfter") != m.end() && !m["StartDateAfter"].empty()) {
      startDateAfter = make_shared<string>(boost::any_cast<string>(m["StartDateAfter"]));
    }
    if (m.find("StartDateBefore") != m.end() && !m["StartDateBefore"].empty()) {
      startDateBefore = make_shared<string>(boost::any_cast<string>(m["StartDateBefore"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
    if (m.find("TaskExecutionId") != m.end() && !m["TaskExecutionId"].empty()) {
      taskExecutionId = make_shared<string>(boost::any_cast<string>(m["TaskExecutionId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
  }


  virtual ~ListUserTaskExecutionsRequest() = default;
};
class ListUserTaskExecutionsResponseBodyTaskExecutions : public Darabonba::Model {
public:
  shared_ptr<string> childExecutionId{};
  shared_ptr<string> createDate{};
  shared_ptr<string> endDate{};
  shared_ptr<string> executionId{};
  shared_ptr<string> extraData{};
  shared_ptr<string> loop{};
  shared_ptr<long> loopBatchNumber{};
  shared_ptr<string> loopItem{};
  shared_ptr<string> outputs{};
  shared_ptr<string> parentTaskExecutionId{};
  shared_ptr<string> properties{};
  shared_ptr<string> startDate{};
  shared_ptr<string> status{};
  shared_ptr<string> statusMessage{};
  shared_ptr<string> taskAction{};
  shared_ptr<string> taskExecutionId{};
  shared_ptr<string> taskName{};
  shared_ptr<string> templateId{};
  shared_ptr<string> updateDate{};

  ListUserTaskExecutionsResponseBodyTaskExecutions() {}

  explicit ListUserTaskExecutionsResponseBodyTaskExecutions(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (childExecutionId) {
      res["ChildExecutionId"] = boost::any(*childExecutionId);
    }
    if (createDate) {
      res["CreateDate"] = boost::any(*createDate);
    }
    if (endDate) {
      res["EndDate"] = boost::any(*endDate);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (extraData) {
      res["ExtraData"] = boost::any(*extraData);
    }
    if (loop) {
      res["Loop"] = boost::any(*loop);
    }
    if (loopBatchNumber) {
      res["LoopBatchNumber"] = boost::any(*loopBatchNumber);
    }
    if (loopItem) {
      res["LoopItem"] = boost::any(*loopItem);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (parentTaskExecutionId) {
      res["ParentTaskExecutionId"] = boost::any(*parentTaskExecutionId);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (startDate) {
      res["StartDate"] = boost::any(*startDate);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    if (statusMessage) {
      res["StatusMessage"] = boost::any(*statusMessage);
    }
    if (taskAction) {
      res["TaskAction"] = boost::any(*taskAction);
    }
    if (taskExecutionId) {
      res["TaskExecutionId"] = boost::any(*taskExecutionId);
    }
    if (taskName) {
      res["TaskName"] = boost::any(*taskName);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (updateDate) {
      res["UpdateDate"] = boost::any(*updateDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ChildExecutionId") != m.end() && !m["ChildExecutionId"].empty()) {
      childExecutionId = make_shared<string>(boost::any_cast<string>(m["ChildExecutionId"]));
    }
    if (m.find("CreateDate") != m.end() && !m["CreateDate"].empty()) {
      createDate = make_shared<string>(boost::any_cast<string>(m["CreateDate"]));
    }
    if (m.find("EndDate") != m.end() && !m["EndDate"].empty()) {
      endDate = make_shared<string>(boost::any_cast<string>(m["EndDate"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("ExtraData") != m.end() && !m["ExtraData"].empty()) {
      extraData = make_shared<string>(boost::any_cast<string>(m["ExtraData"]));
    }
    if (m.find("Loop") != m.end() && !m["Loop"].empty()) {
      loop = make_shared<string>(boost::any_cast<string>(m["Loop"]));
    }
    if (m.find("LoopBatchNumber") != m.end() && !m["LoopBatchNumber"].empty()) {
      loopBatchNumber = make_shared<long>(boost::any_cast<long>(m["LoopBatchNumber"]));
    }
    if (m.find("LoopItem") != m.end() && !m["LoopItem"].empty()) {
      loopItem = make_shared<string>(boost::any_cast<string>(m["LoopItem"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("ParentTaskExecutionId") != m.end() && !m["ParentTaskExecutionId"].empty()) {
      parentTaskExecutionId = make_shared<string>(boost::any_cast<string>(m["ParentTaskExecutionId"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("StartDate") != m.end() && !m["StartDate"].empty()) {
      startDate = make_shared<string>(boost::any_cast<string>(m["StartDate"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
    if (m.find("StatusMessage") != m.end() && !m["StatusMessage"].empty()) {
      statusMessage = make_shared<string>(boost::any_cast<string>(m["StatusMessage"]));
    }
    if (m.find("TaskAction") != m.end() && !m["TaskAction"].empty()) {
      taskAction = make_shared<string>(boost::any_cast<string>(m["TaskAction"]));
    }
    if (m.find("TaskExecutionId") != m.end() && !m["TaskExecutionId"].empty()) {
      taskExecutionId = make_shared<string>(boost::any_cast<string>(m["TaskExecutionId"]));
    }
    if (m.find("TaskName") != m.end() && !m["TaskName"].empty()) {
      taskName = make_shared<string>(boost::any_cast<string>(m["TaskName"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("UpdateDate") != m.end() && !m["UpdateDate"].empty()) {
      updateDate = make_shared<string>(boost::any_cast<string>(m["UpdateDate"]));
    }
  }


  virtual ~ListUserTaskExecutionsResponseBodyTaskExecutions() = default;
};
class ListUserTaskExecutionsResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUserTaskExecutionsResponseBodyTaskExecutions>> taskExecutions{};

  ListUserTaskExecutionsResponseBody() {}

  explicit ListUserTaskExecutionsResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (taskExecutions) {
      vector<boost::any> temp1;
      for(auto item1:*taskExecutions){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["TaskExecutions"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TaskExecutions") != m.end() && !m["TaskExecutions"].empty()) {
      if (typeid(vector<boost::any>) == m["TaskExecutions"].type()) {
        vector<ListUserTaskExecutionsResponseBodyTaskExecutions> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["TaskExecutions"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserTaskExecutionsResponseBodyTaskExecutions model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        taskExecutions = make_shared<vector<ListUserTaskExecutionsResponseBodyTaskExecutions>>(expect1);
      }
    }
  }


  virtual ~ListUserTaskExecutionsResponseBody() = default;
};
class ListUserTaskExecutionsResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserTaskExecutionsResponseBody> body{};

  ListUserTaskExecutionsResponse() {}

  explicit ListUserTaskExecutionsResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserTaskExecutionsResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserTaskExecutionsResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserTaskExecutionsResponse() = default;
};
class ListUserTemplatesRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> category{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDateAfter{};
  shared_ptr<string> createdDateBefore{};
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<long> popularity{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> sortField{};
  shared_ptr<string> sortOrder{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateType{};

  ListUserTemplatesRequest() {}

  explicit ListUserTemplatesRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDateAfter) {
      res["CreatedDateAfter"] = boost::any(*createdDateAfter);
    }
    if (createdDateBefore) {
      res["CreatedDateBefore"] = boost::any(*createdDateBefore);
    }
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (sortField) {
      res["SortField"] = boost::any(*sortField);
    }
    if (sortOrder) {
      res["SortOrder"] = boost::any(*sortOrder);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateType) {
      res["TemplateType"] = boost::any(*templateType);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDateAfter") != m.end() && !m["CreatedDateAfter"].empty()) {
      createdDateAfter = make_shared<string>(boost::any_cast<string>(m["CreatedDateAfter"]));
    }
    if (m.find("CreatedDateBefore") != m.end() && !m["CreatedDateBefore"].empty()) {
      createdDateBefore = make_shared<string>(boost::any_cast<string>(m["CreatedDateBefore"]));
    }
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("SortField") != m.end() && !m["SortField"].empty()) {
      sortField = make_shared<string>(boost::any_cast<string>(m["SortField"]));
    }
    if (m.find("SortOrder") != m.end() && !m["SortOrder"].empty()) {
      sortOrder = make_shared<string>(boost::any_cast<string>(m["SortOrder"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateType") != m.end() && !m["TemplateType"].empty()) {
      templateType = make_shared<string>(boost::any_cast<string>(m["TemplateType"]));
    }
  }


  virtual ~ListUserTemplatesRequest() = default;
};
class ListUserTemplatesResponseBodyTemplates : public Darabonba::Model {
public:
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> hash{};
  shared_ptr<long> popularity{};
  shared_ptr<string> shareType{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<long> totalExecutionCount{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  ListUserTemplatesResponseBodyTemplates() {}

  explicit ListUserTemplatesResponseBodyTemplates(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (totalExecutionCount) {
      res["TotalExecutionCount"] = boost::any(*totalExecutionCount);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("TotalExecutionCount") != m.end() && !m["TotalExecutionCount"].empty()) {
      totalExecutionCount = make_shared<long>(boost::any_cast<long>(m["TotalExecutionCount"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~ListUserTemplatesResponseBodyTemplates() = default;
};
class ListUserTemplatesResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> maxResults{};
  shared_ptr<string> nextToken{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ListUserTemplatesResponseBodyTemplates>> templates{};

  ListUserTemplatesResponseBody() {}

  explicit ListUserTemplatesResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (maxResults) {
      res["MaxResults"] = boost::any(*maxResults);
    }
    if (nextToken) {
      res["NextToken"] = boost::any(*nextToken);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templates) {
      vector<boost::any> temp1;
      for(auto item1:*templates){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Templates"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("MaxResults") != m.end() && !m["MaxResults"].empty()) {
      maxResults = make_shared<long>(boost::any_cast<long>(m["MaxResults"]));
    }
    if (m.find("NextToken") != m.end() && !m["NextToken"].empty()) {
      nextToken = make_shared<string>(boost::any_cast<string>(m["NextToken"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Templates") != m.end() && !m["Templates"].empty()) {
      if (typeid(vector<boost::any>) == m["Templates"].type()) {
        vector<ListUserTemplatesResponseBodyTemplates> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Templates"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ListUserTemplatesResponseBodyTemplates model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        templates = make_shared<vector<ListUserTemplatesResponseBodyTemplates>>(expect1);
      }
    }
  }


  virtual ~ListUserTemplatesResponseBody() = default;
};
class ListUserTemplatesResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ListUserTemplatesResponseBody> body{};

  ListUserTemplatesResponse() {}

  explicit ListUserTemplatesResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ListUserTemplatesResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ListUserTemplatesResponseBody>(model1);
      }
    }
  }


  virtual ~ListUserTemplatesResponse() = default;
};
class ResetTimerTriggerExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> executionId{};
  shared_ptr<string> regionId{};

  ResetTimerTriggerExecutionRequest() {}

  explicit ResetTimerTriggerExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~ResetTimerTriggerExecutionRequest() = default;
};
class ResetTimerTriggerExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetTimerTriggerExecutionResponseBody() {}

  explicit ResetTimerTriggerExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetTimerTriggerExecutionResponseBody() = default;
};
class ResetTimerTriggerExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetTimerTriggerExecutionResponseBody> body{};

  ResetTimerTriggerExecutionResponse() {}

  explicit ResetTimerTriggerExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetTimerTriggerExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetTimerTriggerExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~ResetTimerTriggerExecutionResponse() = default;
};
class ResetUserExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> executionId{};
  shared_ptr<string> regionId{};
  shared_ptr<string> status{};

  ResetUserExecutionRequest() {}

  explicit ResetUserExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (status) {
      res["Status"] = boost::any(*status);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Status") != m.end() && !m["Status"].empty()) {
      status = make_shared<string>(boost::any_cast<string>(m["Status"]));
    }
  }


  virtual ~ResetUserExecutionRequest() = default;
};
class ResetUserExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  ResetUserExecutionResponseBody() {}

  explicit ResetUserExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~ResetUserExecutionResponseBody() = default;
};
class ResetUserExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ResetUserExecutionResponseBody> body{};

  ResetUserExecutionResponse() {}

  explicit ResetUserExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ResetUserExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ResetUserExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~ResetUserExecutionResponse() = default;
};
class SetFlowControlRequest : public Darabonba::Model {
public:
  shared_ptr<string> api{};
  shared_ptr<string> service{};
  shared_ptr<long> type{};
  shared_ptr<string> uid{};
  shared_ptr<long> value{};

  SetFlowControlRequest() {}

  explicit SetFlowControlRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (api) {
      res["Api"] = boost::any(*api);
    }
    if (service) {
      res["Service"] = boost::any(*service);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Api") != m.end() && !m["Api"].empty()) {
      api = make_shared<string>(boost::any_cast<string>(m["Api"]));
    }
    if (m.find("Service") != m.end() && !m["Service"].empty()) {
      service = make_shared<string>(boost::any_cast<string>(m["Service"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<long>(boost::any_cast<long>(m["Type"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<long>(boost::any_cast<long>(m["Value"]));
    }
  }


  virtual ~SetFlowControlRequest() = default;
};
class SetFlowControlResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  SetFlowControlResponseBody() {}

  explicit SetFlowControlResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~SetFlowControlResponseBody() = default;
};
class SetFlowControlResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetFlowControlResponseBody> body{};

  SetFlowControlResponse() {}

  explicit SetFlowControlResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetFlowControlResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetFlowControlResponseBody>(model1);
      }
    }
  }


  virtual ~SetFlowControlResponse() = default;
};
class SetQuotaRequest : public Darabonba::Model {
public:
  shared_ptr<string> quotaName{};
  shared_ptr<string> regionId{};
  shared_ptr<string> uid{};
  shared_ptr<string> value{};

  SetQuotaRequest() {}

  explicit SetQuotaRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quotaName) {
      res["QuotaName"] = boost::any(*quotaName);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("QuotaName") != m.end() && !m["QuotaName"].empty()) {
      quotaName = make_shared<string>(boost::any_cast<string>(m["QuotaName"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~SetQuotaRequest() = default;
};
class SetQuotaResponseBody : public Darabonba::Model {
public:
  shared_ptr<long> quota{};
  shared_ptr<string> requestId{};
  shared_ptr<string> uid{};

  SetQuotaResponseBody() {}

  explicit SetQuotaResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (quota) {
      res["Quota"] = boost::any(*quota);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (uid) {
      res["Uid"] = boost::any(*uid);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Quota") != m.end() && !m["Quota"].empty()) {
      quota = make_shared<long>(boost::any_cast<long>(m["Quota"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Uid") != m.end() && !m["Uid"].empty()) {
      uid = make_shared<string>(boost::any_cast<string>(m["Uid"]));
    }
  }


  virtual ~SetQuotaResponseBody() = default;
};
class SetQuotaResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<SetQuotaResponseBody> body{};

  SetQuotaResponse() {}

  explicit SetQuotaResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        SetQuotaResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<SetQuotaResponseBody>(model1);
      }
    }
  }


  virtual ~SetQuotaResponse() = default;
};
class TerminateUserExecutionRequest : public Darabonba::Model {
public:
  shared_ptr<string> aliUid{};
  shared_ptr<string> executionId{};
  shared_ptr<string> regionId{};

  TerminateUserExecutionRequest() {}

  explicit TerminateUserExecutionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (aliUid) {
      res["AliUid"] = boost::any(*aliUid);
    }
    if (executionId) {
      res["ExecutionId"] = boost::any(*executionId);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("AliUid") != m.end() && !m["AliUid"].empty()) {
      aliUid = make_shared<string>(boost::any_cast<string>(m["AliUid"]));
    }
    if (m.find("ExecutionId") != m.end() && !m["ExecutionId"].empty()) {
      executionId = make_shared<string>(boost::any_cast<string>(m["ExecutionId"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~TerminateUserExecutionRequest() = default;
};
class TerminateUserExecutionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};

  TerminateUserExecutionResponseBody() {}

  explicit TerminateUserExecutionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~TerminateUserExecutionResponseBody() = default;
};
class TerminateUserExecutionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<TerminateUserExecutionResponseBody> body{};

  TerminateUserExecutionResponse() {}

  explicit TerminateUserExecutionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        TerminateUserExecutionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<TerminateUserExecutionResponseBody>(model1);
      }
    }
  }


  virtual ~TerminateUserExecutionResponse() = default;
};
class UpdateActionRequest : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<string> actionType{};
  shared_ptr<string> content{};
  shared_ptr<long> popularity{};
  shared_ptr<string> regionId{};

  UpdateActionRequest() {}

  explicit UpdateActionRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdateActionRequest() = default;
};
class UpdateActionResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> actionName{};
  shared_ptr<string> actionType{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<long> popularity{};
  shared_ptr<string> properties{};
  shared_ptr<string> requestId{};
  shared_ptr<string> templateVersion{};

  UpdateActionResponseBody() {}

  explicit UpdateActionResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (actionName) {
      res["ActionName"] = boost::any(*actionName);
    }
    if (actionType) {
      res["ActionType"] = boost::any(*actionType);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ActionName") != m.end() && !m["ActionName"].empty()) {
      actionName = make_shared<string>(boost::any_cast<string>(m["ActionName"]));
    }
    if (m.find("ActionType") != m.end() && !m["ActionType"].empty()) {
      actionType = make_shared<string>(boost::any_cast<string>(m["ActionType"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
  }


  virtual ~UpdateActionResponseBody() = default;
};
class UpdateActionResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdateActionResponseBody> body{};

  UpdateActionResponse() {}

  explicit UpdateActionResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdateActionResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdateActionResponseBody>(model1);
      }
    }
  }


  virtual ~UpdateActionResponse() = default;
};
class UpdatePublicParameterRequest : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};
  shared_ptr<string> value{};

  UpdatePublicParameterRequest() {}

  explicit UpdatePublicParameterRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (value) {
      res["Value"] = boost::any(*value);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("Value") != m.end() && !m["Value"].empty()) {
      value = make_shared<string>(boost::any_cast<string>(m["Value"]));
    }
  }


  virtual ~UpdatePublicParameterRequest() = default;
};
class UpdatePublicParameterResponseBodyParameter : public Darabonba::Model {
public:
  shared_ptr<string> constraints{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<long> parameterVersion{};
  shared_ptr<string> regionId{};
  shared_ptr<string> shareType{};
  shared_ptr<string> type{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  UpdatePublicParameterResponseBodyParameter() {}

  explicit UpdatePublicParameterResponseBodyParameter(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (constraints) {
      res["Constraints"] = boost::any(*constraints);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (parameterVersion) {
      res["ParameterVersion"] = boost::any(*parameterVersion);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Constraints") != m.end() && !m["Constraints"].empty()) {
      constraints = make_shared<string>(boost::any_cast<string>(m["Constraints"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("ParameterVersion") != m.end() && !m["ParameterVersion"].empty()) {
      parameterVersion = make_shared<long>(boost::any_cast<long>(m["ParameterVersion"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~UpdatePublicParameterResponseBodyParameter() = default;
};
class UpdatePublicParameterResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdatePublicParameterResponseBodyParameter> parameter{};
  shared_ptr<string> requestId{};

  UpdatePublicParameterResponseBody() {}

  explicit UpdatePublicParameterResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (parameter) {
      res["Parameter"] = parameter ? boost::any(parameter->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Parameter") != m.end() && !m["Parameter"].empty()) {
      if (typeid(map<string, boost::any>) == m["Parameter"].type()) {
        UpdatePublicParameterResponseBodyParameter model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Parameter"]));
        parameter = make_shared<UpdatePublicParameterResponseBodyParameter>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePublicParameterResponseBody() = default;
};
class UpdatePublicParameterResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePublicParameterResponseBody> body{};

  UpdatePublicParameterResponse() {}

  explicit UpdatePublicParameterResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePublicParameterResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePublicParameterResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePublicParameterResponse() = default;
};
class UpdatePublicPatchBaselineRequest : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<string> clientToken{};
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> regionId{};

  UpdatePublicPatchBaselineRequest() {}

  explicit UpdatePublicPatchBaselineRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (clientToken) {
      res["ClientToken"] = boost::any(*clientToken);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalRules") != m.end() && !m["ApprovalRules"].empty()) {
      approvalRules = make_shared<string>(boost::any_cast<string>(m["ApprovalRules"]));
    }
    if (m.find("ClientToken") != m.end() && !m["ClientToken"].empty()) {
      clientToken = make_shared<string>(boost::any_cast<string>(m["ClientToken"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
  }


  virtual ~UpdatePublicPatchBaselineRequest() = default;
};
class UpdatePublicPatchBaselineResponseBodyPatchBaseline : public Darabonba::Model {
public:
  shared_ptr<string> approvalRules{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> id{};
  shared_ptr<string> name{};
  shared_ptr<string> operationSystem{};
  shared_ptr<string> shareType{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  UpdatePublicPatchBaselineResponseBodyPatchBaseline() {}

  explicit UpdatePublicPatchBaselineResponseBodyPatchBaseline(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (approvalRules) {
      res["ApprovalRules"] = boost::any(*approvalRules);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (id) {
      res["Id"] = boost::any(*id);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (operationSystem) {
      res["OperationSystem"] = boost::any(*operationSystem);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("ApprovalRules") != m.end() && !m["ApprovalRules"].empty()) {
      approvalRules = make_shared<string>(boost::any_cast<string>(m["ApprovalRules"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Id") != m.end() && !m["Id"].empty()) {
      id = make_shared<string>(boost::any_cast<string>(m["Id"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("OperationSystem") != m.end() && !m["OperationSystem"].empty()) {
      operationSystem = make_shared<string>(boost::any_cast<string>(m["OperationSystem"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~UpdatePublicPatchBaselineResponseBodyPatchBaseline() = default;
};
class UpdatePublicPatchBaselineResponseBody : public Darabonba::Model {
public:
  shared_ptr<UpdatePublicPatchBaselineResponseBodyPatchBaseline> patchBaseline{};
  shared_ptr<string> requestId{};

  UpdatePublicPatchBaselineResponseBody() {}

  explicit UpdatePublicPatchBaselineResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (patchBaseline) {
      res["PatchBaseline"] = patchBaseline ? boost::any(patchBaseline->toMap()) : boost::any(map<string,boost::any>({}));
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("PatchBaseline") != m.end() && !m["PatchBaseline"].empty()) {
      if (typeid(map<string, boost::any>) == m["PatchBaseline"].type()) {
        UpdatePublicPatchBaselineResponseBodyPatchBaseline model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["PatchBaseline"]));
        patchBaseline = make_shared<UpdatePublicPatchBaselineResponseBodyPatchBaseline>(model1);
      }
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
  }


  virtual ~UpdatePublicPatchBaselineResponseBody() = default;
};
class UpdatePublicPatchBaselineResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePublicPatchBaselineResponseBody> body{};

  UpdatePublicPatchBaselineResponse() {}

  explicit UpdatePublicPatchBaselineResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePublicPatchBaselineResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePublicPatchBaselineResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePublicPatchBaselineResponse() = default;
};
class UpdatePublicTemplateRequest : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> content{};
  shared_ptr<long> popularity{};
  shared_ptr<string> publisher{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> versionName{};

  UpdatePublicTemplateRequest() {}

  explicit UpdatePublicTemplateRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (publisher) {
      res["Publisher"] = boost::any(*publisher);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (versionName) {
      res["VersionName"] = boost::any(*versionName);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("Publisher") != m.end() && !m["Publisher"].empty()) {
      publisher = make_shared<string>(boost::any_cast<string>(m["Publisher"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("VersionName") != m.end() && !m["VersionName"].empty()) {
      versionName = make_shared<string>(boost::any_cast<string>(m["VersionName"]));
    }
  }


  virtual ~UpdatePublicTemplateRequest() = default;
};
class UpdatePublicTemplateResponseBodyTemplate : public Darabonba::Model {
public:
  shared_ptr<string> category{};
  shared_ptr<string> createdBy{};
  shared_ptr<string> createdDate{};
  shared_ptr<string> description{};
  shared_ptr<string> hash{};
  shared_ptr<long> popularity{};
  shared_ptr<string> shareType{};
  shared_ptr<string> templateFormat{};
  shared_ptr<string> templateId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> templateVersion{};
  shared_ptr<string> updatedBy{};
  shared_ptr<string> updatedDate{};

  UpdatePublicTemplateResponseBodyTemplate() {}

  explicit UpdatePublicTemplateResponseBodyTemplate(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (category) {
      res["Category"] = boost::any(*category);
    }
    if (createdBy) {
      res["CreatedBy"] = boost::any(*createdBy);
    }
    if (createdDate) {
      res["CreatedDate"] = boost::any(*createdDate);
    }
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (hash) {
      res["Hash"] = boost::any(*hash);
    }
    if (popularity) {
      res["Popularity"] = boost::any(*popularity);
    }
    if (shareType) {
      res["ShareType"] = boost::any(*shareType);
    }
    if (templateFormat) {
      res["TemplateFormat"] = boost::any(*templateFormat);
    }
    if (templateId) {
      res["TemplateId"] = boost::any(*templateId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (templateVersion) {
      res["TemplateVersion"] = boost::any(*templateVersion);
    }
    if (updatedBy) {
      res["UpdatedBy"] = boost::any(*updatedBy);
    }
    if (updatedDate) {
      res["UpdatedDate"] = boost::any(*updatedDate);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Category") != m.end() && !m["Category"].empty()) {
      category = make_shared<string>(boost::any_cast<string>(m["Category"]));
    }
    if (m.find("CreatedBy") != m.end() && !m["CreatedBy"].empty()) {
      createdBy = make_shared<string>(boost::any_cast<string>(m["CreatedBy"]));
    }
    if (m.find("CreatedDate") != m.end() && !m["CreatedDate"].empty()) {
      createdDate = make_shared<string>(boost::any_cast<string>(m["CreatedDate"]));
    }
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Hash") != m.end() && !m["Hash"].empty()) {
      hash = make_shared<string>(boost::any_cast<string>(m["Hash"]));
    }
    if (m.find("Popularity") != m.end() && !m["Popularity"].empty()) {
      popularity = make_shared<long>(boost::any_cast<long>(m["Popularity"]));
    }
    if (m.find("ShareType") != m.end() && !m["ShareType"].empty()) {
      shareType = make_shared<string>(boost::any_cast<string>(m["ShareType"]));
    }
    if (m.find("TemplateFormat") != m.end() && !m["TemplateFormat"].empty()) {
      templateFormat = make_shared<string>(boost::any_cast<string>(m["TemplateFormat"]));
    }
    if (m.find("TemplateId") != m.end() && !m["TemplateId"].empty()) {
      templateId = make_shared<string>(boost::any_cast<string>(m["TemplateId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("TemplateVersion") != m.end() && !m["TemplateVersion"].empty()) {
      templateVersion = make_shared<string>(boost::any_cast<string>(m["TemplateVersion"]));
    }
    if (m.find("UpdatedBy") != m.end() && !m["UpdatedBy"].empty()) {
      updatedBy = make_shared<string>(boost::any_cast<string>(m["UpdatedBy"]));
    }
    if (m.find("UpdatedDate") != m.end() && !m["UpdatedDate"].empty()) {
      updatedDate = make_shared<string>(boost::any_cast<string>(m["UpdatedDate"]));
    }
  }


  virtual ~UpdatePublicTemplateResponseBodyTemplate() = default;
};
class UpdatePublicTemplateResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> requestId{};
  shared_ptr<UpdatePublicTemplateResponseBodyTemplate> template_{};

  UpdatePublicTemplateResponseBody() {}

  explicit UpdatePublicTemplateResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (template_) {
      res["Template"] = template_ ? boost::any(template_->toMap()) : boost::any(map<string,boost::any>({}));
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Template") != m.end() && !m["Template"].empty()) {
      if (typeid(map<string, boost::any>) == m["Template"].type()) {
        UpdatePublicTemplateResponseBodyTemplate model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["Template"]));
        template_ = make_shared<UpdatePublicTemplateResponseBodyTemplate>(model1);
      }
    }
  }


  virtual ~UpdatePublicTemplateResponseBody() = default;
};
class UpdatePublicTemplateResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<UpdatePublicTemplateResponseBody> body{};

  UpdatePublicTemplateResponse() {}

  explicit UpdatePublicTemplateResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        UpdatePublicTemplateResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<UpdatePublicTemplateResponseBody>(model1);
      }
    }
  }


  virtual ~UpdatePublicTemplateResponse() = default;
};
class ValidatePublicTemplateContentRequest : public Darabonba::Model {
public:
  shared_ptr<string> content{};
  shared_ptr<string> regionId{};
  shared_ptr<string> templateName{};
  shared_ptr<string> type{};

  ValidatePublicTemplateContentRequest() {}

  explicit ValidatePublicTemplateContentRequest(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (content) {
      res["Content"] = boost::any(*content);
    }
    if (regionId) {
      res["RegionId"] = boost::any(*regionId);
    }
    if (templateName) {
      res["TemplateName"] = boost::any(*templateName);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Content") != m.end() && !m["Content"].empty()) {
      content = make_shared<string>(boost::any_cast<string>(m["Content"]));
    }
    if (m.find("RegionId") != m.end() && !m["RegionId"].empty()) {
      regionId = make_shared<string>(boost::any_cast<string>(m["RegionId"]));
    }
    if (m.find("TemplateName") != m.end() && !m["TemplateName"].empty()) {
      templateName = make_shared<string>(boost::any_cast<string>(m["TemplateName"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ValidatePublicTemplateContentRequest() = default;
};
class ValidatePublicTemplateContentResponseBodyTasks : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> name{};
  shared_ptr<string> outputs{};
  shared_ptr<string> properties{};
  shared_ptr<string> type{};

  ValidatePublicTemplateContentResponseBodyTasks() {}

  explicit ValidatePublicTemplateContentResponseBodyTasks(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (name) {
      res["Name"] = boost::any(*name);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (properties) {
      res["Properties"] = boost::any(*properties);
    }
    if (type) {
      res["Type"] = boost::any(*type);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Name") != m.end() && !m["Name"].empty()) {
      name = make_shared<string>(boost::any_cast<string>(m["Name"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Properties") != m.end() && !m["Properties"].empty()) {
      properties = make_shared<string>(boost::any_cast<string>(m["Properties"]));
    }
    if (m.find("Type") != m.end() && !m["Type"].empty()) {
      type = make_shared<string>(boost::any_cast<string>(m["Type"]));
    }
  }


  virtual ~ValidatePublicTemplateContentResponseBodyTasks() = default;
};
class ValidatePublicTemplateContentResponseBody : public Darabonba::Model {
public:
  shared_ptr<string> description{};
  shared_ptr<string> outputs{};
  shared_ptr<string> parameters{};
  shared_ptr<string> ramRole{};
  shared_ptr<string> requestId{};
  shared_ptr<vector<ValidatePublicTemplateContentResponseBodyTasks>> tasks{};

  ValidatePublicTemplateContentResponseBody() {}

  explicit ValidatePublicTemplateContentResponseBody(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
    fromMap(config);
  };

  void validate() override {}

  map<string, boost::any> toMap() override {
    map<string, boost::any> res;
    if (description) {
      res["Description"] = boost::any(*description);
    }
    if (outputs) {
      res["Outputs"] = boost::any(*outputs);
    }
    if (parameters) {
      res["Parameters"] = boost::any(*parameters);
    }
    if (ramRole) {
      res["RamRole"] = boost::any(*ramRole);
    }
    if (requestId) {
      res["RequestId"] = boost::any(*requestId);
    }
    if (tasks) {
      vector<boost::any> temp1;
      for(auto item1:*tasks){
        temp1.push_back(boost::any(item1.toMap()));
      }
      res["Tasks"] = boost::any(temp1);
    }
    return res;
  }

  void fromMap(map<string, boost::any> m) override {
    if (m.find("Description") != m.end() && !m["Description"].empty()) {
      description = make_shared<string>(boost::any_cast<string>(m["Description"]));
    }
    if (m.find("Outputs") != m.end() && !m["Outputs"].empty()) {
      outputs = make_shared<string>(boost::any_cast<string>(m["Outputs"]));
    }
    if (m.find("Parameters") != m.end() && !m["Parameters"].empty()) {
      parameters = make_shared<string>(boost::any_cast<string>(m["Parameters"]));
    }
    if (m.find("RamRole") != m.end() && !m["RamRole"].empty()) {
      ramRole = make_shared<string>(boost::any_cast<string>(m["RamRole"]));
    }
    if (m.find("RequestId") != m.end() && !m["RequestId"].empty()) {
      requestId = make_shared<string>(boost::any_cast<string>(m["RequestId"]));
    }
    if (m.find("Tasks") != m.end() && !m["Tasks"].empty()) {
      if (typeid(vector<boost::any>) == m["Tasks"].type()) {
        vector<ValidatePublicTemplateContentResponseBodyTasks> expect1;
        for(auto item1:boost::any_cast<vector<boost::any>>(m["Tasks"])){
          if (typeid(map<string, boost::any>) == item1.type()) {
            ValidatePublicTemplateContentResponseBodyTasks model2;
            model2.fromMap(boost::any_cast<map<string, boost::any>>(item1));
            expect1.push_back(model2);
          }
        }
        tasks = make_shared<vector<ValidatePublicTemplateContentResponseBodyTasks>>(expect1);
      }
    }
  }


  virtual ~ValidatePublicTemplateContentResponseBody() = default;
};
class ValidatePublicTemplateContentResponse : public Darabonba::Model {
public:
  shared_ptr<map<string, string>> headers{};
  shared_ptr<long> statusCode{};
  shared_ptr<ValidatePublicTemplateContentResponseBody> body{};

  ValidatePublicTemplateContentResponse() {}

  explicit ValidatePublicTemplateContentResponse(const std::map<string, boost::any> &config) : Darabonba::Model(config) {
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
        ValidatePublicTemplateContentResponseBody model1;
        model1.fromMap(boost::any_cast<map<string, boost::any>>(m["body"]));
        body = make_shared<ValidatePublicTemplateContentResponseBody>(model1);
      }
    }
  }


  virtual ~ValidatePublicTemplateContentResponse() = default;
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
  AuditPublicTemplateRegistrationResponse auditPublicTemplateRegistrationWithOptions(shared_ptr<AuditPublicTemplateRegistrationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  AuditPublicTemplateRegistrationResponse auditPublicTemplateRegistration(shared_ptr<AuditPublicTemplateRegistrationRequest> request);
  CreateActionResponse createActionWithOptions(shared_ptr<CreateActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreateActionResponse createAction(shared_ptr<CreateActionRequest> request);
  CreatePublicParameterResponse createPublicParameterWithOptions(shared_ptr<CreatePublicParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePublicParameterResponse createPublicParameter(shared_ptr<CreatePublicParameterRequest> request);
  CreatePublicPatchBaselineResponse createPublicPatchBaselineWithOptions(shared_ptr<CreatePublicPatchBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePublicPatchBaselineResponse createPublicPatchBaseline(shared_ptr<CreatePublicPatchBaselineRequest> request);
  CreatePublicTemplateResponse createPublicTemplateWithOptions(shared_ptr<CreatePublicTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  CreatePublicTemplateResponse createPublicTemplate(shared_ptr<CreatePublicTemplateRequest> request);
  DeleteFailureMsgResponse deleteFailureMsgWithOptions(shared_ptr<DeleteFailureMsgRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeleteFailureMsgResponse deleteFailureMsg(shared_ptr<DeleteFailureMsgRequest> request);
  DeletePublicParameterResponse deletePublicParameterWithOptions(shared_ptr<DeletePublicParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePublicParameterResponse deletePublicParameter(shared_ptr<DeletePublicParameterRequest> request);
  DeletePublicPatchBaselineResponse deletePublicPatchBaselineWithOptions(shared_ptr<DeletePublicPatchBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePublicPatchBaselineResponse deletePublicPatchBaseline(shared_ptr<DeletePublicPatchBaselineRequest> request);
  DeletePublicTemplateResponse deletePublicTemplateWithOptions(shared_ptr<DeletePublicTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DeletePublicTemplateResponse deletePublicTemplate(shared_ptr<DeletePublicTemplateRequest> request);
  DoCheckResourceResponse doCheckResourceWithOptions(shared_ptr<DoCheckResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  DoCheckResourceResponse doCheckResource(shared_ptr<DoCheckResourceRequest> request);
  GetActionResponse getActionWithOptions(shared_ptr<GetActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetActionResponse getAction(shared_ptr<GetActionRequest> request);
  GetFlowControlResponse getFlowControlWithOptions(shared_ptr<GetFlowControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetFlowControlResponse getFlowControl(shared_ptr<GetFlowControlRequest> request);
  GetPublicParameterResponse getPublicParameterWithOptions(shared_ptr<GetPublicParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublicParameterResponse getPublicParameter(shared_ptr<GetPublicParameterRequest> request);
  GetPublicPatchBaselineResponse getPublicPatchBaselineWithOptions(shared_ptr<GetPublicPatchBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublicPatchBaselineResponse getPublicPatchBaseline(shared_ptr<GetPublicPatchBaselineRequest> request);
  GetPublicTemplateResponse getPublicTemplateWithOptions(shared_ptr<GetPublicTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetPublicTemplateResponse getPublicTemplate(shared_ptr<GetPublicTemplateRequest> request);
  GetQuotaResponse getQuotaWithOptions(shared_ptr<GetQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetQuotaResponse getQuota(shared_ptr<GetQuotaRequest> request);
  GetUserExecutionTemplateResponse getUserExecutionTemplateWithOptions(shared_ptr<GetUserExecutionTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserExecutionTemplateResponse getUserExecutionTemplate(shared_ptr<GetUserExecutionTemplateRequest> request);
  GetUserTemplateResponse getUserTemplateWithOptions(shared_ptr<GetUserTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  GetUserTemplateResponse getUserTemplate(shared_ptr<GetUserTemplateRequest> request);
  ListActionsResponse listActionsWithOptions(shared_ptr<ListActionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListActionsResponse listActions(shared_ptr<ListActionsRequest> request);
  ListDefaultQuotaResponse listDefaultQuotaWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListDefaultQuotaResponse listDefaultQuota();
  ListFailureMsgsResponse listFailureMsgsWithOptions(shared_ptr<ListFailureMsgsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListFailureMsgsResponse listFailureMsgs(shared_ptr<ListFailureMsgsRequest> request);
  ListOOSLogsResponse listOOSLogsWithOptions(shared_ptr<ListOOSLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListOOSLogsResponse listOOSLogs(shared_ptr<ListOOSLogsRequest> request);
  ListPublicParametersResponse listPublicParametersWithOptions(shared_ptr<ListPublicParametersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicParametersResponse listPublicParameters(shared_ptr<ListPublicParametersRequest> request);
  ListPublicPatchBaselinesResponse listPublicPatchBaselinesWithOptions(shared_ptr<ListPublicPatchBaselinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicPatchBaselinesResponse listPublicPatchBaselines(shared_ptr<ListPublicPatchBaselinesRequest> request);
  ListPublicTemplateRegistrationsResponse listPublicTemplateRegistrationsWithOptions(shared_ptr<ListPublicTemplateRegistrationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicTemplateRegistrationsResponse listPublicTemplateRegistrations(shared_ptr<ListPublicTemplateRegistrationsRequest> request);
  ListPublicTemplatesResponse listPublicTemplatesWithOptions(shared_ptr<ListPublicTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListPublicTemplatesResponse listPublicTemplates(shared_ptr<ListPublicTemplatesRequest> request);
  ListUserExecutionLogsResponse listUserExecutionLogsWithOptions(shared_ptr<ListUserExecutionLogsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserExecutionLogsResponse listUserExecutionLogs(shared_ptr<ListUserExecutionLogsRequest> request);
  ListUserExecutionsResponse listUserExecutionsWithOptions(shared_ptr<ListUserExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserExecutionsResponse listUserExecutions(shared_ptr<ListUserExecutionsRequest> request);
  ListUserInstancePatchStatesResponse listUserInstancePatchStatesWithOptions(shared_ptr<ListUserInstancePatchStatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserInstancePatchStatesResponse listUserInstancePatchStates(shared_ptr<ListUserInstancePatchStatesRequest> request);
  ListUserInstancePatchesResponse listUserInstancePatchesWithOptions(shared_ptr<ListUserInstancePatchesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserInstancePatchesResponse listUserInstancePatches(shared_ptr<ListUserInstancePatchesRequest> request);
  ListUserInventoryEntriesResponse listUserInventoryEntriesWithOptions(shared_ptr<ListUserInventoryEntriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserInventoryEntriesResponse listUserInventoryEntries(shared_ptr<ListUserInventoryEntriesRequest> request);
  ListUserTaskExecutionsResponse listUserTaskExecutionsWithOptions(shared_ptr<ListUserTaskExecutionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserTaskExecutionsResponse listUserTaskExecutions(shared_ptr<ListUserTaskExecutionsRequest> request);
  ListUserTemplatesResponse listUserTemplatesWithOptions(shared_ptr<ListUserTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ListUserTemplatesResponse listUserTemplates(shared_ptr<ListUserTemplatesRequest> request);
  ResetTimerTriggerExecutionResponse resetTimerTriggerExecutionWithOptions(shared_ptr<ResetTimerTriggerExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetTimerTriggerExecutionResponse resetTimerTriggerExecution(shared_ptr<ResetTimerTriggerExecutionRequest> request);
  ResetUserExecutionResponse resetUserExecutionWithOptions(shared_ptr<ResetUserExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ResetUserExecutionResponse resetUserExecution(shared_ptr<ResetUserExecutionRequest> request);
  SetFlowControlResponse setFlowControlWithOptions(shared_ptr<SetFlowControlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetFlowControlResponse setFlowControl(shared_ptr<SetFlowControlRequest> request);
  SetQuotaResponse setQuotaWithOptions(shared_ptr<SetQuotaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  SetQuotaResponse setQuota(shared_ptr<SetQuotaRequest> request);
  TerminateUserExecutionResponse terminateUserExecutionWithOptions(shared_ptr<TerminateUserExecutionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  TerminateUserExecutionResponse terminateUserExecution(shared_ptr<TerminateUserExecutionRequest> request);
  UpdateActionResponse updateActionWithOptions(shared_ptr<UpdateActionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdateActionResponse updateAction(shared_ptr<UpdateActionRequest> request);
  UpdatePublicParameterResponse updatePublicParameterWithOptions(shared_ptr<UpdatePublicParameterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePublicParameterResponse updatePublicParameter(shared_ptr<UpdatePublicParameterRequest> request);
  UpdatePublicPatchBaselineResponse updatePublicPatchBaselineWithOptions(shared_ptr<UpdatePublicPatchBaselineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePublicPatchBaselineResponse updatePublicPatchBaseline(shared_ptr<UpdatePublicPatchBaselineRequest> request);
  UpdatePublicTemplateResponse updatePublicTemplateWithOptions(shared_ptr<UpdatePublicTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  UpdatePublicTemplateResponse updatePublicTemplate(shared_ptr<UpdatePublicTemplateRequest> request);
  ValidatePublicTemplateContentResponse validatePublicTemplateContentWithOptions(shared_ptr<ValidatePublicTemplateContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime);
  ValidatePublicTemplateContentResponse validatePublicTemplateContent(shared_ptr<ValidatePublicTemplateContentRequest> request);

  virtual ~Client() = default;
};
} // namespace Alibabacloud_Oosops20190601

#endif
